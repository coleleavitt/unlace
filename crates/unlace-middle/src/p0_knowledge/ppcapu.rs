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

/// Bridge a `set_unlace_option("ppcapu", val)` toggle to [`PPCAPU_ENV`] so a later
/// `load file` in the same process sees the choice.
pub fn set_ppcapu_env(on: bool) {
    // FIXME: Audit that the environment access only happens in single-threaded code.
    unsafe { std::env::set_var(PPCAPU_ENV, if on { "on" } else { "off" }) };
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

    #[test]
    fn env_gate_default_off_and_on_tokens() {
        // FIXME: Audit that the environment access only happens in single-threaded code.
        unsafe { std::env::remove_var(PPCAPU_ENV) };
        assert!(!ppcapu_enabled(), "unset env ⇒ default off");
        for on in ["on", "1", "true", "ON", ""] {
            // FIXME: Audit that the environment access only happens in single-threaded code.
            unsafe { std::env::set_var(PPCAPU_ENV, on) };
            assert!(ppcapu_enabled(), "`{on}` ⇒ enabled");
        }
        for off in ["off", "0", "false"] {
            // FIXME: Audit that the environment access only happens in single-threaded code.
            unsafe { std::env::set_var(PPCAPU_ENV, off) };
            assert!(!ppcapu_enabled(), "`{off}` ⇒ disabled");
        }
        set_ppcapu_env(true);
        assert!(ppcapu_enabled());
        set_ppcapu_env(false);
        assert!(!ppcapu_enabled());
        // FIXME: Audit that the environment access only happens in single-threaded code.
        unsafe { std::env::remove_var(PPCAPU_ENV) };
    }
}
