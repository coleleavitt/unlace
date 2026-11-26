use super::*;

#[test]
fn only_aarch64_has_a_fixed_receiver_register() {
    assert_eq!(self_register(Architecture::Aarch64), Some("x0"));
    assert_eq!(
        self_register(Architecture::X86_64),
        None,
        "a struct return moves self to RSI"
    );
}

#[test]
fn owner_is_the_class_under_any_category() {
    assert_eq!(owner("-[Greeter greet:]"), Some("Greeter"));
    assert_eq!(owner("+[Greeter(Extra) make]"), Some("Greeter"));
    assert_eq!(owner("-[ greet]"), None);
    assert_eq!(owner("-[Greeter"), None);
    assert_eq!(owner("-"), None);
}
