//! (unlace) The `ppcapu` option gate: select the e500 language for a 32-bit
//! PowerPC ELF image whose `.PPC.EMB.apuinfo` note requires SPE.
//!
//! The language is chosen while the image loads, before any `option` command
//! runs, so the gate is the process environment variable [`PPCAPU_ENV`], set by
//! the CLI before loading. The registered [`PpcApu`] value exists only for the
//! catalog's live `current` field. Default off: the e500 compiler model does
//! not yet recover scalar call arguments held in its 64-bit registers.

/// Environment variable read by `unlace-analysis::loader::ppcaputarget`.
/// Absent or an off-token ⇒ disabled; any on-token ⇒ enabled.
pub const PPCAPU_ENV: &str = "UNLACE_PPCAPU";

/// Whether APU-based PowerPC language selection is enabled for this process.
pub fn ppcapu_enabled() -> bool {
    crate::loadoptions::scoped(|o| o.ppcapu).unwrap_or_else(crate::loadoptions::env::ppcapu)
}

crate::unlace_flag!(
    /// (unlace `ppcapu`) The requested state of the load-time APU-note language selection; the catalog's live `current` field reads it.
    PpcApu,
    "ppcapu",
    "PowerPC APU-note language selection",
    unset: false,
    shipped: false
);

#[cfg(test)]
mod tests {
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
}
