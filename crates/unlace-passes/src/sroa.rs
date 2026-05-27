//! Stack-slot scalar replacement analysis.
//!
//! This module provides the deterministic partitioning step used by SROA/SRA:
//! group recovered stack accesses by logical slot and summarize the byte
//! fragments touched inside each slot.

use std::collections::BTreeMap;

use unlace_ir::ssa::{SsaFunction, StackAccess};

#[derive(Clone, Debug, PartialEq, Eq)]
pub struct StackSlotFragment {
    pub offset: i64,
    pub width: u8,
    pub loads: u32,
    pub stores: u32,
}

#[derive(Clone, Debug, PartialEq, Eq)]
pub struct StackSlotPartition {
    pub slot_offset: i64,
    pub fragments: Vec<StackSlotFragment>,
    pub lost_provenance: bool,
}

impl StackSlotPartition {
    pub fn is_scalarizable(&self) -> bool {
        !self.lost_provenance
            && !self.fragments.is_empty()
            && fragments_do_not_overlap(&self.fragments)
    }
}

pub fn collect_stack_slot_partitions(func: &SsaFunction) -> Vec<StackSlotPartition> {
    let mut by_slot: BTreeMap<i64, BTreeMap<(i64, u8), StackSlotFragment>> = BTreeMap::new();
    let mut lost_by_slot: BTreeMap<i64, bool> = BTreeMap::new();

    for access in &func.stack_accesses {
        let slot = access.resolved_slot.unwrap_or(access.delta);
        let rel = access.delta.saturating_sub(slot);
        let entry = by_slot
            .entry(slot)
            .or_default()
            .entry((rel, access.width))
            .or_insert(StackSlotFragment {
                offset: rel,
                width: access.width,
                loads: 0,
                stores: 0,
            });
        if access.is_store {
            entry.stores = entry.stores.saturating_add(1);
        } else {
            entry.loads = entry.loads.saturating_add(1);
        }
        *lost_by_slot.entry(slot).or_default() |= access.lost_provenance;
    }

    by_slot
        .into_iter()
        .map(|(slot_offset, fragments)| StackSlotPartition {
            slot_offset,
            fragments: fragments.into_values().collect(),
            lost_provenance: lost_by_slot.get(&slot_offset).copied().unwrap_or(false),
        })
        .collect()
}

fn fragments_do_not_overlap(fragments: &[StackSlotFragment]) -> bool {
    let mut prev_end = None;
    for fragment in fragments {
        let start = fragment.offset;
        let end = start.saturating_add(i64::from(fragment.width));
        if let Some(prev_end) = prev_end
            && start < prev_end
        {
            return false;
        }
        prev_end = Some(end);
    }
    true
}

#[allow(dead_code)]
fn _assert_stack_access_shape(_: &StackAccess) {}

#[cfg(test)]
mod tests {
    use unlace_ir::ssa::{StackAccess, build_ssa};
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp};

    use super::*;

    fn empty_func() -> SsaFunction {
        let mut function = Function::new("sroa", BlockId(0), 0x1000);
        let mut block = BasicBlock::new(BlockId(0));
        block.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec::smallvec![],
            0x1000,
        ));
        function.insert_block(block);
        build_ssa(function)
    }

    fn access(delta: i64, width: u8, is_store: bool, resolved_slot: Option<i64>) -> StackAccess {
        StackAccess {
            source_addr: 0x1000,
            base_register: "rsp".into(),
            delta,
            width,
            is_store,
            resolved_slot,
            lost_provenance: false,
        }
    }

    #[test]
    fn partitions_stack_accesses_by_slot() {
        let mut func = empty_func();
        func.stack_accesses = vec![
            access(-16, 4, true, Some(-16)),
            access(-12, 4, false, Some(-16)),
            access(-32, 8, true, Some(-32)),
        ];

        let partitions = collect_stack_slot_partitions(&func);

        assert_eq!(partitions.len(), 2);
        assert_eq!(partitions[0].slot_offset, -32);
        assert_eq!(partitions[1].slot_offset, -16);
        assert!(partitions[1].is_scalarizable());
        assert_eq!(partitions[1].fragments.len(), 2);
    }

    #[test]
    fn overlapping_fragments_are_not_scalarizable() {
        let partition = StackSlotPartition {
            slot_offset: -16,
            fragments: vec![
                StackSlotFragment {
                    offset: 0,
                    width: 8,
                    loads: 0,
                    stores: 1,
                },
                StackSlotFragment {
                    offset: 4,
                    width: 8,
                    loads: 1,
                    stores: 0,
                },
            ],
            lost_provenance: false,
        };

        assert!(!partition.is_scalarizable());
    }
}
