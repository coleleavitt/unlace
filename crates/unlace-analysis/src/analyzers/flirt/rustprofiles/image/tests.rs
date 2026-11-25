use super::*;

#[test]
fn provenance_preserves_nightly_and_conflicting_records_without_selecting_a_version() {
    let record = "rustc version 1.89.0-nightly (bf64d66bd 2025-05-21)";
    let comments = format!("GCC\0{record}\0rustc version 1.90.0\0");
    let result = from_sections(comments.as_bytes(), b"");
    assert_eq!(result.rustc_records, [record, "rustc version 1.90.0"]);
    assert!(result.source_commits.is_empty());
}

#[test]
fn only_complete_rust_library_source_commits_are_reported() {
    let hash = "9d871b0617a4b3d6610b7cee0ab5310dcb542c62";
    let text = format!(
        "/rustc/{hash}/library/core/src/lib.rs\0/rustc/{hash}/library/std/src/lib.rs\0/rustc/{hash}/user/payload\0/rustc/9d871b061/library/core/src/lib.rs"
    );
    let result = from_sections(b"GCC\0not rustc version 1.71.0\0", text.as_bytes());
    assert!(result.rustc_records.is_empty());
    assert_eq!(result.source_commits, [hash]);
}
