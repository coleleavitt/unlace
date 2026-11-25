use super::*;
use crate::optionset::UnlaceOption;

#[test]
fn option_parses_and_ships_off() {
    assert_eq!(PhiArmSplit::shipped(), PhiArmSplit(false));
    assert_eq!(PhiArmSplit::parse("on").unwrap().0, PhiArmSplit(true));
    assert_eq!(PhiArmSplit::parse("off").unwrap().0, PhiArmSplit(false));
    assert!(PhiArmSplit::parse("maybe").is_err());
}
