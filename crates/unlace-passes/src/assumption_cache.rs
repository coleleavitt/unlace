//! Recovered assumption cache.

use std::collections::BTreeMap;

use unlace_ir::BlockId;
use unlace_ir::ssa::SsaVarnode;

#[derive(Clone, Debug, PartialEq, Eq)]
pub enum Assumption {
    NonNull(SsaVarnode),
    Aligned { var: SsaVarnode, align: u64 },
    Range { var: SsaVarnode, min: u64, max: u64 },
}

#[derive(Clone, Debug, Default)]
pub struct AssumptionCache {
    by_block: BTreeMap<BlockId, Vec<Assumption>>,
}

impl AssumptionCache {
    pub fn add(&mut self, block: BlockId, assumption: Assumption) {
        self.by_block.entry(block).or_default().push(assumption);
    }

    pub fn assumptions(&self, block: BlockId) -> &[Assumption] {
        self.by_block.get(&block).map_or(&[], Vec::as_slice)
    }
}

#[cfg(test)]
mod tests {
    use unlace_ir::ssa::SsaVarnode;
    use unlace_ir::{BlockId, SpaceId, Varnode};

    use super::*;

    #[test]
    fn stores_block_assumptions() {
        let var = SsaVarnode {
            base: Varnode::new(SpaceId::Unique, 1, 8),
            version: 0,
        };
        let mut cache = AssumptionCache::default();
        cache.add(BlockId(0), Assumption::NonNull(var));
        assert_eq!(cache.assumptions(BlockId(0)).len(), 1);
    }
}
