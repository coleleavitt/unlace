//! (kuna) The `macho-arm64e` option gate: load an arm64e Mach-O under the
//! `AARCH64:LE:64:AppleSilicon` pointer-authentication spec instead of the
//! generic `v8A`.
//!
//! Spec selection is a **load-time** decision (`language_id_for` in
//! `unlace-analysis`), taken before any console `option` command runs, so like
//! [`ifuncfpret`](crate::ifuncfpret) the gate is a process environment
//! variable: the CLI exports it onto the `decomp_dbg` subprocess, the console
//! `option` arm sets it for a later `load file` in the same process, and the
//! loader reads it when it picks the language. Unset means **on**; only an
//! explicit off-token turns the AppleSilicon selection off. The companion
//! registered [`MachoArm64e`] value records the requested state for the
//! catalog's `current` field.

/// Environment variable the Mach-O loader reads to decide whether an arm64e
/// image selects the AppleSilicon spec. Absent or an on-token ⇒ enabled; an
/// off-token (`off`, `0`, `false`) ⇒ the generic `v8A` spec.
pub const MACHO_ARM64E_ENV: &str = "UNLACE_MACHO_ARM64E";

/// Whether an arm64e Mach-O selects the AppleSilicon spec in this process.
pub fn macho_arm64e_enabled() -> bool {
    crate::loadoptions::scoped(|o| o.macho_arm64e)
        .unwrap_or_else(crate::loadoptions::env::macho_arm64e)
}

/// Bridge a `set_kuna_option("macho-arm64e", val)` toggle to
/// [`MACHO_ARM64E_ENV`] so a later `load file` in the same process sees it.
pub fn set_macho_arm64e_env(on: bool) {
    // FIXME: Audit that the environment access only happens in single-threaded code.
    unsafe { std::env::set_var(MACHO_ARM64E_ENV, if on { "on" } else { "off" }) };
}

crate::kuna_flag!(
    /// (kuna `macho-arm64e`) The requested state of the arm64e spec selection; the catalog's live `current` field reads it.
    MachoArm64e,
    "macho-arm64e",
    "Mach-O arm64e Apple-Silicon spec selection",
    unset: false,
    shipped: true
);

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn env_gate_default_on_and_off_tokens() {
        // FIXME: Audit that the environment access only happens in single-threaded code.
        unsafe { std::env::remove_var(MACHO_ARM64E_ENV) };
        assert!(macho_arm64e_enabled(), "unset env ⇒ default on");

        for on in ["on", "1", "true", "ON", "True", ""] {
            // FIXME: Audit that the environment access only happens in single-threaded code.
            unsafe { std::env::set_var(MACHO_ARM64E_ENV, on) };
            assert!(macho_arm64e_enabled(), "`{on}` ⇒ enabled");
        }
        for off in ["off", "0", "false"] {
            // FIXME: Audit that the environment access only happens in single-threaded code.
            unsafe { std::env::set_var(MACHO_ARM64E_ENV, off) };
            assert!(!macho_arm64e_enabled(), "`{off}` ⇒ disabled");
        }

        set_macho_arm64e_env(false);
        assert!(!macho_arm64e_enabled());
        set_macho_arm64e_env(true);
        assert!(macho_arm64e_enabled());

        // FIXME: Audit that the environment access only happens in single-threaded code.
        unsafe { std::env::remove_var(MACHO_ARM64E_ENV) };
    }
}
