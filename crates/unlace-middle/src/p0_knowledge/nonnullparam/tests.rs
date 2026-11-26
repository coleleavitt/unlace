use super::NonNullParam;
use crate::optionset::UnlaceOption;

#[test]
fn the_option_ships_off() {
    assert!(!NonNullParam::unset().0);
    assert!(!NonNullParam::shipped().0);
    assert!(NonNullParam::parse("on").unwrap().0.0);
}
