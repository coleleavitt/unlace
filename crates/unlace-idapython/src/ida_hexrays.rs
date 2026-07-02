//! `ida_hexrays` — decompiler API.
//!
//! Text-backed subset for staged pseudocode; full ctree integration lives in B27.6.
//! Reference: `research/ida-hexrays-docs/sdk/include/hexrays.hpp`.

use unlace_session::Session;

use crate::coverage;

/// A simplified text-backed `cfunc_t` analog. This is not full ctree parity.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct CFunc {
    pub entry_ea: u64,
    pub name: String,
    pub text: String,
    pub pseudocode: Vec<String>,
}

impl CFunc {
    /// IDA scripts call `str(cfunc)` which joins pseudocode lines.
    pub fn as_text(&self) -> String {
        self.text.clone()
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
/// Returns staged pseudocode text when the hosting session populated a
/// decompiled-function cache.
pub fn decompile(session: &Session, ea: u64) -> Option<CFunc> {
    coverage::mark_implemented("ida_hexrays.decompile");
    let decompiled = session.decompiled_function(ea)?;
    Some(CFunc {
        entry_ea: decompiled.entry_ea,
        name: decompiled.name,
        pseudocode: decompiled.text.lines().map(str::to_string).collect(),
        text: decompiled.text,
    })
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
            text: "int main(void)\n{\n    return 0;\n}".into(),
            pseudocode: vec![
                "int main(void)".into(),
                "{".into(),
                "    return 0;".into(),
                "}".into(),
            ],
        };
        assert!(c.as_text().contains("return 0"));
    }

    #[test]
    fn cfunc_as_text_preserves_original_text() {
        let c = CFunc {
            entry_ea: 0x400000,
            name: "main".into(),
            text: "int main(void) {}\n".into(),
            pseudocode: vec!["int main(void) {}".into()],
        };

        assert_eq!(c.as_text(), "int main(void) {}\n");
    }

    #[test]
    fn decompile_reads_staged_session_text() {
        let s = Session::new();
        s.set_decompiled_function(
            0x1000,
            0x20,
            "main".into(),
            "int main(void)\n{\n    return 0;\n}".into(),
        );

        let cfunc = decompile(&s, 0x1010).expect("staged decompile");
        assert_eq!(cfunc.entry_ea, 0x1000);
        assert_eq!(cfunc.name, "main");
        assert!(cfunc.as_text().contains("return 0"));
        assert!(decompile(&s, 0x2000).is_none());
    }
}
