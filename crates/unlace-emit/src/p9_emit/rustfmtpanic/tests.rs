use super::panic_literal;

#[test]
fn panic_text_keeps_newlines_braces_and_unicode() {
    assert_eq!(panic_literal("{é}\n\n"), "\"{{é}}\\n\\n\"");
    assert_eq!(panic_literal("\"\\\0"), "\"\\\"\\\\\\0\"");
    assert_eq!(panic_literal(""), "\"\"");
}
