//! SROA rewrite planning.

use crate::sroa::StackSlotPartition;

#[derive(Clone, Debug, PartialEq, Eq)]
pub enum SroaRewriteAction {
    SplitSlot { slot_offset: i64, fragments: usize },
}

pub fn plan_sroa_rewrites(partitions: &[StackSlotPartition]) -> Vec<SroaRewriteAction> {
    partitions
        .iter()
        .filter(|partition| partition.is_scalarizable() && partition.fragments.len() > 1)
        .map(|partition| SroaRewriteAction::SplitSlot {
            slot_offset: partition.slot_offset,
            fragments: partition.fragments.len(),
        })
        .collect()
}

#[cfg(test)]
mod tests {
    use crate::sroa::{StackSlotFragment, StackSlotPartition};

    use super::*;

    #[test]
    fn plans_split_for_multi_fragment_slot() {
        let partitions = vec![StackSlotPartition {
            slot_offset: -16,
            lost_provenance: false,
            fragments: vec![
                StackSlotFragment {
                    offset: 0,
                    width: 4,
                    loads: 1,
                    stores: 1,
                },
                StackSlotFragment {
                    offset: 4,
                    width: 4,
                    loads: 1,
                    stores: 0,
                },
            ],
        }];

        assert_eq!(
            plan_sroa_rewrites(&partitions),
            vec![SroaRewriteAction::SplitSlot {
                slot_offset: -16,
                fragments: 2
            }]
        );
    }
}
