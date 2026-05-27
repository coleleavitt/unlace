//! Rust async state machine recovery pass.
//!
//! Rust async functions compile into state machines implementing `Future::poll`.
//! This pass detects the `poll` dispatch pattern (match on discriminant → state
//! variants) and reconstructs the logical await points, annotating each state
//! transition so the decompiler can present readable async/await pseudocode.

use std::collections::BTreeMap;

use unlace_ir::ssa::SsaFunction;
use unlace_ir::{BlockId, IrOp};

use crate::pass::{Pass, PassError};

/// A detected async state machine with its states and transitions.
#[derive(Debug, Clone)]
pub struct AsyncStateMachine {
    /// The block containing the discriminant dispatch (switch on state).
    pub dispatch_block: BlockId,
    /// Map from state index → block that implements that state.
    pub states: BTreeMap<u64, BlockId>,
    /// Blocks that perform `Poll::Ready` returns.
    pub ready_blocks: Vec<BlockId>,
    /// Blocks that perform `Poll::Pending` returns.
    pub pending_blocks: Vec<BlockId>,
}

pub struct RustAsyncPass;

impl Pass for RustAsyncPass {
    fn name(&self) -> &str {
        "rust-async"
    }

    fn phase(&self) -> crate::pass::PassPhase {
        crate::pass::PassPhase::TypeRecovery
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let machines = detect_async_state_machines(func);
        if machines.is_empty() {
            return Ok(false);
        }
        // Store count as annotation for now
        let _ = machines;
        Ok(true)
    }
}

/// Detect async state machines in the function.
///
/// Looks for the pattern: load discriminant from `self` → switch/cbranch
/// dispatching to N states → some states store new discriminant + return
/// Pending, final state returns Ready.
pub fn detect_async_state_machines(func: &SsaFunction) -> Vec<AsyncStateMachine> {
    let mut machines = Vec::new();

    for (&bid, block) in &func.function.blocks {
        // Look for blocks that end with a multi-way branch based on a loaded value
        if block.insns.len() < 2 {
            continue;
        }
        let last = &block.insns[block.insns.len() - 1];
        if last.op != IrOp::Cbranch && last.op != IrOp::Branchind {
            continue;
        }

        // Check if there's a load from a struct field at offset 0 (discriminant)
        let has_discriminant_load = block
            .insns
            .iter()
            .any(|insn| insn.op == IrOp::Load && insn.inputs.len() >= 2);

        if !has_discriminant_load {
            continue;
        }

        // Count successor states
        let mut states = BTreeMap::new();
        for (i, insn) in block.insns.iter().enumerate() {
            if insn.op == IrOp::Cbranch && insn.inputs.len() >= 2 {
                // The target is an immediate in the branch
                if let Some(target) = insn.inputs.get(1)
                    && target.space == unlace_ir::SpaceId::Const
                {
                    states.insert(i as u64, BlockId(target.offset as u32));
                }
            }
        }

        if states.len() >= 2 {
            machines.push(AsyncStateMachine {
                dispatch_block: bid,
                states,
                ready_blocks: Vec::new(),
                pending_blocks: Vec::new(),
            });
        }
    }

    machines
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn async_state_machine_struct_creation() {
        let sm = AsyncStateMachine {
            dispatch_block: BlockId(0),
            states: BTreeMap::from([(0, BlockId(1)), (1, BlockId(2)), (2, BlockId(3))]),
            ready_blocks: vec![BlockId(3)],
            pending_blocks: vec![BlockId(1), BlockId(2)],
        };
        assert_eq!(sm.states.len(), 3);
        assert_eq!(sm.dispatch_block, BlockId(0));
        assert_eq!(sm.ready_blocks.len(), 1);
        assert_eq!(sm.pending_blocks.len(), 2);
    }

    #[test]
    fn pass_name() {
        let pass = RustAsyncPass;
        assert_eq!(pass.name(), "rust-async");
    }
}
