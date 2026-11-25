use super::Mode;

#[test]
fn environment_values_share_the_load_time_gate_vocabulary() {
    for (value, mode) in [
        ("abi", Mode::Abi),
        (" ABI ", Mode::Abi),
        ("on", Mode::On),
        ("1", Mode::On),
        ("true", Mode::On),
        (" TRUE ", Mode::On),
        ("", Mode::On),
        ("off", Mode::Off),
        ("0", Mode::Off),
        ("false", Mode::Off),
        ("yes", Mode::Off),
        ("bogus", Mode::Off),
    ] {
        assert_eq!(Mode::from_env_value(value), mode, "{value:?}");
    }
    for mode in [Mode::Off, Mode::On, Mode::Abi] {
        assert_eq!(Mode::from_env_value(mode.as_str()), mode);
        assert_eq!(Mode::parse(mode.as_str()), Some(mode));
    }
    assert_eq!(
        Mode::parse("true"),
        None,
        "the console keeps its on/off vocabulary"
    );
}
