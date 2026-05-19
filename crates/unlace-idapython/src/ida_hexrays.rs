//! `ida_hexrays` — decompiler API.
//!
//! Stub for now — the full ctree integration lives in B27.6.
//! Reference: `research/ida-hexrays-docs/sdk/include/hexrays.hpp`.

use unlace_session::Session;

use crate::coverage;

/// A simplified `cfunc_t` analog — IDA returns a much richer ctree object,
/// but for compat purposes the textual `pseudocode` is what 90% of scripts
/// access.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct CFunc {
    pub entry_ea: u64,
    pub name: String,
    pub pseudocode: Vec<String>,
}

impl CFunc {
    /// IDA scripts call `str(cfunc)` which joins pseudocode lines.
    pub fn as_text(&self) -> String {
        self.pseudocode.join("\n")
    }
}

/// `ida_hexrays.init_hexrays_plugin()` — verify the decompiler is available.
///
/// Unlace always has the decompiler available, so this returns `true`.
pub fn init_hexrays_plugin() -> bool {
    coverage::mark_implemented("ida_hexrays.init_hexrays_plugin");
    true
}

/// `ida_hexrays.decompile(ea)` — decompile the function at ea.
///
/// Stub: returns None until the full pipeline integration lands. The Rust
/// crate that consumes this (unlace-cli's `unlace py`) will populate the
/// CFunc by running the decompilation pipeline.
pub fn decompile(session: &Session, ea: u64) -> Option<CFunc> {
    coverage::mark_implemented("ida_hexrays.decompile");
    _ = (session, ea);
    None
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_init_hexrays_plugin_returns_true() {
        assert!(init_hexrays_plugin());
    }

    #[test]
    fn test_cfunc_as_text_joins_lines() {
        let c = CFunc {
            entry_ea: 0x400000,
            name: "main".into(),
            pseudocode: vec!["int main(void)".into(), "{".into(), "    return 0;".into(), "}".into()],
        };
        assert!(c.as_text().contains("return 0"));
    }
}
