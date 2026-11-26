use super::*;

#[test]
fn parses_the_three_values_and_rejects_the_rest() {
    assert_eq!(parse_cppsig_mode("off").unwrap().0, CppSigMode::Off);
    assert_eq!(parse_cppsig_mode("proven").unwrap().0, CppSigMode::Proven);
    assert_eq!(
        parse_cppsig_mode("inferred").unwrap().0,
        CppSigMode::Inferred
    );
    // `on` is deliberately NOT an alias: the caller must say which tier.
    assert!(parse_cppsig_mode("on").is_err());
    assert!(parse_cppsig_mode("").is_err());
}

#[test]
fn the_tiers_compose() {
    assert!(!CppSigMode::Off.enabled());
    assert!(CppSigMode::Proven.enabled());
    assert!(!CppSigMode::Proven.inferred());
    assert!(CppSigMode::Inferred.enabled());
    assert!(CppSigMode::Inferred.inferred());
    assert_eq!(CppSigMode::Inferred.as_str(), "inferred");
}
