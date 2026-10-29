//! Pointer arithmetic correction (CPA) for typed pointers.
//!
//! Hex-Rays rewrites raw address arithmetic into typed C in one ctree pass
//! (hexx64 `sub_270860`, per-expression callback `sub_276380`): a pointer
//! expression is split into a typed root and a linear offset ([`linear`]),
//! the offset is counted in units the root can index ([`scale`]), and the
//! expression is rebuilt as `cot_idx`, `cot_memptr`, `cot_memref` or a scaled
//! `cot_add`, with a cast only where the units or widths disagree
//! ([`build`]). Unlace prints straight from SSA, so the same rewrite runs where
//! the printer renders such an expression:
//!
//! - a load or store through the pointer: `p[i]`, `p->m`, `p[i].m`,
//!   `*((_DWORD *)p + 1)`, and, when nothing else divides the offset,
//!   `*(_DWORD *)((char *)p + 6)`;
//! - a pointer value: `p + 2`, `(char *)p + 6`, `(char *)p - (char *)q`;
//! - an update of the pointer variable: `++p`, `p += i`.
//!
//! A root is a variable declared as a pointer to a known pointee (see
//! [`PrintCtx::pointees`]). C scales arithmetic on such a variable by the
//! pointee size, so its byte offsets must be divided out or cast away. Untyped
//! bases are left to the raw `*(T *)(p + c)` rendering, as Hex-Rays leaves
//! them.

mod build;
mod linear;
mod object;
mod scale;

use super::member_path::MemberPath;
use super::*;
use linear::{AddrGraph, AddrNode, LinearForm, Operand, Term};
use scale::Unit;

pub(super) use object::{object_access_is_stable, try_object_access};

/// What a pointer variable points to, as declared by debug info.
#[derive(Debug, Clone, PartialEq, Eq)]
pub(super) enum Pointee {
    /// A struct with a known layout in [`PrintCtx::struct_layouts`].
    Struct(String),
    /// A scalar (or opaque) element of the given byte size.
    Scalar(u64),
}

/// An SSA value as input `slot` of statement `stmt` reads it. Index terms are
/// rendered at that read, so they print the way the address statement would.
#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord)]
struct ValueUse {
    sv: SsaVarnode,
    stmt: u32,
    slot: usize,
}

/// `root + Σ terms + constant`, counted in `unit`s of the root's pointee.
#[derive(Debug, Clone)]
struct ScaledAddr {
    root: SsaVarnode,
    /// Size of the root's pointee.
    element_size: u64,
    unit: Unit,
    terms: Vec<Term<ValueUse>>,
    constant: i64,
}

/// The member an access selects inside a struct element.
#[derive(Debug, Clone, PartialEq, Eq)]
enum Member {
    /// A leaf member of exactly the accessed width: `p->size.x`.
    Leaf(MemberPath),
    /// A member that starts at the accessed byte and is read as another
    /// type: `*(_QWORD *)&p->size`.
    Start(MemberPath),
}

/// How one load or store through a typed root prints.
#[derive(Debug, Clone)]
struct AccessPlan {
    /// For a struct member, `constant` is the element index and the member
    /// covers the rest of the offset.
    addr: ScaledAddr,
    /// Set only for struct pointees counted in elements.
    member: Option<Member>,
    width: u64,
}

/// Render the access of `width` bytes at `addr_vn` (an input of `stmt_idx`)
/// through its root pointer's declared pointee, if it has one.
pub(super) fn try_typed_access(
    addr_vn: &Varnode,
    stmt_idx: u32,
    width: u8,
    ctx: &mut PrintCtx,
) -> Option<String> {
    let plan = plan_access(addr_vn, stmt_idx, width, ctx)?;
    Some(build::render_access(&plan, ctx).to_string())
}

/// `true` when [`try_typed_access`] renders this access with a constant
/// address (`p->m`, `p[2]`), so a load of it is a stable expression that may
/// be inlined. An indexed access depends on its index's value at the load and
/// stays in its temp.
pub(super) fn typed_access_is_stable(
    addr_vn: &Varnode,
    stmt_idx: u32,
    width: u8,
    ctx: &PrintCtx,
) -> bool {
    plan_access(addr_vn, stmt_idx, width, ctx).is_some_and(|plan| plan.addr.terms.is_empty())
}

/// Render the pointer value `insn` (statement `stmt_idx`) computes, when it moves a
/// typed root: `p + 2`, `p + i - 1`, `(char *)p + 6`, or the byte difference
/// `(char *)p - (char *)q` of two typed pointers. The result is an additive
/// expression.
pub(super) fn try_typed_pointer_sum(
    insn: &IrInsn,
    stmt_idx: u32,
    ctx: &mut PrintCtx,
) -> Option<String> {
    if let Some(diff) = typed_pointer_difference(insn, stmt_idx, ctx) {
        return Some(diff);
    }
    let addr = plan_sum(insn, stmt_idx, ctx)?;
    Some(build::render_pointer(&addr, ctx).to_string())
}

/// Render `insn` (statement `stmt_idx`), which assigns `lhs` (a typed root)
/// its own value moved by an offset, as an update: `++p`, `p -= 2`, `p += i`,
/// or `p = (char *)p + 6` when the offset is not whole elements.
pub(super) fn typed_pointer_update(
    insn: &IrInsn,
    stmt_idx: u32,
    lhs: &str,
    ctx: &mut PrintCtx,
) -> Option<String> {
    let out = ctx.stmt_outputs.get(&stmt_idx).copied().flatten()?;
    let addr = plan_sum(insn, stmt_idx, ctx)?;
    if addr.root.base != out.base || ctx.name_of(&addr.root) != lhs {
        return None;
    }
    build::render_update(&addr, lhs, ctx)
}

fn plan_access(addr_vn: &Varnode, stmt_idx: u32, width: u8, ctx: &PrintCtx) -> Option<AccessPlan> {
    if ctx.pointees.is_empty() || addr_vn.space == SpaceId::Const || width == 0 {
        return None;
    }
    let slot = ctx
        .stmt_insns
        .get(&stmt_idx)?
        .inputs
        .iter()
        .position(|vn| vn == addr_vn)?;
    let addr = ValueUse {
        sv: input_sv(ctx, stmt_idx, addr_vn)?,
        stmt: stmt_idx,
        slot,
    };
    let form = linear::decompose(&PrintGraph(ctx), addr)?;
    let width = u64::from(width);
    let (addr, member) = match typed_root(ctx, form.root.sv)? {
        Pointee::Scalar(size) => (scale_scalar(form, *size, Some(width))?, None),
        Pointee::Struct(name) => {
            let size = ctx.struct_layouts.size_of(name).filter(|&s| s > 0)?;
            match struct_member(name, size, &coefs_of(&form), form.constant, width, ctx) {
                Some((element_delta, member)) => {
                    let mut addr = scale(form, size, Unit::Element);
                    addr.constant = element_delta;
                    (addr, Some(member))
                }
                // A struct offset that no member covers is addressed in bytes.
                None => (scale(form, size, Unit::Bytes), None),
            }
        }
    };
    let plan = AccessPlan {
        addr,
        member,
        width,
    };
    trace_plan(
        "access",
        stmt_idx,
        &plan.addr,
        Some(width),
        plan.member.as_ref(),
    );
    Some(plan)
}

/// The scaled form of the pointer sum `insn` (statement `stmt_idx`) computes,
/// when it moves a typed root by a nonzero offset.
fn plan_sum(insn: &IrInsn, stmt_idx: u32, ctx: &PrintCtx) -> Option<ScaledAddr> {
    if ctx.pointees.is_empty() {
        return None;
    }
    let graph = PrintGraph(ctx);
    let node = graph.node_of(insn, stmt_idx)?;
    if !matches!(
        node,
        AddrNode::Add(..) | AddrNode::Sub(..) | AddrNode::PtrAdd { .. }
    ) {
        return None;
    }
    let form = linear::decompose_node(&graph, node)?;
    if form.terms.is_empty() && form.constant == 0 {
        return None;
    }
    let addr = match typed_root(ctx, form.root.sv)? {
        Pointee::Scalar(size) => scale_scalar(form, *size, None)?,
        Pointee::Struct(name) => {
            let size = ctx.struct_layouts.size_of(name).filter(|&s| s > 0)?;
            let unit = scale::choose_unit(size, None, &coefs_of(&form), form.constant);
            scale(form, size, unit)
        }
    };
    trace_plan("sum", stmt_idx, &addr, None, None);
    Some(addr)
}

/// `(char *)p - (char *)q` for `insn` (statement `stmt_idx`) computing `p - q` on two
/// typed roots. C would divide the difference by the pointee size (Hex-Rays
/// casts the same way, hexx64 `sub_276380` on `cot_sub`).
fn typed_pointer_difference(insn: &IrInsn, stmt_idx: u32, ctx: &mut PrintCtx) -> Option<String> {
    if insn.op != IrOp::IntSub || insn.inputs.len() != 2 {
        return None;
    }
    let (lhs_vn, rhs_vn) = (insn.inputs[0], insn.inputs[1]);
    let lhs = input_sv(ctx, stmt_idx, &lhs_vn)?;
    let rhs = input_sv(ctx, stmt_idx, &rhs_vn)?;
    let pair = (typed_root(ctx, lhs)?, typed_root(ctx, rhs)?);
    if let (Pointee::Scalar(1), Pointee::Scalar(1)) = pair {
        return None;
    }
    Some(build::render_byte_difference(lhs, rhs, ctx).to_string())
}

/// Count a scalar root's offset in the unit [`scale::choose_unit`] picks.
fn scale_scalar(
    form: LinearForm<ValueUse>,
    element_size: u64,
    access_width: Option<u64>,
) -> Option<ScaledAddr> {
    if element_size == 0 {
        return None;
    }
    let unit = scale::choose_unit(element_size, access_width, &coefs_of(&form), form.constant);
    Some(scale(form, element_size, unit))
}

/// Divide `form` into `unit`s, which must divide every coefficient and the
/// constant.
fn scale(form: LinearForm<ValueUse>, element_size: u64, unit: Unit) -> ScaledAddr {
    let size = i64::try_from(unit.size(element_size)).unwrap_or(i64::MAX);
    ScaledAddr {
        root: form.root.sv,
        element_size,
        unit,
        terms: form
            .terms
            .into_iter()
            .map(|term| Term {
                leaf: term.leaf,
                coef: term.coef / size,
            })
            .collect(),
        constant: form.constant / size,
    }
}

fn coefs_of(form: &LinearForm<ValueUse>) -> Vec<i64> {
    form.terms.iter().map(|term| term.coef).collect()
}

fn trace_plan(
    kind: &str,
    stmt_idx: u32,
    addr: &ScaledAddr,
    width: Option<u64>,
    member: Option<&Member>,
) {
    tracing::debug!(target: "unlace::cprinter::cpa",
        "cpa {kind} stmt={stmt_idx} root={:?} element_size={} width={width:?} unit={:?} terms={:?} constant={} member={member:?}",
        addr.root,
        addr.element_size,
        addr.unit,
        addr.terms.iter().map(|t| (t.leaf.sv, t.coef)).collect::<Vec<_>>(),
        addr.constant,
    );
}

/// The element index and member an access selects through a pointer to the
/// struct `name`, when every index term steps over whole elements and the
/// remaining offset lands on a member. Hex-Rays walks the pointee's members
/// the same way before it scales what is left (hexx64 `sub_273A40`,
/// `sub_272C50`).
fn struct_member(
    name: &str,
    size: u64,
    coefs: &[i64],
    constant: i64,
    width: u64,
    ctx: &PrintCtx,
) -> Option<(i64, Member)> {
    let size = i64::try_from(size).ok()?;
    if coefs.iter().any(|coef| coef % size != 0) {
        return None;
    }
    // A negative offset with no index reaches before the pointee: Hex-Rays
    // prints that through a shifted-pointer `ADJ` helper, not an element.
    if coefs.is_empty() && constant < 0 {
        return None;
    }
    let element_delta = constant.div_euclid(size);
    let within = constant.rem_euclid(size) as u64;
    let layouts = &ctx.struct_layouts;
    let member = layouts
        .member_path(name, within, width)
        .map(Member::Leaf)
        .or_else(|| layouts.member_start(name, within, width).map(Member::Start))?;
    Some((element_delta, member))
}

/// The pointee of `sv` when it prints as a variable declared as a typed
/// pointer.
fn typed_root(ctx: &PrintCtx, sv: SsaVarnode) -> Option<&Pointee> {
    let pointee = ctx.pointees.get(&sv.base)?;
    // A version renamed apart from the parameter is not declared with its
    // type.
    let declared = ctx.name_overrides.get(&sv.base)?;
    ctx.var_names
        .get(&sv)
        .is_none_or(|name| name == declared)
        .then_some(pointee)
}

fn input_sv(ctx: &PrintCtx, stmt: u32, vn: &Varnode) -> Option<SsaVarnode> {
    ctx.stmt_inputs
        .get(&stmt)
        .and_then(|inputs| inputs.iter().find(|sv| sv.base == *vn).copied())
}

/// The printer's recorded definitions, read as address arithmetic.
struct PrintGraph<'a>(&'a PrintCtx);

impl PrintGraph<'_> {
    /// The arithmetic `insn` (statement `stmt`) computes.
    fn node_of(&self, insn: &IrInsn, stmt: u32) -> Option<AddrNode<ValueUse>> {
        let ctx = self.0;
        let operand = |slot: usize| -> Option<Operand<ValueUse>> {
            let vn = insn.inputs.get(slot)?;
            if vn.space == SpaceId::Const {
                return Some(Operand::Const(signed_const_value(vn)));
            }
            Some(Operand::Value(ValueUse {
                sv: input_sv(ctx, stmt, vn)?,
                stmt,
                slot,
            }))
        };
        let node = match (insn.op, insn.inputs.len()) {
            (IrOp::Copy, 1) => AddrNode::Copy(operand(0)?),
            (IrOp::IntAdd, 2) => AddrNode::Add(operand(0)?, operand(1)?),
            (IrOp::IntSub, 2) => AddrNode::Sub(operand(0)?, operand(1)?),
            (IrOp::IntMult, 2) => AddrNode::Mul(operand(0)?, operand(1)?),
            (IrOp::IntLeft, 2) => AddrNode::Shl(operand(0)?, operand(1)?),
            (IrOp::Int2comp, 1) => AddrNode::Neg(operand(0)?),
            (IrOp::Ptradd, 3) => {
                let Operand::Const(size) = operand(2)? else {
                    return None;
                };
                AddrNode::PtrAdd {
                    base: operand(0)?,
                    index: operand(1)?,
                    size,
                }
            }
            _ => return None,
        };
        Some(node)
    }
}

impl AddrGraph for PrintGraph<'_> {
    type Leaf = ValueUse;

    fn node(&self, leaf: ValueUse) -> Option<AddrNode<ValueUse>> {
        let stmt = *self.0.sv_defining_stmt.get(&leaf.sv)?;
        self.node_of(self.0.stmt_insns.get(&stmt)?, stmt)
    }

    fn is_root(&self, leaf: ValueUse) -> bool {
        typed_root(self.0, leaf.sv).is_some()
    }
}
