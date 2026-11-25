use super::*;

/// `CoffFormat::compiler_model` is `windows` (MSVC default) for every arch.
#[test]
fn coff_compiler_model_is_windows() {
    let f = CoffFormat;
    for a in [
        Architecture::X86_64,
        Architecture::I386,
        Architecture::Aarch64,
    ] {
        assert_eq!(
            f.compiler_model(a),
            Some("windows"),
            "{a:?} must be :windows"
        );
    }
}

/// COFF shares PE's `Characteristics` section-flag model — an exec section is
/// CODE | READONLY (delegated to `pe::coff_section_bits`).
#[test]
fn coff_section_bits_reuse_pe() {
    use object::pe::{IMAGE_SCN_CNT_CODE, IMAGE_SCN_MEM_EXECUTE, IMAGE_SCN_MEM_READ};
    use unlace_sleigh::loadimage::section_flags;
    let f = CoffFormat;
    let text = IMAGE_SCN_CNT_CODE | IMAGE_SCN_MEM_EXECUTE | IMAGE_SCN_MEM_READ;
    let bits = f.section_bits(
        "",
        SectionKind::Text,
        SectionFlags::Coff {
            characteristics: text,
        },
    );
    assert!(bits & section_flags::CODE != 0, "exec section is CODE");
    assert!(
        bits & section_flags::READONLY != 0,
        "non-writable section is READONLY"
    );
}
