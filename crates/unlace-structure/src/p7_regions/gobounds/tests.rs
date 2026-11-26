use super::*;
#[test]
fn exact_runtime_names_and_abi_wrappers() {
    for name in [
        "runtime.panicIndex",
        "runtime.goPanicSlice3CU",
        "runtime.panicExtendIndexU",
        "runtime.panicBounds64",
        "runtime.panicdivide",
        "runtime.panicunsafestringlen1",
    ] {
        for suffix in ["", ".abi0", ".abiinternal"] {
            assert!(is_go_check_name(&format!("{name}{suffix}")));
        }
    }
    for name in [
        "panicIndex",
        "main.panicIndex",
        "runtime.panicIndexExtra",
        "runtime.gopanic",
        "runtime.panicdottypeE",
        "runtime.panicIndex.abi0.extra",
        "runtime.panic",
        "",
    ] {
        assert!(!is_go_check_name(name), "{name}");
    }
}
