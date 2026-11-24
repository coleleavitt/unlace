//! Tests moved out of `modes` and `kuna_phases` because they read the driver's option dispatch
//! (`KUNA_OPTION_NAMES`). They live in the driver so the middle band can be its own crate.

use std::collections::BTreeSet;

use crate::modes::MODE_TABLE;
use crate::option_dispatch::KUNA_OPTION_NAMES;
use crate::phases::SETTABLE_TABLE;

#[test]
fn every_override_names_a_real_option() {
    for m in MODE_TABLE {
        for (opt, _val) in m.overrides {
            assert!(
                KUNA_OPTION_NAMES.contains(opt),
                "mode `{}` references unknown option `{}`",
                m.name,
                opt
            );
        }
    }
}

#[test]
fn catalog_matches_implemented_options() {
    let registered: BTreeSet<_> = KUNA_OPTION_NAMES.iter().copied().collect();
    let documented: BTreeSet<_> = SETTABLE_TABLE.iter().map(|row| row.option).collect();
    assert_eq!(
        registered.len(),
        KUNA_OPTION_NAMES.len(),
        "duplicate option handler"
    );
    assert_eq!(
        documented.len(),
        SETTABLE_TABLE.len(),
        "duplicate catalog option"
    );
    assert_eq!(registered, documented);
}
