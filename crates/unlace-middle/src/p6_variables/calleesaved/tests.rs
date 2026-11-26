use super::*;
use crate::optionset::UnlaceOption;

#[test]
fn option_parses_and_ships_off() {
    assert_eq!(CalleeSavedSplit::shipped(), CalleeSavedSplit(false));
    assert_eq!(
        CalleeSavedSplit::parse("on").unwrap().0,
        CalleeSavedSplit(true)
    );
    assert!(CalleeSavedSplit::parse("x").is_err());
}

#[test]
fn joins_refuses_only_the_same_key() {
    let a = Some((Address::default(), 8));
    let b = Some((Address::default(), 4));
    assert!(!joins(&a, &a));
    assert!(joins(&a, &b));
    assert!(joins(&None, &None));
    assert!(joins(&a, &None));
}
