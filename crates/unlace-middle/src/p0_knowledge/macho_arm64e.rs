//! (unlace) The `macho-arm64e` option gate: load an arm64e Mach-O under the
//! `AARCH64:LE:64:AppleSilicon` pointer-authentication spec instead of the
//! generic `v8A`.
//!
//! Spec selection is a **load-time** decision (`language_id_for` in
//! `unlace-analysis`), taken before any console `option` command runs, so like
//! [`ifuncfpret`](crate::ifuncfpret) the gate is a process environment
//! variable: the CLI exports it onto the `decomp_dbg` subprocess, the console
//! `option` arm changes the options of the program it names, and the
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

crate::unlace_flag!(
    /// (unlace `macho-arm64e`) The requested state of the arm64e spec selection; the catalog's live `current` field reads it.
    MachoArm64e,
    "macho-arm64e",
    "Mach-O arm64e Apple-Silicon spec selection",
    unset: false,
    shipped: true
);

#[cfg(test)]
mod tests;
