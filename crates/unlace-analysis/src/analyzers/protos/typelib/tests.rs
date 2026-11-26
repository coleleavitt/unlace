use super::{any_target, target, til_slots};

fn fixture(name: &str) -> Vec<u8> {
    let path = std::path::Path::new(env!("CARGO_MANIFEST_DIR"))
        .join("tests/fixtures")
        .join(name);
    std::fs::read(&path).unwrap_or_else(|e| panic!("{}: {e}", path.display()))
}

#[test]
fn only_an_x86_64_elf_naming_its_c_library_is_a_target() {
    let glibc = fixture("libctypes_glibc_x86_64");
    let file = object::File::parse(&*glibc).unwrap();
    assert_eq!(target(&file), Some(("linux x86_64", true)));
    let musl = fixture("typelib_musl_x86_64");
    let file = object::File::parse(&*musl).unwrap();
    assert_eq!(target(&file), Some(("linux x86_64", false)));
    let mips = fixture("libctypes_mips32_glibc_le32");
    let file = object::File::parse(&*mips).unwrap();
    assert_eq!(target(&file), None);
    assert_eq!(any_target(&file), "elf mips");
}

#[test]
fn til_slots_name_the_libraries_ida_would_load() {
    let slots = |name: &str| {
        let bytes = fixture(name);
        let file = object::File::parse(&*bytes).unwrap();
        til_slots(&file, &bytes)
    };
    assert_eq!(
        slots("entrymain_aarch64"),
        [
            vec!["arm/gnulnx_arm64.til".to_string()],
            vec!["gnuunx64.til".to_string()]
        ]
    );
    assert!(slots("libctypes_mips32_glibc_le32").is_empty());
    assert!(slots("importcall_pe_x86_64.exe").is_empty());
    let arm64 = slots("chkstkdarwin_macho_arm64");
    assert_eq!(arm64.len(), 1);
    assert!(
        arm64[0]
            .iter()
            .all(|n| n.starts_with("arm/macos") || n.starts_with("arm/iphoneos64"))
    );
    let x64 = slots("address_taken_stack_buffers_macho");
    assert_eq!(x64.len(), 1);
    assert!(x64[0].iter().any(|n| n == "macos14_sdk00_x64.til"));
}

#[test]
fn sdk_libraries_prefer_the_newest_not_newer_than_the_build() {
    assert_eq!(
        super::by_preference(&[17, 16, 15, 14, 13, 12], 15),
        [15, 14, 13, 12, 16, 17]
    );
    assert_eq!(
        super::by_preference(&[14, 13, 12, 11], 26),
        [14, 13, 12, 11]
    );
    assert_eq!(super::by_preference(&[14, 13, 12, 11], 0), [11, 12, 13, 14]);
}

#[test]
fn a_pe_is_named_for_the_built_in_windows_library() {
    for (name, expected, subsystem) in [
        ("importcall_pe_x86_64.exe", "windows x86_64", 3),
        ("aifbracket_pe_i386.exe", "windows x86", 2),
    ] {
        let pe = fixture(name);
        let file = object::File::parse(&*pe).unwrap();
        assert_eq!(target(&file), None, "{name}");
        assert_eq!(any_target(&file), expected, "{name}");
        assert_eq!(crate::uefi::pe_subsystem(&pe), Some(subsystem), "{name}");
    }
}
