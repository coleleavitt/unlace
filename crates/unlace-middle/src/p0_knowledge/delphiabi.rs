//! (unlace) The `delphiabi` option gate: read a 32-bit Delphi PE under the
//! vendored Delphi compiler spec (`x86delphi.cspec`, compiler id
//! `borlanddelphi`), whose default model is Delphi's `register` convention:
//! the first three arguments in EAX, EDX and ECX, the rest on the stack, the
//! callee popping them.
//!
//! The language is chosen while the image loads, before any `option` command
//! runs, so the gate is the process environment variable [`DELPHIABI_ENV`],
//! set by the CLI before loading. The registered [`DelphiAbi`] value exists
//! only for the catalog's live `current` field. Default on.

/// Environment variable read by `unlace-analysis`'s language selection.
/// Absent or any value but an off-token: enabled; an off-token: disabled.
pub const DELPHIABI_ENV: &str = "UNLACE_DELPHIABI";

/// Whether Delphi compiler-spec selection is enabled for this process.
pub fn delphiabi_enabled() -> bool {
    crate::loadoptions::scoped(|o| o.delphiabi).unwrap_or_else(crate::loadoptions::env::delphiabi)
}

crate::unlace_flag!(
    /// (unlace `delphiabi`) The requested state of the load-time Delphi
    /// compiler-spec selection; the catalog's live `current` field reads it.
    DelphiAbi,
    "delphiabi",
    "Delphi register calling convention",
    unset: true,
    shipped: true
);
