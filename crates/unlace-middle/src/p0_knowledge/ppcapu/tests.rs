use super::*;
use crate::loadoptions::{LoadOptions, Vars, read};
use std::collections::BTreeMap;

/// What the gate reads when its variable holds `value` (`None` = unset).
fn read_with(value: Option<&str>) -> bool {
    let overrides = BTreeMap::from([(PPCAPU_ENV, value.map(str::to_string))]);
    read::ppcapu(&Vars::with(&overrides))
}

#[test]
fn env_gate_default_off_and_on_tokens() {
    assert!(!read_with(None), "unset env ⇒ default off");
    for on in ["on", "1", "true", "ON", ""] {
        assert!(read_with(Some(on)), "`{on}` ⇒ enabled");
    }
    for off in ["off", "0", "false"] {
        assert!(!read_with(Some(off)), "`{off}` ⇒ disabled");
    }
    {
        let _scope = LoadOptions {
            ppcapu: true,
            ..LoadOptions::default()
        }
        .enter();
        assert!(ppcapu_enabled());
    }
    {
        let _scope = LoadOptions {
            ppcapu: false,
            ..LoadOptions::default()
        }
        .enter();
        assert!(!ppcapu_enabled());
    }
}
