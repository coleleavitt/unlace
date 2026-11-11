//! Accesses to typed memory objects: `stru_404080[i].fld_1`, `buf_144[3]`,
//! `stru_404040.fld_2`.
//!
//! Hex-Rays treats an object root (a global `cot_obj`, a stack `cot_var`) in
//! the same pointer-arithmetic callback as a typed pointer (hexx64
//! `sub_276380`). Here the address is split into a linear form whose root is
//! the frame-base register for a frame object and missing for a global; the
//! constant then picks the object and the offset into it, and the index terms
//! and that offset walk the object's type ([`mem_objects::ObjectPath`]). An
//! access no member fits is still rebased onto the object, as
//! `*(T *)((char *)&obj + off)`, so no access into a declared object falls
//! back to a raw address or to a name inside it.
//!
//! [`mem_objects::ObjectPath`]: super::super::mem_objects::ObjectPath

use super::super::mem_objects::{self, Fit, ObjectPath, Step};
use super::build::{prefix_cast, sized_deref, sum};
use super::*;
use unlace_ir::mem_object::MemObject;

/// How one load or store of a typed object prints.
#[derive(Debug)]
struct ObjectPlan {
    object: MemObject,
    name: String,
    terms: Vec<Term<ValueUse>>,
    shape: Shape,
    width: u64,
}

#[derive(Debug)]
enum Shape {
    Path(ObjectPath),
    /// No member starts at the access: a byte offset from the object start.
    Bytes(i64),
}

/// Render the access of `width` bytes at `addr_vn` (an input of `stmt_idx`)
/// when it lands in a typed memory object.
pub(in crate::c_printer) fn try_object_access(
    addr_vn: &Varnode,
    stmt_idx: u32,
    width: u8,
    ctx: &mut PrintCtx,
) -> Option<String> {
    let plan = plan_object_access(addr_vn, stmt_idx, width, ctx)?;
    tracing::debug!(target: "unlace::cprinter::cpa",
        "cpa object stmt={stmt_idx} object={} width={} terms={:?} shape={:?}",
        plan.name,
        plan.width,
        plan.terms.iter().map(|t| (t.leaf.sv, t.coef)).collect::<Vec<_>>(),
        plan.shape,
    );
    ctx.mem_objects.mark_used(plan.object);
    Some(render(plan, ctx).to_string())
}

/// `true` when [`try_object_access`] renders this access without an index
/// term, so a load of it is a stable expression that may be inlined.
pub(in crate::c_printer) fn object_access_is_stable(
    addr_vn: &Varnode,
    stmt_idx: u32,
    width: u8,
    ctx: &PrintCtx,
) -> bool {
    plan_object_access(addr_vn, stmt_idx, width, ctx).is_some_and(|plan| plan.terms.is_empty())
}

fn plan_object_access(
    addr_vn: &Varnode,
    stmt_idx: u32,
    width: u8,
    ctx: &PrintCtx,
) -> Option<ObjectPlan> {
    if ctx.mem_objects.is_empty() || width == 0 {
        return None;
    }
    let addr = if addr_vn.space == SpaceId::Const {
        Operand::Const(addr_vn.offset as i64)
    } else {
        let slot = ctx
            .stmt_insns
            .get(&stmt_idx)?
            .inputs
            .iter()
            .position(|vn| vn == addr_vn)?;
        Operand::Value(ValueUse {
            sv: input_sv(ctx, stmt_idx, addr_vn)?,
            stmt: stmt_idx,
            slot,
        })
    };
    let form = linear::decompose_unrooted(&ObjectGraph(ctx), addr)?;
    let objects = &ctx.mem_objects;
    let place = match form.root {
        Some(_) => MemObject::Frame(form.constant),
        None => {
            let bits = u32::from(objects.layout().pointer_size) * 8;
            let mask = u64::MAX.checked_shr(64 - bits).unwrap_or(u64::MAX);
            MemObject::Global(form.constant as u64 & mask)
        }
    };
    let (object, info, offset) = objects.containing(place)?;
    let width = u64::from(width);
    let coefs: Vec<i64> = form.terms.iter().map(|term| term.coef).collect();
    let shape = match mem_objects::resolve(&info.ty, objects.layout(), offset, &coefs, width) {
        Some(path) => Shape::Path(path),
        None => Shape::Bytes(i64::try_from(offset).ok()?),
    };
    Some(ObjectPlan {
        object,
        name: info.name.clone(),
        terms: form.terms,
        shape,
        width,
    })
}

fn render(plan: ObjectPlan, ctx: &mut PrintCtx) -> CExpr {
    let root = CExpr::lit(plan.name);
    match plan.shape {
        Shape::Path(path) => {
            let mut expr = root;
            for step in path.steps {
                expr = match step {
                    Step::Index { coefs, constant } => {
                        let terms: Vec<_> = plan
                            .terms
                            .iter()
                            .zip(coefs)
                            .map(|(term, coef)| Term {
                                leaf: term.leaf,
                                coef,
                            })
                            .collect();
                        let index =
                            sum(None, &terms, constant, ctx).unwrap_or_else(|| CExpr::lit("0"));
                        CExpr::index(expr, index)
                    }
                    Step::Field(name) => CExpr::dot(expr, name),
                };
            }
            match path.fit {
                Fit::Leaf => expr,
                Fit::Start => sized_deref(plan.width, CExpr::addr_of(expr)),
            }
        }
        Shape::Bytes(offset) => {
            let base = prefix_cast("char *", &CExpr::addr_of(root));
            let addr = sum(Some(base.clone()), &plan.terms, offset, ctx).unwrap_or(base);
            sized_deref(plan.width, addr)
        }
    }
}

/// The printer's definitions read as an object address: a frame-base
/// register is the root of a frame object's address, and the instruction
/// pointer of a RIP-relative address contributes nothing (the lifter adds
/// the absolute target).
///
/// Only definitions folded into their reader are looked through. A value
/// printed as its own variable is an index term under its name: its operands
/// may be reassigned before the access (`v1 = a1 << 4; a1 <<= 4;`), so
/// rendering them at the access would read the wrong version.
struct ObjectGraph<'a>(&'a PrintCtx);

impl AddrGraph for ObjectGraph<'_> {
    type Leaf = ValueUse;

    fn node(&self, leaf: ValueUse) -> Option<AddrNode<ValueUse>> {
        if is_instruction_pointer_reg(&leaf.sv.base) {
            return Some(AddrNode::Copy(Operand::Const(0)));
        }
        let stmt = self.0.sv_defining_stmt.get(&leaf.sv)?;
        if !self.0.foldable_stmts.contains(stmt) {
            return None;
        }
        PrintGraph(self.0).node(leaf)
    }

    fn is_root(&self, leaf: ValueUse) -> bool {
        is_frame_base_reg_ctx(&leaf.sv.base, self.0)
    }
}
