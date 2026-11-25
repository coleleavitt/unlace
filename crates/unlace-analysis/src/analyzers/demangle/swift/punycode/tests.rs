use super::*;

#[test]
fn decodes_the_abi_document_example() {
    assert_eq!(decode_swift("vergenza_JFa").as_deref(), Some("vergüenza"));
}
