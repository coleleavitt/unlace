use super::printf_argument_count;

#[test]
fn counts_conversions_and_star_operands() {
    assert_eq!(printf_argument_count(b"position=(%d,%d)\\n"), Some(2));
    assert_eq!(printf_argument_count(b"%*.*s %% %lld"), Some(4));
    assert_eq!(printf_argument_count(b"errno: %m"), Some(0));
}

#[test]
fn declines_positional_and_malformed_formats() {
    assert_eq!(printf_argument_count(b"%2$d"), None);
    assert_eq!(printf_argument_count(b"%q"), None);
    assert_eq!(printf_argument_count(b"tail %"), None);
    assert_eq!(printf_argument_count(b"plain text"), None);
}
