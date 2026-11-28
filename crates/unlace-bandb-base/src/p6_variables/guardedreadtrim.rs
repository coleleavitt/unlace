//! Keep a call-written stack read inside the branch where it is evaluated.

use crate::context::{BlockId, OpId, VarnodeId};
use crate::funcdata::Funcdata;
use crate::stackreadscope::FuncdataStackreadscopeExt;
use crate::stackreadscope::MachineRead;
use unlace_base::space::spacetype;
use unlace_num::opcodes::OpCode;

#[cfg(test)]
use crate::stackreadscope::{mark_stack_read, record_propagated_read};

#[doc(hidden)]
pub fn guarded_block(data: &Funcdata, vn: VarnodeId, reads: &[OpId]) -> Option<BlockId> {
    let value = data.vbank().get(vn)?;
    if value.get_space().get_type() != spacetype::IPTR_SPACEBASE
        || !value.is_addr_tied()
        || reads.is_empty()
    {
        return None;
    }
    let def = value.get_def()?;
    let definition = data.obank().get(def)?;
    if definition.code() != OpCode::CPUI_INDIRECT {
        return None;
    }
    let effect = definition.get_in(1).and_then(|v| data.vbank().get(v))?;
    if effect.get_space().get_type() != spacetype::IPTR_IOP {
        return None;
    }
    let effect = crate::funcdata_varnode::op_iop_decode(effect.get_offset());
    let call = data.obank().get(effect)?;
    if !call.is_call() {
        return None;
    }
    let origin = call.get_parent()?;
    let graph = data.bblocks_ref();
    let origin_block = graph.block(origin);
    if origin_block.size_out() != 2 {
        return None;
    }
    let mut after_call = false;
    for op in data.bb_ops(origin) {
        if op == effect {
            after_call = true;
            continue;
        }
        if !after_call {
            continue;
        }
        let op = data.obank().get(op)?;
        if op.is_call() || matches!(op.code(), OpCode::CPUI_STORE | OpCode::CPUI_CALLOTHER) {
            return None;
        }
        if let Some(out) = op.get_out().and_then(|v| data.vbank().get(v))
            && value.characterize_overlap(out) != 0 {
                return None;
            }
    }
    if !after_call {
        return None;
    }
    let machine_reads = data.unlace_guarded_reads().by_call.get(&effect)?;
    let space = value.get_space();
    if value.get_size() <= 0 {
        return None;
    }
    let end = value
        .get_offset()
        .checked_add(value.get_size() as u64 - 1)?;
    if end > space.get_highest() {
        return None;
    }
    for read in data
        .unlace_guarded_reads()
        .reads()
        .filter(|read| read.space == space.get_index())
    {
        if read.size <= 0
            || read
                .offset
                .checked_add(read.size as u64 - 1)
                .is_none_or(|end| end > space.get_highest())
        {
            return None;
        }
    }
    let overlaps = |read: &&MachineRead| {
        read.space == space.get_index()
            && read.offset <= end
            && value.get_offset() <= read.offset + (read.size as u64 - 1)
    };
    if !machine_reads.iter().any(|read| overlaps(&read))
        || !data
            .unlace_guarded_reads()
            .reads()
            .any(|read| overlaps(&read))
    {
        return None;
    }
    (0..origin_block.size_out())
        .map(|slot| origin_block.get_out(slot))
        .find(|&candidate| {
            candidate != origin
                && data
                    .unlace_guarded_reads()
                    .reads()
                    .filter(overlaps)
                    .all(|read| {
                        read.block != origin
                            && graph.arena.get(read.block).is_some_and(|block| {
                                block.get_type() == crate::block::BlockType::Basic
                                    && block.get_parent() == graph.root
                            })
                    })
                && graph.block(candidate).size_in() == 1
                && graph.block(candidate).get_in(0) == origin
                && reads.iter().all(|&read| {
                    let Some(op) = data.obank().get(read) else {
                        return false;
                    };
                    if op.get_slot(vn) < 0 {
                        return false;
                    }
                    let Some(parent) = op.get_parent() else {
                        return false;
                    };
                    if op.code() == OpCode::CPUI_MULTIEQUAL {
                        (0..op.num_input())
                            .filter(|&slot| op.get_in(slot) == Some(vn))
                            .all(|slot| {
                                graph.dominates(candidate, Some(graph.block(parent).get_in(slot)))
                            })
                    } else {
                        graph.dominates(candidate, Some(parent))
                    }
                })
        })
}

/// Fill this pass's hooks ([`crate::passhooks`]).
pub fn provide(hooks: &mut crate::passhooks::UnlaceHookSlots) {
    hooks.guardedreadtrim_guarded_block = Some(guarded_block);
}

#[cfg(test)]
mod tests;
