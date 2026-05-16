//! Stack-pointer tracking & frame-hole detection.
//!
//! Mirrors IDA's `add_auto_stkpnt` / `func_has_stkframe_hole`. Walks the CFG
//! in dominator order maintaining the SP delta relative to function entry at
//! every instruction, then scans the recovered local frame for byte ranges
//! that no `stack_var` covers (struct-return holes, red-zone usage, alignment
//! padding past 8 B).
//!
//! Detected effects, all written into [`SsaFunction`]:
//!
//! * [`sp_delta_at`](unlace_ir::ssa::SsaFunction::sp_delta_at) — per-insn SP
//!   delta (negative = below entry RSP).
//! * [`stack_holes`](unlace_ir::ssa::SsaFunction::stack_holes) — uncovered
//!   byte ranges in `[min_sp_depth, 0)` keyed by RSP-relative start offset.
//! * [`dynamic_sp`](unlace_ir::ssa::SsaFunction::dynamic_sp) — true when
//!   `IntAdd(rsp, var)` / `IntSub(rsp, var)` is observed (alloca / VLA).
//! * [`block_entry_sp_delta`](unlace_ir::ssa::SsaFunction::block_entry_sp_delta)
//!   — SP delta at the entry of each block (CFG fall-through threading).
//! * [`frame_holes`](unlace_ir::ssa::SsaFunction::frame_holes) — explicit
//!   inter-slot gaps too wide for a saved register but narrower than a
//!   known primitive type.
//! * [`saved_register_slots`](unlace_ir::ssa::SsaFunction::saved_register_slots)
//!   — RSP-relative slot offsets that hold callee-saved registers stashed
//!   by the prologue.

use std::collections::{BTreeMap, BTreeSet, VecDeque};

use unlace_ir::ssa::{CallingConvention, FrameHole, PrimitiveType, SsaFunction};
use unlace_ir::stack::StackSpec;
use unlace_ir::{BlockId, IrOp, SpaceId, Varnode};

use crate::pass::{Pass, PassError};

pub struct StackPointerTrackingPass;

impl Pass for StackPointerTrackingPass {
    fn name(&self) -> &str {
        "stack-pointer-tracking"
    }

    fn phase(&self) -> crate::pass::PassPhase {
        crate::pass::PassPhase::StackRecovery
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        // Batch 2: stack recovery is per-arch. When the spec is missing
        // (Unknown / unsupported arch) the pass is a no-op rather than
        // panicking on hard-coded x86 offsets — preserves the old behaviour
        // for arches that didn't have working stack recovery before.
        let Some(spec) = StackSpec::for_arch(func.arch) else {
            return Ok(false);
        };
        let (sp_delta_at, block_entry_sp_delta, dynamic_sp, min_depth) =
            walk_sp_deltas(func, &spec);
        let stack_holes = compute_stack_holes(func, min_depth);
        let saved_register_slots = classify_saved_register_slots(func, &spec);
        let frame_holes = compute_frame_holes(func, &spec, &saved_register_slots);

        let changed = sp_delta_at != func.sp_delta_at
            || stack_holes != func.stack_holes
            || dynamic_sp != func.dynamic_sp
            || block_entry_sp_delta != func.block_entry_sp_delta
            || frame_holes != func.frame_holes
            || saved_register_slots != func.saved_register_slots;

        func.sp_delta_at = sp_delta_at;
        func.stack_holes = stack_holes;
        func.dynamic_sp = dynamic_sp;
        func.block_entry_sp_delta = block_entry_sp_delta;
        func.frame_holes = frame_holes;
        func.saved_register_slots = saved_register_slots;

        Ok(changed)
    }
}

/// Dominator-order traversal of all blocks reachable from the dom-tree
/// root, with unreachable blocks appended deterministically.
fn dom_order(func: &SsaFunction) -> Vec<BlockId> {
    let mut out = Vec::new();
    let mut q = VecDeque::new();
    q.push_back(func.dom_tree.root());
    while let Some(b) = q.pop_front() {
        if !func.function.blocks.contains_key(&b) {
            continue;
        }
        out.push(b);
        for child in func.dom_tree.children(b) {
            q.push_back(*child);
        }
    }
    for &bid in func.function.blocks.keys() {
        if !out.contains(&bid) {
            out.push(bid);
        }
    }
    out
}

/// Walk every block in dom-order, threading the SP delta through every
/// instruction. Returns `(sp_delta_at, block_entry_sp_delta, dynamic_sp,
/// min_depth_seen)`. The block-entry map starts with `0` for the entry
/// block and propagates per-block deltas to CFG successors fall-through.
fn walk_sp_deltas(
    func: &SsaFunction,
    spec: &StackSpec,
) -> (
    BTreeMap<(BlockId, usize), i64>,
    BTreeMap<BlockId, i64>,
    bool,
    i64,
) {
    let mut entry_delta: BTreeMap<BlockId, i64> = BTreeMap::new();
    entry_delta.insert(func.dom_tree.root(), 0);

    let mut sp_delta_at: BTreeMap<(BlockId, usize), i64> = BTreeMap::new();
    let mut dynamic_sp = false;
    let mut min_depth: i64 = 0;

    for bid in dom_order(func) {
        let block = match func.function.blocks.get(&bid) {
            Some(b) => b,
            None => continue,
        };
        let mut delta = entry_delta.get(&bid).copied().unwrap_or(0);

        for (idx, insn) in block.insns.iter().enumerate() {
            sp_delta_at.insert((bid, idx), delta);

            // RSP only changes when an instruction whose *output* is RSP
            // executes. Two shapes occur in lifted x86:
            //
            //   1. Direct: `IntAdd/IntSub` whose output is RSP (rare).
            //   2. Indirect: `Copy(rsp <- u)` where `u` was just produced
            //      by `IntAdd/IntSub(rsp, K)` in this block.
            let writes_rsp = insn.output.as_ref().is_some_and(|v| spec.is_sp(v));

            match insn.op {
                IrOp::IntSub if writes_rsp => {
                    if let Some((_, k, is_dynamic)) = match_sp_arith(insn, spec) {
                        if is_dynamic {
                            dynamic_sp = true;
                        } else {
                            delta -= k;
                        }
                    }
                }
                IrOp::IntAdd if writes_rsp => {
                    if let Some((_, k, is_dynamic)) = match_sp_arith(insn, spec) {
                        if is_dynamic {
                            dynamic_sp = true;
                        } else {
                            delta += k;
                        }
                    }
                }
                IrOp::Copy if writes_rsp => {
                    if let Some(src) = insn.inputs.first() {
                        if let Some((sign, k, is_dynamic)) =
                            trace_copy_source(func, bid, idx, src, spec)
                        {
                            if is_dynamic {
                                dynamic_sp = true;
                            } else {
                                delta += sign * k;
                            }
                        }
                    }
                }
                _ => {}
            }

            min_depth = min_depth.min(delta);
        }

        if let Some(node) = func.cfg.node_index(bid) {
            for succ_ni in func
                .cfg
                .inner()
                .neighbors_directed(node, petgraph::Direction::Outgoing)
            {
                let succ = func.cfg.inner()[succ_ni];
                entry_delta.entry(succ).or_insert(delta);
            }
        }
    }

    (sp_delta_at, entry_delta, dynamic_sp, min_depth)
}

/// If `insn` is `IntAdd/IntSub(sp, X)`, return `(sp_input_pos, |X|, is_dynamic)`.
fn match_sp_arith(insn: &unlace_ir::IrInsn, spec: &StackSpec) -> Option<(usize, i64, bool)> {
    if insn.inputs.len() < 2 {
        return None;
    }
    let (sp_pos, other) = if spec.is_sp(&insn.inputs[0]) {
        (0usize, &insn.inputs[1])
    } else if spec.is_sp(&insn.inputs[1]) {
        (1usize, &insn.inputs[0])
    } else {
        return None;
    };
    if other.space == SpaceId::Const {
        Some((sp_pos, other.offset as i64, false))
    } else {
        Some((sp_pos, 0, true))
    }
}

/// Trace a `Copy(sp <- src)` back to its defining instruction within the
/// same block. Returns `(sign, magnitude, is_dynamic)`.
fn trace_copy_source(
    func: &SsaFunction,
    bid: BlockId,
    copy_idx: usize,
    src: &Varnode,
    spec: &StackSpec,
) -> Option<(i64, i64, bool)> {
    if src.space != SpaceId::Unique {
        return None;
    }
    let block = func.function.blocks.get(&bid)?;
    for prev_idx in (0..copy_idx).rev() {
        let prev = &block.insns[prev_idx];
        let Some(out) = prev.output.as_ref() else {
            continue;
        };
        if out.space != SpaceId::Unique || out.offset != src.offset {
            continue;
        }
        match prev.op {
            IrOp::IntAdd | IrOp::IntSub => {
                let (_, mag, dynamic) = match_sp_arith(prev, spec)?;
                let sign = if prev.op == IrOp::IntAdd { 1 } else { -1 };
                return Some((sign, mag, dynamic));
            }
            _ => return None,
        }
    }
    None
}

/// Compute byte-range holes in `[min_depth, 0)` not covered by any
/// recovered `stack_var`. Mirrors IDA's `func_has_stkframe_hole`.
fn compute_stack_holes(func: &SsaFunction, min_depth: i64) -> BTreeMap<i64, u32> {
    let mut holes = BTreeMap::new();
    if min_depth >= 0 {
        return holes;
    }

    let mut covered: Vec<(i64, i64)> = func
        .stack_vars
        .values()
        .map(|sv| {
            let size = primitive_size(sv.ty);
            (sv.offset, sv.offset + size as i64)
        })
        .collect();
    covered.sort();

    let mut cursor = min_depth;
    for (lo, hi) in covered {
        if lo > cursor {
            let len = (lo - cursor) as u32;
            if len > 0 {
                holes.insert(cursor, len);
            }
        }
        cursor = cursor.max(hi);
        if cursor >= 0 {
            break;
        }
    }
    if cursor < 0 {
        let len = -cursor as u32;
        if len > 0 {
            holes.insert(cursor, len);
        }
    }

    holes
}

/// Callee-saved register offsets for SysV AMD64 (rbx, rbp, r12-r15) and
/// Microsoft x64 (rbp, rsi, rdi, rbx, r12-r15). Offsets match the
/// SLEIGH-style x86_64 register-file layout used by `var_naming.rs`.
fn callee_saved_x86_64(cc: CallingConvention, reg_offset: u64) -> Option<&'static str> {
    let sysv = match reg_offset {
        0x18 => Some("rbx"),
        0x28 => Some("rbp"),
        0x80 => Some("r12"),
        0x88 => Some("r13"),
        0x90 => Some("r14"),
        0x98 => Some("r15"),
        _ => None,
    };
    if sysv.is_some() {
        return sysv;
    }
    if matches!(cc, CallingConvention::MicrosoftX64) {
        return match reg_offset {
            0x30 => Some("rsi"),
            0x38 => Some("rdi"),
            _ => None,
        };
    }
    None
}

/// Scan the first few instructions of the entry block for prologue stores
/// of callee-saved registers (`mov [rsp+N], rbx`, etc.) and return the
/// set of RSP-relative stack slot offsets those stores target.
fn classify_saved_register_slots(func: &SsaFunction, spec: &StackSpec) -> BTreeSet<i64> {
    const PROLOGUE_WINDOW: usize = 32;
    let mut slots: BTreeSet<i64> = BTreeSet::new();
    let entry = func.function.entry;
    let Some(block) = func.function.blocks.get(&entry) else {
        return slots;
    };
    let cc = func.calling_convention;
    for (idx, insn) in block.insns.iter().take(PROLOGUE_WINDOW).enumerate() {
        if insn.op != IrOp::Store || insn.inputs.len() < 3 {
            continue;
        }
        // STORE inputs: [space_id, address, value]. Only flag stores
        // whose *value* operand is a physical callee-saved register read.
        let value = &insn.inputs[2];
        if value.space != SpaceId::Register {
            continue;
        }
        if callee_saved_x86_64(cc, value.offset).is_none() {
            continue;
        }
        if let Some(&offset) = func.stack_offset_hints.get(&(entry, idx)) {
            slots.insert(offset);
            continue;
        }
        let addr = &insn.inputs[1];
        if spec.is_frame_base(addr) {
            slots.insert(0);
        } else if addr.space == SpaceId::Stack {
            slots.insert(addr.offset as i64);
        }
    }
    slots
}

/// Walk recovered stack slots (sorted by offset) and emit a `FrameHole`
/// for any inter-slot gap whose width is greater than `ptr_size` (so it's
/// not a saved-register stash) and strictly less than the widest
/// primitive type we'd expect to land there. Saved-register slots are
/// excluded so their natural gaps don't pollute the map.
fn compute_frame_holes(
    func: &SsaFunction,
    spec: &StackSpec,
    saved_register_slots: &BTreeSet<i64>,
) -> Vec<FrameHole> {
    let ptr_size = spec.ptr_size as u32;
    let max_known: u32 = 8;
    let mut spans: Vec<(i64, i64)> = func
        .stack_vars
        .iter()
        .filter(|(off, _)| !saved_register_slots.contains(*off))
        .map(|(_, sv)| {
            let size = primitive_size(sv.ty);
            (sv.offset, sv.offset + size as i64)
        })
        .collect();
    spans.sort();

    let mut holes = Vec::new();
    for win in spans.windows(2) {
        let (_, prev_end) = win[0];
        let (next_start, _) = win[1];
        if next_start <= prev_end {
            continue;
        }
        let gap = (next_start - prev_end) as u32;
        if gap > ptr_size && gap < max_known {
            holes.push(FrameHole {
                offset: prev_end,
                size: gap,
            });
        }
    }
    holes
}

fn primitive_size(ty: PrimitiveType) -> u32 {
    match ty {
        PrimitiveType::Int(w) | PrimitiveType::UnsignedInt(w) => w as u32,
        PrimitiveType::Bool => 1,
        PrimitiveType::Float => 4,
        PrimitiveType::Double => 8,
        PrimitiveType::Ptr => 8,
        PrimitiveType::Unknown => 8,
    }
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use unlace_ir::ssa::{StackVar, build_ssa};
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;

    /// x86-64 RSP varnode — tests synthesise functions tagged as x86_64 so
    /// the `StackSpec` lookup resolves to the legacy offset.
    fn rsp() -> Varnode {
        Varnode::reg(32, 8)
    }

    fn build(insns: Vec<IrInsn>) -> SsaFunction {
        let mut func = Function::new("t", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns = insns;
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x2000,
        ));
        func.insert_block(bb);
        let mut ssa = build_ssa(func);
        ssa.arch = unlace_ir::ArchId::X86_64;
        ssa
    }

    #[test]
    fn test_static_sp_delta_tracking() {
        let u0 = Varnode::unique(0, 8);
        let u1 = Varnode::unique(8, 8);
        let mut ssa = build(vec![
            IrInsn::with_output(
                IrOp::IntSub,
                u0,
                smallvec![rsp(), Varnode::constant(32, 8)],
                0x1000,
            ),
            IrInsn::with_output(IrOp::Copy, rsp(), smallvec![u0], 0x1004),
            IrInsn::with_output(
                IrOp::IntAdd,
                u1,
                smallvec![rsp(), Varnode::constant(32, 8)],
                0x1008,
            ),
            IrInsn::with_output(IrOp::Copy, rsp(), smallvec![u1], 0x100C),
        ]);

        assert!(StackPointerTrackingPass.run(&mut ssa).unwrap());

        let bid = BlockId(0);
        assert_eq!(ssa.sp_delta_at.get(&(bid, 0)), Some(&0));
        assert_eq!(ssa.sp_delta_at.get(&(bid, 1)), Some(&0));
        assert_eq!(ssa.sp_delta_at.get(&(bid, 2)), Some(&-32));
        assert_eq!(ssa.sp_delta_at.get(&(bid, 3)), Some(&-32));
        assert_eq!(ssa.sp_delta_at.get(&(bid, 4)), Some(&0));
        assert!(!ssa.dynamic_sp);
    }

    #[test]
    fn test_alloca_detection() {
        let u0 = Varnode::unique(0, 8);
        let dyn_size = Varnode::reg(0, 8);
        let mut ssa = build(vec![
            IrInsn::with_output(IrOp::IntSub, u0, smallvec![rsp(), dyn_size], 0x1000),
            IrInsn::with_output(IrOp::Copy, rsp(), smallvec![u0], 0x1004),
        ]);

        assert!(StackPointerTrackingPass.run(&mut ssa).unwrap());
        assert!(ssa.dynamic_sp, "alloca-shaped IR should set dynamic_sp");
    }

    #[test]
    fn test_hole_detection() {
        let u0 = Varnode::unique(0, 8);
        let mut ssa = build(vec![
            IrInsn::with_output(
                IrOp::IntSub,
                u0,
                smallvec![rsp(), Varnode::constant(32, 8)],
                0x1000,
            ),
            IrInsn::with_output(IrOp::Copy, rsp(), smallvec![u0], 0x1004),
        ]);

        ssa.stack_vars.insert(
            -32,
            StackVar {
                offset: -32,
                name: "v1".into(),
                ty: PrimitiveType::Int(8),
                accesses: vec![],
            },
        );
        ssa.stack_vars.insert(
            -16,
            StackVar {
                offset: -16,
                name: "v2".into(),
                ty: PrimitiveType::Int(8),
                accesses: vec![],
            },
        );

        StackPointerTrackingPass.run(&mut ssa).unwrap();

        assert_eq!(ssa.stack_holes.get(&-24), Some(&8));
        assert_eq!(ssa.stack_holes.get(&-8), Some(&8));
        assert_eq!(ssa.stack_holes.len(), 2);
    }

    #[test]
    fn test_no_hole_frame() {
        let u0 = Varnode::unique(0, 8);
        let mut ssa = build(vec![
            IrInsn::with_output(
                IrOp::IntSub,
                u0,
                smallvec![rsp(), Varnode::constant(16, 8)],
                0x1000,
            ),
            IrInsn::with_output(IrOp::Copy, rsp(), smallvec![u0], 0x1004),
        ]);

        ssa.stack_vars.insert(
            -16,
            StackVar {
                offset: -16,
                name: "v1".into(),
                ty: PrimitiveType::Int(8),
                accesses: vec![],
            },
        );
        ssa.stack_vars.insert(
            -8,
            StackVar {
                offset: -8,
                name: "v2".into(),
                ty: PrimitiveType::Int(8),
                accesses: vec![],
            },
        );

        StackPointerTrackingPass.run(&mut ssa).unwrap();

        assert!(
            ssa.stack_holes.is_empty(),
            "fully-covered frame must produce no holes, got {:?}",
            ssa.stack_holes
        );
    }

    /// Block-entry SP delta is zero at the entry block; per-insn delta
    /// matches the post-prologue `sub rsp, 48`.
    #[test]
    fn test_block_entry_sp_delta() {
        let u0 = Varnode::unique(0, 8);
        let mut ssa = build(vec![
            IrInsn::with_output(
                IrOp::IntSub,
                u0,
                smallvec![rsp(), Varnode::constant(48, 8)],
                0x1000,
            ),
            IrInsn::with_output(IrOp::Copy, rsp(), smallvec![u0], 0x1004),
        ]);

        StackPointerTrackingPass.run(&mut ssa).unwrap();

        let entry = BlockId(0);
        assert_eq!(
            ssa.block_entry_sp_delta.get(&entry),
            Some(&0),
            "entry block must start at SP delta 0, got {:?}",
            ssa.block_entry_sp_delta
        );
        assert_eq!(ssa.sp_delta_at.get(&(entry, 2)), Some(&-48));
    }

    /// Saved-register classification: a prologue `mov [rsp], rbx` shape
    /// (Store space_ram, rsp, rbx) gets recorded as a saved-register slot.
    #[test]
    fn test_saved_register_classification() {
        let rbx = Varnode::reg(0x18, 8);
        let space_ram = Varnode::constant(0, 8);
        let mut ssa = build(vec![IrInsn::without_output(
            IrOp::Store,
            smallvec![space_ram, rsp(), rbx],
            0x1000,
        )]);
        ssa.calling_convention = CallingConvention::SystemV;

        StackPointerTrackingPass.run(&mut ssa).unwrap();

        assert!(
            ssa.saved_register_slots.contains(&0),
            "expected slot 0 to be classified as saved register, got {:?}",
            ssa.saved_register_slots
        );
    }

    /// Frame-hole detection on x86_64: ptr_size==max_known==8 suppresses
    /// every candidate hole (gap can't be both > 8 and < 8).
    #[test]
    fn test_frame_hole_detection_x86_64_suppressed() {
        let u0 = Varnode::unique(0, 8);
        let mut ssa = build(vec![
            IrInsn::with_output(
                IrOp::IntSub,
                u0,
                smallvec![rsp(), Varnode::constant(32, 8)],
                0x1000,
            ),
            IrInsn::with_output(IrOp::Copy, rsp(), smallvec![u0], 0x1004),
        ]);
        ssa.stack_vars.insert(
            -16,
            StackVar {
                offset: -16,
                name: "v1".into(),
                ty: PrimitiveType::Int(4),
                accesses: vec![],
            },
        );
        ssa.stack_vars.insert(
            -5,
            StackVar {
                offset: -5,
                name: "v2".into(),
                ty: PrimitiveType::Int(4),
                accesses: vec![],
            },
        );

        StackPointerTrackingPass.run(&mut ssa).unwrap();

        assert!(
            ssa.frame_holes.is_empty(),
            "x86_64 ptr_size==max_known suppresses every candidate hole, got {:?}",
            ssa.frame_holes
        );
    }

    /// Frame-hole detection on a 32-bit ABI: PPC32 has ptr_size==4 so a
    /// 5-byte inter-slot gap (5 > 4 && 5 < 8) surfaces as a FrameHole.
    #[test]
    fn test_frame_hole_detection_narrow_ptr() {
        use unlace_ir::{ArchId, BasicBlock, Function};

        let mut func = Function::new("t", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x2000,
        ));
        func.insert_block(bb);
        let mut ssa = build_ssa(func);
        ssa.arch = ArchId::Ppc;

        ssa.stack_vars.insert(
            -16,
            StackVar {
                offset: -16,
                name: "v1".into(),
                ty: PrimitiveType::Int(4),
                accesses: vec![],
            },
        );
        ssa.stack_vars.insert(
            -7,
            StackVar {
                offset: -7,
                name: "v2".into(),
                ty: PrimitiveType::Int(4),
                accesses: vec![],
            },
        );

        StackPointerTrackingPass.run(&mut ssa).unwrap();

        assert_eq!(
            ssa.frame_holes.len(),
            1,
            "expected exactly one inter-slot frame hole, got {:?}",
            ssa.frame_holes
        );
        assert_eq!(ssa.frame_holes[0].offset, -12);
        assert_eq!(ssa.frame_holes[0].size, 5);
    }
}
