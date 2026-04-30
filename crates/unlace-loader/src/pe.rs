//! PE loader implementation using the `object` crate.
//!
//! Handles both PE32 (32-bit) and PE32+ (64-bit) Windows executables and DLLs.

use std::collections::BTreeMap;

use object::pe;
use object::read::pe::{ImageNtHeaders, ImageOptionalHeader, PeFile};
use object::{Object, ObjectSection, ObjectSymbol, ObjectSymbolTable};

use crate::error::LoadError;
use crate::image::{
    ArchId, BinaryImage, Endian, RelocKind, Relocation, Section, SectionFlags, Symbol, SymbolKind,
};
use crate::Loader;

/// DOS header magic bytes: `MZ`.
const PE_DOS_MAGIC: [u8; 2] = [b'M', b'Z'];

/// Loader for PE binaries (PE32 and PE32+).
pub struct PeLoader;

impl Loader for PeLoader {
    fn can_load(data: &[u8]) -> bool {
        if data.len() < 2 || data[..2] != PE_DOS_MAGIC {
            return false;
        }
        // Verify the PE signature is reachable: the e_lfanew field at offset
        // 0x3C gives the offset to the NT headers, which start with "PE\0\0".
        if data.len() < 0x40 {
            return false;
        }
        let nt_offset = u32::from_le_bytes([data[0x3C], data[0x3D], data[0x3E], data[0x3F]]);
        let nt_offset = nt_offset as usize;
        if data.len() < nt_offset + 4 {
            return false;
        }
        // PE signature: "PE\0\0" (0x00004550 little-endian).
        data[nt_offset..nt_offset + 4] == [b'P', b'E', 0, 0]
    }

    fn load(data: &[u8]) -> Result<BinaryImage, LoadError> {
        if !Self::can_load(data) {
            return Err(LoadError::InvalidMagic);
        }

        // Read the e_lfanew offset to find the NT headers.
        let nt_offset = u32::from_le_bytes([data[0x3C], data[0x3D], data[0x3E], data[0x3F]]);
        let nt_offset = nt_offset as usize;

        // Determine PE32 vs PE32+ from the optional header magic at nt_offset+24.
        if data.len() < nt_offset + 26 {
            return Err(LoadError::InvalidMagic);
        }
        let opt_magic = u16::from_le_bytes([data[nt_offset + 24], data[nt_offset + 25]]);

        match opt_magic {
            pe::IMAGE_NT_OPTIONAL_HDR64_MAGIC => load_pe::<pe::ImageNtHeaders64>(data),
            pe::IMAGE_NT_OPTIONAL_HDR32_MAGIC => load_pe::<pe::ImageNtHeaders32>(data),
            _ => Err(LoadError::InvalidMagic),
        }
    }
}

/// Generic PE loader over PE32/PE32+ NT headers.
fn load_pe<Pe>(data: &[u8]) -> Result<BinaryImage, LoadError>
where
    Pe: ImageNtHeaders,
{
    let file = PeFile::<Pe>::parse(data)?;

    let arch = map_arch(&file);
    let entry = file.entry();
    let sections = load_sections(&file);
    let mut symbols = load_coff_symbols(&file);

    load_exports(&file, &mut symbols);
    load_imports(&file, &mut symbols);
    load_delay_imports::<Pe>(&file, data, &mut symbols);

    let relocations = load_base_relocations(&file, data);
    let tls_callbacks = load_tls_callbacks::<Pe>(&file, data);

    Ok(BinaryImage {
        arch,
        endian: Endian::Little,
        entry,
        sections,
        symbols,
        plt_symbols: BTreeMap::new(),
        relocations,
        string_table: BTreeMap::new(),
        tls_callbacks,
    })
}

/// Walk `IMAGE_DIRECTORY_ENTRY_DELAY_IMPORT` and merge each delay-bound thunk
/// into `out` as `dll!function` (mirroring [`load_imports`]'s convention).
///
/// The delay-load mechanism defers DLL resolution until first call; the IAT
/// stays empty at load time and the runtime delay loader patches it on demand.
/// Like the eager IAT, we record names at addr=0 because the true VA depends
/// on runtime fixup. Ordinal-only imports use the literal `#<n>` form.
fn load_delay_imports<Pe>(file: &PeFile<Pe>, data: &[u8], out: &mut BTreeMap<u64, Symbol>)
where
    Pe: ImageNtHeaders,
{
    let table = match file.data_directories().delay_load_import_table(data, &file.section_table()) {
        Ok(Some(t)) => t,
        Ok(None) => return,
        Err(err) => {
            tracing::debug!(?err, "PE delay-load directory unreadable");
            return;
        }
    };

    let mut descriptors = match table.descriptors() {
        Ok(d) => d,
        Err(err) => {
            tracing::debug!(?err, "PE delay-load descriptors unreadable");
            return;
        }
    };

    while let Ok(Some(desc)) = descriptors.next() {
        let lib = match table.name(desc.dll_name_rva.get(object::endian::LittleEndian)) {
            Ok(name) => String::from_utf8_lossy(name).to_string(),
            Err(_) => continue,
        };

        let int_rva = desc.import_name_table_rva.get(object::endian::LittleEndian);
        let mut thunks = match table.thunks(int_rva) {
            Ok(t) => t,
            Err(_) => continue,
        };

        loop {
            let thunk = match thunks.next::<Pe>() {
                Ok(Some(t)) => t,
                Ok(None) | Err(_) => break,
            };
            let name = match table.import::<Pe>(thunk) {
                Ok(object::read::pe::Import::Name(_, n)) => String::from_utf8_lossy(n).to_string(),
                Ok(object::read::pe::Import::Ordinal(n)) => format!("#{n}"),
                Err(_) => continue,
            };
            if name.is_empty() {
                continue;
            }
            let qualified = format!("{lib}!{name}");
            out.entry(0).or_insert(Symbol {
                name: qualified,
                addr: 0,
                size: 0,
                kind: SymbolKind::Unknown,
            });
        }
    }
}

/// Read `IMAGE_DIRECTORY_ENTRY_TLS` and return the TLS callback VAs.
///
/// The TLS directory's `AddressOfCallBacks` field points to a null-terminated
/// array of absolute VA pointers (PE32: 4 bytes each, PE32+: 8 bytes). These
/// run before the entry point on thread create/destroy and are a popular
/// anti-debugging / packer-stub injection vector.
fn load_tls_callbacks<Pe>(file: &PeFile<Pe>, data: &[u8]) -> Vec<u64>
where
    Pe: ImageNtHeaders,
{
    let dir = match file.data_directories().get(pe::IMAGE_DIRECTORY_ENTRY_TLS) {
        Some(d) => d,
        None => return Vec::new(),
    };
    let dir_data = match dir.data(data, &file.section_table()) {
        Ok(d) => d,
        Err(err) => {
            tracing::debug!(?err, "PE TLS directory unreadable");
            return Vec::new();
        }
    };

    let image_base = file.nt_headers().optional_header().image_base();
    let is_pe64 = std::mem::size_of::<Pe::ImageOptionalHeader>() > 96;
    let callbacks_va = if is_pe64 {
        if dir_data.len() < 24 {
            return Vec::new();
        }
        u64::from_le_bytes(dir_data[24..32].try_into().unwrap_or([0; 8]))
    } else {
        if dir_data.len() < 16 {
            return Vec::new();
        }
        u64::from(u32::from_le_bytes(dir_data[12..16].try_into().unwrap_or([0; 4])))
    };

    if callbacks_va == 0 {
        return Vec::new();
    }

    let callbacks_rva = callbacks_va.saturating_sub(image_base);
    let section_with_cb = match find_section_for_rva(file, callbacks_rva) {
        Some(s) => s,
        None => return Vec::new(),
    };

    let mut out = Vec::new();
    let stride: usize = if is_pe64 { 8 } else { 4 };
    let section_offset = (callbacks_rva - section_with_cb.0) as usize;
    let section_data = &section_with_cb.1[section_offset..];
    for chunk in section_data.chunks_exact(stride) {
        let cb = if stride == 8 {
            u64::from_le_bytes(chunk.try_into().unwrap_or([0; 8]))
        } else {
            u64::from(u32::from_le_bytes(chunk.try_into().unwrap_or([0; 4])))
        };
        if cb == 0 {
            break;
        }
        out.push(cb);
        if out.len() >= 256 {
            break;
        }
    }
    out
}

fn find_section_for_rva<'data, Pe>(
    file: &PeFile<'data, Pe>,
    rva: u64,
) -> Option<(u64, &'data [u8])>
where
    Pe: ImageNtHeaders,
{
    for sec in file.sections() {
        let start = sec.address() - file.nt_headers().optional_header().image_base();
        let size = sec.size();
        if rva >= start && rva < start + size {
            let data = sec.data().ok()?;
            return Some((start, data));
        }
    }
    None
}

/// Parse the PE base relocation directory into resolved [`Relocation`] entries.
///
/// Each [`pe::IMAGE_BASE_RELOCATION`] block targets a 4 KiB page; entries are
/// `u16` packed as `(type << 12) | offset_within_page`. We resolve each entry
/// to an absolute virtual address via `image_base + page_rva + offset` and map
/// the PE relocation type to our [`RelocKind`] vocabulary. Empty/missing
/// directories return `Vec::new()` rather than erroring — many object files
/// (e.g. `IMAGE_FILE_RELOCS_STRIPPED`) legitimately omit the table.
fn load_base_relocations<Pe>(file: &PeFile<Pe>, data: &[u8]) -> Vec<Relocation>
where
    Pe: ImageNtHeaders,
{
    let image_base = file.nt_headers().optional_header().image_base();
    let section_table = file.section_table();
    let mut blocks = match file.data_directories().relocation_blocks(data, &section_table) {
        Ok(Some(iter)) => iter,
        Ok(None) => return Vec::new(),
        Err(err) => {
            tracing::debug!(?err, "PE base relocation directory unreadable");
            return Vec::new();
        }
    };

    let mut out = Vec::new();
    while let Some(block_result) = blocks.next().transpose() {
        let block = match block_result {
            Ok(b) => b,
            Err(err) => {
                tracing::debug!(?err, "PE base relocation block parse failed; truncating");
                break;
            }
        };
        for reloc in block {
            let kind = pe_reloc_kind(reloc.typ);
            if matches!(kind, RelocKind::Other) && reloc.typ == pe::IMAGE_REL_BASED_ABSOLUTE {
                continue;
            }
            out.push(Relocation {
                addr: image_base.wrapping_add(u64::from(reloc.virtual_address)),
                sym_name: String::new(),
                kind,
            });
        }
    }
    out
}

fn pe_reloc_kind(typ: u16) -> RelocKind {
    match typ {
        pe::IMAGE_REL_BASED_HIGHLOW
        | pe::IMAGE_REL_BASED_DIR64
        | pe::IMAGE_REL_BASED_HIGH
        | pe::IMAGE_REL_BASED_LOW
        | pe::IMAGE_REL_BASED_HIGHADJ => RelocKind::Relative,
        _ => RelocKind::Other,
    }
}

/// Map the PE `IMAGE_FILE_MACHINE_*` value to our [`ArchId`].
fn map_arch<'data, Pe>(file: &PeFile<'data, Pe>) -> ArchId
where
    Pe: ImageNtHeaders,
{
    let machine = file
        .nt_headers()
        .file_header()
        .machine
        .get(object::endian::LittleEndian);

    match machine {
        pe::IMAGE_FILE_MACHINE_AMD64 => ArchId::X86_64,
        pe::IMAGE_FILE_MACHINE_I386 => ArchId::X86,
        pe::IMAGE_FILE_MACHINE_ARM64 | pe::IMAGE_FILE_MACHINE_ARM64EC => ArchId::AArch64,
        pe::IMAGE_FILE_MACHINE_ARMNT | pe::IMAGE_FILE_MACHINE_ARM => ArchId::Arm,
        pe::IMAGE_FILE_MACHINE_RISCV64 => ArchId::RiscV64,
        pe::IMAGE_FILE_MACHINE_POWERPC | pe::IMAGE_FILE_MACHINE_POWERPCFP => ArchId::Ppc,
        pe::IMAGE_FILE_MACHINE_POWERPCBE => ArchId::Ppc,
        pe::IMAGE_FILE_MACHINE_R4000 | pe::IMAGE_FILE_MACHINE_WCEMIPSV2 => ArchId::Mips,
        _ => ArchId::Unknown(machine),
    }
}

/// Load all PE sections into owned [`Section`] values.
fn load_sections<'data, Pe>(file: &PeFile<'data, Pe>) -> Vec<Section>
where
    Pe: ImageNtHeaders,
{
    file.sections()
        .filter_map(|sec| {
            let name = sec.name().ok()?.to_string();
            if name.is_empty() {
                return None;
            }

            let vaddr = sec.address();
            let size = sec.size();
            let data = sec.data().ok().unwrap_or_default().to_vec();
            let flags = section_flags(&sec);

            Some(Section {
                name,
                vaddr,
                size,
                data,
                flags,
            })
        })
        .collect()
}

/// Derive [`SectionFlags`] from a PE section's characteristics.
fn section_flags<'data>(sec: &impl ObjectSection<'data>) -> SectionFlags {
    use object::SectionFlags as ObjFlags;

    match sec.flags() {
        ObjFlags::Coff { characteristics } => {
            let mut f = SectionFlags::empty();
            if characteristics & pe::IMAGE_SCN_MEM_READ != 0 {
                f = f | SectionFlags::READ;
            }
            if characteristics & pe::IMAGE_SCN_MEM_WRITE != 0 {
                f = f | SectionFlags::WRITE;
            }
            if characteristics & pe::IMAGE_SCN_MEM_EXECUTE != 0 {
                f = f | SectionFlags::EXEC;
            }
            f
        }
        _ => SectionFlags::empty(),
    }
}

/// Load symbols from the COFF symbol table (if present).
fn load_coff_symbols<'data, Pe>(file: &PeFile<'data, Pe>) -> BTreeMap<u64, Symbol>
where
    Pe: ImageNtHeaders,
{
    let mut out = BTreeMap::new();

    if let Some(table) = file.symbol_table() {
        collect_symbols(&mut out, table.symbols());
    }

    out
}

/// Collect symbols from an iterator of `object::Symbol` into the map.
fn collect_symbols<'data, 'file>(
    out: &mut BTreeMap<u64, Symbol>,
    symbols: impl Iterator<Item = impl ObjectSymbol<'data>>,
) {
    for sym in symbols {
        let addr = sym.address();
        let name = sym.name().unwrap_or_default().to_string();
        if addr == 0 && name.is_empty() {
            continue;
        }

        let kind = match sym.kind() {
            object::SymbolKind::Text => SymbolKind::Function,
            object::SymbolKind::Data => SymbolKind::Object,
            object::SymbolKind::Section => SymbolKind::Section,
            object::SymbolKind::File => SymbolKind::File,
            _ => SymbolKind::Unknown,
        };

        let new_sym = Symbol {
            name: name.clone(),
            addr,
            size: sym.size(),
            kind,
        };

        // Prefer the symbol with a non-empty name when addresses collide.
        out.entry(addr)
            .and_modify(|existing| {
                if existing.name.is_empty() && !new_sym.name.is_empty() {
                    *existing = new_sym.clone();
                }
            })
            .or_insert(new_sym);
    }
}

/// Populate symbols from the PE export directory.
///
/// Exports appear with their fully-resolved virtual addresses (image_base + RVA).
fn load_exports<'data, Pe>(file: &PeFile<'data, Pe>, out: &mut BTreeMap<u64, Symbol>)
where
    Pe: ImageNtHeaders,
{
    let exports = match file.exports() {
        Ok(e) => e,
        Err(_) => return,
    };

    for export in exports {
        let name = String::from_utf8_lossy(export.name()).to_string();
        if name.is_empty() {
            continue;
        }
        let addr = export.address();

        let new_sym = Symbol {
            name: name.clone(),
            addr,
            size: 0,
            kind: SymbolKind::Function,
        };

        out.entry(addr)
            .and_modify(|existing| {
                if existing.name.is_empty() && !new_sym.name.is_empty() {
                    *existing = new_sym.clone();
                }
            })
            .or_insert(new_sym);
    }
}

/// Populate symbols from the PE import directory (IAT).
///
/// Each import is recorded at address 0 (the true IAT slot address depends on
/// the loader at runtime), with the DLL-qualified name `dll!function`.
fn load_imports<'data, Pe>(file: &PeFile<'data, Pe>, out: &mut BTreeMap<u64, Symbol>)
where
    Pe: ImageNtHeaders,
{
    let imports = match file.imports() {
        Ok(i) => i,
        Err(_) => return,
    };

    for import in imports {
        let lib = String::from_utf8_lossy(import.library()).to_string();
        let name = String::from_utf8_lossy(import.name()).to_string();
        if name.is_empty() {
            continue;
        }

        let qualified = format!("{lib}!{name}");

        let new_sym = Symbol {
            name: qualified,
            addr: 0,
            size: 0,
            kind: SymbolKind::Unknown,
        };

        // Import symbols all map to address 0 (unresolved); we store them
        // to record their existence. Collisions at addr 0 keep the first
        // entry to avoid overwriting.
        out.entry(0)
            .and_modify(|_existing| {
                // Don't overwrite — first import at 0 wins.
            })
            .or_insert(new_sym);
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    /// Build a minimal valid PE32+ (64-bit) binary in memory.
    ///
    /// This produces the smallest valid PE that the `object` crate will accept:
    /// DOS header + NT headers + one `.text` section with a single `ret` (0xC3).
    fn minimal_pe64() -> Vec<u8> {
        let mut buf = vec![0u8; 512];

        // ---- DOS Header (64 bytes) ----
        // e_magic = "MZ"
        buf[0] = b'M';
        buf[1] = b'Z';
        // e_lfanew at offset 0x3C: point to NT headers at offset 0x80
        let nt_offset: u32 = 0x80;
        buf[0x3C..0x40].copy_from_slice(&nt_offset.to_le_bytes());

        // ---- NT Headers at 0x80 ----
        let nt = nt_offset as usize;
        // Signature: "PE\0\0"
        buf[nt] = b'P';
        buf[nt + 1] = b'E';
        buf[nt + 2] = 0;
        buf[nt + 3] = 0;

        // ---- COFF File Header (20 bytes) at nt+4 ----
        let fh = nt + 4;
        // Machine: IMAGE_FILE_MACHINE_AMD64
        buf[fh..fh + 2].copy_from_slice(&pe::IMAGE_FILE_MACHINE_AMD64.to_le_bytes());
        // NumberOfSections: 1
        buf[fh + 2..fh + 4].copy_from_slice(&1u16.to_le_bytes());
        // SizeOfOptionalHeader: 112 bytes for PE32+ (minimum)
        let opt_hdr_size: u16 = 112;
        buf[fh + 16..fh + 18].copy_from_slice(&opt_hdr_size.to_le_bytes());
        // Characteristics: IMAGE_FILE_EXECUTABLE_IMAGE | IMAGE_FILE_LARGE_ADDRESS_AWARE
        let characteristics: u16 = pe::IMAGE_FILE_EXECUTABLE_IMAGE | pe::IMAGE_FILE_LARGE_ADDRESS_AWARE;
        buf[fh + 18..fh + 20].copy_from_slice(&characteristics.to_le_bytes());

        // ---- Optional Header (PE32+, 112 bytes) at nt+24 ----
        let oh = nt + 24;
        // Magic: PE32+ (0x020B)
        buf[oh..oh + 2].copy_from_slice(&pe::IMAGE_NT_OPTIONAL_HDR64_MAGIC.to_le_bytes());
        // AddressOfEntryPoint at oh+16 (relative to ImageBase)
        let entry_rva: u32 = 0x1000;
        buf[oh + 16..oh + 20].copy_from_slice(&entry_rva.to_le_bytes());
        // ImageBase at oh+24 (8 bytes for PE32+)
        let image_base: u64 = 0x0040_0000;
        buf[oh + 24..oh + 32].copy_from_slice(&image_base.to_le_bytes());
        // SectionAlignment at oh+32
        buf[oh + 32..oh + 36].copy_from_slice(&0x1000u32.to_le_bytes());
        // FileAlignment at oh+36
        buf[oh + 36..oh + 40].copy_from_slice(&0x200u32.to_le_bytes());
        // SizeOfImage at oh+56
        buf[oh + 56..oh + 60].copy_from_slice(&0x3000u32.to_le_bytes());
        // SizeOfHeaders at oh+60
        buf[oh + 60..oh + 64].copy_from_slice(&0x200u32.to_le_bytes());
        // NumberOfRvaAndSizes at oh+108
        buf[oh + 108..oh + 112].copy_from_slice(&0u32.to_le_bytes());

        // ---- Section Header (.text) at nt+24+112 = nt+136 ----
        let sh = oh + opt_hdr_size as usize;
        // Name: ".text\0\0\0"
        buf[sh..sh + 5].copy_from_slice(b".text");
        // VirtualSize at sh+8
        buf[sh + 8..sh + 12].copy_from_slice(&1u32.to_le_bytes());
        // VirtualAddress at sh+12 (RVA)
        buf[sh + 12..sh + 16].copy_from_slice(&0x1000u32.to_le_bytes());
        // SizeOfRawData at sh+16
        buf[sh + 16..sh + 20].copy_from_slice(&0x200u32.to_le_bytes());
        // PointerToRawData at sh+20 — section data starts at file offset 0x200
        buf[sh + 20..sh + 24].copy_from_slice(&0x200u32.to_le_bytes());
        // Characteristics at sh+36: MEM_READ | MEM_EXECUTE | CNT_CODE
        let sec_flags: u32 = pe::IMAGE_SCN_MEM_READ
            | pe::IMAGE_SCN_MEM_EXECUTE
            | pe::IMAGE_SCN_CNT_CODE;
        buf[sh + 36..sh + 40].copy_from_slice(&sec_flags.to_le_bytes());

        // ---- Section data at 0x200 ----
        // Ensure buffer is large enough.
        if buf.len() < 0x200 + 1 {
            buf.resize(0x200 + 0x200, 0);
        }
        buf[0x200] = 0xC3; // x86 RET instruction

        buf
    }

    #[test]
    fn test_can_load_minimal_pe() {
        let pe = minimal_pe64();
        assert!(PeLoader::can_load(&pe));
    }

    #[test]
    fn test_load_minimal_pe64() {
        let pe = minimal_pe64();
        let img = PeLoader::load(&pe).expect("should parse minimal PE64");

        assert_eq!(img.arch, ArchId::X86_64);
        assert_eq!(img.endian, Endian::Little);

        // Entry = ImageBase (0x400000) + RVA (0x1000)
        assert_eq!(img.entry, 0x0040_1000);

        // Should have the .text section.
        let text = img
            .section_by_name(".text")
            .expect(".text section must exist");
        assert!(
            text.flags.contains(SectionFlags::EXEC),
            ".text should be executable"
        );
        assert!(
            text.flags.contains(SectionFlags::READ),
            ".text should be readable"
        );
        assert!(!text.flags.contains(SectionFlags::WRITE), ".text should not be writable");
    }

    #[test]
    fn test_reject_non_pe() {
        assert!(!PeLoader::can_load(b""));
        assert!(!PeLoader::can_load(b"not a PE"));
        assert!(!PeLoader::can_load(&[0u8; 1024]));
        assert!(!PeLoader::can_load(b"\x7fELF")); // ELF magic

        // MZ alone without valid PE signature should be rejected.
        let mut mz_only = vec![0u8; 256];
        mz_only[0] = b'M';
        mz_only[1] = b'Z';
        // e_lfanew points to 0x80 but no PE signature there.
        mz_only[0x3C] = 0x80;
        assert!(!PeLoader::can_load(&mz_only));

        // Attempting to load non-PE data should error.
        let err = PeLoader::load(b"not a PE").unwrap_err();
        assert!(matches!(err, LoadError::InvalidMagic));
    }

    #[test]
    fn test_pe_text_section_flags() {
        let pe = minimal_pe64();
        let img = PeLoader::load(&pe).expect("should parse");

        let text = img
            .section_by_name(".text")
            .expect(".text section must exist");

        // .text: readable + executable, not writable.
        assert!(text.flags.contains(SectionFlags::READ));
        assert!(text.flags.contains(SectionFlags::EXEC));
        assert!(!text.flags.contains(SectionFlags::WRITE));
    }

    #[test]
    fn test_pe_entry_is_absolute_va() {
        let pe = minimal_pe64();
        let img = PeLoader::load(&pe).expect("should parse");

        // The `object` crate returns entry as an absolute VA (ImageBase + RVA).
        assert!(
            img.entry >= 0x0040_0000,
            "entry VA should include the image base"
        );
    }

    /// Build a minimal PE32 (32-bit) binary.
    fn minimal_pe32() -> Vec<u8> {
        let mut buf = vec![0u8; 512];

        // DOS Header
        buf[0] = b'M';
        buf[1] = b'Z';
        let nt_offset: u32 = 0x80;
        buf[0x3C..0x40].copy_from_slice(&nt_offset.to_le_bytes());

        let nt = nt_offset as usize;
        // PE signature
        buf[nt..nt + 4].copy_from_slice(&[b'P', b'E', 0, 0]);

        // COFF File Header
        let fh = nt + 4;
        buf[fh..fh + 2].copy_from_slice(&pe::IMAGE_FILE_MACHINE_I386.to_le_bytes());
        buf[fh + 2..fh + 4].copy_from_slice(&1u16.to_le_bytes()); // 1 section
        let opt_hdr_size: u16 = 96; // PE32 optional header size (minimum)
        buf[fh + 16..fh + 18].copy_from_slice(&opt_hdr_size.to_le_bytes());
        let characteristics: u16 = pe::IMAGE_FILE_EXECUTABLE_IMAGE;
        buf[fh + 18..fh + 20].copy_from_slice(&characteristics.to_le_bytes());

        // Optional Header (PE32)
        let oh = nt + 24;
        // Magic: PE32 (0x010B)
        buf[oh..oh + 2].copy_from_slice(&pe::IMAGE_NT_OPTIONAL_HDR32_MAGIC.to_le_bytes());
        // AddressOfEntryPoint at oh+16
        buf[oh + 16..oh + 20].copy_from_slice(&0x1000u32.to_le_bytes());
        // ImageBase at oh+28 (4 bytes for PE32)
        buf[oh + 28..oh + 32].copy_from_slice(&0x0040_0000u32.to_le_bytes());
        // SectionAlignment at oh+32
        buf[oh + 32..oh + 36].copy_from_slice(&0x1000u32.to_le_bytes());
        // FileAlignment at oh+36
        buf[oh + 36..oh + 40].copy_from_slice(&0x200u32.to_le_bytes());
        // SizeOfImage at oh+56
        buf[oh + 56..oh + 60].copy_from_slice(&0x3000u32.to_le_bytes());
        // SizeOfHeaders at oh+60
        buf[oh + 60..oh + 64].copy_from_slice(&0x200u32.to_le_bytes());
        // NumberOfRvaAndSizes at oh+92
        buf[oh + 92..oh + 96].copy_from_slice(&0u32.to_le_bytes());

        // Section Header (.text)
        let sh = oh + opt_hdr_size as usize;
        buf[sh..sh + 5].copy_from_slice(b".text");
        buf[sh + 8..sh + 12].copy_from_slice(&1u32.to_le_bytes()); // VirtualSize
        buf[sh + 12..sh + 16].copy_from_slice(&0x1000u32.to_le_bytes()); // VirtualAddress
        buf[sh + 16..sh + 20].copy_from_slice(&0x200u32.to_le_bytes()); // SizeOfRawData
        buf[sh + 20..sh + 24].copy_from_slice(&0x200u32.to_le_bytes()); // PointerToRawData
        let sec_flags: u32 = pe::IMAGE_SCN_MEM_READ
            | pe::IMAGE_SCN_MEM_EXECUTE
            | pe::IMAGE_SCN_CNT_CODE;
        buf[sh + 36..sh + 40].copy_from_slice(&sec_flags.to_le_bytes());

        // Section data at 0x200
        if buf.len() < 0x400 {
            buf.resize(0x400, 0);
        }
        buf[0x200] = 0xC3; // RET

        buf
    }

    #[test]
    fn test_load_pe32() {
        let pe = minimal_pe32();
        assert!(PeLoader::can_load(&pe));

        let img = PeLoader::load(&pe).expect("should parse minimal PE32");
        assert_eq!(img.arch, ArchId::X86);
        assert_eq!(img.endian, Endian::Little);
        assert_eq!(img.entry, 0x0040_1000);

        let text = img
            .section_by_name(".text")
            .expect(".text section must exist");
        assert!(text.flags.contains(SectionFlags::EXEC));
        assert!(text.flags.contains(SectionFlags::READ));
    }

    #[test]
    fn test_pe_sections_have_data() {
        let pe = minimal_pe64();
        let img = PeLoader::load(&pe).expect("should parse");

        let text = img
            .section_by_name(".text")
            .expect(".text section must exist");
        assert!(
            !text.data.is_empty(),
            ".text should have data"
        );
    }

    #[test]
    fn test_pe_no_reloc_directory_returns_empty() {
        let pe = minimal_pe64();
        let img = PeLoader::load(&pe).expect("should parse");
        assert!(
            img.relocations.is_empty(),
            "PE without IMAGE_DIRECTORY_ENTRY_BASERELOC should have no relocations"
        );
    }

    /// Build a PE32+ binary with a `.reloc` section containing one block of
    /// three relocations: one `DIR64`, one `HIGHLOW`, and one `ABSOLUTE` (padding).
    fn pe64_with_reloc() -> Vec<u8> {
        let nt: usize = 0x80;
        let opt_hdr_size: u16 = 16 * 8 + 112;
        let oh = nt + 24;
        let sh = oh + opt_hdr_size as usize;
        let section_count: u16 = 2;
        let section_table_end = sh + (section_count as usize) * 40;
        let text_offset: u32 = 0x400;
        let reloc_offset: u32 = 0x600;
        let reloc_size: u32 = 0x200;
        let total_size: u32 = reloc_offset + reloc_size;
        let mut buf = vec![0u8; total_size as usize];

        buf[0] = b'M';
        buf[1] = b'Z';
        buf[0x3C..0x40].copy_from_slice(&(nt as u32).to_le_bytes());

        buf[nt..nt + 4].copy_from_slice(&[b'P', b'E', 0, 0]);

        let fh = nt + 4;
        buf[fh..fh + 2].copy_from_slice(&pe::IMAGE_FILE_MACHINE_AMD64.to_le_bytes());
        buf[fh + 2..fh + 4].copy_from_slice(&section_count.to_le_bytes());
        buf[fh + 16..fh + 18].copy_from_slice(&opt_hdr_size.to_le_bytes());
        buf[fh + 18..fh + 20].copy_from_slice(&pe::IMAGE_FILE_EXECUTABLE_IMAGE.to_le_bytes());

        buf[oh..oh + 2].copy_from_slice(&pe::IMAGE_NT_OPTIONAL_HDR64_MAGIC.to_le_bytes());
        buf[oh + 16..oh + 20].copy_from_slice(&0x1000u32.to_le_bytes());
        let image_base: u64 = 0x0040_0000;
        buf[oh + 24..oh + 32].copy_from_slice(&image_base.to_le_bytes());
        buf[oh + 32..oh + 36].copy_from_slice(&0x1000u32.to_le_bytes());
        buf[oh + 36..oh + 40].copy_from_slice(&0x200u32.to_le_bytes());
        buf[oh + 56..oh + 60].copy_from_slice(&0x4000u32.to_le_bytes());
        buf[oh + 60..oh + 64].copy_from_slice(&(section_table_end as u32).to_le_bytes());
        let dir_count: u32 = 16;
        buf[oh + 108..oh + 112].copy_from_slice(&dir_count.to_le_bytes());

        let basereloc_dir = oh + 112 + (pe::IMAGE_DIRECTORY_ENTRY_BASERELOC as usize) * 8;
        let reloc_rva: u32 = 0x3000;
        buf[basereloc_dir..basereloc_dir + 4].copy_from_slice(&reloc_rva.to_le_bytes());
        let reloc_block_size: u32 = 8 + 3 * 2 + 2;
        buf[basereloc_dir + 4..basereloc_dir + 8].copy_from_slice(&reloc_block_size.to_le_bytes());

        buf[sh..sh + 5].copy_from_slice(b".text");
        buf[sh + 8..sh + 12].copy_from_slice(&0x200u32.to_le_bytes());
        buf[sh + 12..sh + 16].copy_from_slice(&0x1000u32.to_le_bytes());
        buf[sh + 16..sh + 20].copy_from_slice(&0x200u32.to_le_bytes());
        buf[sh + 20..sh + 24].copy_from_slice(&text_offset.to_le_bytes());
        buf[sh + 36..sh + 40].copy_from_slice(
            &(pe::IMAGE_SCN_MEM_READ | pe::IMAGE_SCN_MEM_EXECUTE | pe::IMAGE_SCN_CNT_CODE)
                .to_le_bytes(),
        );

        let sh2 = sh + 40;
        buf[sh2..sh2 + 6].copy_from_slice(b".reloc");
        buf[sh2 + 8..sh2 + 12].copy_from_slice(&reloc_size.to_le_bytes());
        buf[sh2 + 12..sh2 + 16].copy_from_slice(&reloc_rva.to_le_bytes());
        buf[sh2 + 16..sh2 + 20].copy_from_slice(&reloc_size.to_le_bytes());
        buf[sh2 + 20..sh2 + 24].copy_from_slice(&reloc_offset.to_le_bytes());
        buf[sh2 + 36..sh2 + 40].copy_from_slice(
            &(pe::IMAGE_SCN_MEM_READ | pe::IMAGE_SCN_MEM_DISCARDABLE | pe::IMAGE_SCN_CNT_INITIALIZED_DATA)
                .to_le_bytes(),
        );

        buf[text_offset as usize] = 0xC3;

        let r = reloc_offset as usize;
        buf[r..r + 4].copy_from_slice(&reloc_rva.to_le_bytes());
        buf[r + 4..r + 8].copy_from_slice(&reloc_block_size.to_le_bytes());

        let entry_dir64: u16 = (u16::from(pe::IMAGE_REL_BASED_DIR64) << 12) | 0x100;
        let entry_highlow: u16 = (u16::from(pe::IMAGE_REL_BASED_HIGHLOW) << 12) | 0x200;
        let entry_padding: u16 = u16::from(pe::IMAGE_REL_BASED_ABSOLUTE) << 12;
        buf[r + 8..r + 10].copy_from_slice(&entry_dir64.to_le_bytes());
        buf[r + 10..r + 12].copy_from_slice(&entry_highlow.to_le_bytes());
        buf[r + 12..r + 14].copy_from_slice(&entry_padding.to_le_bytes());

        buf
    }

    #[test]
    fn test_pe_reloc_block_parsed() {
        let pe = pe64_with_reloc();
        let img = PeLoader::load(&pe).expect("PE with .reloc must parse");

        assert_eq!(
            img.relocations.len(),
            2,
            "two real relocations (ABSOLUTE padding excluded)"
        );

        let image_base: u64 = 0x0040_0000;
        let page_rva: u64 = 0x3000;
        let dir64 = &img.relocations[0];
        assert_eq!(dir64.addr, image_base + page_rva + 0x100);
        assert_eq!(dir64.kind, RelocKind::Relative);
        assert!(dir64.sym_name.is_empty());

        let highlow = &img.relocations[1];
        assert_eq!(highlow.addr, image_base + page_rva + 0x200);
        assert_eq!(highlow.kind, RelocKind::Relative);
    }
}
