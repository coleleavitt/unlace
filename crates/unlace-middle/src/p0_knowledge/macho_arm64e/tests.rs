use super::*;
use crate::loadoptions::{LoadOptions, Vars, read};
use std::collections::BTreeMap;

/// What the gate reads when its variable holds `value` (`None` = unset).
fn read_with(value: Option<&str>) -> bool {
    let overrides = BTreeMap::from([(MACHO_ARM64E_ENV, value.map(str::to_string))]);
    read::macho_arm64e(&Vars::with(&overrides))
}

#[test]
fn env_gate_default_on_and_off_tokens() {
    assert!(read_with(None), "unset env ⇒ default on");
    for on in ["on", "1", "true", "ON", "True", ""] {
        assert!(read_with(Some(on)), "`{on}` ⇒ enabled");
    }
    for off in ["off", "0", "false"] {
        assert!(!read_with(Some(off)), "`{off}` ⇒ disabled");
    }
    {
        let _scope = LoadOptions {
            macho_arm64e: true,
            ..LoadOptions::default()
        }
        .enter();
        assert!(macho_arm64e_enabled());
    }
    {
        let _scope = LoadOptions {
            macho_arm64e: false,
            ..LoadOptions::default()
        }
        .enter();
        assert!(!macho_arm64e_enabled());
    }
}
