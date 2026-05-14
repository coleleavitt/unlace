//! Constraint-based type inference (TIE-style).
//!
//! Re-frames primitive type recovery as a set of declarative constraints over
//! [`SsaVarnode`]s, then solves them by fixed-point iteration on the
//! [`PrimitiveType::join`] lattice. Where [`crate::type_infer::TypeInferPass`]
//! walks instructions and mutates `var_types` in-place, this pass first
//! collects a constraint list (no mutation, easy to inspect / test) and then
//! solves it. The two passes intentionally overlap on the easy cases.
//!
//! The solver also carries a Retypd-inspired layer of polymorphic type
//! variables: every SSA varnode has a symbolic type variable whose lower
//! and upper bounds are expressed in a small capability lattice (integer,
//! unsigned, pointer, boolean, floating point, memory-addressable, callable).
//! Equality and subtype constraints propagate those capability bounds before
//! materialising them back to [`PrimitiveType`]. This keeps ambiguous
//! same-width values polymorphic until enough use-site evidence (LOAD/STORE,
//! signed/unsigned operations, pointer arithmetic, calls) refines them.
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

use std::collections::{BTreeMap, BTreeSet};

use unlace_ir::IrOp;
use unlace_ir::ssa::{PrimitiveType, SsaFunction, SsaVarnode, VarnodeSlot};

use crate::pass::{Pass, PassError};

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
    /// Retypd-style symbolic subtype relation: every capability inferred for
    /// `lower` is also valid for `upper`, and every concrete upper bound on
    /// `upper` constrains `lower`. This is distinct from [`Constraint::Subtype`],
    /// which records a concrete primitive lower bound.
    PolySubtype {
        lower: SsaVarnode,
        upper: SsaVarnode,
    },
    /// Attach a symbolic capability to a varnode's polymorphic type variable.
    /// Capabilities are solved in the Retypd layer and then materialised back
    /// to primitive types when unambiguous.
    HasCapability(SsaVarnode, TypeCapability),
}

/// A Retypd-inspired capability over a polymorphic type variable.
///
/// The lattice is intentionally compact and monotone: `Any` is the top/empty
/// fact, while concrete capabilities can coexist until their best primitive
/// representative is chosen. Pointer-like facts imply integer/address
/// capabilities, and signed/unsigned arithmetic are represented separately so
/// same-width integer variables can stay polymorphic until a use-site forces a
/// choice.
#[derive(Copy, Clone, Debug, PartialEq, Eq, Hash, PartialOrd, Ord)]
pub enum TypeCapability {
    Any,
    Bool,
    Integer { width: u8, signed: Option<bool> },
    Float32,
    Float64,
    Pointer,
    Address,
    Callable,
}

#[derive(Clone, Debug, PartialEq, Eq, Default)]
pub struct PolyTypeBounds {
    pub lower: BTreeSet<TypeCapability>,
    pub upper: BTreeSet<TypeCapability>,
}

#[derive(Clone, Debug, PartialEq, Eq, Default)]
pub struct PolyTypeSolution {
    pub bounds: BTreeMap<SsaVarnode, PolyTypeBounds>,
    pub primitive_types: BTreeMap<SsaVarnode, PrimitiveType>,
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

                IrOp::IntDiv | IrOp::IntRem | IrOp::IntRight => {
                    add_integer_op_constraints(&mut cs, out_sv, in_sv(0), in_sv(1), false);
                }

                IrOp::IntSdiv
                | IrOp::IntSrem
                | IrOp::IntSright
                | IrOp::IntSless
                | IrOp::IntSlessequal => {
                    add_integer_op_constraints(&mut cs, out_sv, in_sv(0), in_sv(1), true);
                    if matches!(insn.op, IrOp::IntSless | IrOp::IntSlessequal) {
                        if let Some(z) = out_sv {
                            cs.push(Constraint::Equal(z, PrimitiveType::Bool));
                        }
                    }
                }

                IrOp::IntEqual | IrOp::IntNotequal | IrOp::IntLess | IrOp::IntLessequal => {
                    if let (Some(x), Some(y)) = (in_sv(0), in_sv(1)) {
                        cs.push(Constraint::SameType(x, y));
                    }
                    if let Some(z) = out_sv {
                        cs.push(Constraint::Equal(z, PrimitiveType::Bool));
                    }
                }

                IrOp::BoolNegate | IrOp::BoolAnd | IrOp::BoolOr | IrOp::BoolXor => {
                    for sv in [in_sv(0), in_sv(1), out_sv].into_iter().flatten() {
                        cs.push(Constraint::Equal(sv, PrimitiveType::Bool));
                    }
                }

                // LOAD (space, addr) → v.  addr points to v.
                IrOp::Load => {
                    if let (Some(addr), Some(v)) = (in_sv(1), out_sv) {
                        cs.push(Constraint::PointsTo(addr, v));
                        cs.push(Constraint::HasCapability(addr, TypeCapability::Address));
                        // The loaded value's type is constrained by the memory
                        // cell addressed by `addr`, but not equal to the
                        // address itself. Preserve this as a symbolic flow edge.
                        cs.push(Constraint::PolySubtype {
                            lower: v,
                            upper: addr,
                        });
                    }
                }

                // STORE (space, addr, val). addr points to val.
                IrOp::Store => {
                    if let (Some(addr), Some(val)) = (in_sv(1), in_sv(2)) {
                        cs.push(Constraint::PointsTo(addr, val));
                        cs.push(Constraint::HasCapability(addr, TypeCapability::Address));
                        cs.push(Constraint::PolySubtype {
                            lower: val,
                            upper: addr,
                        });
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
                        cs.push(Constraint::Equal(
                            y,
                            PrimitiveType::UnsignedInt(y.base.size),
                        ));
                    }
                }

                // Sign-extend: output is signed and wider.
                IrOp::IntSext => {
                    if let Some(y) = out_sv {
                        cs.push(Constraint::Equal(y, PrimitiveType::Int(y.base.size)));
                    }
                }

                IrOp::Ptradd | IrOp::Ptrsub => {
                    if let Some(base) = in_sv(0) {
                        cs.push(Constraint::HasCapability(base, TypeCapability::Pointer));
                    }
                    if let Some(idx) = in_sv(1) {
                        cs.push(Constraint::HasCapability(
                            idx,
                            TypeCapability::Integer {
                                width: idx.base.size,
                                signed: None,
                            },
                        ));
                    }
                    if let Some(out) = out_sv {
                        cs.push(Constraint::Subtype(out, PrimitiveType::Ptr));
                        cs.push(Constraint::HasCapability(out, TypeCapability::Pointer));
                        if let Some(base) = in_sv(0) {
                            cs.push(Constraint::PolySubtype {
                                lower: base,
                                upper: out,
                            });
                        }
                    }
                }

                IrOp::Cast => {
                    if let (Some(x), Some(y)) = (in_sv(0), out_sv) {
                        cs.push(Constraint::PolySubtype { lower: x, upper: y });
                    }
                }

                IrOp::Callind | IrOp::Branchind => {
                    if let Some(target) = in_sv(0) {
                        cs.push(Constraint::HasCapability(target, TypeCapability::Callable));
                    }
                }

                IrOp::FloatAdd | IrOp::FloatSub | IrOp::FloatMult | IrOp::FloatDiv => {
                    let cap = out_sv.map(float_cap_for).unwrap_or(TypeCapability::Float64);
                    for sv in [in_sv(0), in_sv(1), out_sv].into_iter().flatten() {
                        cs.push(Constraint::HasCapability(sv, cap));
                    }
                }

                IrOp::FloatEqual | IrOp::FloatNotequal | IrOp::FloatLess | IrOp::FloatLessequal => {
                    if let Some(z) = out_sv {
                        cs.push(Constraint::Equal(z, PrimitiveType::Bool));
                    }
                    let cap = in_sv(0)
                        .map(float_cap_for)
                        .unwrap_or(TypeCapability::Float64);
                    for sv in [in_sv(0), in_sv(1)].into_iter().flatten() {
                        cs.push(Constraint::HasCapability(sv, cap));
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
    solve_polymorphic_constraints(func, constraints).primitive_types
}

/// Solve primitive and polymorphic subtype/capability constraints together.
///
/// This is the public Retypd-style entry point for tests and future passes that
/// need to inspect symbolic bounds instead of only the materialised primitive
/// map. The fixed point is monotone: concrete primitive constraints seed lower
/// bounds, equality creates bidirectional subtype edges, and capabilities flow
/// across [`Constraint::PolySubtype`] edges until saturation.
pub fn solve_polymorphic_constraints(
    func: &SsaFunction,
    constraints: Vec<Constraint>,
) -> PolyTypeSolution {
    let mut types: BTreeMap<SsaVarnode, PrimitiveType> = func.var_types.clone();
    let mut bounds: BTreeMap<SsaVarnode, PolyTypeBounds> = BTreeMap::new();

    for (sv, ty) in &func.var_types {
        if let Some(cap) = primitive_to_capability(*ty, sv.base.size) {
            insert_lower(&mut bounds, *sv, cap);
        }
    }

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
                Constraint::Equal(v, t) => {
                    changed |= meet(&mut types, *v, *t);
                    changed |= add_primitive_bound(&mut bounds, *v, *t);
                }
                Constraint::Subtype(v, t) => {
                    changed |= meet(&mut types, *v, *t);
                    changed |= add_primitive_bound(&mut bounds, *v, *t);
                }
                Constraint::PointsTo(addr, _val) => {
                    changed |= meet(&mut types, *addr, PrimitiveType::Ptr);
                    changed |= insert_lower(&mut bounds, *addr, TypeCapability::Pointer);
                    changed |= insert_lower(&mut bounds, *addr, TypeCapability::Address);
                }
                Constraint::SameType(a, b) => {
                    changed |= propagate_between(&mut bounds, *a, *b);
                    let ta = get(&types, *a);
                    let tb = get(&types, *b);
                    let j = ta.join(tb);
                    if j != PrimitiveType::Unknown {
                        changed |= meet(&mut types, *a, j);
                        changed |= meet(&mut types, *b, j);
                        changed |= add_primitive_bound(&mut bounds, *a, j);
                        changed |= add_primitive_bound(&mut bounds, *b, j);
                    }
                }
                Constraint::PolySubtype { lower, upper } => {
                    changed |= propagate_lower_to_upper(&mut bounds, *lower, *upper);
                    changed |= propagate_upper_to_lower(&mut bounds, *lower, *upper);
                }
                Constraint::HasCapability(v, cap) => {
                    changed |= insert_lower(&mut bounds, *v, *cap);
                }
            }
        }

        let snapshot: Vec<_> = bounds
            .iter()
            .filter_map(|(sv, b)| materialize_primitive(*sv, b).map(|ty| (*sv, ty)))
            .collect();
        for (sv, ty) in snapshot {
            changed |= meet(&mut types, sv, ty);
        }

        if !changed {
            break;
        }
    }

    PolyTypeSolution {
        bounds,
        primitive_types: types,
    }
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

/// TIE-style constraint solver wrapped as a [`Pass`] so it can slot into
/// the per-function pipeline. Runs once per outer fixed-point iteration
/// after [`crate::type_infer::TypeInferPass`]: TypeInferPass walks
/// instructions ad-hoc, this pass closes the gaps by materialising the
/// implicit constraint graph (LOAD addresses, phi joins, SameType edges
/// across binops) and joining on the [`PrimitiveType`] lattice.
///
/// `name()` returns `"TypeConstraintSolver"` so the pass appears in
/// fixed-point traces alongside its siblings.
pub struct TypeConstraintSolverPass;

impl Pass for TypeConstraintSolverPass {
    fn name(&self) -> &str {
        "TypeConstraintSolver"
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        Ok(collect_and_apply(func))
    }
}

fn add_integer_op_constraints(
    cs: &mut Vec<Constraint>,
    out: Option<SsaVarnode>,
    lhs: Option<SsaVarnode>,
    rhs: Option<SsaVarnode>,
    signed: bool,
) {
    if let (Some(x), Some(y)) = (lhs, rhs) {
        cs.push(Constraint::SameType(x, y));
    }
    if let (Some(x), Some(z)) = (lhs, out) {
        cs.push(Constraint::SameType(x, z));
    }
    let vars = [lhs, rhs, out];
    for sv in vars.into_iter().flatten() {
        cs.push(Constraint::HasCapability(
            sv,
            TypeCapability::Integer {
                width: sv.base.size,
                signed: Some(signed),
            },
        ));
    }
}

fn float_cap_for(sv: SsaVarnode) -> TypeCapability {
    match sv.base.size {
        4 => TypeCapability::Float32,
        8 => TypeCapability::Float64,
        _ => TypeCapability::Any,
    }
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

fn primitive_to_capability(ty: PrimitiveType, fallback_width: u8) -> Option<TypeCapability> {
    match ty {
        PrimitiveType::Unknown => None,
        PrimitiveType::Bool => Some(TypeCapability::Bool),
        PrimitiveType::Int(w) => Some(TypeCapability::Integer {
            width: w,
            signed: None,
        }),
        PrimitiveType::UnsignedInt(w) => Some(TypeCapability::Integer {
            width: w,
            signed: Some(false),
        }),
        PrimitiveType::Float => Some(TypeCapability::Float32),
        PrimitiveType::Double => Some(TypeCapability::Float64),
        PrimitiveType::Ptr => Some(if fallback_width == 0 {
            TypeCapability::Address
        } else {
            TypeCapability::Pointer
        }),
    }
}

fn add_primitive_bound(
    bounds: &mut BTreeMap<SsaVarnode, PolyTypeBounds>,
    sv: SsaVarnode,
    ty: PrimitiveType,
) -> bool {
    primitive_to_capability(ty, sv.base.size).is_some_and(|cap| insert_lower(bounds, sv, cap))
}

fn insert_lower(
    bounds: &mut BTreeMap<SsaVarnode, PolyTypeBounds>,
    sv: SsaVarnode,
    cap: TypeCapability,
) -> bool {
    let mut changed = bounds.entry(sv).or_default().lower.insert(cap);
    match cap {
        TypeCapability::Pointer => {
            changed |= bounds
                .entry(sv)
                .or_default()
                .lower
                .insert(TypeCapability::Address);
            changed |= bounds
                .entry(sv)
                .or_default()
                .lower
                .insert(TypeCapability::Integer {
                    width: sv.base.size,
                    signed: None,
                });
        }
        TypeCapability::Callable => {
            changed |= bounds
                .entry(sv)
                .or_default()
                .lower
                .insert(TypeCapability::Pointer);
            changed |= bounds
                .entry(sv)
                .or_default()
                .lower
                .insert(TypeCapability::Address);
        }
        _ => {}
    }
    changed
}

fn insert_upper(
    bounds: &mut BTreeMap<SsaVarnode, PolyTypeBounds>,
    sv: SsaVarnode,
    cap: TypeCapability,
) -> bool {
    bounds.entry(sv).or_default().upper.insert(cap)
}

fn propagate_between(
    bounds: &mut BTreeMap<SsaVarnode, PolyTypeBounds>,
    a: SsaVarnode,
    b: SsaVarnode,
) -> bool {
    let mut changed = propagate_lower_to_upper(bounds, a, b);
    changed |= propagate_lower_to_upper(bounds, b, a);
    changed |= propagate_upper_to_lower(bounds, a, b);
    changed |= propagate_upper_to_lower(bounds, b, a);
    changed
}

fn propagate_lower_to_upper(
    bounds: &mut BTreeMap<SsaVarnode, PolyTypeBounds>,
    lower: SsaVarnode,
    upper: SsaVarnode,
) -> bool {
    let caps: Vec<_> = bounds
        .get(&lower)
        .map(|b| b.lower.iter().copied().collect())
        .unwrap_or_default();
    caps.into_iter().fold(false, |changed, cap| {
        insert_lower(bounds, upper, cap) || changed
    })
}

fn propagate_upper_to_lower(
    bounds: &mut BTreeMap<SsaVarnode, PolyTypeBounds>,
    lower: SsaVarnode,
    upper: SsaVarnode,
) -> bool {
    let caps: Vec<_> = bounds
        .get(&upper)
        .map(|b| {
            b.upper
                .iter()
                .copied()
                .chain(b.lower.iter().copied())
                .collect()
        })
        .unwrap_or_default();
    caps.into_iter().fold(false, |changed, cap| {
        insert_upper(bounds, lower, cap) || changed
    })
}

fn materialize_primitive(sv: SsaVarnode, bounds: &PolyTypeBounds) -> Option<PrimitiveType> {
    if bounds.lower.contains(&TypeCapability::Callable)
        || bounds.lower.contains(&TypeCapability::Pointer)
    {
        return Some(PrimitiveType::Ptr);
    }
    if bounds.lower.contains(&TypeCapability::Bool) {
        return Some(PrimitiveType::Bool);
    }
    if bounds.lower.contains(&TypeCapability::Float64) {
        return Some(PrimitiveType::Double);
    }
    if bounds.lower.contains(&TypeCapability::Float32) {
        return Some(PrimitiveType::Float);
    }

    let mut best: Option<(u8, Option<bool>)> = None;
    for cap in &bounds.lower {
        if let TypeCapability::Integer { width, signed } = *cap {
            let width = if width == 0 { sv.base.size } else { width };
            best = Some(match (best, signed) {
                (None, s) => (width, s),
                (Some((w, old)), s) => {
                    let sign = if old == s { old } else { None };
                    (w.max(width), sign)
                }
            });
        }
    }
    best.map(|(w, signed)| match signed {
        Some(false) => PrimitiveType::UnsignedInt(w),
        Some(true) | None => PrimitiveType::Int(w),
    })
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
            IrInsn::without_output(
                IrOp::Branch,
                smallvec![Varnode::constant(0x1200, 8)],
                0x1014,
            ),
        ];

        // Block 2 (then): r0 = INT_ADD c2, c2  → version B of r0
        let then_b = vec![
            IrInsn::with_output(IrOp::IntAdd, r0, smallvec![c2, c2], 0x1100),
            IrInsn::without_output(
                IrOp::Branch,
                smallvec![Varnode::constant(0x1200, 8)],
                0x1104,
            ),
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

    /// t228 smoke test: the pipeline wires `TypeInferPass` then
    /// `TypeConstraintSolverPass`. Before the constraint solver runs, the
    /// LOAD's address operand is left as `Unknown` (TypeInferPass models
    /// some but not all LOAD/STORE address shapes — in particular when
    /// the address comes through an unannotated COPY chain). The
    /// constraint solver's `PointsTo` rule must close that gap.
    #[test]
    fn t228_pass_wrapper_promotes_load_addr_to_ptr() {
        use crate::pass::Pass;
        use crate::type_infer::TypeInferPass;

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

        // Sanity: address operand should not yet be `Ptr` (it is either
        // unset or carries whatever TypeInferPass concluded on its own).
        let addr_sv = lookup_in(&ssa, BlockId(0), 1, 1);
        let before = ssa.var_types.get(&addr_sv).copied();
        assert_ne!(
            before,
            Some(PrimitiveType::Ptr),
            "precondition: addr must not yet be Ptr (got {:?})",
            before
        );

        // Run the same two passes the CLI pipeline runs.
        TypeInferPass.run(&mut ssa).expect("type infer");
        TypeConstraintSolverPass
            .run(&mut ssa)
            .expect("type constraint solver");

        assert_eq!(
            ssa.var_types.get(&addr_sv).copied(),
            Some(PrimitiveType::Ptr),
            "LOAD address must be promoted to Ptr after both passes; var_types={:?}",
            ssa.var_types
        );
    }

    /// t362: symbolic subtype edges should propagate capabilities without
    /// requiring both variables to be primitive-equal up front.
    #[test]
    fn t362_polymorphic_subtype_propagates_capabilities() {
        let a = SsaVarnode {
            base: Varnode::reg(0, 8),
            version: 1,
        };
        let b = SsaVarnode {
            base: Varnode::reg(8, 8),
            version: 1,
        };
        let ssa = make_ssa(vec![IrInsn::with_output(
            IrOp::Copy,
            a.base,
            smallvec![b.base],
            0x1000,
        )]);

        let sol = solve_polymorphic_constraints(
            &ssa,
            vec![
                Constraint::PolySubtype { lower: a, upper: b },
                Constraint::HasCapability(a, TypeCapability::Pointer),
            ],
        );

        let b_bounds = sol.bounds.get(&b).expect("upper bounds");
        assert!(
            b_bounds.lower.contains(&TypeCapability::Pointer),
            "pointer lower bound should flow lower→upper: {b_bounds:?}"
        );
        assert_eq!(sol.primitive_types.get(&b), Some(&PrimitiveType::Ptr));
    }

    /// t362: unsigned use-site evidence in the capability lattice should beat
    /// ambiguous same-width integer facts when materialising primitive types.
    #[test]
    fn t362_unsigned_capability_materializes_u32() {
        let x = SsaVarnode {
            base: Varnode::reg(0, 4),
            version: 1,
        };
        let ssa = make_ssa(vec![IrInsn::with_output(
            IrOp::Copy,
            x.base,
            smallvec![Varnode::constant(1, 4)],
            0x1000,
        )]);

        let sol = solve_polymorphic_constraints(
            &ssa,
            vec![Constraint::HasCapability(
                x,
                TypeCapability::Integer {
                    width: 4,
                    signed: Some(false),
                },
            )],
        );

        assert_eq!(
            sol.primitive_types.get(&x),
            Some(&PrimitiveType::UnsignedInt(4))
        );
    }

    /// t362: CALLIND targets are callable pointers in the polymorphic lattice.
    #[test]
    fn t362_callind_target_gets_callable_pointer_capability() {
        let target = Varnode::reg(0, 8);
        let i0 = IrInsn::without_output(IrOp::Callind, smallvec![target], 0x1000);
        let ssa = make_ssa(vec![i0]);
        let sv = lookup_in(&ssa, BlockId(0), 0, 0);

        let cs = collect_constraints(&ssa);
        assert!(cs.iter().any(|c| matches!(
            c,
            Constraint::HasCapability(v, TypeCapability::Callable) if *v == sv
        )));

        let sol = solve_polymorphic_constraints(&ssa, cs);
        let bounds = sol.bounds.get(&sv).expect("call target bounds");
        assert!(bounds.lower.contains(&TypeCapability::Callable));
        assert_eq!(sol.primitive_types.get(&sv), Some(&PrimitiveType::Ptr));
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
            ssa.var_types
                .get(&x_sv)
                .copied()
                .unwrap_or(PrimitiveType::Unknown)
                == PrimitiveType::Unknown,
            "unmodelled opcode output must stay Unknown, got {:?}",
            ssa.var_types.get(&x_sv)
        );
    }
}
