//! REP MOVS / STOS / CMPS idiom recognition.
//!
//! x86 emits REP-prefixed string ops as a tight self-loop:
//!
//! ```text
//! .L0:
//!   if RCX == 0 -> exit
//!   *RDI = *RSI       (MOVS)  /  *RDI = RAX  (STOS)
//!   RDI += elem_size
//!   RSI += elem_size  (MOVS only)
//!   RCX -= 1
//!   goto .L0
//! ```
//!
//! This pass recognises the canonical shape and replaces the loop body
//! with a single `Callother(intrinsic_id, ...)` call so a downstream
//! printer can render it as `memcpy(...)` / `memset(...)` / `memcmp(...)`.
//!
//! **MVP scope** — recognises REP MOVSB and REP STOSB only (the most
//! common). Wider lane sizes and CMPS variants are TODO.

use unlace_ir::IrOp;
use unlace_ir::ssa::SsaFunction;

use crate::pass::{Pass, PassError};

/// Callother intrinsic id reserved for `REP MOVSx`-recognised loops.
pub const CALLOTHER_X86_REP_MOVS: u64 = 0x380;

/// Callother intrinsic id reserved for `REP STOSx`-recognised loops.
pub const CALLOTHER_X86_REP_STOS: u64 = 0x381;

/// Callother intrinsic id reserved for `REP CMPSx`-recognised loops.
pub const CALLOTHER_X86_REP_CMPS: u64 = 0x382;

/// Recognises REP MOVS / STOS / CMPS loops and folds them to libc-primitive
/// intrinsic calls. Currently a *detection-only* pass — the recognition
/// returns `Ok(false)` so that no IR mutation happens during the v1 freeze;
/// the recognised pattern is exposed via [`detect_rep_string_loops`] for
/// downstream consumers.
#[derive(Default)]
pub struct RepStringIdiomPass;

impl Pass for RepStringIdiomPass {
    fn name(&self) -> &str {
        "rep-string-idiom"
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let _ = detect_rep_string_loops(func);
        Ok(false)
    }
}

/// Recovered REP-string-loop classification.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum RepStringKind {
    Movs { elem_size: u8 },
    Stos { elem_size: u8 },
    Cmps { elem_size: u8 },
}

/// A detected REP-string loop: the SSA block id and the recognised kind.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct RepStringLoop {
    pub block_id: unlace_ir::BlockId,
    pub kind: RepStringKind,
}

/// Scan a function for REP-string loop shapes. Returns one entry per
/// detected loop. Recognition is purely structural — no IR is mutated.
pub fn detect_rep_string_loops(func: &SsaFunction) -> Vec<RepStringLoop> {
    let mut out = Vec::new();
    for (&block_id, block) in &func.function.blocks {
        // A REP loop is a single-block self-cycle ending in a Cbranch back
        // to the same block. Quick reject: must end in a control-flow op.
        if block.insns.is_empty() {
            continue;
        }
        let term = block.insns.last().expect("non-empty");
        if !matches!(term.op, IrOp::Cbranch | IrOp::Branch) {
            continue;
        }
        // Look for the canonical body shape:
        //   * at least one Load (MOVS / CMPS) or constant Store source (STOS)
        //   * at least one Store
        //   * an IntSub (the RCX -= 1 decrement)
        let mut has_load = false;
        let mut has_store = false;
        let mut has_decrement = false;
        for insn in &block.insns {
            match insn.op {
                IrOp::Load => has_load = true,
                IrOp::Store => has_store = true,
                IrOp::IntSub => has_decrement = true,
                _ => {}
            }
        }
        if !(has_store && has_decrement) {
            continue;
        }
        let kind = if has_load {
            // MOVS or CMPS — distinguish by counting stores. CMPS has zero
            // stores; MOVS has one. Our `has_store` flag was set for either.
            // For MVP, classify any (Load + Store + IntSub) self-loop as Movs.
            RepStringKind::Movs { elem_size: 1 }
        } else {
            RepStringKind::Stos { elem_size: 1 }
        };
        out.push(RepStringLoop { block_id, kind });
    }
    out
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;

    fn make_self_loop(insns: Vec<IrInsn>) -> SsaFunction {
        let mut func = Function::new("test", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns = insns;
        // Cbranch back to self.
        bb.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![Varnode::constant(0x1000, 8), Varnode::reg(0x10, 8)],
            0x10FF,
        ));
        func.insert_block(bb);
        build_ssa(func)
    }

    #[test]
    fn recognizes_rep_movsb_pattern() {
        // Body: Load *rsi, Store *rdi, IntSub rcx, 1.
        let space = Varnode::constant(unlace_ir::SpaceId::Ram as u64, 8);
        let rdi = Varnode::reg(0x10, 8);
        let rsi = Varnode::reg(0x18, 8);
        let rcx = Varnode::reg(0x20, 8);
        let val = Varnode::reg(0x100, 1);
        let insns = vec![
            IrInsn::with_output(IrOp::Load, val.clone(), smallvec![space.clone(), rsi.clone()], 0x1000),
            IrInsn::without_output(IrOp::Store, smallvec![space.clone(), rdi.clone(), val], 0x1004),
            IrInsn::with_output(
                IrOp::IntSub,
                rcx.clone(),
                smallvec![rcx.clone(), Varnode::constant(1, 8)],
                0x1008,
            ),
        ];
        let ssa = make_self_loop(insns);
        let loops = detect_rep_string_loops(&ssa);
        assert_eq!(loops.len(), 1);
        assert!(matches!(loops[0].kind, RepStringKind::Movs { .. }));
    }

    #[test]
    fn recognizes_rep_stosb_pattern() {
        // Body: Store *rdi (no Load), IntSub rcx, 1.
        let space = Varnode::constant(unlace_ir::SpaceId::Ram as u64, 8);
        let rdi = Varnode::reg(0x10, 8);
        let rax = Varnode::reg(0x00, 1);
        let rcx = Varnode::reg(0x20, 8);
        let insns = vec![
            IrInsn::without_output(IrOp::Store, smallvec![space, rdi, rax], 0x1004),
            IrInsn::with_output(
                IrOp::IntSub,
                rcx.clone(),
                smallvec![rcx, Varnode::constant(1, 8)],
                0x1008,
            ),
        ];
        let ssa = make_self_loop(insns);
        let loops = detect_rep_string_loops(&ssa);
        assert_eq!(loops.len(), 1);
        assert!(matches!(loops[0].kind, RepStringKind::Stos { .. }));
    }

    #[test]
    fn non_rep_loop_unchanged() {
        // A loop with neither a Store nor an IntSub.
        let rax = Varnode::reg(0x00, 8);
        let insns = vec![IrInsn::with_output(
            IrOp::Copy,
            rax.clone(),
            smallvec![Varnode::constant(42, 8)],
            0x1000,
        )];
        let ssa = make_self_loop(insns);
        let loops = detect_rep_string_loops(&ssa);
        assert!(loops.is_empty());
    }

    #[test]
    fn pass_run_returns_no_change_for_v1_freeze() {
        let space = Varnode::constant(unlace_ir::SpaceId::Ram as u64, 8);
        let rdi = Varnode::reg(0x10, 8);
        let rax = Varnode::reg(0x00, 1);
        let rcx = Varnode::reg(0x20, 8);
        let insns = vec![
            IrInsn::without_output(IrOp::Store, smallvec![space, rdi, rax], 0x1004),
            IrInsn::with_output(
                IrOp::IntSub,
                rcx.clone(),
                smallvec![rcx, Varnode::constant(1, 8)],
                0x1008,
            ),
        ];
        let mut ssa = make_self_loop(insns);
        let pass = RepStringIdiomPass::default();
        let changed = pass.run(&mut ssa).expect("pass runs");
        assert!(!changed, "MVP detection-only pass returns Ok(false)");
    }
}
