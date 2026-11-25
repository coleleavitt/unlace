use super::*;

#[test]
fn goabi_values_parse_and_refuse() {
    for on in ["auto", "on", "1", "true", "", " AUTO "] {
        assert_eq!(parse_goabi(on), Ok(true), "{on}");
    }
    for off in ["off", "0", "false", " OFF "] {
        assert_eq!(parse_goabi(off), Ok(false), "{off}");
    }
    assert!(parse_goabi("always").is_err());
}

#[test]
fn env_gate_default_on_and_off_tokens() {
    // FIXME: Audit that the environment access only happens in single-threaded code.
    unsafe { std::env::remove_var(GOABI_ENV) };
    assert!(goabi_env_enabled(), "unset env => default auto");
    // FIXME: Audit that the environment access only happens in single-threaded code.
    unsafe { std::env::set_var(GOABI_ENV, "off") };
    assert!(!goabi_env_enabled());
    // FIXME: Audit that the environment access only happens in single-threaded code.
    unsafe { std::env::set_var(GOABI_ENV, "auto") };
    assert!(goabi_env_enabled());
    // FIXME: Audit that the environment access only happens in single-threaded code.
    unsafe { std::env::remove_var(GOABI_ENV) };
}
