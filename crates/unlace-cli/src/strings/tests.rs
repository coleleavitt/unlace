use super::escape_text;

#[test]
fn text_is_escaped_onto_one_line() {
    assert_eq!(escape_text("a\tb\nc\\d"), "a\\tb\\nc\\\\d");
}
