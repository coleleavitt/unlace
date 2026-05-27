//! Function-level analysis manager.
//!
//! A lightweight analogue of LLVM's `FunctionAnalysisManager`: analyses are
//! keyed by kind, computed lazily, and invalidated using `PreservedAnalyses`.

use std::collections::{BTreeMap, BTreeSet};

use crate::analysis_context::{AnalysisKind, PreservedAnalyses};

#[derive(Clone, Debug, Default, PartialEq, Eq)]
pub struct FunctionAnalysisManager {
    computed: BTreeSet<AnalysisKind>,
    versions: BTreeMap<AnalysisKind, u64>,
    generation: u64,
}

impl FunctionAnalysisManager {
    pub fn new() -> Self {
        Self::default()
    }

    pub fn generation(&self) -> u64 {
        self.generation
    }

    pub fn mark_computed(&mut self, kind: AnalysisKind) {
        self.computed.insert(kind);
        self.versions.insert(kind, self.generation);
    }

    pub fn is_available(&self, kind: AnalysisKind) -> bool {
        self.computed.contains(&kind)
    }

    pub fn invalidate(&mut self, preserved: &PreservedAnalyses) {
        if matches!(preserved, PreservedAnalyses::All) {
            return;
        }
        self.generation = self.generation.saturating_add(1);
        self.computed.retain(|kind| preserved.preserves(*kind));
        self.versions.retain(|kind, _| preserved.preserves(*kind));
    }

    pub fn version(&self, kind: AnalysisKind) -> Option<u64> {
        self.versions.get(&kind).copied()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn invalidates_unpreserved_analyses() {
        let mut fam = FunctionAnalysisManager::new();
        fam.mark_computed(AnalysisKind::Loops);
        fam.mark_computed(AnalysisKind::DefUseChains);

        fam.invalidate(&PreservedAnalyses::only([AnalysisKind::Loops]));

        assert!(fam.is_available(AnalysisKind::Loops));
        assert!(!fam.is_available(AnalysisKind::DefUseChains));
        assert_eq!(fam.generation(), 1);
    }
}
