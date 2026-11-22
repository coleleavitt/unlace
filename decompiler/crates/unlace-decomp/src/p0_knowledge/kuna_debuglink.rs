//! (kuna) The `debuglink` option gate: name a stripped ELF's functions from its
//! separate debug file (build-id, `.gnu_debuglink`) or its MiniDebugInfo
//! (`.gnu_debugdata`). A loader-tier option, bridged through an environment
//! variable like `dynrelocs`, because the symbols are read inside `load file`.

/// Environment variable gating the companion lookup. Absent or any value other
/// than an off-token means enabled.
pub const DEBUGLINK_ENV: &str = "KUNA_DEBUGLINK";

/// Whether the companion lookup is enabled for this process.
pub fn debuglink_enabled() -> bool {
    crate::options::env_toggle(DEBUGLINK_ENV, true)
}

/// Bridge `option debuglink on|off` to [`DEBUGLINK_ENV`] for a later `load file`.
pub fn set_debuglink_env(on: bool) {
    std::env::set_var(DEBUGLINK_ENV, if on { "on" } else { "off" });
}
