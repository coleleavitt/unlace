//! ELF loader implementation using the `object` crate.

use std::collections::BTreeMap;
use std::mem::size_of;

use object::elf;
use object::read::elf::{ElfFile, FileHeader};
use object::{Object, ObjectSection, ObjectSymbol, ObjectSymbolTable};

use crate::error::LoadError;
use crate::image::{
    ArchId, BinaryImage, Endian, Section, SectionFlags, Symbol, SymbolKind,
};
use crate::Loader;

/// ELF magic bytes: `\x7fELF`.
const ELF_MAGIC: [u8; 4] = [0x7f, b'E', b'L', b'F'];

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

    Ok(BinaryImage {
        arch,
        endian,
        entry,
        sections,
        symbols,
    })
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
        elf::EM_ARC_COMPACT | elf::EM_ARC_COMPACT2 => ArchId::Arc,
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
        let data = std::fs::read("../../fixtures/stripped.elf")
            .expect("fixture stripped.elf must exist");
        let img = ElfLoader::load(&data).expect("should parse stripped binary");
        assert_eq!(img.arch, ArchId::X86_64);
        // A stripped binary might still have dynamic symbols, but far fewer
        // than the non-stripped version.
        let non_stripped = std::fs::read("../../fixtures/medium.elf")
            .expect("fixture medium.elf must exist");
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
}
