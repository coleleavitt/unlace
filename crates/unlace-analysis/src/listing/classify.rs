//! Flow classification of a decoded instruction's p-code (design doc §4.3).
//!
//! [`classify`] is a faithful transliteration of the decompiler's single source
//! of truth, `p2_lift/flow.rs::xref_control_flow` (`flow.rs:1039-1185`). It maps
//! the flat p-code op list the SLEIGH decoder emits for one machine instruction
//! into a [`FlowType`], the list of static control targets, and the fall-through
//! VMA. It performs no decode and needs no engine — it is pure over the ops, so
//! it is unit-tested directly (see the tests at the bottom).
//!
//! Three load-bearing rules carried over from `flow.rs` (the design's gotchas):
//!
//!  1. **constant-space `in0` is p-code-relative, not a VMA.** A BRANCH/CBRANCH
//!     whose `in0` is in the constant space is an *intra-instruction* relative
//!     branch (a multi-op instruction branching within itself); for
//!     single-instruction flow it resolves to fall-through and is never a real
//!     target. Only a non-constant `in0` carries an absolute target VMA
//!     (`flow.rs:1067-1109`). Always test `is_constant()` first.
//!  2. **fall-through is decided by the LAST op, not the first.** An
//!     instruction's *targets* come from every op, but its *fall-through* is the
//!     last-op test only: it falls through UNLESS the last op is
//!     BRANCH / BRANCHIND / RETURN (`flow.rs:1170-1183`). An instruction that
//!     emits NO ops falls through.
//!  3. **delay slots are already folded into `len`** by `one_instruction`, so
//!     `fall_vma = vma + len` is correct — never re-decode the delay slot.

use unlace_num::opcodes::OpCode;

use super::model::{FlowKind, FlowType, RawOp};

/// The result of classifying one instruction's p-code.
pub struct Classified {
    /// The instruction's flow type (predicate set + kind).
    pub flow: FlowType,
    /// Static control targets (absolute VMAs): branch/call destinations.
    pub flows: Vec<u64>,
    /// The fall-through VMA, or `None` for a terminal instruction.
    pub fall_through: Option<u64>,
}

/// Classify the p-code `ops` emitted for the instruction at `vma` of byte length
/// `len`. Faithful to `xref_control_flow` (`flow.rs:1039-1185`).
///
/// `flows` collects only *statically derivable* absolute targets: constant-space
/// (p-code-relative) branch operands and indirect (BRANCHIND/CALLIND) ops never
/// contribute a target. The fall-through is the last-op test (gotcha 2).
///
/// A predicated call (ARM `blgt`, A32 or in a Thumb IT block) lifts to a
/// `CBRANCH` to the next instruction ahead of its `CALL`. That skip is the
/// call's fall-through, not a callee, so it is not one of a call's `flows`.
/// Neither is any other branch a returning call instruction carries: a call
/// that ends an ARC zero-overhead loop is prefixed with the branch back to the
/// loop start, which is a jump inside the caller. Every flow of a call is
/// read as a callee, so only the `CALL` targets remain.
pub fn classify(ops: &[RawOp], vma: u64, len: u32) -> Classified {
    let fall_vma = vma.wrapping_add(len as u64);
    let mut flows: Vec<u64> = Vec::new();
    let mut jumps: Vec<usize> = Vec::new();
    let mut flow = FlowType::default();

    // Per-op target collection + kind/predicate accumulation. The op order is
    // observable in flow.rs; we walk every op so a multi-op instruction's
    // targets are all collected (the last-op test below decides fall-through).
    for op in ops {
        match op.opcode {
            OpCode::CPUI_CBRANCH => {
                // Conditional branch: target unless the in0 is p-code-relative
                // (constant space), which resolves to fall-through (gotcha 1).
                if let Some(target) = absolute_branch_target(op) {
                    jumps.push(flows.len());
                    flows.push(target);
                }
                flow.kind = FlowKind::ConditionalBranch;
                flow.is_jump = true;
                flow.is_conditional = true;
            }
            OpCode::CPUI_BRANCH => {
                if let Some(target) = absolute_branch_target(op) {
                    jumps.push(flows.len());
                    flows.push(target);
                }
                flow.kind = FlowKind::UnconditionalBranch;
                flow.is_jump = true;
            }
            OpCode::CPUI_BRANCHIND => {
                // Indirect/computed jump: no static target (deferred jump-table
                // resolution, design §8). Recorded as computed/indirect.
                flow.kind = FlowKind::ComputedJump;
                flow.is_jump = true;
                flow.is_computed = true;
                flow.is_indirect = true;
            }
            OpCode::CPUI_CALL => {
                // CALL target == in0 (flow.rs CALL case; the in0 address is the
                // callee entry). It is a code address, never constant-relative.
                if let Some(target) = absolute_branch_target(op) {
                    flows.push(target);
                }
                flow.kind = FlowKind::Call;
                flow.is_call = true;
            }
            OpCode::CPUI_CALLIND => {
                // Indirect call: no static target, but it still falls through.
                flow.kind = FlowKind::ComputedCall;
                flow.is_call = true;
                flow.is_computed = true;
                flow.is_indirect = true;
            }
            OpCode::CPUI_CALLOTHER => {
                flow.kind = FlowKind::CallOther;
            }
            OpCode::CPUI_RETURN => {
                flow.kind = FlowKind::Return;
                flow.is_terminal = true;
            }
            _ => {}
        }
    }

    // Fall-through is the LAST-op test (gotcha 2): falls through unless the last
    // op is BRANCH / BRANCHIND / RETURN. No ops at all ⇒ falls through.
    // A call whose own p-code ends in a RETURN guarded by a CBRANCH to the next
    // instruction still falls through there: SPARC lifts `call` as
    // `didrestore = 0; CALL f; if (didrestore == 0) goto next; RETURN o7`, the
    // RETURN only for a callee that ran `restore` in its delay slot.
    let returning_call = flow.is_call
        && matches!(ops.last(), Some(last) if last.opcode == OpCode::CPUI_RETURN)
        && jumps.iter().any(|&at| flows[at] == fall_vma);
    let has_fallthrough = returning_call
        || match ops.last() {
            None => true,
            Some(last) => !matches!(
                last.opcode,
                OpCode::CPUI_BRANCH | OpCode::CPUI_BRANCHIND | OpCode::CPUI_RETURN
            ),
        };
    flow.has_fallthrough = has_fallthrough;
    let fall_through = has_fallthrough.then_some(fall_vma);
    if flow.is_call && has_fallthrough {
        for at in jumps.into_iter().rev() {
            flows.remove(at);
        }
    }

    Classified {
        flow,
        flows,
        fall_through,
    }
}

impl Classified {
    /// The skip a predicated instruction (`ldrne`, `moveq`, `popeq {..,pc}`,
    /// `bxne r3`) lifts to ahead of its own `ops`, when it is one of `flows`:
    /// a `CBRANCH` to the next instruction that other ops follow. It is a flow
    /// like any other, so every walk still takes it, but it is not a branch
    /// the code makes: Ghidra's SLEIGH keeps a `goto inst_next` out of an
    /// instruction's flows. A conditional branch whose label is the next
    /// instruction (`bne` to the next line) is its only op and keeps its
    /// target.
    pub fn condition_skip(&self, ops: &[RawOp], vma: u64, len: u32) -> Option<u64> {
        let skip = vma.wrapping_add(u64::from(len));
        let (_, body) = ops.split_last()?;
        (self.flows.contains(&skip)
            && body.iter().any(|op| {
                op.opcode == OpCode::CPUI_CBRANCH && absolute_branch_target(op) == Some(skip)
            }))
        .then_some(skip)
    }

    /// The skip of a predicated computed jump (A32 `addls pc,pc,rN,lsl #2`,
    /// Thumb `it ne; bxne r3`): the `CBRANCH` to the next instruction it lifts
    /// to ahead of its `BRANCHIND`. [`classify`] keeps the skip among `flows`
    /// with no fall-through, so every consumer sees one shape; a walk that reads
    /// A32 tables asks for it to tell a table dispatch from other jumps.
    pub fn predicated_skip(&self, vma: u64, len: u32) -> Option<u64> {
        let skip = vma.wrapping_add(u64::from(len));
        (self.flow.is_computed
            && self.flow.is_jump
            && !self.flow.is_call
            && self.fall_through.is_none())
        .then_some(skip)
        .filter(|skip| self.flows.contains(skip))
    }
}

/// The absolute target VMA carried by a branch/call op's `in0`, or `None` if the
/// `in0` is constant-space (p-code-relative, intra-instruction — gotcha 1) or
/// absent.
fn absolute_branch_target(op: &RawOp) -> Option<u64> {
    let in0 = op.in0.as_ref()?;
    let addr = in0.get_addr();
    if addr.is_constant() {
        // p-code-relative: resolves to fall-through, never a real target.
        None
    } else {
        Some(addr.get_offset())
    }
}

#[cfg(test)]
mod tests;
