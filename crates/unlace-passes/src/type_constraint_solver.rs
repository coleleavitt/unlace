//! Constraint-based type inference (TIE-style).
//!
//! Re-frames primitive type recovery as a set of declarative constraints over
//! [`SsaVarnode`]s, then solves them by fixed-point iteration on the
//! [`PrimitiveType::join`] lattice. Where [`crate::type_infer::TypeInferPass`]
//! walks instructions and mutates `var_types` in-place, this pass first
//! collects a constraint list (no mutation, easy to inspect / test) and then
//! solves it. The two passes intentionally overlap on the easy cases; this
//! one exists to make the constraint graph explicit so future work
//! (subtyping / unification / pointer chasing) has a clean substrate.
//!
//! ## Constraint kinds
//!
//! * [`Constraint::Equal`] — `v` must equal `t` exactly. Strongest form.
//! * [`Constraint::Subtype`] — `v` joined with `t` (`t` is a lower bound).
//! * [`Constraint::PointsTo`] — `addr` is a pointer; `val` is what's behind it.
//!   We currently use this to mark `addr` as [`PrimitiveType::Ptr`]; the
//!   pointee component is recorded but not yet acted on (pending a richer
//!   composite type lattice).
//! * [`Constraint::SameType`] — two vars share whatever type either one
//!   resolves to. Mutual lattice join.

use std::collections::BTreeMap;

use unlace_ir::ssa::{PrimitiveType, SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::IrOp;

/// One type-recovery fact about an SSA varnode (or a pair of them).
#[derive(Clone, Debug, PartialEq, Eq)]
pub enum Constraint {
    /// `v` must take exactly type `t`. Implemented as `join(current, t)` —
    /// conflicts collapse to [`PrimitiveType::Unknown`] like the rest of
    /// the lattice.
    Equal(SsaVarnode, PrimitiveType),
    /// `v` is at least as specific as `t` (i.e. joining `v` with `t` is
    /// required). In the current flat lattice this is equivalent to
    /// `Equal`, but we keep the variant distinct so future work can
    /// distinguish "must be exactly" from "must include".
    Subtype(SsaVarnode, PrimitiveType),
    /// `addr` is a pointer to a location holding `val`. Marks `addr` as
    /// [`PrimitiveType::Ptr`]; the relationship between `addr` and `val`
    /// is preserved on the constraint for any future pointee-type pass.
    PointsTo(SsaVarnode, SsaVarnode),
    /// `a` and `b` must agree on a type. Implemented as a bidirectional
    /// join: whichever side is more specific propagates to the other.
    SameType(SsaVarnode, SsaVarnode),
}

/// Walk every instruction in `func` and emit the constraint list dictated
/// by the IR opcodes. Pure — does not mutate `func`.
pub fn collect_constraints(func: &SsaFunction) -> Vec<Constraint> {
    let mut cs: Vec<Constraint> = Vec::new();

    for (&bid, block) in &func.function.blocks {
        for (insn_idx, insn) in block.insns.iter().enumerate() {
            let out_sv = func
                .var_map
                .get(&(bid, insn_idx, VarnodeSlot::Output))
                .copied();
            let in_sv = |idx: usize| -> Option<SsaVarnode> {
                func.var_map
                    .get(&(bid, insn_idx, VarnodeSlot::Input(idx)))
                    .copied()
            };

            match insn.op {
                // Integer binops with symmetric operand types.
                // SameType(x, y), SameType(y, z), Subtype(z, Int(width))
                IrOp::IntAdd
                | IrOp::IntSub
                | IrOp::IntMult
                | IrOp::IntAnd
                | IrOp::IntOr
                | IrOp::IntXor => {
                    let x = in_sv(0);
                    let y = in_sv(1);
                    let z = out_sv;
                    if let (Some(x), Some(y)) = (x, y) {
                        cs.push(Constraint::SameType(x, y));
                    }
                    if let (Some(y), Some(z)) = (y, z) {
                        cs.push(Constraint::SameType(y, z));
                    } else if let (Some(x), Some(z)) = (x, z) {
                        // Constant on the y slot — at least tie x to z.
                        cs.push(Constraint::SameType(x, z));
                    }
                    if let Some(z) = z {
                        cs.push(Constraint::Subtype(z, PrimitiveType::Int(z.base.size)));
                    }
                }

                // LOAD (space, addr) → v.  addr points to v.
                IrOp::Load => {
                    if let (Some(addr), Some(v)) = (in_sv(1), out_sv) {
                        cs.push(Constraint::PointsTo(addr, v));
                    }
                }

                // STORE (space, addr, val). addr points to val.
                IrOp::Store => {
                    if let (Some(addr), Some(val)) = (in_sv(1), in_sv(2)) {
                        cs.push(Constraint::PointsTo(addr, val));
                    }
                }

                // COPY x → y. Same type both ways.
                IrOp::Copy => {
                    if let (Some(x), Some(y)) = (in_sv(0), out_sv) {
                        cs.push(Constraint::SameType(x, y));
                    }
                }

                // Zero-extend: output is unsigned and wider.
                IrOp::IntZext => {
                    if let Some(y) = out_sv {
                        cs.push(Constraint::Equal(y, PrimitiveType::UnsignedInt(y.base.size)));
                    }
                }

                // Sign-extend: output is signed and wider.
                IrOp::IntSext => {
                    if let Some(y) = out_sv {
                        cs.push(Constraint::Equal(y, PrimitiveType::Int(y.base.size)));
                    }
                }

                _ => {}
            }
        }
    }

    // Phi nodes: every input shares the output's type.
    for phis in func.phi_map.values() {
        for phi in phis {
            for (_pred, inp) in &phi.inputs {
                cs.push(Constraint::SameType(*inp, phi.output));
            }
        }
    }

    cs
}

/// Solve `constraints` against `func.var_types` by iterating the lattice
/// join until no entry changes. Returns the refined map; callers decide
/// whether to merge it back into `func.var_types` (the public pass below
/// does so).
pub fn solve_constraints(
    func: &SsaFunction,
    constraints: Vec<Constraint>,
) -> BTreeMap<SsaVarnode, PrimitiveType> {
    let mut types: BTreeMap<SsaVarnode, PrimitiveType> = func.var_types.clone();

    // Cap iterations so a pathological constraint graph can't hang the pass.
    let max_iters = 64usize;
    let mut iters = 0usize;
    loop {
        if iters >= max_iters {
            tracing::warn!(
                iterations = max_iters,
                "type_constraint_solver hit iteration limit"
            );
            break;
        }
        iters += 1;

        let mut changed = false;
        for c in &constraints {
            match c {
                Constraint::Equal(v, t) | Constraint::Subtype(v, t) => {
                    changed |= meet(&mut types, *v, *t);
                }
                Constraint::PointsTo(addr, _val) => {
                    changed |= meet(&mut types, *addr, PrimitiveType::Ptr);
                }
                Constraint::SameType(a, b) => {
                    let ta = get(&types, *a);
                    let tb = get(&types, *b);
                    let j = ta.join(tb);
                    if j != PrimitiveType::Unknown {
                        changed |= meet(&mut types, *a, j);
                        changed |= meet(&mut types, *b, j);
                    }
                }
            }
        }
        if !changed {
            break;
        }
    }

    types
}

/// Convenience wrapper used by [`TypeConstraintSolverPass`]: collect, solve,
/// and merge the solution back into `func.var_types`. Returns `true` when
/// any entry was added or refined.
pub fn collect_and_apply(func: &mut SsaFunction) -> bool {
    let cs = collect_constraints(func);
    let solved = solve_constraints(func, cs);

    let mut changed = false;
    for (sv, ty) in solved {
        let cur = func
            .var_types
            .get(&sv)
            .copied()
            .unwrap_or(PrimitiveType::Unknown);
        let joined = cur.join(ty);
        // Only widen toward a *more specific* type — never erase a fact.
        if joined != cur && joined != PrimitiveType::Unknown {
            func.var_types.insert(sv, joined);
            changed = true;
        } else if cur == PrimitiveType::Unknown && ty != PrimitiveType::Unknown {
            func.var_types.insert(sv, ty);
            changed = true;
        }
    }
    changed
}

// ----- helpers -----

fn get(types: &BTreeMap<SsaVarnode, PrimitiveType>, sv: SsaVarnode) -> PrimitiveType {
    types.get(&sv).copied().unwrap_or(PrimitiveType::Unknown)
}

/// Join `sv`'s current type with `ty` and store the result. Returns `true`
/// when the stored type actually moved.
fn meet(
    types: &mut BTreeMap<SsaVarnode, PrimitiveType>,
    sv: SsaVarnode,
    ty: PrimitiveType,
) -> bool {
    let cur = get(types, sv);
    let joined = cur.join(ty);
    if joined != cur {
        types.insert(sv, joined);
        true
    } else if !types.contains_key(&sv) && ty != PrimitiveType::Unknown {
        types.insert(sv, ty);
        true
    } else {
        false
    }
}

// ----- tests -----

#[cfg(test)]
mod tests {
    use super::*;
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, SpaceId, Varnode};

    fn make_ssa(insns: Vec<IrInsn>) -> SsaFunction {
        let mut func = Function::new("test", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns = insns;
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1FFF,
        ));
        func.insert_block(bb);
        build_ssa(func)
    }

    fn make_multi_block_ssa(blocks: Vec<(BlockId, Vec<IrInsn>)>) -> SsaFunction {
        let mut func = Function::new("test", BlockId(0), 0x1000);
        for (id, insns) in blocks {
            let mut bb = BasicBlock::new(id);
            bb.insns = insns;
            // ensure each block has a terminator
            if !bb.insns.iter().any(|i| {
                matches!(
                    i.op,
                    IrOp::Return | IrOp::Branch | IrOp::Cbranch | IrOp::Branchind
                )
            }) {
                bb.insns.push(IrInsn::without_output(
                    IrOp::Return,
                    smallvec![Varnode::constant(0, 8)],
                    0x1FFF,
                ));
            }
            func.insert_block(bb);
        }
        build_ssa(func)
    }

    fn lookup_out(ssa: &SsaFunction, bid: BlockId, insn_idx: usize) -> SsaVarnode {
        *ssa.var_map
            .get(&(bid, insn_idx, VarnodeSlot::Output))
            .expect("output ssa var")
    }

    fn lookup_in(ssa: &SsaFunction, bid: BlockId, insn_idx: usize, i: usize) -> SsaVarnode {
        *ssa.var_map
            .get(&(bid, insn_idx, VarnodeSlot::Input(i)))
            .expect("input ssa var")
    }

    /// LOAD's address feeds an INT_ADD whose other side is a known int —
    /// the address should be inferred as `Ptr` via the PointsTo constraint.
    #[test]
    fn load_then_intadd_makes_addr_ptr() {
        // ptr = COPY r0  (address)
        // val = LOAD const(ram_space), ptr
        // sum = INT_ADD val, c1  (just to anchor val as Int(4))
        let r0 = Varnode::reg(0, 8);
        let ptr = Varnode::unique(0, 8);
        let val = Varnode::unique(8, 4);
        let sum = Varnode::unique(16, 4);
        let c_space = Varnode::constant(SpaceId::Ram as u64, 8);
        let c1 = Varnode::constant(1, 4);

        let i0 = IrInsn::with_output(IrOp::Copy, ptr, smallvec![r0], 0x1000);
        let i1 = IrInsn::with_output(IrOp::Load, val, smallvec![c_space, ptr], 0x1004);
        let i2 = IrInsn::with_output(IrOp::IntAdd, sum, smallvec![val, c1], 0x1008);

        let mut ssa = make_ssa(vec![i0, i1, i2]);

        let changed = collect_and_apply(&mut ssa);
        assert!(changed, "should refine at least one var");

        // The LOAD's address operand is the SSA renaming of `ptr` at insn 1, input 1.
        let addr_sv = lookup_in(&ssa, BlockId(0), 1, 1);
        assert_eq!(
            ssa.var_types.get(&addr_sv).copied(),
            Some(PrimitiveType::Ptr),
            "LOAD address must be inferred as Ptr"
        );
    }

    /// Two phi sources with concrete int widths join on the phi output.
    /// We pre-seed the inputs at Int(4) and watch the phi propagate.
    #[test]
    fn phi_joins_same_width_int_sources() {
        // Build a diamond: entry -> {then, else} -> join, with an INT_ADD
        // on each side producing the same base register, so the join
        // block gets a phi.
        //
        // entry (block 0):  CBRANCH cond, block 1; fallthrough to block 1 anyway
        //                   (we only need defs from two preds; a real diamond
        //                   isn't strictly required for the phi-node placement
        //                   test since `build_ssa` only inserts phis where the
        //                   dominance frontier demands).
        //
        // Simpler: use a single block with two definitions of the same
        // register and rely on the renamer to issue versions. To force a
        // phi we still need two predecessors → build a diamond.

        let r0 = Varnode::reg(0, 4);
        let c1 = Varnode::constant(1, 4);
        let c2 = Varnode::constant(2, 4);
        let cond = Varnode::reg(8, 1);

        // Block 0: CBRANCH cond -> block 2 (then), fallthrough to block 1 (else)
        let entry = vec![IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![Varnode::constant(0x1100, 8), cond],
            0x1000,
        )];

        // Block 1 (else): r0 = INT_ADD c1, c1  → version A of r0
        let else_b = vec![
            IrInsn::with_output(IrOp::IntAdd, r0, smallvec![c1, c1], 0x1010),
            IrInsn::without_output(IrOp::Branch, smallvec![Varnode::constant(0x1200, 8)], 0x1014),
        ];

        // Block 2 (then): r0 = INT_ADD c2, c2  → version B of r0
        let then_b = vec![
            IrInsn::with_output(IrOp::IntAdd, r0, smallvec![c2, c2], 0x1100),
            IrInsn::without_output(IrOp::Branch, smallvec![Varnode::constant(0x1200, 8)], 0x1104),
        ];

        // Block 3 (join): use r0
        let join_b = vec![IrInsn::with_output(
            IrOp::Copy,
            Varnode::unique(0, 4),
            smallvec![r0],
            0x1200,
        )];

        let mut func = Function::new("test", BlockId(0), 0x1000);
        // Build blocks manually with successor wiring.
        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns = entry;
        b0.successors = smallvec![BlockId(1), BlockId(2)];
        func.insert_block(b0);

        let mut b1 = BasicBlock::new(BlockId(1));
        b1.insns = else_b;
        b1.successors = smallvec![BlockId(3)];
        func.insert_block(b1);

        let mut b2 = BasicBlock::new(BlockId(2));
        b2.insns = then_b;
        b2.successors = smallvec![BlockId(3)];
        func.insert_block(b2);

        let mut b3 = BasicBlock::new(BlockId(3));
        b3.insns = join_b;
        b3.successors = smallvec![];
        // Real terminator on join.
        b3.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1204,
        ));
        func.insert_block(b3);

        let mut ssa = build_ssa(func);

        // Sanity: a phi was placed at the join block on r0.
        let phis = ssa.phi_map.get(&BlockId(3)).cloned().unwrap_or_default();
        assert!(
            phis.iter().any(|p| p.output.base == r0),
            "expected a phi for r0 at the join block (got {} phis)",
            phis.len()
        );

        let _ = make_multi_block_ssa; // keep helper referenced; not used here.

        // Run the solver.
        let changed = collect_and_apply(&mut ssa);
        assert!(changed);

        // The phi inputs are both produced by INT_ADD over Int(4) constants,
        // so the constraint generator emits Subtype(out, Int(4)) for each
        // IntAdd output and SameType edges that link both phi inputs to the
        // phi output. After solving, the phi output should be Int(4).
        let phis = ssa.phi_map.get(&BlockId(3)).expect("phi map");
        let phi = phis
            .iter()
            .find(|p| p.output.base == r0)
            .expect("phi over r0");
        assert_eq!(
            ssa.var_types.get(&phi.output).copied(),
            Some(PrimitiveType::Int(4)),
            "phi output should join to Int(4); var_types={:?}",
            ssa.var_types
        );
        for (_pred, inp) in &phi.inputs {
            assert_eq!(
                ssa.var_types.get(inp).copied(),
                Some(PrimitiveType::Int(4)),
                "phi input {inp:?} should also be Int(4)"
            );
        }
    }

    /// SEXT-then-STORE: the store's address must become Ptr, and the
    /// stored value (the SEXT output) must be Int(8).
    #[test]
    fn sext_then_store_addr_is_ptr_to_wide_int() {
        // narrow = COPY r0  (4-byte)
        // wide   = SEXT narrow     (8-byte signed)
        // STORE (ram), addr, wide
        let r0 = Varnode::reg(0, 4);
        let narrow = Varnode::unique(0, 4);
        let wide = Varnode::unique(8, 8);
        let addr_r = Varnode::reg(8, 8);
        let c_space = Varnode::constant(SpaceId::Ram as u64, 8);

        let i0 = IrInsn::with_output(IrOp::Copy, narrow, smallvec![r0], 0x1000);
        let i1 = IrInsn::with_output(IrOp::IntSext, wide, smallvec![narrow], 0x1004);
        let i2 = IrInsn::without_output(IrOp::Store, smallvec![c_space, addr_r, wide], 0x1008);

        let mut ssa = make_ssa(vec![i0, i1, i2]);

        let _ = collect_and_apply(&mut ssa);

        // STORE address operand: insn idx 2, input 1.
        let addr_sv = lookup_in(&ssa, BlockId(0), 2, 1);
        assert_eq!(
            ssa.var_types.get(&addr_sv).copied(),
            Some(PrimitiveType::Ptr),
            "STORE address must be Ptr"
        );

        // SEXT output (wide) is the SSA def at insn 1.
        let wide_sv = lookup_out(&ssa, BlockId(0), 1);
        assert_eq!(
            ssa.var_types.get(&wide_sv).copied(),
            Some(PrimitiveType::Int(8)),
            "SEXT output must be Int(8)"
        );
    }

    /// A varnode mentioned only in an opcode we don't model (e.g. POPCOUNT)
    /// must stay `Unknown` — the solver must not invent types.
    #[test]
    fn unrelated_values_stay_unknown() {
        // x = POPCOUNT r0   (we don't emit constraints for POPCOUNT)
        let r0 = Varnode::reg(0, 4);
        let x = Varnode::unique(0, 4);

        let i0 = IrInsn::with_output(IrOp::Popcount, x, smallvec![r0], 0x1000);
        let mut ssa = make_ssa(vec![i0]);

        let _ = collect_and_apply(&mut ssa);

        let x_sv = lookup_out(&ssa, BlockId(0), 0);
        assert!(
            ssa.var_types.get(&x_sv).copied().unwrap_or(PrimitiveType::Unknown)
                == PrimitiveType::Unknown,
            "unmodelled opcode output must stay Unknown, got {:?}",
            ssa.var_types.get(&x_sv)
        );
    }
}
