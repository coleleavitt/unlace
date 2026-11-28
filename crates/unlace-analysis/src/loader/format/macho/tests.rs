use super::*;

/// `MachOFormat::compiler_model` is `gcc` for x86-64 (System V AMD64, the
/// macOS ABI) and `default` for arm64 — never an invented token.
#[test]
fn macho_compiler_model_per_arch() {
    let f = MachOFormat;
    assert_eq!(
        f.compiler_model(Architecture::X86_64),
        Some("gcc"),
        "x86-64 macOS is SysV → gcc"
    );
    assert_eq!(f.compiler_model(Architecture::I386), Some("gcc"));
    assert_eq!(
        f.compiler_model(Architecture::Aarch64),
        Some("default"),
        "arm64 macOS → default"
    );
}

/// A `__text` Mach-O section (`SectionKind::Text`, `S_ATTR_PURE_INSTRUCTIONS`)
/// is CODE | READONLY; a zero-fill section is NOLOAD.
#[test]
fn macho_section_bits_text_and_bss() {
    let f = MachOFormat;
    let bits = f.section_bits(
        "",
        SectionKind::Text,
        SectionFlags::MachO {
            flags: S_ATTR_PURE_INSTRUCTIONS,
        },
    );
    assert!(bits & section_flags::CODE != 0, "__text is CODE");
    assert!(bits & section_flags::READONLY != 0, "__text is READONLY");

    let bss = f.section_bits(
        "",
        SectionKind::UninitializedData,
        SectionFlags::MachO { flags: S_ZEROFILL },
    );
    assert!(
        bss & section_flags::NOLOAD != 0,
        "zerofill section is NOLOAD"
    );
}

/// A literal pool `object` classifies `Unknown` (`__TEXT,__oslogstring`) is
/// read-only data by its `S_CSTRING_LITERALS` type; an unknown regular
/// section is not.
#[test]
fn macho_section_bits_cstring_literal_pool() {
    let f = MachOFormat;
    let pool = f.section_bits(
        "__oslogstring",
        SectionKind::Unknown,
        SectionFlags::MachO {
            flags: S_CSTRING_LITERALS,
        },
    );
    assert_eq!(
        pool & (section_flags::READONLY | section_flags::DATA | section_flags::CODE),
        section_flags::READONLY | section_flags::DATA
    );
    let other = f.section_bits(
        "__other",
        SectionKind::Unknown,
        SectionFlags::MachO { flags: 0 },
    );
    assert_eq!(other & section_flags::READONLY, 0);
}

/// A minimal `mach_header_64` buffer with the given cputype/cpusubtype, the
/// 32-byte fixed header `MachHeader64::parse` reads (the load commands are not
/// needed for the cpusubtype check). Little-endian on-disk (`MH_MAGIC_64`).
fn macho64_header(cputype: u32, cpusubtype: u32) -> Vec<u8> {
    let mut b = Vec::new();
    b.extend_from_slice(&0xfeed_facfu32.to_le_bytes()); // MH_MAGIC_64
    b.extend_from_slice(&cputype.to_le_bytes());
    b.extend_from_slice(&cpusubtype.to_le_bytes());
    b.extend_from_slice(&2u32.to_le_bytes()); // filetype = MH_EXECUTE
    b.extend_from_slice(&0u32.to_le_bytes()); // ncmds
    b.extend_from_slice(&0u32.to_le_bytes()); // sizeofcmds
    b.extend_from_slice(&0u32.to_le_bytes()); // flags
    b.extend_from_slice(&0u32.to_le_bytes()); // reserved (64-bit only)
    b
}

/// `is_arm64e` is `true` only for an arm64 Mach-O whose cpusubtype is
/// `CPU_SUBTYPE_ARM64E` (with the high capability byte stripped); a plain
/// arm64 (`ARM64_ALL`/`ARM64_V8`) or x86-64 is `false`.
#[test]
fn is_arm64e_detects_only_arm64e_subtype() {
    use object::macho::{CPU_SUBTYPE_ARM64_ALL, CPU_TYPE_ARM64, CPU_TYPE_X86_64};
    // arm64e — the high capability byte (CPU_SUBTYPE_PTRAUTH_ABI) set or not.
    assert!(is_arm64e(&macho64_header(
        CPU_TYPE_ARM64,
        CPU_SUBTYPE_ARM64E
    )));
    assert!(
        is_arm64e(&macho64_header(
            CPU_TYPE_ARM64,
            CPU_SUBTYPE_ARM64E | 0x8000_0000
        )),
        "the capability high byte must be masked off before comparing"
    );
    // plain arm64 — not arm64e.
    assert!(!is_arm64e(&macho64_header(
        CPU_TYPE_ARM64,
        CPU_SUBTYPE_ARM64_ALL
    )));
    // x86-64 — never arm64e.
    assert!(!is_arm64e(&macho64_header(CPU_TYPE_X86_64, 3)));
    // non-Mach-O — false (no panic).
    assert!(!is_arm64e(&[0x7f, b'E', b'L', b'F']));
    assert!(!is_arm64e(&[]));
}

/// `apple_silicon_id` returns the `AARCH64:LE:64:AppleSilicon` id ONLY when:
/// Mach-O format + AArch64 arch + the gate on + an arm64e image. Every other
/// combination is `None` (so the generic v8A id wins) — the default-off path.
#[test]
fn apple_silicon_id_gated_and_arm64e_only() {
    use object::macho::{CPU_SUBTYPE_ARM64_ALL, CPU_TYPE_ARM64};

    let macho = MachOFormat;
    let arm64e = macho64_header(CPU_TYPE_ARM64, CPU_SUBTYPE_ARM64E);
    let arm64 = macho64_header(CPU_TYPE_ARM64, CPU_SUBTYPE_ARM64_ALL);

    // The env-gate toggling must be serialized: this process-global var is
    // also read by the console gate; keep the on-window tight.
    // FIXME: Audit that the environment access only happens in single-threaded code.
    unsafe { std::env::set_var(MACHO_ARM64E_ENV, "off") };
    // Gate OFF: even an arm64e Mach-O yields None (generic v8A wins).
    assert_eq!(
        apple_silicon_id(&macho, Architecture::Aarch64, &arm64e),
        None
    );

    // FIXME: Audit that the environment access only happens in single-threaded code.
    unsafe { std::env::remove_var(MACHO_ARM64E_ENV) };
    // Gate ON (the default) + arm64e Mach-O + AArch64 → the AppleSilicon id.
    assert_eq!(
        apple_silicon_id(&macho, Architecture::Aarch64, &arm64e).as_deref(),
        Some("AARCH64:LE:64:AppleSilicon:default")
    );
    // Gate ON but a *plain* arm64 (not arm64e) → None.
    assert_eq!(
        apple_silicon_id(&macho, Architecture::Aarch64, &arm64),
        None
    );
    // Gate ON, arm64e bytes, but wrong arch (x86-64) → None.
    assert_eq!(
        apple_silicon_id(&macho, Architecture::X86_64, &arm64e),
        None
    );
    // Gate ON, arm64e bytes, but non-Mach-O format → None.
    assert_eq!(
        apple_silicon_id(
            &crate::loader::format::elf::ElfFormat,
            Architecture::Aarch64,
            &arm64e
        ),
        None
    );
    // FIXME: Audit that the environment access only happens in single-threaded code.
    unsafe { std::env::remove_var(MACHO_ARM64E_ENV) };
}
