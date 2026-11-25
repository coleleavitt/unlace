use super::*;
use crate::optionset::UnlaceOption;

#[test]
fn option_parses_and_ships_off() {
    assert_eq!(CoalesceCap::shipped(), CoalesceCap(false));
    assert_eq!(CoalesceCap::parse("on").unwrap().0, CoalesceCap(true));
    assert_eq!(CoalesceCap::parse("off").unwrap().0, CoalesceCap(false));
    assert!(CoalesceCap::parse("maybe").is_err());
}

#[test]
fn cap_is_strictly_above_the_limit() {
    assert!(!exceeds_cap(MAX_COALESCIBLE_HIGHS));
    assert!(exceeds_cap(MAX_COALESCIBLE_HIGHS + 1));
}
