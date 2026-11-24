//! (unlace) The `debuglink` option gate: name a stripped ELF's functions from its
//! separate debug file (build-id, `.gnu_debuglink`) or its MiniDebugInfo
//! (`.gnu_debugdata`). A loader-tier option, bridged through an environment
//! variable like `dynrelocs`, because the symbols are read inside `load file`.

/// Environment variable gating the companion lookup. Absent or any value other
/// than an off-token means enabled.
pub const DEBUGLINK_ENV: &str = "UNLACE_DEBUGLINK";

/// Whether the companion lookup is enabled for this process.
pub fn debuglink_enabled() -> bool {
    crate::loadoptions::scoped(|o| o.debuglink).unwrap_or_else(crate::loadoptions::env::debuglink)
}

crate::unlace_flag!(
    /// (unlace `debuglink`) The requested state of the separate debug file lookup.
    DebugLink,
    "debuglink",
    "separate debug file lookup",
    unset: true,
    shipped: true
);
