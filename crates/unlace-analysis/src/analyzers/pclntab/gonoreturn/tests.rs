use super::*;

/// The vendored Go list reaches the names the symbol-table pass cannot see
/// on a stripped binary — the headline runtime panic family included.
#[test]
fn vendored_list_matches_the_runtime_panic_family() {
    let (exact, wildcard) = parse_list(crate::sourcelang::golang_noreturn_list());
    for name in [
        "runtime.gopanic",
        "runtime.panicshift",
        "runtime.panicunsafestringlen",
        "runtime.panicunsafestringnilptr",
        "runtime.panicunsafeslicelen",
        "runtime.goPanicIndex",
        "runtime.panicmem",
        "runtime.throw",
        "runtime.goexit.abi0",
    ] {
        assert!(name_matches(name, &exact, &wildcard), "{name} must match");
    }
    // Ordinary Go functions must not.
    for name in [
        "main.main",
        "runtime.morestack_noctxt",
        "runtime.panicCheck1",
        "runtime.mallocgc",
        "fmt.Println",
    ] {
        assert!(
            !name_matches(name, &exact, &wildcard),
            "{name} must not match"
        );
    }
}
