use super::*;

#[test]
fn program_data_sections_hold_objects() {
    assert!(holds_program_objects(".data", SectionKind::Data));
    assert!(holds_program_objects(
        ".bss",
        SectionKind::UninitializedData
    ));
    assert!(holds_program_objects(".rodata", SectionKind::ReadOnlyData));
    assert!(holds_program_objects(".data.rel.ro", SectionKind::Data));
    assert!(holds_program_objects(".rdata", SectionKind::ReadOnlyData));
    assert!(holds_program_objects(
        "__cstring",
        SectionKind::ReadOnlyString
    ));
}

#[test]
fn code_tls_and_runtime_tables_do_not() {
    assert!(!holds_program_objects(".text", SectionKind::Text));
    assert!(!holds_program_objects(".tdata", SectionKind::Tls));
    assert!(!holds_program_objects(
        ".tbss",
        SectionKind::UninitializedTls
    ));
    assert!(!holds_program_objects(".got", SectionKind::Data));
    assert!(!holds_program_objects(".got.plt", SectionKind::Data));
    assert!(!holds_program_objects(
        ".eh_frame",
        SectionKind::ReadOnlyData
    ));
    assert!(!holds_program_objects(
        ".eh_frame_hdr",
        SectionKind::ReadOnlyData
    ));
    assert!(!holds_program_objects(".interp", SectionKind::ReadOnlyData));
    assert!(!holds_program_objects(".dynsym", SectionKind::Metadata));
    assert!(!holds_program_objects(".comment", SectionKind::OtherString));
    assert!(!holds_program_objects("__la_symbol_ptr", SectionKind::Data));
}

#[test]
fn ranges_sort_merge_and_drop_empty_or_unmapped_rows() {
    let rows = [
        (0x5000, 0x10),
        (0x4000, 0x1000),
        (0x9000, 0),
        (0, 0x40),
        (0x7000, 8),
    ];
    assert_eq!(
        merged_ranges(rows),
        vec![(0x4000, 0x500f), (0x7000, 0x7007)]
    );
}
