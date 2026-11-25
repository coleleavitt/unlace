use super::render;

#[test]
fn literals_preserve_bytes_and_escape_format_braces() {
    assert_eq!(
        render("{a}\"\\\0\n\n", false),
        ("println!", "\"{{a}}\\\"\\\\\\0\\n\"".into())
    );
    assert_eq!(
        render("hello\r\n", true),
        ("eprintln!", "\"hello\\r\"".into())
    );
    assert_eq!(render("", false), ("print!", "\"\"".into()));
    assert_eq!(render("é🙂", true), ("eprint!", "\"é🙂\"".into()));
}
