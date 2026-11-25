use super::*;

#[test]
fn cxa_throw_callee_names() {
    assert!(is_cxa_throw_callee("__cxa_throw"));
    assert!(is_cxa_throw_callee("__cxa_throw@plt"));
    assert!(!is_cxa_throw_callee("__cxa_rethrow"));
    assert!(!is_cxa_throw_callee("_CxxThrowException"));
    assert!(is_cxa_rethrow_callee("__cxa_rethrow"));
    assert!(!is_cxa_rethrow_callee("__cxa_throw"));
}
