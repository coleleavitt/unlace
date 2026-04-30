//! Mach-O loader implementation using the `object` crate.
//!
//! Handles 32-bit and 64-bit Mach-O binaries as well as fat/universal binaries
//! (both 32-bit and 64-bit fat headers). For fat binaries the first architecture
//! slice is selected.

use std::collections::BTreeMap;

use object::macho;
use object::read::macho::{FatArch, MachHeader, MachOFatFile, MachOFile};
use object::{Object, ObjectSection, ObjectSymbol, ObjectSymbolTable};

use crate::error::LoadError;
use crate::image::{
    ArchId, BinaryImage, Endian, Section, SectionFlags, Symbol, SymbolKind,
};
use crate::Loader;

/// Mach-O single-arch magic values (native and swapped byte orders).
const MH_MAGIC_32_LE: [u8; 4] = macho::MH_MAGIC.to_le_bytes();
const MH_MAGIC_32_BE: [u8; 4] = macho::MH_MAGIC.to_be_bytes();
const MH_MAGIC_64_LE: [u8; 4] = macho::MH_MAGIC_64.to_le_bytes();
const MH_MAGIC_64_BE: [u8; 4] = macho::MH_MAGIC_64.to_be_bytes();

/// Fat/universal magic values (always big-endian on disk).
const FAT_MAGIC_32: [u8; 4] = macho::FAT_MAGIC.to_be_bytes();
const FAT_MAGIC_64: [u8; 4] = macho::FAT_MAGIC_64.to_be_bytes();

/// Loader for Mach-O binaries (32-bit, 64-bit, and fat/universal).
pub struct MachoLoader;

impl Loader for MachoLoader {
    fn can_load(data: &[u8]) -> bool {
        if data.len() < 4 {
            return false;
        }
        let magic: [u8; 4] = [data[0], data[1], data[2], data[3]];
        matches!(
            magic,
            MH_MAGIC_32_LE
                | MH_MAGIC_32_BE
                | MH_MAGIC_64_LE
                | MH_MAGIC_64_BE
                | FAT_MAGIC_32
                | FAT_MAGIC_64
        )
    }

    fn load(data: &[u8]) -> Result<BinaryImage, LoadError> {
        if !Self::can_load(data) {
            return Err(LoadError::InvalidMagic);
        }

        let magic: [u8; 4] = [data[0], data[1], data[2], data[3]];

        match magic {
            // Fat/universal — pick the first slice.
            FAT_MAGIC_32 => load_fat::<macho::FatArch32>(data),
            FAT_MAGIC_64 => load_fat::<macho::FatArch64>(data),
            // 64-bit single-arch (either endianness).
            MH_MAGIC_64_LE | MH_MAGIC_64_BE => {
                load_macho::<macho::MachHeader64<object::Endianness>>(data)
            }
            // 32-bit single-arch (either endianness).
            MH_MAGIC_32_LE | MH_MAGIC_32_BE => {
                load_macho::<macho::MachHeader32<object::Endianness>>(data)
            }
            _ => Err(LoadError::InvalidMagic),
        }
    }
}

/// Extract the first architecture slice from a fat/universal binary and load it.
fn load_fat<Fat>(data: &[u8]) -> Result<BinaryImage, LoadError>
where
    Fat: FatArch,
{
    let fat = MachOFatFile::<Fat>::parse(data)?;
    let arches = fat.arches();
    let first = arches.first().ok_or(LoadError::InvalidMagic)?;
    let slice = first.data(data)?;

    // Determine whether the slice is 32-bit or 64-bit from its own magic.
    if slice.len() < 4 {
        return Err(LoadError::InvalidMagic);
    }
    let inner_magic: [u8; 4] = [slice[0], slice[1], slice[2], slice[3]];
    match inner_magic {
        MH_MAGIC_64_LE | MH_MAGIC_64_BE => {
            load_macho::<macho::MachHeader64<object::Endianness>>(slice)
        }
        MH_MAGIC_32_LE | MH_MAGIC_32_BE => {
            load_macho::<macho::MachHeader32<object::Endianness>>(slice)
        }
        _ => Err(LoadError::InvalidMagic),
    }
}

/// Generic Mach-O loader over 32/64-bit headers.
fn load_macho<Mach>(data: &[u8]) -> Result<BinaryImage, LoadError>
where
    Mach: MachHeader<Endian = object::Endianness>,
{
    let file = MachOFile::<Mach>::parse(data)?;

    let arch = map_arch(&file)?;
    let endian = map_endian(&file);
    let entry = file.entry();
    let sections = load_sections(&file);
    let symbols = load_symbols(&file);

    Ok(BinaryImage {
        arch,
        endian,
        entry,
        sections,
        symbols,
        plt_symbols: BTreeMap::new(),
        relocations: Vec::new(),
        string_table: BTreeMap::new(),
    })
}

/// Map the Mach-O `cputype` value to our [`ArchId`].
fn map_arch<'data, Mach>(file: &MachOFile<'data, Mach>) -> Result<ArchId, LoadError>
where
    Mach: MachHeader<Endian = object::Endianness>,
{
    let header = file.macho_header();
    let endian = header.endian().map_err(LoadError::Parse)?;
    let cputype = header.cputype(endian);

    let arch = match cputype {
        macho::CPU_TYPE_X86_64 => ArchId::X86_64,
        macho::CPU_TYPE_X86 => ArchId::X86,
        macho::CPU_TYPE_ARM64 | macho::CPU_TYPE_ARM64_32 => ArchId::AArch64,
        macho::CPU_TYPE_ARM => ArchId::Arm,
        macho::CPU_TYPE_POWERPC => ArchId::Ppc,
        macho::CPU_TYPE_POWERPC64 => ArchId::Ppc64,
        macho::CPU_TYPE_MIPS => ArchId::Mips,
        _ => ArchId::Unknown(cputype as u16),
    };

    Ok(arch)
}

/// Map Mach-O endianness to our [`Endian`].
fn map_endian<'data, Mach>(file: &MachOFile<'data, Mach>) -> Endian
where
    Mach: MachHeader<Endian = object::Endianness>,
{
    if file.is_little_endian() {
        Endian::Little
    } else {
        Endian::Big
    }
}

/// Load all Mach-O sections into owned [`Section`] values.
fn load_sections<'data, Mach>(file: &MachOFile<'data, Mach>) -> Vec<Section>
where
    Mach: MachHeader<Endian = object::Endianness>,
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

/// Derive [`SectionFlags`] from a Mach-O section's flags.
///
/// Mach-O section headers carry attribute flags (e.g. `S_ATTR_PURE_INSTRUCTIONS`)
/// but not memory protection bits directly. We infer exec from the instruction
/// attributes, and conservatively mark all sections as readable. For write we
/// check whether the section lives in the `__DATA` or `__DATA_CONST` segment
/// by name convention, since that information is not in the section flags word.
fn section_flags<'data>(sec: &impl ObjectSection<'data>) -> SectionFlags {
    use object::SectionFlags as ObjFlags;

    match sec.flags() {
        ObjFlags::MachO { flags } => {
            // All mapped sections are readable.
            let mut f = SectionFlags::READ;

            // Executable if the section contains instructions.
            if flags & macho::S_ATTR_PURE_INSTRUCTIONS != 0
                || flags & macho::S_ATTR_SOME_INSTRUCTIONS != 0
            {
                f = f | SectionFlags::EXEC;
            }

            // Heuristic: sections whose name starts with `__DATA` segment
            // convention (e.g. `__data`, `__bss`) are writable.  The `object`
            // crate's `ObjectSection::name()` returns the *section* name
            // (e.g. `__text`), not the segment name.  Use `SectionKind` to
            // detect writable categories.
            let kind = sec.kind();
            if matches!(
                kind,
                object::SectionKind::Data
                    | object::SectionKind::UninitializedData
                    | object::SectionKind::Tls
                    | object::SectionKind::UninitializedTls
                    | object::SectionKind::Common
                    | object::SectionKind::ReadOnlyDataWithRel
            ) {
                f = f | SectionFlags::WRITE;
            }

            f
        }
        _ => SectionFlags::empty(),
    }
}

/// Load symbols from symtab and dysymtab, merged into one `BTreeMap`.
///
/// When two symbols occupy the same address the one with a non-empty name wins.
fn load_symbols<'data, Mach>(file: &MachOFile<'data, Mach>) -> BTreeMap<u64, Symbol>
where
    Mach: MachHeader<Endian = object::Endianness>,
{
    let mut out = BTreeMap::new();

    // Static symbol table (LC_SYMTAB).
    if let Some(table) = file.symbol_table() {
        collect_symbols(&mut out, table.symbols());
    }

    // Dynamic symbol table (LC_DYSYMTAB re-indexes into the same nlist array,
    // but the `object` crate exposes it as a separate table via `dynamic_symbol_table`).
    if let Some(table) = file.dynamic_symbol_table() {
        collect_symbols(&mut out, table.symbols());
    }

    out
}

/// Collect symbols from an iterator of `object::Symbol` into the map.
fn collect_symbols<'data>(
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

#[cfg(test)]
mod tests {
    use super::*;

    // -----------------------------------------------------------------------
    // Synthetic Mach-O builders
    // -----------------------------------------------------------------------

    /// Build a minimal valid Mach-O 64-bit little-endian binary in memory.
    ///
    /// Layout:
    ///   0x000 .. 0x020  mach_header_64  (32 bytes)
    ///   0x020 .. 0x068  LC_SEGMENT_64 for __TEXT with one __text section
    ///   0x068 .. 0x078  LC_SYMTAB (empty)
    ///   0x100 .. 0x101  section data (single RET byte)
    fn minimal_macho64() -> Vec<u8> {
        let mut buf = vec![0u8; 0x200];

        // ---- mach_header_64 (32 bytes) ----
        // magic
        buf[0..4].copy_from_slice(&macho::MH_MAGIC_64.to_le_bytes());
        // cputype: CPU_TYPE_X86_64
        buf[4..8].copy_from_slice(&(macho::CPU_TYPE_X86_64 as i32).to_le_bytes());
        // cpusubtype: CPU_SUBTYPE_ALL (3)
        buf[8..12].copy_from_slice(&3u32.to_le_bytes());
        // filetype: MH_EXECUTE (2)
        buf[12..16].copy_from_slice(&2u32.to_le_bytes());
        // ncmds: 2 (LC_SEGMENT_64 + LC_SYMTAB)
        buf[16..20].copy_from_slice(&2u32.to_le_bytes());
        // sizeofcmds: LC_SEGMENT_64 (72 + 80 section = 152 = 0x48 + 0x50 … nah, let's compute)
        // LC_SEGMENT_64 header = 72 bytes, each section_64 = 80 bytes, 1 section → 72+80=152
        // LC_SYMTAB = 24 bytes
        // total = 152 + 24 = 176 = 0xB0  …  but actually:
        // segment_command_64 = 72 bytes, section_64 = 80 bytes → 72 + 80 = 152 for segment
        // symtab_command = 24 bytes
        // total = 176 bytes (0xB0)
        //
        // But our header is 32 bytes, so commands start at 0x20 and end at 0x20 + 0xB0 = 0xD0.
        // We'll put section data at 0x100.
        let sizeofcmds: u32 = 152 + 24;
        buf[20..24].copy_from_slice(&sizeofcmds.to_le_bytes());
        // flags: 0
        buf[24..28].copy_from_slice(&0u32.to_le_bytes());
        // reserved (mach_header_64 pad): 0
        buf[28..32].copy_from_slice(&0u32.to_le_bytes());

        // ---- LC_SEGMENT_64 at offset 0x20 ----
        let seg = 0x20usize;
        // cmd = LC_SEGMENT_64 (0x19)
        buf[seg..seg + 4].copy_from_slice(&0x19u32.to_le_bytes());
        // cmdsize = 72 + 80 = 152
        buf[seg + 4..seg + 8].copy_from_slice(&152u32.to_le_bytes());
        // segname: "__TEXT\0..." (16 bytes)
        buf[seg + 8..seg + 14].copy_from_slice(b"__TEXT");
        // vmaddr
        buf[seg + 24..seg + 32].copy_from_slice(&0x1000u64.to_le_bytes());
        // vmsize
        buf[seg + 32..seg + 40].copy_from_slice(&0x1000u64.to_le_bytes());
        // fileoff
        buf[seg + 40..seg + 48].copy_from_slice(&0u64.to_le_bytes());
        // filesize
        buf[seg + 48..seg + 56].copy_from_slice(&0x200u64.to_le_bytes());
        // maxprot: VM_PROT_READ | VM_PROT_EXECUTE = 0x05
        buf[seg + 56..seg + 60].copy_from_slice(&0x05u32.to_le_bytes());
        // initprot: same
        buf[seg + 60..seg + 64].copy_from_slice(&0x05u32.to_le_bytes());
        // nsects: 1
        buf[seg + 64..seg + 68].copy_from_slice(&1u32.to_le_bytes());
        // flags: 0
        buf[seg + 68..seg + 72].copy_from_slice(&0u32.to_le_bytes());

        // ---- section_64 at seg + 72 = 0x68 ----
        let sec = seg + 72;
        // sectname: "__text\0..." (16 bytes)
        buf[sec..sec + 6].copy_from_slice(b"__text");
        // segname: "__TEXT\0..." (16 bytes)
        buf[sec + 16..sec + 22].copy_from_slice(b"__TEXT");
        // addr
        buf[sec + 32..sec + 40].copy_from_slice(&0x1100u64.to_le_bytes());
        // size: 1
        buf[sec + 40..sec + 48].copy_from_slice(&1u64.to_le_bytes());
        // offset (file offset of section data)
        buf[sec + 48..sec + 52].copy_from_slice(&0x100u32.to_le_bytes());
        // align: 0 (2^0 = 1)
        buf[sec + 52..sec + 56].copy_from_slice(&0u32.to_le_bytes());
        // reloff: 0
        buf[sec + 56..sec + 60].copy_from_slice(&0u32.to_le_bytes());
        // nreloc: 0
        buf[sec + 60..sec + 64].copy_from_slice(&0u32.to_le_bytes());
        // flags: S_ATTR_PURE_INSTRUCTIONS | S_REGULAR
        buf[sec + 64..sec + 68]
            .copy_from_slice(&macho::S_ATTR_PURE_INSTRUCTIONS.to_le_bytes());
        // reserved1, reserved2, reserved3 (12 bytes) — already zeroed.

        // ---- LC_SYMTAB at offset seg + 152 = 0x20 + 0x98 = 0xB8 ----
        let sym_cmd = seg + 152;
        // cmd = LC_SYMTAB (0x02)
        buf[sym_cmd..sym_cmd + 4].copy_from_slice(&0x02u32.to_le_bytes());
        // cmdsize = 24
        buf[sym_cmd + 4..sym_cmd + 8].copy_from_slice(&24u32.to_le_bytes());
        // symoff, nsyms, stroff, strsize — all 0 (empty symbol table).

        // ---- Section data at 0x100 ----
        buf[0x100] = 0xC3; // x86 RET

        buf
    }

    /// Build a minimal valid Mach-O 32-bit little-endian binary.
    ///
    /// Layout:
    ///   0x000 .. 0x01C  mach_header   (28 bytes)
    ///   0x01C .. 0x090  LC_SEGMENT + one section
    ///   0x090 .. 0x0A8  LC_SYMTAB
    ///   0x100 .. 0x101  section data
    fn minimal_macho32() -> Vec<u8> {
        let mut buf = vec![0u8; 0x200];

        // ---- mach_header (28 bytes) ----
        buf[0..4].copy_from_slice(&macho::MH_MAGIC.to_le_bytes());
        // cputype: CPU_TYPE_X86
        buf[4..8].copy_from_slice(&(macho::CPU_TYPE_X86 as i32).to_le_bytes());
        // cpusubtype
        buf[8..12].copy_from_slice(&3u32.to_le_bytes());
        // filetype: MH_EXECUTE
        buf[12..16].copy_from_slice(&2u32.to_le_bytes());
        // ncmds: 2
        buf[16..20].copy_from_slice(&2u32.to_le_bytes());
        // sizeofcmds: segment_command = 56, section = 68, symtab = 24 → 56+68+24 = 148
        let sizeofcmds: u32 = 56 + 68 + 24;
        buf[20..24].copy_from_slice(&sizeofcmds.to_le_bytes());
        // flags
        buf[24..28].copy_from_slice(&0u32.to_le_bytes());

        // ---- LC_SEGMENT at 0x1C ----
        let seg = 0x1Cusize;
        // cmd = LC_SEGMENT (0x01)
        buf[seg..seg + 4].copy_from_slice(&0x01u32.to_le_bytes());
        // cmdsize = 56 + 68 = 124
        buf[seg + 4..seg + 8].copy_from_slice(&124u32.to_le_bytes());
        // segname: "__TEXT"
        buf[seg + 8..seg + 14].copy_from_slice(b"__TEXT");
        // vmaddr (32-bit)
        buf[seg + 24..seg + 28].copy_from_slice(&0x1000u32.to_le_bytes());
        // vmsize
        buf[seg + 28..seg + 32].copy_from_slice(&0x1000u32.to_le_bytes());
        // fileoff
        buf[seg + 32..seg + 36].copy_from_slice(&0u32.to_le_bytes());
        // filesize
        buf[seg + 36..seg + 40].copy_from_slice(&0x200u32.to_le_bytes());
        // maxprot
        buf[seg + 40..seg + 44].copy_from_slice(&0x05u32.to_le_bytes());
        // initprot
        buf[seg + 44..seg + 48].copy_from_slice(&0x05u32.to_le_bytes());
        // nsects: 1
        buf[seg + 48..seg + 52].copy_from_slice(&1u32.to_le_bytes());
        // flags
        buf[seg + 52..seg + 56].copy_from_slice(&0u32.to_le_bytes());

        // ---- section at seg + 56 = 0x54 ----
        let sec = seg + 56;
        // sectname: "__text"
        buf[sec..sec + 6].copy_from_slice(b"__text");
        // segname: "__TEXT"
        buf[sec + 16..sec + 22].copy_from_slice(b"__TEXT");
        // addr (32-bit)
        buf[sec + 32..sec + 36].copy_from_slice(&0x1100u32.to_le_bytes());
        // size
        buf[sec + 36..sec + 40].copy_from_slice(&1u32.to_le_bytes());
        // offset
        buf[sec + 40..sec + 44].copy_from_slice(&0x100u32.to_le_bytes());
        // align
        buf[sec + 44..sec + 48].copy_from_slice(&0u32.to_le_bytes());
        // reloff
        buf[sec + 48..sec + 52].copy_from_slice(&0u32.to_le_bytes());
        // nreloc
        buf[sec + 52..sec + 56].copy_from_slice(&0u32.to_le_bytes());
        // flags: S_ATTR_PURE_INSTRUCTIONS
        buf[sec + 56..sec + 60]
            .copy_from_slice(&macho::S_ATTR_PURE_INSTRUCTIONS.to_le_bytes());
        // reserved1, reserved2 (8 bytes) — zeroed

        // ---- LC_SYMTAB at seg + 56 + 68 = 0x1C + 124 = 0x98 ----
        let sym_cmd = seg + 56 + 68;
        buf[sym_cmd..sym_cmd + 4].copy_from_slice(&0x02u32.to_le_bytes());
        buf[sym_cmd + 4..sym_cmd + 8].copy_from_slice(&24u32.to_le_bytes());

        // ---- Section data at 0x100 ----
        buf[0x100] = 0xC3;

        buf
    }

    /// Build a minimal fat/universal binary wrapping a single 64-bit x86_64 slice.
    ///
    /// Layout:
    ///   0x000 .. 0x008  fat_header (magic + nfat_arch)
    ///   0x008 .. 0x01C  fat_arch (cputype, cpusubtype, offset, size, align)
    ///   0x1000 ..       embedded Mach-O 64-bit
    fn minimal_fat32() -> Vec<u8> {
        let inner = minimal_macho64();
        let inner_len = inner.len();
        // Align the inner binary to page boundary (0x1000).
        let inner_offset: u32 = 0x1000;
        let total = inner_offset as usize + inner_len;
        let mut buf = vec![0u8; total];

        // ---- fat_header (8 bytes, big-endian) ----
        buf[0..4].copy_from_slice(&macho::FAT_MAGIC.to_be_bytes());
        // nfat_arch: 1
        buf[4..8].copy_from_slice(&1u32.to_be_bytes());

        // ---- fat_arch (20 bytes, big-endian) ----
        let fa = 8usize;
        // cputype: CPU_TYPE_X86_64
        buf[fa..fa + 4].copy_from_slice(&macho::CPU_TYPE_X86_64.to_be_bytes());
        // cpusubtype: 3
        buf[fa + 4..fa + 8].copy_from_slice(&3u32.to_be_bytes());
        // offset
        buf[fa + 8..fa + 12].copy_from_slice(&inner_offset.to_be_bytes());
        // size
        buf[fa + 12..fa + 16].copy_from_slice(&(inner_len as u32).to_be_bytes());
        // align: 12 (2^12 = 4096)
        buf[fa + 16..fa + 20].copy_from_slice(&12u32.to_be_bytes());

        // ---- Embedded Mach-O at inner_offset ----
        buf[inner_offset as usize..inner_offset as usize + inner_len]
            .copy_from_slice(&inner);

        buf
    }

    // -----------------------------------------------------------------------
    // Tests
    // -----------------------------------------------------------------------

    #[test]
    fn test_can_load_macho64() {
        let data = minimal_macho64();
        assert!(MachoLoader::can_load(&data));
    }

    #[test]
    fn test_can_load_macho32() {
        let data = minimal_macho32();
        assert!(MachoLoader::can_load(&data));
    }

    #[test]
    fn test_can_load_fat() {
        let data = minimal_fat32();
        assert!(MachoLoader::can_load(&data));
    }

    #[test]
    fn test_reject_non_macho() {
        assert!(!MachoLoader::can_load(b""));
        assert!(!MachoLoader::can_load(b"not a macho"));
        assert!(!MachoLoader::can_load(&[0u8; 1024]));
        assert!(!MachoLoader::can_load(b"\x7fELF")); // ELF magic
        assert!(!MachoLoader::can_load(b"MZ\x90\x00")); // PE magic

        let err = MachoLoader::load(b"not a macho").unwrap_err();
        assert!(matches!(err, LoadError::InvalidMagic));
    }

    #[test]
    fn test_load_macho64() {
        let data = minimal_macho64();
        let img = MachoLoader::load(&data).expect("should parse minimal Mach-O 64");

        assert_eq!(img.arch, ArchId::X86_64);
        assert_eq!(img.endian, Endian::Little);

        let text = img
            .section_by_name("__text")
            .expect("__text section must exist");
        assert!(
            text.flags.contains(SectionFlags::EXEC),
            "__text should be executable"
        );
        assert!(
            text.flags.contains(SectionFlags::READ),
            "__text should be readable"
        );
        assert!(!text.data.is_empty(), "__text should have data");
    }

    #[test]
    fn test_load_macho32() {
        let data = minimal_macho32();
        let img = MachoLoader::load(&data).expect("should parse minimal Mach-O 32");

        assert_eq!(img.arch, ArchId::X86);
        assert_eq!(img.endian, Endian::Little);

        let text = img
            .section_by_name("__text")
            .expect("__text section must exist");
        assert!(text.flags.contains(SectionFlags::EXEC));
        assert!(text.flags.contains(SectionFlags::READ));
    }

    #[test]
    fn test_load_fat_binary() {
        let data = minimal_fat32();
        let img = MachoLoader::load(&data).expect("should parse fat binary");

        // The fat binary wraps a single x86_64 slice.
        assert_eq!(img.arch, ArchId::X86_64);
        assert_eq!(img.endian, Endian::Little);

        let text = img
            .section_by_name("__text")
            .expect("__text section must exist in fat slice");
        assert!(text.flags.contains(SectionFlags::EXEC));
    }

    #[test]
    fn test_text_section_not_writable() {
        let data = minimal_macho64();
        let img = MachoLoader::load(&data).expect("should parse");

        let text = img
            .section_by_name("__text")
            .expect("__text section must exist");
        assert!(!text.flags.contains(SectionFlags::WRITE));
    }
}
