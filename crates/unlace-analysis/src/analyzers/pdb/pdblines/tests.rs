use super::*;

#[test]
fn base_names() {
    assert_eq!(base_name("C:\\src\\geo\\rect.cpp"), "rect.cpp");
    assert_eq!(base_name("./pdb_types.cpp"), "pdb_types.cpp");
    assert_eq!(base_name("plain.c"), "plain.c");
}

/// Every procedure of the x64 fixture gets its lines, in the source file.
#[test]
fn fixture_lines() {
    let path = concat!(
        env!("CARGO_MANIFEST_DIR"),
        "/tests/fixtures/pdb_types_x86_64.pdb"
    );
    let file = std::fs::File::open(path).expect("open the fixture pdb");
    let mut pdb = pdb::PDB::open(file).expect("parse the fixture pdb");
    let comments = line_comments(&mut pdb, 0x1_4000_0000);
    assert!(!comments.is_empty());
    assert!(
        comments
            .iter()
            .all(|c| c.text.starts_with("pdb_types.cpp:")),
        "{comments:#?}"
    );
    let rect_area = 0x1_4000_1020;
    assert!(
        comments
            .iter()
            .any(|c| c.func_addr == rect_area && c.addr == rect_area),
        "{comments:#?}"
    );
}
