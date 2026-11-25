use super::*;

#[test]
fn outliner_names() {
    for name in [
        "_OUTLINED_FUNCTION_0",
        "OUTLINED_FUNCTION_17",
        "__OUTLINED_FUNCTION_3",
    ] {
        assert!(is_outlined_name(name), "{name}");
    }
    for name in [
        "_OUTLINED_FUNCTION_",
        "_OUTLINED_FUNCTION_x",
        "outlined_function_1",
        "_main",
    ] {
        assert!(!is_outlined_name(name), "{name}");
    }
}
