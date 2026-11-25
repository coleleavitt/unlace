//! The ELF [`ObjectFormat`] — today's ELF-only load logic, lifted verbatim.
//!
//! Every method here is the *current* behavior moved behind the trait with zero
//! change:
//! - [`ElfFormat::section_bits`] is the body of the old
//!   `loadimage_object::section_kind_flags`.
//! - [`ElfFormat::compiler_model`] returns the same `gcc`/`default` tokens the
//!   old `language_id_for` baked into the id string.
//! - [`ElfFormat::resolve_imports`] re-wraps the `PltSym`s of
//!   [`crate::loader::elf_plt::resolve_imports_with_got_slots`] as
//!   [`ImportSym`]s: the PLT stubs, then the `.got` slots of imports no stub
//!   fronts, which [`ElfFormat::import_slots`] also reports as ranges.
//! - [`ElfFormat::const_ranges`] is `elf_plt::mips_got_const_ranges`, plus the
//!   defined-address MIPS GOT slots of `unlace_mipsgot`.
//!
//! The existing ELF fixtures + the 675 datatests are the proof this is
//! byte-identical (see the module doc on [`super`]).

use object::read::Object;
use object::{Architecture, SectionFlags, SectionKind};

use unlace_sleigh::loadimage::section_flags;

use super::{FormatKind, ImportSym, ObjectFormat};

/// Is this section something the toolchain or the run-time loader wrote about
/// the program, rather than initialized program data?
///
/// `object` folds `SHT_SYMTAB`/`SHT_DYNSYM`/`SHT_STRTAB`/`SHT_RELA`/`SHT_REL`/
/// `SHT_RELR`/`SHT_HASH`/`SHT_DYNAMIC` into [`SectionKind::Metadata`] and
/// `SHT_NOTE` into [`SectionKind::Note`]; the GNU dynamic-info types
/// (`.gnu.hash`, `.gnu.version*`) have no `SectionKind` of their own and arrive
/// as `SectionKind::Elf(sh_type)`, so they are named here.  `.interp` is a
/// plain `SHT_PROGBITS` section holding the loader's path, so only its name
/// tells it apart from `.rodata`.
pub(crate) fn is_loader_table(name: &str, kind: SectionKind) -> bool {
    /// `SHT_GNU_HASH`.
    const SHT_GNU_HASH: u32 = 0x6fff_fff6;
    /// `SHT_GNU_verdef`, `SHT_GNU_verneed`, `SHT_GNU_versym`.
    const SHT_GNU_VERDEF: u32 = 0x6fff_fffd;
    const SHT_GNU_VERNEED: u32 = 0x6fff_fffe;
    const SHT_GNU_VERSYM: u32 = 0x6fff_ffff;
    match kind {
        SectionKind::Metadata | SectionKind::Note => true,
        SectionKind::Elf(t) => {
            matches!(
                t,
                SHT_GNU_HASH | SHT_GNU_VERDEF | SHT_GNU_VERNEED | SHT_GNU_VERSYM
            )
        }
        _ => name == ".interp",
    }
}

/// The ELF object format.
pub struct ElfFormat;

impl ObjectFormat for ElfFormat {
    fn kind(&self) -> FormatKind {
        FormatKind::Elf
    }

    fn compiler_model(&self, arch: Architecture) -> Option<&'static str> {
        // The Linux/SysV ELF ABI default compiler model. This reproduces exactly
        // what the old `language_id_for` hard-coded into each id string:
        // `x86`/`RISCV` → `gcc`, every other supported machine → `default`.
        // Returned as the explicit token so `language_id_for` stays a structural
        // change with no output change (the produced id strings are unchanged).
        match arch {
            Architecture::X86_64 | Architecture::I386 => Some("gcc"),
            Architecture::Riscv64 | Architecture::Riscv32 => Some("gcc"),
            _ => Some("default"),
        }
    }

    /// Verbatim the old `loadimage_object::section_kind_flags` body, mirroring
    /// the BFD `SEC_*` → `LoadImageSection` translation in
    /// `LoadImageBfd::getNextSection` (`loadimage_bfd.cc:261`).
    fn section_bits(&self, name: &str, kind: SectionKind, flags: SectionFlags) -> u32 {
        // ELF section header flags (the BFD `SEC_*` bits derive from these).
        const SHF_WRITE: u64 = 0x1;
        const SHF_ALLOC: u64 = 0x2;
        const SHF_EXECINSTR: u64 = 0x4;

        let sh_flags = match flags {
            SectionFlags::Elf { sh_flags } => sh_flags,
            _ => 0,
        };
        let alloc = sh_flags & SHF_ALLOC != 0;
        let exec = sh_flags & SHF_EXECINSTR != 0;
        let write = sh_flags & SHF_WRITE != 0;

        let mut out = 0u32;
        // (SEC_ALLOC)==0 -> unalloc
        if !alloc {
            out |= section_flags::UNALLOC;
        }
        // SEC_LOAD is set for allocated sections with file contents; an
        // uninitialized (.bss-style) section is NOLOAD.  `SectionKind::UninitializedData`
        // is exactly BFD's `!SEC_LOAD` allocated section.
        if matches!(kind, SectionKind::UninitializedData) || !alloc {
            out |= section_flags::NOLOAD;
        }
        // SEC_READONLY: an allocated, non-writable section (the BFD readonly bit),
        // minus the tables the toolchain and the run-time loader own.
        //
        // (unlace) BFD sets the bit on `.interp`, the notes, `.dynsym`, `.dynstr`,
        // `.gnu.hash`, `.rela.*` and the version tables as readily as on
        // `.rodata`: they are allocated and not writable.  Nothing in the program
        // reads them, but the readonly range is also what licenses the printer to
        // replace a constant with the characters at that address, and small
        // numbers land in them.  In a position-independent executable `.dynsym`
        // covers `0x1000`, so diffutils `diff`'s `outbytesleft = 4096` printed as
        // the string literal at the `st_name` field it happens to overlap, and
        // `.interp` at `0x318` turns `0x320` into `"d-linux-x86-64.so.2"`.
        if alloc && !write && !is_loader_table(name, kind) {
            out |= section_flags::READONLY;
        }
        // SEC_CODE / SEC_DATA.
        if exec || matches!(kind, SectionKind::Text) {
            out |= section_flags::CODE;
        }
        if matches!(kind, SectionKind::Data | SectionKind::ReadOnlyData) {
            out |= section_flags::DATA;
        }
        out
    }

    /// The PLT stubs, then the GOT slots of imports no stub jumps through.
    fn resolve_imports(&self, file: &object::File, bytes: &[u8]) -> Vec<ImportSym> {
        let (stubs, slots) = crate::loader::elf_plt::resolve_imports_with_got_slots(file, bytes);
        stubs
            .into_iter()
            .chain(slots)
            .map(|p| ImportSym {
                addr: p.addr,
                name: p.name,
                kind: super::ImportSymKind::Import,
            })
            .collect()
    }

    /// The GOT slots [`ElfFormat::resolve_imports`] names for functions no PLT stub
    /// fronts, and the `GLOB_DAT` slots of undefined symbols, one pointer wide.
    fn import_slots(&self, file: &object::File, bytes: &[u8]) -> Vec<(u64, u64)> {
        let mut slots = crate::loader::elfgotimports::slots(file);
        slots.extend(crate::loader::elf_plt::got_call_slot_ranges(file, bytes));
        slots.sort_unstable();
        slots.dedup();
        slots
    }

    fn local_import_targets(&self, file: &object::File, bytes: &[u8]) -> Vec<(u64, u64)> {
        crate::loader::pltlocal::bind(
            file,
            &crate::loader::elf_plt::resolve_plt_imports(file, bytes),
        )
    }

    fn const_ranges(&self, file: &object::File, _bytes: &[u8]) -> Vec<(u64, u64)> {
        let mut ranges = crate::loader::elf_plt::mips_got_const_ranges(file);
        ranges.extend(crate::loader::mipsgot::const_ranges(file));
        ranges
    }

    /// An `ET_REL` object carries no program headers, so `file.segments()` is
    /// empty and the mapped-image path would map zero bytes — the historical
    /// gate, moved behind the boundary verbatim.
    fn relocatable_layout(&self, file: &object::File) -> bool {
        file.kind() == object::ObjectKind::Relocatable && file.segments().next().is_none()
    }

    fn is_alloc_section(&self, _kind: SectionKind, flags: SectionFlags) -> bool {
        const SHF_ALLOC: u64 = 0x2;
        matches!(flags, SectionFlags::Elf { sh_flags } if sh_flags & SHF_ALLOC != 0)
    }
}

#[cfg(test)]
mod tests;
