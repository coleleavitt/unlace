use super::*;

fn fixture(name: &str) -> Vec<u8> {
    std::fs::read(format!(
        "{}/tests/fixtures/{name}",
        env!("CARGO_MANIFEST_DIR")
    ))
    .unwrap()
}

/// `__TEXT,__const` without an instruction attribute in the `r-x` `__TEXT`
/// is unflagged code memory; a `__cstring` beside it is data by its type.
#[test]
fn a_macho_const_section_in_text_is_unflagged() {
    let bytes = fixture("unflagged_macho_arm64");
    let file = object::File::parse(&*bytes).unwrap();
    let section = UnflaggedSection {
        name: "__TEXT,__const".into(),
        start: 0x1000003fc,
        end: 0x100000414,
    };
    assert_eq!(unflagged_sections(&file), [section.clone()]);
    assert_eq!(
        placement(&file, 0x1000003d8),
        Placement::Code {
            section: Some("__TEXT,__text".into())
        }
    );
    assert_eq!(placement(&file, 0x10000040c), Placement::Unflagged(section));
    assert_eq!(
        placement(&file, 0x100000414),
        Placement::Data {
            section: "__TEXT,__cstring".into(),
            executable: true
        }
    );
    assert_eq!(
        placement(&file, 0x100004000),
        Placement::Data {
            section: "__DATA,__data".into(),
            executable: false
        }
    );
    assert_eq!(placement(&file, 0x100000000), Placement::NoSection);
    assert_eq!(
        (
            declared_data(&file, 0x1000003fc),
            declared_function(&file, 0x1000003fc)
        ),
        (None, None)
    );
}

/// `.rodata` in the `R E` `PT_LOAD` is unflagged; the symbol table declares
/// `table` data and `lonely` a function.
#[test]
fn an_elf_rodata_in_the_text_segment_is_unflagged() {
    let bytes = fixture("unflagged_elf_x86_64");
    let file = object::File::parse(&*bytes).unwrap();
    let section = UnflaggedSection {
        name: ".rodata".into(),
        start: 0x4000c2,
        end: 0x4000d8,
    };
    assert_eq!(placement(&file, 0x4000d3), Placement::Unflagged(section));
    assert_eq!(
        placement(&file, 0x4000b0),
        Placement::Code {
            section: Some(".text".into())
        }
    );
    assert_eq!(
        placement(&file, 0x401000),
        Placement::Data {
            section: ".data".into(),
            executable: false
        }
    );
    assert_eq!(declared_data(&file, 0x4000ce).as_deref(), Some("table"));
    assert_eq!(
        declared_function(&file, 0x4000c8).as_deref(),
        Some("lonely")
    );
    assert_eq!(
        (
            declared_data(&file, 0x4000d3),
            declared_function(&file, 0x4000d3)
        ),
        (None, None)
    );
}

/// An ARM `STT_FUNC`'s bit 0 is the Thumb flag, and a mapping symbol
/// (`$t`) names no code; Mach-O `nlist`s name code whatever their section.
#[test]
fn symbols_name_code_by_their_address() {
    let bytes = fixture("unflagged_elf_thumb");
    let file = object::File::parse(&*bytes).unwrap();
    assert_eq!(
        declared_function(&file, 0x40008c).as_deref(),
        Some("lonely")
    );
    assert_eq!(named_at(&file, 0x400084).as_deref(), Some("middle"));
    assert_eq!(
        (
            named_at(&file, 0x400094),
            declared_function(&file, 0x400094)
        ),
        (None, None)
    );
    assert_eq!(named_at(&file, 0x400074).as_deref(), Some("_start"));
    let bytes = fixture("unflagged_macho_arm64");
    let file = object::File::parse(&*bytes).unwrap();
    assert_eq!(named_at(&file, 0x1000003fc).as_deref(), Some("_middle"));
    assert_eq!(named_at(&file, 0x100000400), None);
    let bytes = fixture("unflagged_elf_x86_64");
    let file = object::File::parse(&*bytes).unwrap();
    assert_eq!(named_at(&file, 0x4000ce), None, "an STT_OBJECT names data");
}

/// A PE and a separate-code ELF have no gap. An older GNU ld image keeps its
/// read-only data in the `R E` segment, and every Mach-O its unwind tables
/// in `__TEXT`.
#[test]
fn the_gap_is_a_layout_property() {
    for name in ["pe_imports.exe", "cet_pie_x86_64"] {
        let bytes = fixture(name);
        let file = object::File::parse(&*bytes).unwrap();
        assert!(
            unflagged_sections(&file).is_empty(),
            "{name}: {:?}",
            unflagged_sections(&file)
        );
    }
    for (name, expect) in [
        (
            "fauxware",
            &[".interp", ".rodata", ".eh_frame_hdr", ".eh_frame"][..],
        ),
        ("macho_datasyms_arm64", &["__TEXT,__unwind_info"][..]),
    ] {
        let bytes = fixture(name);
        let file = object::File::parse(&*bytes).unwrap();
        let names: Vec<String> = unflagged_sections(&file)
            .into_iter()
            .map(|s| s.name)
            .collect();
        assert_eq!(names, expect, "{name}");
    }
}
