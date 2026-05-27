//! Lazy value info.
//!
//! Block/edge-sensitive cache of scalar facts.

use std::collections::BTreeMap;

use unlace_ir::ssa::SsaVarnode;
use unlace_ir::{BlockId, ValueLattice};

#[derive(Copy, Clone, Debug, PartialEq, Eq, PartialOrd, Ord, Hash)]
pub enum FactSite {
    Block(BlockId),
    Edge { from: BlockId, to: BlockId },
}

#[derive(Clone, Debug, Default)]
pub struct LazyValueInfo {
    facts: BTreeMap<(SsaVarnode, FactSite), ValueLattice>,
}

impl LazyValueInfo {
    pub fn set_fact(&mut self, var: SsaVarnode, site: FactSite, fact: ValueLattice) {
        self.facts
            .entry((var, site))
            .and_modify(|old| *old = old.meet(fact))
            .or_insert(fact);
    }

    pub fn fact(&self, var: SsaVarnode, site: FactSite) -> ValueLattice {
        self.facts
            .get(&(var, site))
            .copied()
            .unwrap_or(ValueLattice::Unknown)
    }
}

#[cfg(test)]
mod tests {
    use unlace_ir::ssa::SsaVarnode;
    use unlace_ir::{BlockId, SpaceId, ValueLattice, Varnode};

    use super::*;

    #[test]
    fn facts_meet_at_same_site() {
        let var = SsaVarnode {
            base: Varnode::new(SpaceId::Unique, 0, 8),
            version: 1,
        };
        let site = FactSite::Block(BlockId(0));
        let mut lvi = LazyValueInfo::default();
        lvi.set_fact(var, site, ValueLattice::Range { min: 0, max: 10 });
        lvi.set_fact(var, site, ValueLattice::Range { min: 4, max: 12 });
        assert_eq!(lvi.fact(var, site), ValueLattice::Range { min: 4, max: 10 });
    }
}
