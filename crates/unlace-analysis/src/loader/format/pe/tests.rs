use super::*;

fn pe_header(magic: u16, subsystem: u16) -> Vec<u8> {
    let mut b = vec![0u8; 0x200];
    b[0..2].copy_from_slice(b"MZ");
    b[0x3c..0x40].copy_from_slice(&0x40u32.to_le_bytes());
    b[0x40..0x44].copy_from_slice(b"PE\0\0");
    b[0x54..0x56].copy_from_slice(&0xf0u16.to_le_bytes());
    b[0x58..0x5a].copy_from_slice(&magic.to_le_bytes());
    b[0x58 + 68..0x58 + 70].copy_from_slice(&subsystem.to_le_bytes());
    b
}

/// GUI and console PE32/PE32+ images are user mode; a native driver, an EFI
/// application, a truncated header and a non-PE are not.
#[test]
fn user_mode_image_is_gui_or_console_pe_only() {
    for magic in [0x10b, 0x20b] {
        assert!(is_windows_user_mode_image(&pe_header(magic, 2)));
        assert!(is_windows_user_mode_image(&pe_header(magic, 3)));
        assert!(
            !is_windows_user_mode_image(&pe_header(magic, 1)),
            "native driver"
        );
        assert!(
            !is_windows_user_mode_image(&pe_header(magic, 10)),
            "EFI application"
        );
    }
    assert!(
        !is_windows_user_mode_image(&pe_header(0x107, 3)),
        "ROM optional header"
    );
    assert!(
        !is_windows_user_mode_image(&pe_header(0x20b, 3)[..0x90]),
        "truncated"
    );
    assert!(!is_windows_user_mode_image(b"\x7fELF\x02\x01\x01"), "ELF");
}
use object::pe::{
    IMAGE_SCN_CNT_CODE, IMAGE_SCN_MEM_EXECUTE, IMAGE_SCN_MEM_READ, IMAGE_SCN_MEM_WRITE,
};

/// `PeFormat::compiler_model` returns `windows` for every arch (the PE ABI).
#[test]
fn pe_compiler_model_is_windows() {
    let f = PeFormat;
    for a in [
        Architecture::X86_64,
        Architecture::I386,
        Architecture::Aarch64,
        Architecture::Arm,
    ] {
        assert_eq!(
            f.compiler_model(a),
            Some("windows"),
            "{a:?} must be :windows"
        );
    }
}

/// A `.text` PE section (`IMAGE_SCN_CNT_CODE | MEM_EXECUTE | MEM_READ`, not
/// writable) is CODE | READONLY and not UNALLOC; a writable `.data`-style
/// section is not READONLY.
#[test]
fn pe_section_bits_text_is_code_readonly() {
    let f = PeFormat;
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
    assert!(
        bits & section_flags::UNALLOC == 0,
        "PE sections are never UNALLOC"
    );

    let data = IMAGE_SCN_MEM_READ | IMAGE_SCN_MEM_WRITE;
    let bits = f.section_bits(
        "",
        SectionKind::Data,
        SectionFlags::Coff {
            characteristics: data,
        },
    );
    assert!(bits & section_flags::DATA != 0, "data section is DATA");
    assert!(
        bits & section_flags::READONLY == 0,
        "writable section is not READONLY"
    );
}
