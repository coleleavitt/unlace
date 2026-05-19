//! MemorySSA-driven dead-store elimination.
//!
//! Uses [`build_memory_ssa`] to identify stores whose value is never read
//! before being clobbered by a later store to the same must-alias location.
//! Such stores are dead and can be removed.
//!
//! This is the production version of dead-store-elimination — replaces local
//! forward-scan heuristics with whole-function reasoning anchored on
//! MemorySSA def chains.

use unlace_ir::memory_ssa::{MemoryAccess, MemoryAccessId};
use unlace_ir::ssa::SsaFunction;
use unlace_ir::IrOp;

use crate::memory_ssa_builder::{build_memory_ssa, AccessSite};
use crate::pass::{Pass, PassError, PassPhase};

/// The MemorySSA-driven DSE pass.
#[derive(Default)]
pub struct MemorySsaDsePass;

impl Pass for MemorySsaDsePass {
    fn name(&self) -> &str {
        "memory-ssa-dse"
    }

    fn phase(&self) -> PassPhase {
        PassPhase::LocalOpt
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let (graph, map) = build_memory_ssa(func);

        // For each Def, check if it's dead (no Use reaches it before being
        // overwritten by another Def to a must-alias location).
        let mut dead_sites: Vec<AccessSite> = Vec::new();

        for (&site, &access_id) in &map.by_site {
            // Only consider sites whose access is a Def.
            let access = match graph.accesses.get(&access_id) {
                Some(MemoryAccess::Def {
                    is_volatile: false, ..
                }) => access_id,
                _ => continue,
            };
            // Only consider Store ops (not Call/AtomicX which are barriers).
            let Some(block) = func.function.blocks.get(&site.block) else {
                continue;
            };
            let Some(insn) = block.insns.get(site.insn_idx) else {
                continue;
            };
            if insn.op != IrOp::Store {
                continue;
            }

            // Is there any Use whose defining_access is this def? Or is there
            // a later must-alias Def that kills this one before any use sees it?
            if is_definitely_dead(&graph, access) {
                dead_sites.push(site);
            }
        }

        if dead_sites.is_empty() {
            return Ok(false);
        }

        // Remove dead stores by setting them to nop (Indirect = no-op marker).
        // We use Copy(0) → discard, which downstream passes will treat as dead.
        // Actually the cleanest is to skip emitting them. We'll mark the
        // instruction as IrOp::Indirect (a no-op placeholder).
        for site in &dead_sites {
            let Some(block) = func.function.blocks.get_mut(&site.block) else {
                continue;
            };
            let Some(insn) = block.insns.get_mut(site.insn_idx) else {
                continue;
            };
            // Convert to a no-op: an Indirect with no inputs.
            // (Indirect with empty inputs is conventionally a placeholder
            //  for "this instruction does nothing".)
            insn.op = IrOp::Indirect;
            insn.inputs = smallvec::smallvec![];
            insn.output = None;
            // Drop var_map entries for this site.
            let keys: Vec<_> = func
                .var_map
                .keys()
                .filter(|(b, i, _)| *b == site.block && *i == site.insn_idx)
                .cloned()
                .collect();
            for key in keys {
                func.var_map.remove(&key);
            }
        }

        Ok(true)
    }
}

/// Check whether a Def is definitively dead — no Use depends on it AND
/// it has a subsequent must-alias Def that clobbers it.
fn is_definitely_dead(
    graph: &unlace_ir::memory_ssa::MemorySSAGraph,
    def_id: MemoryAccessId,
) -> bool {
    let def_loc = match graph.accesses.get(&def_id) {
        Some(MemoryAccess::Def {
            location,
            is_volatile: false,
            ..
        }) => location.clone(),
        _ => return false,
    };

    // No Use depends on this def?
    let any_use = graph.accesses.values().any(|a| {
        matches!(a,
            MemoryAccess::Use { defining_access: Some(da), .. } if *da == def_id)
    });
    if any_use {
        return false;
    }

    // Is there a *later* def that must-aliases this location, and that later
    // def's chain still reaches back through this def (i.e., we are upstream
    // of it)? Conservative check: any other Def whose reaching_def chain
    // contains this one, AND whose location must-aliases ours.
    for access in graph.accesses.values() {
        if let MemoryAccess::Def {
            id,
            location: other_loc,
            reaching_def,
            ..
        } = access
        {
            if *id == def_id {
                continue;
            }
            if other_loc.must_alias(&def_loc) && chain_contains(graph, *reaching_def, def_id) {
                return true;
            }
        }
    }
    false
}

/// Walk the reaching_def chain from `start` and check if `target` is in it.
fn chain_contains(
    graph: &unlace_ir::memory_ssa::MemorySSAGraph,
    start: Option<MemoryAccessId>,
    target: MemoryAccessId,
) -> bool {
    let mut current = start;
    let mut steps = 0u32;
    const MAX_STEPS: u32 = 100;
    while let Some(id) = current {
        if id == target {
            return true;
        }
        steps += 1;
        if steps > MAX_STEPS {
            return false;
        }
        match graph.accesses.get(&id) {
            Some(MemoryAccess::Def { reaching_def, .. }) => current = *reaching_def,
            _ => return false,
        }
    }
    false
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, SpaceId, Varnode};

    use super::*;

    #[test]
    fn test_dse_overwritten_store_removed() {
        // store [stack:-8], 1
        // store [stack:-8], 2  ← overwrites the first store
        // r = load [stack:-8]  ← reads the second value
        // The first store should be removed.
        let r = Varnode::reg(0, 8);
        let slot = Varnode::new(SpaceId::Stack, (-8i64) as u64, 8);

        let mut func = Function::new("t", BlockId(0), 0x1000);
        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![slot, Varnode::constant(1, 8)],
            0x1000,
        ));
        b0.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![slot, Varnode::constant(2, 8)],
            0x1004,
        ));
        b0.insns
            .push(IrInsn::with_output(IrOp::Load, r, smallvec![slot], 0x1008));
        b0.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![r],
            0x100C,
        ));
        func.insert_block(b0);
        let mut ssa = build_ssa(func);

        let changed = MemorySsaDsePass.run(&mut ssa).unwrap();
        assert!(changed);

        // First store at idx 0 should now be Indirect (no-op).
        let block = &ssa.function.blocks[&BlockId(0)];
        assert_eq!(block.insns[0].op, IrOp::Indirect);
        // Second store at idx 1 should remain a Store.
        assert_eq!(block.insns[1].op, IrOp::Store);
    }

    #[test]
    fn test_dse_live_store_preserved() {
        // store [stack:-8], 42
        // r = load [stack:-8]
        // The store is live (load reads it).
        let r = Varnode::reg(0, 8);
        let slot = Varnode::new(SpaceId::Stack, (-8i64) as u64, 8);

        let mut func = Function::new("t", BlockId(0), 0x1000);
        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![slot, Varnode::constant(42, 8)],
            0x1000,
        ));
        b0.insns
            .push(IrInsn::with_output(IrOp::Load, r, smallvec![slot], 0x1004));
        b0.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![r],
            0x1008,
        ));
        func.insert_block(b0);
        let mut ssa = build_ssa(func);

        let changed = MemorySsaDsePass.run(&mut ssa).unwrap();
        assert!(!changed, "live store should not be removed");

        let block = &ssa.function.blocks[&BlockId(0)];
        assert_eq!(block.insns[0].op, IrOp::Store);
    }

    #[test]
    fn test_dse_store_before_opaque_call_preserved() {
        // store [stack:-8], 42
        // call foo  ← could read the slot
        // The store must be preserved because the call could observe it.
        let slot = Varnode::new(SpaceId::Stack, (-8i64) as u64, 8);

        let mut func = Function::new("t", BlockId(0), 0x1000);
        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![slot, Varnode::constant(42, 8)],
            0x1000,
        ));
        b0.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::constant(0x2000, 8)],
            0x1004,
        ));
        b0.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1008,
        ));
        func.insert_block(b0);
        let mut ssa = build_ssa(func);

        let changed = MemorySsaDsePass.run(&mut ssa).unwrap();
        // The call is a Def at an unknown location; it doesn't must-alias the
        // stack slot, so DSE doesn't see a clobbering def. Store stays alive.
        assert!(!changed);
        let block = &ssa.function.blocks[&BlockId(0)];
        assert_eq!(block.insns[0].op, IrOp::Store);
    }

    #[test]
    fn test_dse_independent_stores_both_preserved() {
        // store [stack:-8], 1
        // store [stack:-16], 2   ← different slot, doesn't clobber
        // r = load [stack:-8]    ← reads the first store
        // Both stores should be preserved.
        let r = Varnode::reg(0, 8);
        let slot_a = Varnode::new(SpaceId::Stack, (-8i64) as u64, 8);
        let slot_b = Varnode::new(SpaceId::Stack, (-16i64) as u64, 8);

        let mut func = Function::new("t", BlockId(0), 0x1000);
        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![slot_a, Varnode::constant(1, 8)],
            0x1000,
        ));
        b0.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![slot_b, Varnode::constant(2, 8)],
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
        let mut ssa = build_ssa(func);

        let changed = MemorySsaDsePass.run(&mut ssa).unwrap();
        assert!(!changed);
        let block = &ssa.function.blocks[&BlockId(0)];
        assert_eq!(block.insns[0].op, IrOp::Store);
        assert_eq!(block.insns[1].op, IrOp::Store);
    }
}
