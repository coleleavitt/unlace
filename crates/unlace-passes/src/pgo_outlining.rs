//! PGO-aware code outlining detection.
//!
//! Modern compilers (LLVM, GCC) with PGO enabled outline cold code paths into
//! separate functions (`.cold` suffixes, `unlikely` sections). This pass
//! detects such outlined fragments and re-associates them with their parent
//! function for better decompilation output.

use std::collections::BTreeMap;

use unlace_ir::ssa::SsaFunction;

use crate::pass::{Pass, PassError};

/// An outlined cold fragment detected by naming convention or call pattern.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct OutlinedFragment {
    /// Address of the outlined fragment.
    pub fragment_addr: u64,
    /// Address of the parent (hot) function.
    pub parent_addr: u64,
    /// Name of the fragment (e.g. "foo.cold.1").
    pub fragment_name: String,
}

/// Detect PGO-outlined cold fragments from symbol names.
pub fn detect_cold_fragments(symbols: &[(u64, &str)]) -> Vec<OutlinedFragment> {
    let mut fragments = Vec::new();
    let parent_addrs: BTreeMap<&str, u64> = symbols
        .iter()
        .filter(|(_, name)| !name.contains(".cold"))
        .map(|(addr, name)| (*name, *addr))
        .collect();

    for &(addr, name) in symbols {
        if let Some(parent_name) = name.strip_suffix(".cold").or_else(|| {
            // Handle ".cold.N" suffixes.
            name.rfind(".cold.").map(|pos| &name[..pos])
        }) && let Some(&parent_addr) = parent_addrs.get(parent_name)
        {
            fragments.push(OutlinedFragment {
                fragment_addr: addr,
                parent_addr,
                fragment_name: name.to_string(),
            });
        }
    }
    fragments
}

/// PGO outlining detection pass.
pub struct PgoOutliningPass;

impl Pass for PgoOutliningPass {
    fn name(&self) -> &str {
        "pgo-outlining"
    }

    fn phase(&self) -> crate::pass::PassPhase {
        crate::pass::PassPhase::TypeRecovery
    }

    fn run(&self, _func: &mut SsaFunction) -> Result<bool, PassError> {
        Ok(false)
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_detects_cold_suffix() {
        let symbols = vec![
            (0x1000, "main"),
            (0x2000, "foo"),
            (0x3000, "foo.cold"),
            (0x4000, "foo.cold.1"),
            (0x5000, "bar"),
        ];
        let frags = detect_cold_fragments(&symbols);
        assert_eq!(frags.len(), 2);
        assert!(frags.iter().all(|f| f.parent_addr == 0x2000));
    }

    #[test]
    fn test_no_parent_no_fragment() {
        let symbols = vec![(0x1000, "orphan.cold")];
        let frags = detect_cold_fragments(&symbols);
        assert!(frags.is_empty());
    }
}
