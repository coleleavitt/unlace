use super::*;

#[test]
fn option_levels_parse() {
    assert_eq!(OptionArrayExtent.apply("off").unwrap().0, LEVEL_OFF);
    assert_eq!(OptionArrayExtent.apply("bound").unwrap().0, LEVEL_BOUND);
    assert_eq!(OptionArrayExtent.apply("on").unwrap().0, LEVEL_ON);
    assert_eq!(OptionArrayExtent.apply("").unwrap().0, LEVEL_ON);
    assert!(OptionArrayExtent.apply("full").is_err());
}
