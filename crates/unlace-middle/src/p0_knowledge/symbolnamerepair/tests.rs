use super::*;

/// Only the EMPTY component is degenerate.
#[test]
fn only_the_empty_component_is_skipped() {
    assert!(skip_scope_component(""));
    for keep in ["a", "std", "anonymous_namespace", "operator[]", " "] {
        assert!(!skip_scope_component(keep), "`{keep}` names a scope");
    }
}
