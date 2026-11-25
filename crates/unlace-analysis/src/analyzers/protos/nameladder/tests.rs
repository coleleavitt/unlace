use super::fallbacks;

#[test]
fn ladder_strips_one_decoration_per_rung() {
    assert_eq!(fallbacks("j_printf"), vec!["printf"]);
    assert_eq!(fallbacks("j_j_exit"), vec!["exit"]);
    assert_eq!(fallbacks("__imp_CreateFileW"), vec!["CreateFileW"]);
    assert_eq!(
        fallbacks("_CreateFileW@28"),
        vec!["_CreateFileW", "CreateFileW"]
    );
    assert_eq!(fallbacks("@f@8"), vec!["f"]);
    assert_eq!(fallbacks("_memcpy"), vec!["memcpy"]);
    assert_eq!(fallbacks("memcpy_0"), vec!["memcpy"]);
    assert_eq!(
        fallbacks("j___imp__strlen_12"),
        vec!["__imp__strlen_12", "strlen_12", "strlen"]
    );
    assert_eq!(fallbacks("__Znwm"), vec!["_Znwm", "Znwm"]);
    assert!(fallbacks("printf").is_empty());
}
