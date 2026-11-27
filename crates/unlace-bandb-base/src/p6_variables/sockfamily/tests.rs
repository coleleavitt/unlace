use super::*;

#[test]
fn option_parses_on_and_off() {
    assert!(OptionSockFamily.apply("on").unwrap().0);
    assert!(!OptionSockFamily.apply("off").unwrap().0);
    assert!(OptionSockFamily.apply("maybe").is_err());
}

#[test]
fn only_the_families_every_platform_numbers_alike_have_a_record() {
    assert_eq!(family_record(1), Some("sockaddr_un"));
    assert_eq!(family_record(2), Some("sockaddr_in"));
    assert_eq!(family_record(10), None);
    assert_eq!(family_record(0), None);
    for name in [family_record(1), family_record(2)].into_iter().flatten() {
        assert!(FAMILY_RECORDS.contains(&name));
    }
}
