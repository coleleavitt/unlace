//! Incremental MemorySSA update helpers.

use unlace_ir::memory_ssa::{MemoryAccessId, MemoryAccessSite, MemorySSAGraph};

#[derive(Clone, Debug, Default)]
pub struct MemorySsaUpdater;

impl MemorySsaUpdater {
    pub fn remove_access(graph: &mut MemorySSAGraph, id: MemoryAccessId) -> bool {
        let Some(site) = graph
            .by_site
            .iter()
            .find_map(|(&site, &access)| (access == id).then_some(site))
        else {
            return false;
        };
        graph.by_site.remove(&site);
        if let Some(list) = graph.by_block.get_mut(&site.block) {
            list.retain(|access| *access != id);
        }
        true
    }

    pub fn move_access(
        graph: &mut MemorySSAGraph,
        id: MemoryAccessId,
        new_site: MemoryAccessSite,
    ) -> bool {
        if !Self::remove_access(graph, id) {
            return false;
        }
        graph.record_site(id, new_site);
        true
    }
}

#[cfg(test)]
mod tests {
    use unlace_ir::BlockId;
    use unlace_ir::memory_ssa::{MemoryAccessSite, MemoryLocation, MemorySSAGraph};

    use super::*;

    #[test]
    fn moves_access_between_sites() {
        let mut graph = MemorySSAGraph::new();
        let old = MemoryAccessSite {
            block: BlockId(0),
            insn_idx: 1,
        };
        let new = MemoryAccessSite {
            block: BlockId(1),
            insn_idx: 0,
        };
        let id = graph.add_def_at(old, MemoryLocation::stack(-8, 8), None, false);

        assert!(MemorySsaUpdater::move_access(&mut graph, id, new));
        assert_eq!(graph.by_site.get(&new), Some(&id));
        assert!(!graph.block_accesses(BlockId(0)).contains(&id));
    }
}
