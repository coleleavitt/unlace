//! Build MemorySSAGraph from a real SsaFunction.
//!
//! Walks every block in BlockId order, processing Load/Store/Call/AtomicX
//! instructions and emitting MemoryDef/Use nodes. Calls and volatile ops
//! act as opaque barriers (clobber everything).
//!
//! This is the SSA-to-MemorySSA construction step. It does not currently
//! materialize MemoryPhi nodes at CFG join points — that's a refinement for
//! later. The current build is sufficient for in-block DSE / load-forwarding.

use std::collections::BTreeMap;

use unlace_ir::memory_ssa::{MemoryAccessId, MemoryLocation, MemorySSAGraph};
use unlace_ir::ssa::{SsaFunction, VarnodeSlot};
use unlace_ir::{BlockId, IrOp, SpaceId, Varnode};

/// Position of a memory access in the original IR (BlockId, insn index).
#[derive(Copy, Clone, Debug, PartialEq, Eq, PartialOrd, Ord)]
pub struct AccessSite {
    pub block: BlockId,
    pub insn_idx: usize,
}

/// Mapping from each (block, insn_idx) memory-touching instruction to its
/// MemoryAccessId in the constructed MemorySSAGraph.
#[derive(Clone, Debug, Default)]
pub struct MemorySsaMap {
    pub by_site: BTreeMap<AccessSite, MemoryAccessId>,
}

/// Build a MemorySSAGraph from a function. Returns the graph plus a map
/// from instruction sites to access IDs.
pub fn build_memory_ssa(func: &SsaFunction) -> (MemorySSAGraph, MemorySsaMap) {
    let mut graph = MemorySSAGraph::new();
    let mut sites = MemorySsaMap::default();

    // Track the latest MemoryDef seen so far (linear walk).
    // A real implementation would track this per dominator-tree branch and
    // emit MemoryPhi at join points; we approximate by linearizing in
    // BlockId order which is sufficient for straight-line tests and many
    // real functions.
    let mut latest_def: Option<MemoryAccessId> = None;

    for block in func.function.blocks.values() {
        for (idx, insn) in block.insns.iter().enumerate() {
            let site = AccessSite {
                block: block.id,
                insn_idx: idx,
            };

            match insn.op {
                IrOp::Store => {
                    // Store(addr, value) — try to extract a constant offset.
                    let loc = extract_store_location(func, block.id, idx, insn);
                    let id = graph.add_def(loc, latest_def, /*volatile=*/ false);
                    sites.by_site.insert(site, id);
                    latest_def = Some(id);
                }
                IrOp::Load => {
                    let loc = extract_load_location(func, block.id, idx, insn);
                    let id = graph.add_use(loc, latest_def);
                    sites.by_site.insert(site, id);
                }
                IrOp::AtomicStore | IrOp::AtomicLoad | IrOp::AtomicRmw | IrOp::AtomicCas => {
                    // Atomic ops are opaque barriers.
                    let id = graph.add_def(MemoryLocation::unknown(), latest_def, true);
                    sites.by_site.insert(site, id);
                    latest_def = Some(id);
                }
                IrOp::Call | IrOp::Callind | IrOp::Callother => {
                    // Calls clobber everything (no mod-ref summary yet).
                    let id = graph.add_def(MemoryLocation::unknown(), latest_def, false);
                    sites.by_site.insert(site, id);
                    latest_def = Some(id);
                }
                _ => {}
            }
        }
    }

    (graph, sites)
}

/// Try to extract a MemoryLocation for a Store instruction.
///
/// Store layout in this IR: inputs[0] = address, inputs[1] = value.
fn extract_store_location(
    _func: &SsaFunction,
    _bid: BlockId,
    _idx: usize,
    insn: &unlace_ir::IrInsn,
) -> MemoryLocation {
    if insn.inputs.is_empty() {
        return MemoryLocation::unknown();
    }
    // Store size = size of the value being stored (inputs[1]).
    let size = if insn.inputs.len() >= 2 {
        insn.inputs[1].size as u32
    } else {
        0
    };
    extract_location_from_address(&insn.inputs[0], size)
}

/// Try to extract a MemoryLocation for a Load instruction.
fn extract_load_location(
    _func: &SsaFunction,
    _bid: BlockId,
    _idx: usize,
    insn: &unlace_ir::IrInsn,
) -> MemoryLocation {
    if insn.inputs.is_empty() {
        return MemoryLocation::unknown();
    }
    extract_location_from_address(&insn.inputs[0], insn_size(insn))
}

fn extract_location_from_address(addr: &Varnode, size: u32) -> MemoryLocation {
    match addr.space {
        SpaceId::Const => MemoryLocation::global(addr.offset, size),
        SpaceId::Stack => MemoryLocation {
            space: SpaceId::Stack,
            offset: Some(addr.offset as i64),
            size,
        },
        _ => MemoryLocation::unknown(),
    }
}

fn insn_size(insn: &unlace_ir::IrInsn) -> u32 {
    insn.output.map(|o| o.size as u32).unwrap_or(0)
}

/// Convenience: get the clobber for a Load instruction at a specific site.
pub fn clobber_for_load(
    func: &SsaFunction,
    block: BlockId,
    insn_idx: usize,
    graph: &MemorySSAGraph,
    map: &MemorySsaMap,
) -> Option<MemoryAccessId> {
    // Verify the instruction is a load.
    let Some(b) = func.function.blocks.get(&block) else {
        return None;
    };
    let Some(insn) = b.insns.get(insn_idx) else {
        return None;
    };
    if insn.op != IrOp::Load {
        return None;
    }
    let site = AccessSite {
        block,
        insn_idx,
    };
    let use_id = map.by_site.get(&site)?;
    graph.get_clobbering_access(*use_id)
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;

    fn build_store_then_load() -> SsaFunction {
        // store [stack:-8], 42
        // r = load [stack:-8]
        // return r
        let r = Varnode::reg(0, 8);
        let stack_slot = Varnode::new(SpaceId::Stack, (-8i64) as u64, 8);

        let mut func = Function::new("test", BlockId(0), 0x1000);
        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![stack_slot, Varnode::constant(42, 8)],
            0x1000,
        ));
        b0.insns.push(IrInsn::with_output(
            IrOp::Load,
            r,
            smallvec![stack_slot],
            0x1004,
        ));
        b0.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![r],
            0x1008,
        ));
        func.insert_block(b0);
        build_ssa(func)
    }

    #[test]
    fn test_memory_ssa_builder_store_then_load() {
        let ssa = build_store_then_load();
        let (graph, map) = build_memory_ssa(&ssa);

        // Should have 1 store and 1 load.
        let store_site = AccessSite {
            block: BlockId(0),
            insn_idx: 0,
        };
        let load_site = AccessSite {
            block: BlockId(0),
            insn_idx: 1,
        };
        assert!(map.by_site.contains_key(&store_site));
        assert!(map.by_site.contains_key(&load_site));

        // Load's clobber should be the store.
        let clobber = clobber_for_load(&ssa, BlockId(0), 1, &graph, &map);
        let store_id = map.by_site[&store_site];
        assert_eq!(clobber, Some(store_id));
    }

    #[test]
    fn test_memory_ssa_builder_call_is_barrier() {
        // store [stack:-8], 42
        // call foo
        // r = load [stack:-8]
        // The call should clobber memory (conservative — no mod-ref summary).
        let r = Varnode::reg(0, 8);
        let stack_slot = Varnode::new(SpaceId::Stack, (-8i64) as u64, 8);

        let mut func = Function::new("test", BlockId(0), 0x1000);
        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![stack_slot, Varnode::constant(42, 8)],
            0x1000,
        ));
        b0.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::constant(0x2000, 8)],
            0x1004,
        ));
        b0.insns.push(IrInsn::with_output(
            IrOp::Load,
            r,
            smallvec![stack_slot],
            0x1008,
        ));
        b0.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![r],
            0x100C,
        ));
        func.insert_block(b0);
        let ssa = build_ssa(func);

        let (graph, map) = build_memory_ssa(&ssa);
        let load_site = AccessSite {
            block: BlockId(0),
            insn_idx: 2,
        };
        assert!(map.by_site.contains_key(&load_site));

        // The call site (insn 1) is the clobber, not the store.
        let call_site = AccessSite {
            block: BlockId(0),
            insn_idx: 1,
        };
        let call_id = map.by_site[&call_site];
        let clobber = clobber_for_load(&ssa, BlockId(0), 2, &graph, &map);
        assert_eq!(clobber, Some(call_id));
    }

    #[test]
    fn test_memory_ssa_builder_independent_stores_not_aliased() {
        // store [stack:-8], 42
        // store [stack:-16], 99
        // r = load [stack:-8] → clobber should be the first store, not the second.
        let r = Varnode::reg(0, 8);
        let slot_a = Varnode::new(SpaceId::Stack, (-8i64) as u64, 8);
        let slot_b = Varnode::new(SpaceId::Stack, (-16i64) as u64, 8);

        let mut func = Function::new("test", BlockId(0), 0x1000);
        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![slot_a, Varnode::constant(42, 8)],
            0x1000,
        ));
        b0.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![slot_b, Varnode::constant(99, 8)],
            0x1004,
        ));
        b0.insns.push(IrInsn::with_output(
            IrOp::Load,
            r,
            smallvec![slot_a],
            0x1008,
        ));
        b0.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![r],
            0x100C,
        ));
        func.insert_block(b0);
        let ssa = build_ssa(func);

        let (graph, map) = build_memory_ssa(&ssa);
        let store_a = map.by_site[&AccessSite {
            block: BlockId(0),
            insn_idx: 0,
        }];
        let clobber = clobber_for_load(&ssa, BlockId(0), 2, &graph, &map);
        assert_eq!(clobber, Some(store_a));
    }
}
