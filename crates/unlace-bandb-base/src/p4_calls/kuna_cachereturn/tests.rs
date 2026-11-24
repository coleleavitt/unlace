//! Unit tests for the `cachereturn` option surface; the recovery itself is
//! covered by `tests/stages/kuna-cachereturn.toml`.

use super::*;

#[test]
fn option_parses_on_and_off() {
    assert_eq!(OptionCacheReturn::NAME, "cachereturn");
    assert!(OptionCacheReturn.apply("on").unwrap().0);
    assert!(!OptionCacheReturn.apply("off").unwrap().0);
    assert!(OptionCacheReturn.apply("maybe").is_err());
}
