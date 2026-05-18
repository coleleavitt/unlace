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
//! **Scope** — recognises REP MOVSx, REP STOSx (lane sizes 1/2/4/8 →
//! `memcpy` / `memset` with a `count * lane_size` byte count), REPE CMPSB
//! (→ `memcmp`) and REPNE SCASB-with-zero-needle (→ `strlen`). The lane
//! size is read from the access width of the Load/Store inside the loop
//! (`varnode.size`); loops whose Load and Store disagree, or whose lane
//! isn't one of {1,2,4,8}, are rejected.

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

    fn phase(&self) -> crate::pass::PassPhase {
        crate::pass::PassPhase::LocalOpt
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let _ = detect_rep_string_loops(func);
        Ok(false)
    }
}

/// Recovered REP-string-loop classification.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum RepStringKind {
    Movs {
        elem_size: u8,
    },
    Stos {
        elem_size: u8,
    },
    Cmps {
        elem_size: u8,
    },
    /// REPE CMPSB → `memcmp(rsi, rdi, rcx)`: two Loads (rsi, rdi),
    /// no Store, IntSub on the counter, and a compare exit.
    Memcmp {
        elem_size: u8,
    },
    /// REPNE SCASB scanning for a zero needle (AL == 0) → `strlen(rdi)`:
    /// one Load (rdi), no Store, IntSub on the counter, and a compare
    /// against a constant-zero operand.
    Strlen {
        elem_size: u8,
    },
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
        // Tally body shape:
        //   * Loads  — MOVS has 1, CMPS has 2, STOS has 0, SCAS has 1.
        //   * Stores — MOVS/STOS = 1, CMPS/SCAS = 0.
        //   * IntSub — the RCX -= 1 decrement, present in every variant.
        //   * Compare with a constant-zero operand — characteristic of SCASB
        //     used as `strlen` (the AL needle is 0).
        let mut load_count = 0usize;
        let mut store_count = 0usize;
        let mut has_decrement = false;
        let mut has_zero_compare = false;
        let mut has_compare = false;
        // Access-width tracking — every Load's output and every Store's
        // value-operand should agree on the lane size. We collect them and
        // require unanimity later.
        let mut access_widths: smallvec::SmallVec<[u8; 4]> = smallvec::SmallVec::new();
        for insn in &block.insns {
            match insn.op {
                IrOp::Load => {
                    load_count += 1;
                    if let Some(out) = insn.output {
                        access_widths.push(out.size);
                    }
                }
                IrOp::Store => {
                    store_count += 1;
                    // STORE(space, addr, value) — the stored value is input 2.
                    if let Some(val) = insn.inputs.get(2) {
                        access_widths.push(val.size);
                    }
                }
                IrOp::IntSub => has_decrement = true,
                IrOp::IntEqual | IrOp::IntNotequal => {
                    has_compare = true;
                    // "Known base" for strlen: one side is a constant 0.
                    if insn
                        .inputs
                        .iter()
                        .any(|v| v.space == unlace_ir::SpaceId::Const && v.offset == 0)
                    {
                        has_zero_compare = true;
                    }
                }
                _ => {}
            }
        }
        if !has_decrement {
            continue;
        }
        // Lane size: must be a single agreed-upon value in {1,2,4,8}.
        // If the body has no memory ops (e.g. malformed), default to 1.
        let lane_size = if access_widths.is_empty() {
            1u8
        } else {
            let first = access_widths[0];
            if access_widths.iter().any(|w| *w != first) {
                continue;
            }
            if !matches!(first, 1 | 2 | 4 | 8) {
                continue;
            }
            first
        };
        let kind = match (load_count, store_count) {
            // STOS: store-only, no load. Lane size 1/2/4/8 → STOSB/W/D/Q.
            (0, s) if s >= 1 => RepStringKind::Stos {
                elem_size: lane_size,
            },
            // MOVS: one load, one store (data copy). Lane 1/2/4/8 → MOVSB/W/D/Q.
            (1, s) if s >= 1 => RepStringKind::Movs {
                elem_size: lane_size,
            },
            // SCAS used as strlen: one load, no store, compare-vs-zero.
            // strlen() is byte-granular; reject wider lanes.
            (1, 0) if has_zero_compare && lane_size == 1 => RepStringKind::Strlen { elem_size: 1 },
            // CMPS: two loads, no store, compare between them. memcmp is
            // emitted as byte-count regardless of lane, but the recognition
            // here only handles byte CMPS for now.
            (n, 0) if n >= 2 && has_compare && lane_size == 1 => {
                RepStringKind::Memcmp { elem_size: 1 }
            }
            // Generic CMPS shape (compare absent but two loads) — fall back
            // to the bare `Cmps` classification so callers can still see it.
            (n, 0) if n >= 2 && lane_size == 1 => RepStringKind::Cmps { elem_size: 1 },
            _ => continue,
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
            IrInsn::with_output(IrOp::Load, val, smallvec![space, rsi], 0x1000),
            IrInsn::without_output(IrOp::Store, smallvec![space, rdi, val], 0x1004),
            IrInsn::with_output(
                IrOp::IntSub,
                rcx,
                smallvec![rcx, Varnode::constant(1, 8)],
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
                rcx,
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
    fn recognizes_repe_cmpsb_pattern_as_memcmp() {
        // REPE CMPSB body: Load *rsi, Load *rdi, IntEqual(a, b), IntSub rcx, 1.
        // No Store — that's what distinguishes CMPS from MOVS.
        let space = Varnode::constant(unlace_ir::SpaceId::Ram as u64, 8);
        let rdi = Varnode::reg(0x10, 8);
        let rsi = Varnode::reg(0x18, 8);
        let rcx = Varnode::reg(0x20, 8);
        let a = Varnode::reg(0x100, 1);
        let b = Varnode::reg(0x108, 1);
        let zf = Varnode::reg(0x200, 1);
        let insns = vec![
            IrInsn::with_output(IrOp::Load, a, smallvec![space, rsi], 0x1000),
            IrInsn::with_output(IrOp::Load, b, smallvec![space, rdi], 0x1002),
            IrInsn::with_output(IrOp::IntEqual, zf, smallvec![a, b], 0x1004),
            IrInsn::with_output(
                IrOp::IntSub,
                rcx,
                smallvec![rcx, Varnode::constant(1, 8)],
                0x1008,
            ),
        ];
        let ssa = make_self_loop(insns);
        let loops = detect_rep_string_loops(&ssa);
        assert_eq!(loops.len(), 1);
        assert!(
            matches!(loops[0].kind, RepStringKind::Memcmp { elem_size: 1 }),
            "expected Memcmp, got {:?}",
            loops[0].kind
        );
    }

    #[test]
    fn recognizes_repne_scasb_with_zero_needle_as_strlen() {
        // REPNE SCASB scanning for AL == 0 body:
        //   Load *rdi, IntEqual(loaded, 0), IntSub rcx, 1.
        // Single Load + zero-constant compare + no Store ⇒ strlen.
        let space = Varnode::constant(unlace_ir::SpaceId::Ram as u64, 8);
        let rdi = Varnode::reg(0x10, 8);
        let rcx = Varnode::reg(0x20, 8);
        let loaded = Varnode::reg(0x100, 1);
        let zf = Varnode::reg(0x200, 1);
        let insns = vec![
            IrInsn::with_output(IrOp::Load, loaded, smallvec![space, rdi], 0x1000),
            IrInsn::with_output(
                IrOp::IntEqual,
                zf,
                smallvec![loaded, Varnode::constant(0, 1)],
                0x1004,
            ),
            IrInsn::with_output(
                IrOp::IntSub,
                rcx,
                smallvec![rcx, Varnode::constant(1, 8)],
                0x1008,
            ),
        ];
        let ssa = make_self_loop(insns);
        let loops = detect_rep_string_loops(&ssa);
        assert_eq!(loops.len(), 1);
        assert!(
            matches!(loops[0].kind, RepStringKind::Strlen { elem_size: 1 }),
            "expected Strlen, got {:?}",
            loops[0].kind
        );
    }

    /// Helper: build a MOVS body at a given lane size.
    fn movs_body(lane: u8) -> Vec<IrInsn> {
        let space = Varnode::constant(unlace_ir::SpaceId::Ram as u64, 8);
        let rdi = Varnode::reg(0x10, 8);
        let rsi = Varnode::reg(0x18, 8);
        let rcx = Varnode::reg(0x20, 8);
        let val = Varnode::reg(0x100, lane);
        vec![
            IrInsn::with_output(IrOp::Load, val, smallvec![space, rsi], 0x1000),
            IrInsn::without_output(IrOp::Store, smallvec![space, rdi, val], 0x1004),
            IrInsn::with_output(
                IrOp::IntSub,
                rcx,
                smallvec![rcx, Varnode::constant(1, 8)],
                0x1008,
            ),
        ]
    }

    /// Helper: build a STOS body at a given lane size.
    fn stos_body(lane: u8) -> Vec<IrInsn> {
        let space = Varnode::constant(unlace_ir::SpaceId::Ram as u64, 8);
        let rdi = Varnode::reg(0x10, 8);
        let rax = Varnode::reg(0x00, lane);
        let rcx = Varnode::reg(0x20, 8);
        vec![
            IrInsn::without_output(IrOp::Store, smallvec![space, rdi, rax], 0x1004),
            IrInsn::with_output(
                IrOp::IntSub,
                rcx,
                smallvec![rcx, Varnode::constant(1, 8)],
                0x1008,
            ),
        ]
    }

    #[test]
    fn recognizes_rep_movsw_pattern_lane_2() {
        let ssa = make_self_loop(movs_body(2));
        let loops = detect_rep_string_loops(&ssa);
        assert_eq!(loops.len(), 1);
        assert!(
            matches!(loops[0].kind, RepStringKind::Movs { elem_size: 2 }),
            "expected MOVSW (lane 2), got {:?}",
            loops[0].kind
        );
    }

    #[test]
    fn recognizes_rep_movsd_pattern_lane_4() {
        let ssa = make_self_loop(movs_body(4));
        let loops = detect_rep_string_loops(&ssa);
        assert_eq!(loops.len(), 1);
        assert!(
            matches!(loops[0].kind, RepStringKind::Movs { elem_size: 4 }),
            "expected MOVSD (lane 4), got {:?}",
            loops[0].kind
        );
    }

    #[test]
    fn recognizes_rep_movsq_pattern_lane_8() {
        let ssa = make_self_loop(movs_body(8));
        let loops = detect_rep_string_loops(&ssa);
        assert_eq!(loops.len(), 1);
        assert!(
            matches!(loops[0].kind, RepStringKind::Movs { elem_size: 8 }),
            "expected MOVSQ (lane 8), got {:?}",
            loops[0].kind
        );
    }

    #[test]
    fn recognizes_rep_stosd_pattern_lane_4() {
        let ssa = make_self_loop(stos_body(4));
        let loops = detect_rep_string_loops(&ssa);
        assert_eq!(loops.len(), 1);
        assert!(
            matches!(loops[0].kind, RepStringKind::Stos { elem_size: 4 }),
            "expected STOSD (lane 4), got {:?}",
            loops[0].kind
        );
    }

    #[test]
    fn rejects_unsupported_lane_size() {
        // A 3-byte access is not a valid REP MOVSx lane.
        let ssa = make_self_loop(movs_body(3));
        let loops = detect_rep_string_loops(&ssa);
        assert!(
            loops.is_empty(),
            "lane=3 must not be classified: {:?}",
            loops
        );
    }

    #[test]
    fn non_rep_loop_unchanged() {
        // A loop with neither a Store nor an IntSub.
        let rax = Varnode::reg(0x00, 8);
        let insns = vec![IrInsn::with_output(
            IrOp::Copy,
            rax,
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
                rcx,
                smallvec![rcx, Varnode::constant(1, 8)],
                0x1008,
            ),
        ];
        let mut ssa = make_self_loop(insns);
        let pass = RepStringIdiomPass;
        let changed = pass.run(&mut ssa).expect("pass runs");
        assert!(!changed, "MVP detection-only pass returns Ok(false)");
    }
}
