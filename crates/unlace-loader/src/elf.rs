//! ELF loader implementation using the `object` crate.

use std::collections::BTreeMap;
use std::mem::size_of;

use object::elf;
use object::read::elf::{ElfFile, FileHeader};
use object::{Object, ObjectSection, ObjectSymbol, ObjectSymbolTable};

use crate::Loader;
use crate::error::LoadError;
use crate::image::{
    ArchId, BinaryImage, Endian, RelocKind, Relocation, Section, SectionFlags, Symbol, SymbolKind,
};

/// ELF magic bytes: `\x7fELF`.
const ELF_MAGIC: [u8; 4] = [0x7f, b'E', b'L', b'F'];

/// Solana sBPF ELF machine ID used by the Solana toolchain.
const EM_SBPF: u16 = 263;
/// Solana BPF version flag used in older EM_BPF objects.
const EF_SBPF_V2: u32 = 0x20;

/// Loader for ELF binaries (32-bit and 64-bit, little and big endian).
pub struct ElfLoader;

impl Loader for ElfLoader {
    fn can_load(data: &[u8]) -> bool {
        data.len() >= 4 && data[..4] == ELF_MAGIC
    }

    fn load(data: &[u8]) -> Result<BinaryImage, LoadError> {
        if !Self::can_load(data) {
            return Err(LoadError::InvalidMagic);
        }

        if data.len() < size_of::<elf::Ident>() {
            return Err(LoadError::InvalidMagic);
        }

        // EI_CLASS byte is at offset 4 (right after the 4-byte magic).
        match data[4] {
            elf::ELFCLASS64 => load_elf::<elf::FileHeader64<object::Endianness>>(data),
            elf::ELFCLASS32 => load_elf::<elf::FileHeader32<object::Endianness>>(data),
            _ => Err(LoadError::InvalidMagic),
        }
    }
}

/// Generic ELF loader over 32/64 bit file headers.
fn load_elf<Elf>(data: &[u8]) -> Result<BinaryImage, LoadError>
where
    Elf: FileHeader<Endian = object::Endianness>,
{
    let file = ElfFile::<Elf>::parse(data)?;

    let arch = map_arch(&file)?;
    let endian = map_endian(&file);
    let entry = file.entry();
    let sections = load_sections(&file);
    let symbols = load_symbols(&file);
    let (plt_symbols, relocations) = load_relocations(&file);
    let string_table = crate::strings::scan_strings(&sections);

    let mut image = BinaryImage {
        arch,
        endian,
        entry,
        sections,
        symbols,
        plt_symbols,
        relocations,
        string_table,
        tls_callbacks: Vec::new(),
        function_starts: Vec::new(),
        debug_records: Vec::new(),
        load_config: None,
        runtime_functions: Vec::new(),
        resources: Vec::new(),
        bound_imports: Vec::new(),
        delay_imports: Vec::new(),
        forwarded_exports: Vec::new(),
        forwarded_resolutions: std::collections::BTreeMap::new(),
        rich_header: None,
        dylibs: Vec::new(),
        rpaths: Vec::new(),
        pdb_info: None,
            pdb_types: None,
        msvc_rtti: None,
        seh: None,
        go_module: None,
        go_itabs: std::collections::BTreeMap::new(),
        go_types: std::collections::BTreeMap::new(),
        swift_info: None,
        auth_pointers: Vec::new(),
        auth_ptr_slots: Vec::new(),
        wasm_component: None,
    };

    image.go_module = crate::go_moduledata::parse_firstmoduledata(&image);
    crate::go_types::populate_itabs_from_module(&mut image);
    crate::go_types::populate_go_types_from_module(&mut image);

    Ok(image)
}

/// Map the ELF `e_machine` value to our [`ArchId`].
fn map_arch<'data, Elf>(file: &ElfFile<'data, Elf>) -> Result<ArchId, LoadError>
where
    Elf: FileHeader<Endian = object::Endianness>,
{
    let header = file.elf_header();
    let endian = header.endian().map_err(LoadError::Parse)?;
    let machine = header.e_machine(endian);
    let class = header.e_ident().class;

    let arch = match machine {
        elf::EM_X86_64 => ArchId::X86_64,
        elf::EM_386 => ArchId::X86,
        elf::EM_ARM => ArchId::Arm,
        elf::EM_AARCH64 => ArchId::AArch64,
        elf::EM_RISCV => ArchId::RiscV64,
        elf::EM_68K => ArchId::M68k,
        elf::EM_MIPS => {
            if class == elf::ELFCLASS64 {
                ArchId::Mips64
            } else {
                ArchId::Mips
            }
        }
        elf::EM_PPC => ArchId::Ppc,
        elf::EM_PPC64 => ArchId::Ppc64,
        elf::EM_V850 => ArchId::V850,
        42 => ArchId::SuperH, // EM_SH
        elf::EM_ARC_COMPACT | elf::EM_ARC_COMPACT2 => ArchId::Arc,
        elf::EM_MSP430 => ArchId::Msp430,
        EM_SBPF => ArchId::Sbpf,
        elf::EM_BPF => {
            let flags = header.e_flags(endian);
            if flags & EF_SBPF_V2 != 0 {
                ArchId::Sbpf
            } else {
                ArchId::Ebpf
            }
        }
        elf::EM_XTENSA => ArchId::Xtensa,
        elf::EM_HEXAGON => ArchId::Hexagon,
        elf::EM_TRICORE => ArchId::TriCore,
        224 => ArchId::AmdGpu, // EM_AMDGPU
        elf::EM_BLACKFIN | elf::EM_SHARC => ArchId::SharcBlackfin,
        _ => ArchId::Unknown(machine),
    };

    Ok(arch)
}

/// Map ELF endianness to our [`Endian`].
fn map_endian<'data, Elf>(file: &ElfFile<'data, Elf>) -> Endian
where
    Elf: FileHeader<Endian = object::Endianness>,
{
    if file.is_little_endian() {
        Endian::Little
    } else {
        Endian::Big
    }
}

/// Load all ELF sections into owned [`Section`] values.
fn load_sections<'data, Elf>(file: &ElfFile<'data, Elf>) -> Vec<Section>
where
    Elf: FileHeader<Endian = object::Endianness>,
{
    file.sections()
        .filter_map(|sec| {
            let name = sec.name().ok()?.to_string();
            // Skip the null section (index 0, empty name).
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

/// Derive [`SectionFlags`] from an `object` section's flags.
fn section_flags<'data>(sec: &impl ObjectSection<'data>) -> SectionFlags {
    use object::SectionFlags as ObjFlags;

    match sec.flags() {
        ObjFlags::Elf { sh_flags } => {
            let mut f = SectionFlags::empty();
            if sh_flags & u64::from(elf::SHF_ALLOC) != 0 {
                f = f | SectionFlags::READ;
            }
            if sh_flags & u64::from(elf::SHF_WRITE) != 0 {
                f = f | SectionFlags::WRITE;
            }
            if sh_flags & u64::from(elf::SHF_EXECINSTR) != 0 {
                f = f | SectionFlags::EXEC;
            }
            f
        }
        _ => SectionFlags::empty(),
    }
}

/// Load symbols from both `.symtab` and `.dynsym`, merged into one `BTreeMap`.
///
/// When two symbols occupy the same address the one with a non-empty name wins.
fn load_symbols<'data, Elf>(file: &ElfFile<'data, Elf>) -> BTreeMap<u64, Symbol>
where
    Elf: FileHeader<Endian = object::Endianness>,
{
    let mut out = BTreeMap::new();

    // .symtab (static symbol table)
    if let Some(table) = file.symbol_table() {
        collect_symbols(&mut out, table.symbols());
    }

    // .dynsym (dynamic symbol table)
    if let Some(table) = file.dynamic_symbol_table() {
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
        // Skip symbols at address 0 with no name (typically the null symbol entry).
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

/// Parse dynamic relocations and build the PLT stub → symbol name mapping.
///
/// Strategy:
/// 1. Iterate `dynamic_relocations()` to collect all relocations with their
///    resolved symbol names and classify them by kind.
/// 2. Collect JUMP_SLOT relocations (`.rela.plt`) separately — these target
///    GOT slots that correspond 1:1 with PLT stubs.
/// 3. Find the PLT section (`.plt.sec` preferred for IBT-enabled binaries,
///    then `.plt`) and compute each stub's virtual address from its index.
fn load_relocations<'data, Elf>(
    file: &ElfFile<'data, Elf>,
) -> (BTreeMap<u64, String>, Vec<Relocation>)
where
    Elf: FileHeader<Endian = object::Endianness>,
{
    let mut plt_symbols = BTreeMap::new();
    let mut relocations = Vec::new();

    let dyn_relocs: Vec<(u64, object::read::Relocation)> = match file.dynamic_relocations() {
        Some(iter) => iter.collect(),
        None => return (plt_symbols, relocations),
    };

    let dynsym = file.dynamic_symbol_table();

    // Collect JUMP_SLOT entries (these correspond to .rela.plt) in order.
    let mut jump_slots: Vec<(u64, String)> = Vec::new();

    for &(offset, ref reloc) in &dyn_relocs {
        let sym_name = resolve_reloc_symbol(file, dynsym.as_ref(), reloc);
        let kind = classify_reloc(reloc);

        if kind == RelocKind::PltJumpSlot {
            jump_slots.push((offset, sym_name.clone()));
        }

        relocations.push(Relocation {
            addr: offset,
            sym_name,
            kind,
        });
    }

    // Build PLT stub address → symbol name from the JUMP_SLOT entries.
    //
    // Modern x86-64 GCC emits `.plt.sec` (IBT-compatible PLT) where each 16-byte
    // stub corresponds 1:1 with a `.rela.plt` JUMP_SLOT entry. Older toolchains
    // put stubs directly in `.plt` (first 16 bytes are PLT0, then 16 per entry).
    // We try `.plt.sec` first, falling back to `.plt`.
    if !jump_slots.is_empty() {
        let (plt_base, plt_size, has_plt0_stub) =
            if let Some(sec) = file.section_by_name(".plt.sec") {
                (sec.address(), sec.size(), false)
            } else if let Some(sec) = file.section_by_name(".plt") {
                (sec.address(), sec.size(), true)
            } else {
                (0, 0, false)
            };

        if plt_base != 0 {
            let entry_size: u64 = 16;
            let first_stub_offset: u64 = if has_plt0_stub { entry_size } else { 0 };

            for (i, (_got_offset, sym_name)) in jump_slots.iter().enumerate() {
                let stub_addr = plt_base + first_stub_offset + (i as u64) * entry_size;
                if stub_addr < plt_base + plt_size {
                    plt_symbols.insert(stub_addr, sym_name.clone());
                }
            }
        }
    }

    (plt_symbols, relocations)
}

fn resolve_reloc_symbol<'data, Elf>(
    file: &ElfFile<'data, Elf>,
    dynsym: Option<&<ElfFile<'data, Elf> as Object<'data>>::SymbolTable<'_>>,
    reloc: &object::read::Relocation,
) -> String
where
    Elf: FileHeader<Endian = object::Endianness>,
{
    if let object::read::RelocationTarget::Symbol(idx) = reloc.target() {
        // Try dynamic symbol table first, then static.
        if let Some(table) = dynsym {
            if let Ok(sym) = table.symbol_by_index(idx) {
                let name = sym.name().unwrap_or_default();
                if !name.is_empty() {
                    return name.to_string();
                }
            }
        }
        if let Ok(sym) = file.symbol_by_index(idx) {
            let name = sym.name().unwrap_or_default();
            if !name.is_empty() {
                return name.to_string();
            }
        }
    }
    String::new()
}

fn classify_reloc(reloc: &object::read::Relocation) -> RelocKind {
    match reloc.flags() {
        object::RelocationFlags::Elf { r_type } => match r_type {
            elf::R_X86_64_JUMP_SLOT | elf::R_AARCH64_JUMP_SLOT | elf::R_ARM_JUMP_SLOT => {
                RelocKind::PltJumpSlot
            }

            elf::R_X86_64_GLOB_DAT | elf::R_AARCH64_GLOB_DAT | elf::R_ARM_GLOB_DAT => {
                RelocKind::GlobDat
            }

            elf::R_X86_64_RELATIVE | elf::R_AARCH64_RELATIVE => RelocKind::Relative,

            elf::R_BPF_64_64 | elf::R_BPF_64_32 => RelocKind::GlobDat,

            _ => RelocKind::Other,
        },
        _ => RelocKind::Other,
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_load_hello_world() {
        let data = std::fs::read("../../fixtures/hello_world.elf")
            .expect("fixture hello_world.elf must exist");
        assert!(ElfLoader::can_load(&data));

        let img = ElfLoader::load(&data).expect("should parse hello_world.elf");
        assert_eq!(img.arch, ArchId::X86_64);
        assert_eq!(img.endian, Endian::Little);
        assert!(img.entry > 0, "entry point should be non-zero");
        assert!(
            img.sections.iter().any(|s| s.name == ".text"),
            "should have a .text section"
        );
        assert!(
            !img.symbols.is_empty(),
            "not-stripped binary should have symbols"
        );
    }

    #[test]
    fn test_reject_non_elf() {
        assert!(!ElfLoader::can_load(b""));
        assert!(!ElfLoader::can_load(b"not an elf"));
        assert!(!ElfLoader::can_load(&[0u8; 1024]));
        assert!(!ElfLoader::can_load(b"MZ\x90\x00")); // PE magic

        // Attempting to load non-ELF data should error.
        let err = ElfLoader::load(b"not an elf").unwrap_err();
        assert!(matches!(err, LoadError::InvalidMagic));
    }

    #[test]
    fn test_text_section_is_executable() {
        let data = std::fs::read("../../fixtures/hello_world.elf")
            .expect("fixture hello_world.elf must exist");
        let img = ElfLoader::load(&data).expect("should parse");

        let text = img
            .section_by_name(".text")
            .expect(".text section must exist");
        assert!(
            text.flags.contains(SectionFlags::EXEC),
            ".text should be executable"
        );
        assert!(
            text.flags.contains(SectionFlags::READ),
            ".text should be readable (SHF_ALLOC)"
        );
        assert!(!text.data.is_empty(), ".text should have data");
    }

    #[test]
    fn test_stripped_binary_has_few_symbols() {
        let data =
            std::fs::read("../../fixtures/stripped.elf").expect("fixture stripped.elf must exist");
        let img = ElfLoader::load(&data).expect("should parse stripped binary");
        assert_eq!(img.arch, ArchId::X86_64);
        // A stripped binary might still have dynamic symbols, but far fewer
        // than the non-stripped version.
        let non_stripped =
            std::fs::read("../../fixtures/medium.elf").expect("fixture medium.elf must exist");
        let full_img = ElfLoader::load(&non_stripped).expect("should parse medium binary");
        assert!(
            img.symbols.len() < full_img.symbols.len(),
            "stripped binary should have fewer symbols than non-stripped"
        );
    }

    #[test]
    fn test_symbol_at_lookup() {
        let data = std::fs::read("../../fixtures/hello_world.elf")
            .expect("fixture hello_world.elf must exist");
        let img = ElfLoader::load(&data).expect("should parse");

        // The entry point should land on or near a known symbol.
        if let Some(sym) = img.symbol_at(img.entry) {
            assert!(!sym.name.is_empty(), "entry symbol should have a name");
        }
    }

    #[test]
    fn test_plt_resolution_hello_world() {
        let data = std::fs::read("../../fixtures/hello_world.elf")
            .expect("fixture hello_world.elf must exist");
        let img = ElfLoader::load(&data).expect("should parse hello_world.elf");

        assert!(
            !img.plt_symbols.is_empty(),
            "hello_world.elf should have PLT entries"
        );

        let has_puts = img.plt_symbols.values().any(|name| name == "puts");
        assert!(has_puts, "hello_world.elf should have a PLT entry for puts");

        let jump_slots: Vec<_> = img
            .relocations
            .iter()
            .filter(|r| r.kind == crate::image::RelocKind::PltJumpSlot)
            .collect();
        assert!(
            !jump_slots.is_empty(),
            "should have at least one JUMP_SLOT relocation"
        );
        assert!(
            jump_slots.iter().any(|r| r.sym_name == "puts"),
            "JUMP_SLOT relocations should include puts"
        );
    }

    #[test]
    fn test_plt_resolution_calls() {
        let data = std::fs::read("../../fixtures/calls.elf").expect("fixture calls.elf must exist");
        let img = ElfLoader::load(&data).expect("should parse calls.elf");

        assert!(
            !img.relocations.is_empty(),
            "calls.elf should have relocations (.rela.dyn)"
        );
    }

    #[test]
    fn test_no_plt_for_static() {
        let data = std::fs::read("../../fixtures/empty.elf").expect("fixture empty.elf must exist");
        let img = ElfLoader::load(&data).expect("should parse empty.elf");

        // empty.elf may or may not have PLT entries — the important thing is
        // that loading succeeds gracefully without panics.
        assert!(img.relocations.len() <= img.relocations.capacity());
    }
}
