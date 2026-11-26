use super::*;

#[test]
fn itanium_closure_type_is_a_lambda() {
    assert!(is_lambda_closure(
        "_ZZ4mainENKUlvE_clEv",
        "main::{lambda()#1}::operator()() const",
    ));
}

#[test]
fn clang_dollar_name_is_a_lambda() {
    assert!(is_lambda_closure(
        "_ZZ4mainEN3$_0clEv",
        "main::$_0::operator()()"
    ));
    assert!(is_lambda_closure("_ZZ4mainEN3$_0clEv", ""));
}

#[test]
fn gcc_lambda_text_is_a_lambda() {
    assert!(is_lambda_closure(
        "",
        "outer()::{lambda()#1}::operator()() const"
    ));
}

#[test]
fn ordinary_names_are_not_lambdas() {
    assert!(!is_lambda_closure("_ZN3foo3barEv", "foo::bar()"));
    assert!(!is_lambda_closure("_ZN1AC2Ev", "A::A()"));
}

#[test]
fn ul_inside_an_identifier_is_not_a_lambda() {
    assert!(!is_lambda_closure("_ZN5Ulrik3runEv", "Ulrik::run()"));
}

#[test]
fn plain_symbol_is_not_a_lambda() {
    assert!(!is_lambda_symbol("_ZN3foo3barEv"));
    assert!(!is_lambda_symbol("puts"));
}
