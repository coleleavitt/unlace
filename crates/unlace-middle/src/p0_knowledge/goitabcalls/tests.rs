use super::*;

#[test]
fn record_names_carry_the_linker_spelling() {
    assert_eq!(itab_record_name("main.Shape"), "go.itab.main.Shape");
    assert_eq!(
        itab_record_name("internal/bisect.Writer"),
        "go.itab.internal/bisect.Writer"
    );
    assert!(itab_record_name("error").starts_with(ITAB_RECORD_PREFIX));
}

#[test]
fn the_option_ships_on() {
    use crate::optionset::UnlaceOption;
    assert!(!GoItabCalls::unset().0);
    assert!(GoItabCalls::shipped().0);
    assert!(GoItabCalls::parse("on").unwrap().0.0);
}
