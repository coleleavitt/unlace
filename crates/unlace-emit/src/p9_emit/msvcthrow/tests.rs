use super::*;

#[test]
fn throw_callee_names() {
    assert!(is_throw_callee("_CxxThrowException"));
    assert!(is_throw_callee("__CxxThrowException@8"));
    assert!(!is_throw_callee("__cxa_throw"));
}
