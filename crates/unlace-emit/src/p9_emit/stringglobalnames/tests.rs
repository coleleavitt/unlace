use super::string_label;

#[test]
fn labels_follow_the_ida_convention() {
    assert_eq!(string_label(b"hello world"), "aHelloWorld");
    assert_eq!(string_label(b"%s: %d"), "aSD");
    assert_eq!(string_label(b"!!"), "aEmpty");
}
