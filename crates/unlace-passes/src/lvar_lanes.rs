//! Post-SSA register-lane diagnostics for local-variable recovery.
//!
//! This is the first measurable slice toward a real lane-aware lvar
//! allocator: it groups exact-width SSA varnodes by physical register family
//! and reports whether observed byte lanes overlap or remain disjoint.

use std::collections::{BTreeMap, BTreeSet};

use unlace_ir::BlockId;
use unlace_ir::ssa::{SsaFunction, SsaVarnode, VarnodeSlot};

#[derive(Clone, Debug, PartialEq, Eq, PartialOrd, Ord)]
pub struct LaneSite {
    pub bid: BlockId,
    pub insn_idx: usize,
    pub slot: VarnodeSlot,
}

#[derive(Clone, Debug, PartialEq, Eq)]
pub struct RegisterLane {
    pub ssa: SsaVarnode,
    pub byte_offset: u8,
    pub size: u8,
    pub sites: Vec<LaneSite>,
}

#[derive(Copy, Clone, Debug, PartialEq, Eq)]
pub enum LaneDecision {
    Coalesce,
    SplitDisjoint,
    SplitOverlapping,
}

#[derive(Clone, Debug, PartialEq, Eq)]
pub struct RegisterLaneGroup {
    pub parent_offset: u64,
    pub lanes: Vec<RegisterLane>,
    pub decision: LaneDecision,
}

pub fn analyze_register_lanes(func: &SsaFunction) -> Vec<RegisterLaneGroup> {
    let mut by_lane: BTreeMap<(u64, SsaVarnode, u8, u8), Vec<LaneSite>> = BTreeMap::new();
    for (key, &ssa) in &func.var_map {
        let Some((parent, byte_offset)) = gpr_lane(ssa.base.offset, ssa.base.size) else {
            continue;
        };
        let (bid, insn_idx, slot) = key;
        by_lane
            .entry((parent, ssa, byte_offset, ssa.base.size))
            .or_default()
            .push(LaneSite {
                bid: *bid,
                insn_idx: *insn_idx,
                slot: slot.clone(),
            });
    }

    let mut groups: BTreeMap<u64, Vec<RegisterLane>> = BTreeMap::new();
    for ((parent, ssa, byte_offset, size), sites) in by_lane {
        groups.entry(parent).or_default().push(RegisterLane {
            ssa,
            byte_offset,
            size,
            sites,
        });
    }

    groups
        .into_iter()
        .filter_map(|(parent_offset, mut lanes)| {
            lanes.sort_by_key(|lane| (lane.byte_offset, lane.size, lane.ssa.version));
            let decision = classify_lanes(&lanes);
            (lanes.len() > 1).then_some(RegisterLaneGroup {
                parent_offset,
                lanes,
                decision,
            })
        })
        .collect()
}

fn classify_lanes(lanes: &[RegisterLane]) -> LaneDecision {
    if lanes.len() <= 1 {
        return LaneDecision::Coalesce;
    }

    let mut ranges = BTreeSet::new();
    let mut has_overlap = false;
    for lane in lanes {
        let range = (lane.byte_offset, lane.byte_offset.saturating_add(lane.size));
        for &(start, end) in &ranges {
            if range.0 < end && start < range.1 && range != (start, end) {
                has_overlap = true;
            }
        }
        ranges.insert(range);
    }

    if has_overlap {
        LaneDecision::SplitOverlapping
    } else {
        LaneDecision::SplitDisjoint
    }
}

fn gpr_lane(offset: u64, size: u8) -> Option<(u64, u8)> {
    if size == 0 || size > 8 || offset >= 0x100 {
        return None;
    }
    let parent = offset & !7;
    let byte_offset = (offset - parent) as u8;
    (byte_offset.saturating_add(size) <= 8).then_some((parent, byte_offset))
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, Function, IrInsn, IrOp, Varnode};

    use super::*;
    use crate::abi_clobber::RAX;

    #[test]
    fn lane_analysis_splits_disjoint_al_ah_lanes() {
        let mut func = Function::new("lanes", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::with_output(
            IrOp::Copy,
            Varnode::reg(RAX, 1),
            smallvec![Varnode::constant(1, 1)],
            0x1000,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::Copy,
            Varnode::reg(RAX + 1, 1),
            smallvec![Varnode::constant(2, 1)],
            0x1001,
        ));
        func.insert_block(bb);

        let ssa = build_ssa(func);
        let groups = analyze_register_lanes(&ssa);
        let rax = groups
            .iter()
            .find(|group| group.parent_offset == RAX)
            .expect("RAX lane group");
        assert_eq!(rax.decision, LaneDecision::SplitDisjoint);
        assert_eq!(
            rax.lanes
                .iter()
                .map(|lane| (lane.byte_offset, lane.size))
                .collect::<Vec<_>>(),
            vec![(0, 1), (1, 1)]
        );
    }
}
