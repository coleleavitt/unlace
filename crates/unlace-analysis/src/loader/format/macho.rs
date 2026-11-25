//! The Mach-O [`ObjectFormat`] — the Apple object/exe arm of the loader boundary.
//!
//! This wires Mach-O through the boundary so a Mach-O image **parses, maps its
//! sections, selects the right SLEIGH spec** (`gcc` for x86-64 — macOS x86-64
//! follows the System V AMD64 ABI, the same cspec Ghidra labels `gcc`;
//! `default` for arm64), and **names its imports** (PR-7): a `bl`/`callq`
//! targeting a `__TEXT,__stubs` entry renders `printf(` rather than
//! `sub_<addr>`, via the `LC_DYSYMTAB` indirect-symbol walk in
//! [`crate::loader::macho_stubs`] (design §3.3).
//!
//! ## Section flags
//!
//! Mach-O does **not** carry per-section R/W/X permission in the section header
//! `flags` field — those permissions live in the enclosing segment's
//! `initprot`/`maxprot`. The section `flags` low byte is the section *type*
//! (`S_ZEROFILL`/`S_SYMBOL_STUBS`/…) and the high bits are *attributes*
//! (`S_ATTR_PURE_INSTRUCTIONS`/…). So [`MachOFormat::section_bits`] keys
//! primarily off the neutral [`SectionKind`] (which `object` derives from
//! segment+section), using the section-type/attributes for the NOLOAD/CODE
//! refinements. This is the faithful Mach-O analog of the BFD `SEC_*` mapping.
//!
//! All object-format magics (Mach-O's `0xfeedfac*` / fat `0xcafebabe` included)
//! are admitted by the engine dispatch unconditionally; the XML/datatest corpus
//! never carries a Mach-O magic, so the ELF/XML oracles are untouched.

use object::macho::{CPU_SUBTYPE_ARM64E, CPU_SUBTYPE_MASK};
use object::macho::{
    S_ATTR_PURE_INSTRUCTIONS, S_CSTRING_LITERALS, S_GB_ZEROFILL, S_ZEROFILL, SECTION_TYPE,
};
use object::read::macho::MachHeader;
use object::{Architecture, FileKind, SectionFlags, SectionKind};

use unlace_sleigh::loadimage::section_flags;

use super::{FormatKind, ImportSym, ObjectFormat};

/// The `LC_DYLD_CHAINED_FIXUPS` resolver (design §5 PR-O0). Lives beside the
/// Mach-O format impl because it is loader infra shared by the ObjC walk (and any
/// future chained-fixup consumer), keyed off the same typed Mach-O re-parse.
pub mod chained;
pub use chained::{AuthContext, ChainedBind, ChainedFixups, resolve_chained_fixups};
/// The classic `LC_DYLD_INFO` bind-opcode replay: which slots an imported symbol
/// fills on an image that predates chained fixups.
pub mod dyldinfo;
pub use dyldinfo::{resolve_dyld_info_bind_slots, resolve_dyld_info_binds};
/// The export trie: exported names with their offsets, re-exports and flags.
pub mod exports;

/// The `[start, end)` ranges of a Mach-O image's segments mapped without write
/// permission (`__TEXT`); empty for any other format.
pub fn readonly_segments(file: &object::File) -> Vec<(u64, u64)> {
    use object::SegmentFlags;
    use object::read::{Object, ObjectSegment};
    if file.format() != object::BinaryFormat::MachO {
        return Vec::new();
    }
    file.segments()
        .filter(|segment| {
            matches!(segment.flags(), SegmentFlags::MachO { initprot, .. }
                if initprot & object::macho::VM_PROT_WRITE == 0
                    && initprot & object::macho::VM_PROT_READ != 0)
        })
        .filter_map(|segment| {
            let start = segment.address();
            Some((start, start.checked_add(segment.size())?))
        })
        .filter(|(start, end)| start < end)
        .collect()
}

/// True when `section` lies wholly inside one of `segments`: its contents are
/// read-only at run time, whatever kind `object` gives the section.
pub fn in_readonly_segment(segments: &[(u64, u64)], section: &object::Section) -> bool {
    use object::read::ObjectSection;
    let start = section.address();
    let Some(end) = start.checked_add(section.size()) else {
        return false;
    };
    section.size() != 0
        && segments
            .iter()
            .any(|&(low, high)| low <= start && end <= high)
}

/// The environment-variable gate for arm64e Apple-Silicon spec selection
/// (design §3.7): on unless it holds an off-token, which `--option
/// macho-arm64e off` exports onto the `decomp_dbg` subprocess, so an arm64e
/// Mach-O then loads with the generic `AARCH64:LE:64:v8A` spec exactly as any
/// arm64. Effective at *load* time, before any console `option` command, and
/// read live so a test can toggle it in-process.
pub use unlace_decomp::macho_arm64e::MACHO_ARM64E_ENV;

/// Whether the arm64e Apple-Silicon spec gate is enabled ([`MACHO_ARM64E_ENV`]).
fn arm64e_gate_enabled() -> bool {
    unlace_decomp::macho_arm64e::macho_arm64e_enabled()
}

/// Whether a thin Mach-O's header reports the arm64e CPU subtype
/// (`CPU_SUBTYPE_ARM64E`). Pure & total: a non-Mach-O / fat / unparsable input
/// (or any non-arm64e subtype) is `false`. The high capability byte
/// (`CPU_SUBTYPE_MASK`) is stripped before comparing, so a pointer-auth-capable
/// arm64e (the `CPU_SUBTYPE_PTRAUTH_ABI` high bits set) still matches.
pub fn is_arm64e(bytes: &[u8]) -> bool {
    fn subtype<Mach: MachHeader>(bytes: &[u8]) -> Option<u32> {
        let header = Mach::parse(bytes, 0).ok()?;
        let endian = header.endian().ok()?;
        Some(header.cpusubtype(endian) & !CPU_SUBTYPE_MASK)
    }
    let sub = match FileKind::parse(bytes) {
        Ok(FileKind::MachO64) => subtype::<object::macho::MachHeader64<object::Endianness>>(bytes),
        Ok(FileKind::MachO32) => subtype::<object::macho::MachHeader32<object::Endianness>>(bytes),
        // Fat input is peeled to a thin slice before this runs; a leftover fat
        // here is not an arm64e thin Mach-O.
        _ => None,
    };
    sub == Some(CPU_SUBTYPE_ARM64E)
}

/// The arm64e Apple-Silicon SLEIGH language id (`AARCH64:LE:64:AppleSilicon` +
/// the `default` compiler) when — and only when — the format is Mach-O, the arch
/// is AArch64, the `macho-arm64e` gate is on, and the image is an arm64e thin
/// Mach-O (design §3.7). Returns `None` (so the generic `v8A` id wins) in every
/// other case. The id is the one the vendored
/// `AppleSilicon.ldefs` declares — verified resolvable by the console gate.
pub fn apple_silicon_id(
    fmt: &dyn ObjectFormat,
    arch: Architecture,
    bytes: &[u8],
) -> Option<String> {
    if fmt.kind() != FormatKind::MachO
        || arch != Architecture::Aarch64
        || !arm64e_gate_enabled()
        || !is_arm64e(bytes)
    {
        return None;
    }
    Some("AARCH64:LE:64:AppleSilicon:default".to_string())
}

/// The Mach-O (Apple) object format.
pub struct MachOFormat;

impl ObjectFormat for MachOFormat {
    fn kind(&self) -> FormatKind {
        FormatKind::MachO
    }

    fn compiler_model(&self, arch: Architecture) -> Option<&'static str> {
        // macOS x86-64 follows the System V AMD64 ABI — the *same* cspec Ghidra
        // labels `gcc` for x86-64 (design §2.1 footnote ¹): so this returns
        // `gcc`, NOT an invented `macho` token. arm64 uses the AArch64 `default`
        // cspec (`default`, not `windows`). The model must always be one the
        // vendored `.ldefs` declares.
        match arch {
            Architecture::X86_64 | Architecture::I386 => Some("gcc"),
            // Aarch64 / Arm and anything else: the arch default cspec.
            _ => Some("default"),
        }
    }

    fn section_bits(&self, _name: &str, kind: SectionKind, flags: SectionFlags) -> u32 {
        let mflags = match flags {
            SectionFlags::MachO { flags } => flags,
            _ => 0,
        };
        let sec_type = mflags & SECTION_TYPE;
        let pure_instr = mflags & S_ATTR_PURE_INSTRUCTIONS != 0;
        // Zero-fill section types are the `.bss` analog (no file content).
        let zerofill = sec_type == S_ZEROFILL || sec_type == S_GB_ZEROFILL;

        let mut out = 0u32;
        // NOLOAD: zero-fill (uninitialized) sections, or whatever the neutral
        // `SectionKind` already classifies as uninitialized.
        if zerofill || matches!(kind, SectionKind::UninitializedData) {
            out |= section_flags::NOLOAD;
        }
        // READONLY: Mach-O section flags carry no per-section write bit (it lives
        // in the segment initprot). Use the neutral `SectionKind`: a read-only
        // data / text / string section is readonly; writable data is not.
        // `__cstring` is `SectionKind::ReadOnlyString` — marking it READONLY is
        // what lets the printer's constant-string route read a `char *` arg's
        // bytes and render `printf("%d\n", …)` (PR-10). Any other
        // `S_CSTRING_LITERALS` pool (`__oslogstring`, kernel `__os_log`,
        // `__objc_methname`) is the same coalesced literal data under a name
        // `object` does not know.
        let cstrings = sec_type == S_CSTRING_LITERALS;
        if cstrings
            || matches!(
                kind,
                SectionKind::ReadOnlyData | SectionKind::ReadOnlyString | SectionKind::Text
            )
        {
            out |= section_flags::READONLY;
        }
        // CODE: a `__text`-kind section or a pure-instructions section.
        if pure_instr || matches!(kind, SectionKind::Text) {
            out |= section_flags::CODE;
        }
        if cstrings
            || matches!(
                kind,
                SectionKind::Data | SectionKind::ReadOnlyData | SectionKind::ReadOnlyString
            )
        {
            out |= section_flags::DATA;
        }
        out
    }

    fn resolve_imports(&self, file: &object::File, bytes: &[u8]) -> Vec<ImportSym> {
        // Mach-O import naming: walk the `LC_DYSYMTAB` indirect-symbol table,
        // naming each `__stubs` entry a `bl`/`callq` targets directly + each
        // symbol-pointer slot (the GOT analog) a folded indirect call resolves,
        // and register the exports — all in `loader/macho_stubs.rs` (design
        // §3.3). Arch-independent (section metadata, no instruction decode).
        // Pure & total: a non-Mach-O / no-LC_DYSYMTAB / unparsable layout yields
        // an empty `Vec`.
        crate::loader::macho_stubs::resolve_macho_imports(file, bytes)
    }

    fn import_slots(&self, file: &object::File, bytes: &[u8]) -> Vec<(u64, u64)> {
        crate::loader::macho_stubs::resolve_macho_import_slots(file, bytes)
    }

    /// An `MH_OBJECT` has relocations still to apply against its pre-link
    /// layout, so it is laid out the way an ELF `.o` is
    /// ([`crate::loader::reloc_object`]).
    fn relocatable_layout(&self, file: &object::File) -> bool {
        object::Object::kind(file) == object::ObjectKind::Relocatable
    }

    /// Every section but the debug-only ones (`S_ATTR_DEBUG`: `__DWARF`,
    /// `__LD,__compact_unwind`) occupies memory.
    fn is_alloc_section(&self, _kind: SectionKind, flags: SectionFlags) -> bool {
        const S_ATTR_DEBUG: u32 = 0x0200_0000;
        matches!(flags, SectionFlags::MachO { flags } if flags & S_ATTR_DEBUG == 0)
    }
}

#[cfg(test)]
mod tests;
