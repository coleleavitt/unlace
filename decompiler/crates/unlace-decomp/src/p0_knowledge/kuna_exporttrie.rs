//! (kuna) The `exporttrie` option gate: read Mach-O export tries for names.
//!
//! A thin image whose symbol table lacks an export the trie lists gets that
//! name, and a dyld shared cache image names a call into another image after
//! the symbol it imports, resolved through the export tries with re-exports
//! followed. Both happen inside `load file`, so the gate travels as the
//! [`EXPORTTRIE_ENV`] environment variable (the `dynrelocs` loadtime pattern).

/// Absent or any value other than the off-tokens means enabled.
pub const EXPORTTRIE_ENV: &str = "KUNA_EXPORTTRIE";

pub fn exporttrie_enabled() -> bool {
    crate::options::env_toggle(EXPORTTRIE_ENV, true)
}

pub fn set_exporttrie_env(on: bool) {
    std::env::set_var(EXPORTTRIE_ENV, if on { "on" } else { "off" });
}
