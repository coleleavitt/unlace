use super::*;

#[test]
fn each_value_is_a_cumulative_setting_of_the_walk() {
    let table = [
        ("off", false, false, false),
        ("on", true, false, false),
        ("strict", true, true, false),
        ("precise", true, true, true),
    ];
    for (token, enabled, strict, corroborate) in table {
        let (mode, _) = parse_aif_mode(token).unwrap();
        assert_eq!(mode.as_str(), token);
        assert_eq!(
            (mode.enabled(), mode.strict(), mode.corroborate()),
            (enabled, strict, corroborate)
        );
    }
    assert!(parse_aif_mode("corroborate").is_err());
    assert_eq!(AifMode::default(), AifMode::Off);
}
