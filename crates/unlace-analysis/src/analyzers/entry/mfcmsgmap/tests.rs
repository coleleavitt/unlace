use super::*;

#[test]
fn a_non_pe_image_has_no_message_map() {
    assert!(message_map_handlers(b"\x7fELF").is_empty());
}
