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

use linkscope::TraceField;
use unlace_ir::IrOp;
use unlace_ir::ssa::{PrimitiveType, SsaFunction, SsaVarnode, VarnodeSlot};

use crate::pass::{Pass, PassError};

const DEFAULT_TYPE_CONSTRAINT_MAX_CONSTRAINTS: usize = 30_000;

fn type_constraint_max_constraints() -> usize {
    type_constraint_max_constraints_from(
        std::env::var("UNLACE_TYPE_CONSTRAINT_MAX_CONSTRAINTS")
            .ok()
            .as_deref(),
    )
}

fn type_constraint_max_constraints_from(value: Option<&str>) -> usize {
    value
        .and_then(|value| value.trim().parse::<usize>().ok())
        .unwrap_or(DEFAULT_TYPE_CONSTRAINT_MAX_CONSTRAINTS)
}

fn type_constraint_over_budget(count: usize) -> bool {
    let limit = type_constraint_max_constraints();
    linkscope::record_items("pass.type-constraint.max-constraints", limit as u64);
    let over_budget = limit > 0 && count > limit;
    if over_budget {
        linkscope::record_items("pass.type-constraint.large-skip", 1);
    }
    over_budget
}

/// One type-recovery fact about an SSA varnode (or a pair of them).
#[derive(Clone, Debug, PartialEq, Eq, PartialOrd, Ord)]
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

/// Compact capability set replacing `BTreeSet<TypeCapability>`.
///
/// The 6 non-parameterized variants are tracked as flag bits in a `u8`:
///   bit 0 = Any, 1 = Bool, 2 = Float32, 3 = Float64,
///   4 = Pointer, 5 = Address, 6 = Callable
///
/// `Integer { width, signed }` variants are stored in a small inline
/// vec (most vars have 0–2). `insert` returns `true` when the set
/// changed; `contains` is O(1) for flags, O(n) for integers (n ≤ 4).
///
/// Inspired by rustc's `DenseBitSet<T>` (`compiler/rustc_index/src/
/// bit_set.rs`) but adapted for the parameterized Integer variant
/// which can't be encoded as a single bit position.
#[derive(Clone, Debug, PartialEq, Eq, Default)]
pub struct CapSet {
    flags: u8,
    /// Integer capabilities — deduplicated by (width, signed).
    integers: smallvec::SmallVec<[(u8, Option<bool>); 2]>,
}

const CAP_ANY: u8 = 1 << 0;
const CAP_BOOL: u8 = 1 << 1;
const CAP_FLOAT32: u8 = 1 << 2;
const CAP_FLOAT64: u8 = 1 << 3;
const CAP_POINTER: u8 = 1 << 4;
const CAP_ADDRESS: u8 = 1 << 5;
const CAP_CALLABLE: u8 = 1 << 6;

impl CapSet {
    pub fn new() -> Self {
        Self::default()
    }

    fn flag_bit(cap: &TypeCapability) -> Option<u8> {
        match cap {
            TypeCapability::Any => Some(CAP_ANY),
            TypeCapability::Bool => Some(CAP_BOOL),
            TypeCapability::Float32 => Some(CAP_FLOAT32),
            TypeCapability::Float64 => Some(CAP_FLOAT64),
            TypeCapability::Pointer => Some(CAP_POINTER),
            TypeCapability::Address => Some(CAP_ADDRESS),
            TypeCapability::Callable => Some(CAP_CALLABLE),
            TypeCapability::Integer { .. } => None,
        }
    }

    /// Insert a capability. Returns `true` if the set changed.
    pub fn insert(&mut self, cap: TypeCapability) -> bool {
        if let Some(bit) = Self::flag_bit(&cap) {
            let old = self.flags;
            self.flags |= bit;
            self.flags != old
        } else if let TypeCapability::Integer { width, signed } = cap {
            let key = (width, signed);
            if self.integers.contains(&key) {
                false
            } else {
                self.integers.push(key);
                true
            }
        } else {
            false
        }
    }

    /// Check membership. O(1) for flags, O(n) for integers (n ≤ 4 typical).
    pub fn contains(&self, cap: &TypeCapability) -> bool {
        if let Some(bit) = Self::flag_bit(cap) {
            self.flags & bit != 0
        } else if let TypeCapability::Integer { width, signed } = cap {
            self.integers.contains(&(*width, *signed))
        } else {
            false
        }
    }

    /// Iterate all contained capabilities in a deterministic order
    /// (flags first in bit order, then integers in insertion order).
    pub fn iter(&self) -> impl Iterator<Item = TypeCapability> + '_ {
        static FLAG_CAPS: [(u8, TypeCapability); 7] = [
            (CAP_ANY, TypeCapability::Any),
            (CAP_BOOL, TypeCapability::Bool),
            (CAP_FLOAT32, TypeCapability::Float32),
            (CAP_FLOAT64, TypeCapability::Float64),
            (CAP_POINTER, TypeCapability::Pointer),
            (CAP_ADDRESS, TypeCapability::Address),
            (CAP_CALLABLE, TypeCapability::Callable),
        ];
        let flags = self.flags;
        FLAG_CAPS
            .iter()
            .filter(move |(bit, _)| flags & bit != 0)
            .map(|(_, cap)| *cap)
            .chain(self.integers.iter().map(|&(w, s)| TypeCapability::Integer {
                width: w,
                signed: s,
            }))
    }

    /// Union another set into self. Returns `true` if self changed.
    pub fn union(&mut self, other: &CapSet) -> bool {
        let old_flags = self.flags;
        self.flags |= other.flags;
        let mut changed = self.flags != old_flags;
        for &key in &other.integers {
            if !self.integers.contains(&key) {
                self.integers.push(key);
                changed = true;
            }
        }
        changed
    }

    pub fn is_empty(&self) -> bool {
        self.flags == 0 && self.integers.is_empty()
    }
}

#[derive(Clone, Debug, PartialEq, Eq, Default)]
pub struct PolyTypeBounds {
    pub lower: CapSet,
    pub upper: CapSet,
}

#[derive(Clone, Debug, PartialEq, Eq, Default)]
pub struct PolyTypeSolution {
    pub bounds: BTreeMap<SsaVarnode, PolyTypeBounds>,
    pub primitive_types: BTreeMap<SsaVarnode, PrimitiveType>,
}

#[derive(Copy, Clone, Debug)]
enum IndexedConstraint {
    Equal(usize, PrimitiveType),
    Subtype(usize, PrimitiveType),
    PointsTo(usize, usize),
    SameType(usize, usize),
    PolySubtype { lower: usize, upper: usize },
    HasCapability(usize, TypeCapability),
}

struct DenseVars {
    vars: Vec<SsaVarnode>,
    index: BTreeMap<SsaVarnode, usize>,
}

impl DenseVars {
    fn new(func: &SsaFunction, constraints: &[Constraint]) -> Self {
        let mut seen: BTreeSet<SsaVarnode> = func.var_types.keys().copied().collect();
        for constraint in constraints {
            constraint_vars(constraint, &mut seen);
        }
        let vars: Vec<_> = seen.into_iter().collect();
        let index = vars
            .iter()
            .copied()
            .enumerate()
            .map(|(idx, sv)| (sv, idx))
            .collect();
        Self { vars, index }
    }

    fn idx(&self, sv: SsaVarnode) -> usize {
        *self
            .index
            .get(&sv)
            .expect("constraint var should be indexed")
    }

    fn convert(&self, constraint: &Constraint) -> IndexedConstraint {
        match *constraint {
            Constraint::Equal(v, ty) => IndexedConstraint::Equal(self.idx(v), ty),
            Constraint::Subtype(v, ty) => IndexedConstraint::Subtype(self.idx(v), ty),
            Constraint::PointsTo(addr, val) => {
                IndexedConstraint::PointsTo(self.idx(addr), self.idx(val))
            }
            Constraint::SameType(a, b) => IndexedConstraint::SameType(self.idx(a), self.idx(b)),
            Constraint::PolySubtype { lower, upper } => IndexedConstraint::PolySubtype {
                lower: self.idx(lower),
                upper: self.idx(upper),
            },
            Constraint::HasCapability(v, cap) => IndexedConstraint::HasCapability(self.idx(v), cap),
        }
    }
}

fn constraint_vars(constraint: &Constraint, seen: &mut BTreeSet<SsaVarnode>) {
    match *constraint {
        Constraint::Equal(v, _) | Constraint::Subtype(v, _) | Constraint::HasCapability(v, _) => {
            seen.insert(v);
        }
        Constraint::PointsTo(a, b) | Constraint::SameType(a, b) => {
            seen.insert(a);
            seen.insert(b);
        }
        Constraint::PolySubtype { lower, upper } => {
            seen.insert(lower);
            seen.insert(upper);
        }
    }
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
                    if matches!(insn.op, IrOp::IntSless | IrOp::IntSlessequal)
                        && let Some(z) = out_sv
                    {
                        cs.push(Constraint::Equal(z, PrimitiveType::Bool));
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
    let _span = linkscope::phase("pass.type-constraint.solve");
    // Two perf improvements over the original naive `for c in &constraints`
    // double-loop:
    //
    //   1. Dedup constraints first. `collect_constraints` walks every
    //      instruction in every block and frequently emits the same
    //      (Constraint::SameType(a, b), Constraint::Equal(v, t), …) fact
    //      twice when an opcode shape recurs across blocks. Sort+dedup
    //      removes ~30–60% of the list before the loop starts.
    //
    //   2. Stop materialising **every** var on every outer iteration.
    //      Instead, track which vars had a bounds update during the
    //      current pass and only re-materialise those.
    //
    //   3. Intern `SsaVarnode` once, then run the fixed-point on dense
    //      `Vec` storage indexed by `usize`. This mirrors rustc's
    //      `Idx`/`IndexVec`/bitset style: the hot loop does array lookups
    //      instead of BTreeMap root-to-leaf searches for every constraint
    //      propagation step.
    //
    // The full var→[constraint] worklist was tried and lost (worklist
    // bookkeeping overhead exceeded the rescan cost because most
    // constraints settle in 1–2 outer iterations). See
    // docs/rustc-techniques.md for the rustc Zulip context.

    let mut constraints = constraints;
    let original_constraints = constraints.len() as u64;
    {
        let _span = linkscope::phase("pass.type-constraint.dedup");
        constraints.sort();
        constraints.dedup();
    }
    linkscope::record_items("pass.type-constraint.constraints.raw", original_constraints);
    linkscope::record_items(
        "pass.type-constraint.constraints.dedup",
        constraints.len() as u64,
    );

    let (dense, indexed_constraints) = {
        let _span = linkscope::phase("pass.type-constraint.index");
        let dense = DenseVars::new(func, &constraints);
        let indexed_constraints: Vec<_> = constraints.iter().map(|c| dense.convert(c)).collect();
        linkscope::record_items("pass.type-constraint.vars", dense.vars.len() as u64);
        (dense, indexed_constraints)
    };
    let var_count = dense.vars.len();
    let mut types = vec![PrimitiveType::Unknown; var_count];
    let mut type_present = vec![false; var_count];
    let mut bounds = vec![PolyTypeBounds::default(); var_count];

    for (sv, ty) in &func.var_types {
        let idx = dense.idx(*sv);
        types[idx] = *ty;
        type_present[idx] = true;
        if let Some(cap) = primitive_to_capability(*ty, sv.base.size) {
            insert_lower_dense(&mut bounds, &dense.vars, idx, cap);
        }
    }

    let max_iters = 64usize;
    let mut iters = 0usize;
    let mut dirty_vars: Vec<usize> = Vec::new();
    let mut dirty_flags = vec![false; var_count];
    {
        let _span = linkscope::phase("pass.type-constraint.fixedpoint");
        let mut constraint_visits = 0u64;
        let mut materialized_vars = 0u64;
        loop {
            if iters >= max_iters {
                linkscope::event_fields(
                    "pass.iteration-limit",
                    [
                        TraceField::text("pass", "TypeConstraintSolver"),
                        TraceField::text("function", func.function.name.clone()),
                        TraceField::count("iterations", max_iters as u64),
                    ],
                );
                break;
            }
            iters += 1;

            let mut changed = false;
            for c in &indexed_constraints {
                constraint_visits += 1;
                match c {
                    IndexedConstraint::Equal(v, t) => {
                        let type_changed = meet_dense(&mut types, &mut type_present, *v, *t);
                        let bound_changed =
                            add_primitive_bound_dense(&mut bounds, &dense.vars, *v, *t);
                        if type_changed || bound_changed {
                            changed = true;
                            mark_dirty(*v, &mut dirty_flags, &mut dirty_vars);
                        }
                    }
                    IndexedConstraint::Subtype(v, t) => {
                        let type_changed = meet_dense(&mut types, &mut type_present, *v, *t);
                        let bound_changed =
                            add_primitive_bound_dense(&mut bounds, &dense.vars, *v, *t);
                        if type_changed || bound_changed {
                            changed = true;
                            mark_dirty(*v, &mut dirty_flags, &mut dirty_vars);
                        }
                    }
                    IndexedConstraint::PointsTo(addr, _val) => {
                        let a =
                            meet_dense(&mut types, &mut type_present, *addr, PrimitiveType::Ptr);
                        let b = insert_lower_dense(
                            &mut bounds,
                            &dense.vars,
                            *addr,
                            TypeCapability::Pointer,
                        );
                        let c2 = insert_lower_dense(
                            &mut bounds,
                            &dense.vars,
                            *addr,
                            TypeCapability::Address,
                        );
                        if a | b | c2 {
                            changed = true;
                            mark_dirty(*addr, &mut dirty_flags, &mut dirty_vars);
                        }
                    }
                    IndexedConstraint::SameType(a, b) => {
                        let mut any = propagate_between_dense(&mut bounds, &dense.vars, *a, *b);
                        let ta = get_dense(&types, &type_present, *a);
                        let tb = get_dense(&types, &type_present, *b);
                        let j = ta.join(tb);
                        if j != PrimitiveType::Unknown {
                            any |= meet_dense(&mut types, &mut type_present, *a, j);
                            any |= meet_dense(&mut types, &mut type_present, *b, j);
                            any |= add_primitive_bound_dense(&mut bounds, &dense.vars, *a, j);
                            any |= add_primitive_bound_dense(&mut bounds, &dense.vars, *b, j);
                        }
                        if any {
                            changed = true;
                            mark_dirty(*a, &mut dirty_flags, &mut dirty_vars);
                            mark_dirty(*b, &mut dirty_flags, &mut dirty_vars);
                        }
                    }
                    IndexedConstraint::PolySubtype { lower, upper } => {
                        let a = propagate_lower_to_upper_dense(
                            &mut bounds,
                            &dense.vars,
                            *lower,
                            *upper,
                        );
                        let b = propagate_upper_to_lower_dense(&mut bounds, *lower, *upper);
                        if a | b {
                            changed = true;
                            mark_dirty(*lower, &mut dirty_flags, &mut dirty_vars);
                            mark_dirty(*upper, &mut dirty_flags, &mut dirty_vars);
                        }
                    }
                    IndexedConstraint::HasCapability(v, cap) => {
                        if insert_lower_dense(&mut bounds, &dense.vars, *v, *cap) {
                            changed = true;
                            mark_dirty(*v, &mut dirty_flags, &mut dirty_vars);
                        }
                    }
                }
            }

            // Materialise only the vars that moved this iteration, not the
            // full bounds map. On a function with thousands of vars and
            // only a handful changing per outer pass this is the dominant
            // savings.
            let drained = std::mem::take(&mut dirty_vars);
            materialized_vars += drained.len() as u64;
            for idx in drained {
                dirty_flags[idx] = false;
                if let Some(ty) = materialize_primitive(dense.vars[idx], &bounds[idx]) {
                    changed |= meet_dense(&mut types, &mut type_present, idx, ty);
                }
            }

            if !changed {
                break;
            }
        }
        linkscope::record_items("pass.type-constraint.iterations", iters as u64);
        linkscope::record_items("pass.type-constraint.constraint-visits", constraint_visits);
        linkscope::record_items("pass.type-constraint.materialized-vars", materialized_vars);
    }

    let (bounds_map, primitive_types) = {
        let _span = linkscope::phase("pass.type-constraint.materialize-output");
        let mut bounds_map = BTreeMap::new();
        for (idx, b) in bounds.into_iter().enumerate() {
            if !b.lower.is_empty() || !b.upper.is_empty() {
                bounds_map.insert(dense.vars[idx], b);
            }
        }
        let mut primitive_types = BTreeMap::new();
        for (idx, ty) in types.into_iter().enumerate() {
            if type_present[idx] {
                primitive_types.insert(dense.vars[idx], ty);
            }
        }
        linkscope::record_items("pass.type-constraint.bounds", bounds_map.len() as u64);
        linkscope::record_items(
            "pass.type-constraint.primitive-types",
            primitive_types.len() as u64,
        );
        (bounds_map, primitive_types)
    };

    PolyTypeSolution {
        bounds: bounds_map,
        primitive_types,
    }
}

/// Convenience wrapper used by [`TypeConstraintSolverPass`]: collect, solve,
/// and merge the solution back into `func.var_types`. Returns `true` when
/// any entry was added or refined.
pub fn collect_and_apply(func: &mut SsaFunction) -> bool {
    let _span = linkscope::phase("pass.type-constraint.collect-and-apply");
    let cs = {
        let _span = linkscope::phase("pass.type-constraint.collect");
        let cs = collect_constraints(func);
        linkscope::record_items("pass.type-constraint.collect", cs.len() as u64);
        cs
    };
    if type_constraint_over_budget(cs.len()) {
        return false;
    }
    let solved = solve_constraints(func, cs);

    let mut changed = false;
    {
        let _span = linkscope::phase("pass.type-constraint.apply");
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

    fn phase(&self) -> crate::pass::PassPhase {
        crate::pass::PassPhase::TypeRecovery
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

fn get_dense(types: &[PrimitiveType], present: &[bool], idx: usize) -> PrimitiveType {
    if present[idx] {
        types[idx]
    } else {
        PrimitiveType::Unknown
    }
}

/// Join `idx`'s current type with `ty` and store the result. Returns `true`
/// when the stored type actually moved.
///
/// **Monotonicity invariant**: once a var reaches `Unknown` via a conflict
/// (i.e., it was previously concrete and `join` collapsed it), it stays
/// `Unknown` for the rest of the solve. Without this, `SameType(a, b)`
/// constraints that mix incompatible concrete types create an infinite
/// oscillation: Equal re-asserts a concrete type, SameType collapses it
/// back to Unknown, repeat for 64 iterations.
fn meet_dense(
    types: &mut [PrimitiveType],
    present: &mut [bool],
    idx: usize,
    ty: PrimitiveType,
) -> bool {
    if ty == PrimitiveType::Unknown {
        return false;
    }
    let cur = if present[idx] {
        types[idx]
    } else {
        PrimitiveType::Unknown
    };
    // If the var was already concrete and is now being set to Unknown
    // via a conflict join, freeze it at Unknown permanently.
    if cur == PrimitiveType::Unknown && present[idx] {
        // Already collapsed — don't let it come back to concrete.
        return false;
    }
    let joined = cur.join(ty);
    if joined != cur {
        types[idx] = joined;
        present[idx] = true;
        true
    } else if !present[idx] {
        types[idx] = ty;
        present[idx] = true;
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

fn mark_dirty(idx: usize, dirty_flags: &mut [bool], dirty_vars: &mut Vec<usize>) {
    if !dirty_flags[idx] {
        dirty_flags[idx] = true;
        dirty_vars.push(idx);
    }
}

fn add_primitive_bound_dense(
    bounds: &mut [PolyTypeBounds],
    vars: &[SsaVarnode],
    idx: usize,
    ty: PrimitiveType,
) -> bool {
    primitive_to_capability(ty, vars[idx].base.size)
        .is_some_and(|cap| insert_lower_dense(bounds, vars, idx, cap))
}

fn insert_lower_dense(
    bounds: &mut [PolyTypeBounds],
    vars: &[SsaVarnode],
    idx: usize,
    cap: TypeCapability,
) -> bool {
    let sv = vars[idx];
    let mut changed = bounds[idx].lower.insert(cap);
    match cap {
        TypeCapability::Pointer => {
            changed |= bounds[idx].lower.insert(TypeCapability::Address);
            changed |= bounds[idx].lower.insert(TypeCapability::Integer {
                width: sv.base.size,
                signed: None,
            });
        }
        TypeCapability::Callable => {
            changed |= bounds[idx].lower.insert(TypeCapability::Pointer);
            changed |= bounds[idx].lower.insert(TypeCapability::Address);
        }
        _ => {}
    }
    changed
}

fn insert_upper_dense(bounds: &mut [PolyTypeBounds], idx: usize, cap: TypeCapability) -> bool {
    bounds[idx].upper.insert(cap)
}

fn propagate_between_dense(
    bounds: &mut [PolyTypeBounds],
    vars: &[SsaVarnode],
    a: usize,
    b: usize,
) -> bool {
    let mut changed = propagate_lower_to_upper_dense(bounds, vars, a, b);
    changed |= propagate_lower_to_upper_dense(bounds, vars, b, a);
    changed |= propagate_upper_to_lower_dense(bounds, a, b);
    changed |= propagate_upper_to_lower_dense(bounds, b, a);
    changed
}

fn propagate_lower_to_upper_dense(
    bounds: &mut [PolyTypeBounds],
    vars: &[SsaVarnode],
    lower: usize,
    upper: usize,
) -> bool {
    let caps: Vec<_> = bounds[lower].lower.iter().collect();
    // `fold` (not `any`) is intentional: `insert_lower` mutates `bounds` for
    // every `cap`, and we need to visit them all. `any` would short-circuit on
    // the first `true` and skip the remaining capability insertions.
    #[allow(clippy::unnecessary_fold)]
    caps.into_iter().fold(false, |changed, cap| {
        insert_lower_dense(bounds, vars, upper, cap) || changed
    })
}

fn propagate_upper_to_lower_dense(
    bounds: &mut [PolyTypeBounds],
    lower: usize,
    upper: usize,
) -> bool {
    let caps: Vec<_> = bounds[upper]
        .upper
        .iter()
        .chain(bounds[upper].lower.iter())
        .collect();
    // See note above: `fold` is intentional to avoid short-circuiting the
    // side-effectful `insert_upper` call.
    #[allow(clippy::unnecessary_fold)]
    caps.into_iter().fold(false, |changed, cap| {
        insert_upper_dense(bounds, lower, cap) || changed
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
    for cap in bounds.lower.iter() {
        if let TypeCapability::Integer { width, signed } = cap {
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
mod capset_tests {
    use super::*;

    #[test]
    fn insert_flag_caps_returns_changed() {
        let mut s = CapSet::new();
        assert!(s.insert(TypeCapability::Pointer));
        assert!(!s.insert(TypeCapability::Pointer)); // duplicate
        assert!(s.insert(TypeCapability::Bool));
        assert!(s.contains(&TypeCapability::Pointer));
        assert!(s.contains(&TypeCapability::Bool));
        assert!(!s.contains(&TypeCapability::Float64));
    }

    #[test]
    fn insert_integer_deduplicates() {
        let mut s = CapSet::new();
        assert!(s.insert(TypeCapability::Integer {
            width: 4,
            signed: Some(true)
        }));
        assert!(!s.insert(TypeCapability::Integer {
            width: 4,
            signed: Some(true)
        }));
        assert!(s.insert(TypeCapability::Integer {
            width: 4,
            signed: Some(false)
        }));
        assert!(s.contains(&TypeCapability::Integer {
            width: 4,
            signed: Some(true)
        }));
        assert!(s.contains(&TypeCapability::Integer {
            width: 4,
            signed: Some(false)
        }));
        assert!(!s.contains(&TypeCapability::Integer {
            width: 8,
            signed: None
        }));
    }

    #[test]
    fn union_merges_flags_and_integers() {
        let mut a = CapSet::new();
        a.insert(TypeCapability::Pointer);
        a.insert(TypeCapability::Integer {
            width: 8,
            signed: None,
        });

        let mut b = CapSet::new();
        b.insert(TypeCapability::Callable);
        b.insert(TypeCapability::Integer {
            width: 4,
            signed: Some(true),
        });

        assert!(a.union(&b));
        assert!(a.contains(&TypeCapability::Pointer));
        assert!(a.contains(&TypeCapability::Callable));
        assert!(a.contains(&TypeCapability::Integer {
            width: 8,
            signed: None
        }));
        assert!(a.contains(&TypeCapability::Integer {
            width: 4,
            signed: Some(true)
        }));
        assert!(!a.union(&b)); // idempotent
    }

    #[test]
    fn iter_yields_flags_then_integers() {
        let mut s = CapSet::new();
        s.insert(TypeCapability::Callable);
        s.insert(TypeCapability::Bool);
        s.insert(TypeCapability::Integer {
            width: 2,
            signed: Some(false),
        });
        let items: Vec<_> = s.iter().collect();
        // Flags come first (Bool before Callable by bit order), then integers.
        assert_eq!(items[0], TypeCapability::Bool);
        assert_eq!(items[1], TypeCapability::Callable);
        assert_eq!(
            items[2],
            TypeCapability::Integer {
                width: 2,
                signed: Some(false)
            }
        );
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, SpaceId, Varnode};

    #[test]
    fn type_constraint_limit_default_and_override() {
        assert_eq!(type_constraint_max_constraints_from(None), 30_000);
        assert_eq!(type_constraint_max_constraints_from(Some("42")), 42);
        assert_eq!(type_constraint_max_constraints_from(Some("0")), 0);
        assert_eq!(
            type_constraint_max_constraints_from(Some("not-a-number")),
            30_000
        );
    }

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

        _ = make_multi_block_ssa; // keep helper referenced; not used here.

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

        _ = collect_and_apply(&mut ssa);

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

        _ = collect_and_apply(&mut ssa);

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
