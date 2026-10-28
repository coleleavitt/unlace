//! Memory accesses through pointers whose pointee type is declared.
//!
//! An address `p + scale*i + c` is rendered through `p`'s pointee the way
//! Hex-Rays renders a typed `cot_memptr`/`cot_idx`: `p->m`, `p[i]`,
//! `p[i - 1]`, or `p[2].m`. Untyped bases are left to the raw
//! `*(T *)(p + c)` rendering, as Hex-Rays leaves them.

use super::member_path::MemberPath;
use super::*;

/// What a pointer value points to, as declared by debug info.
#[derive(Debug, Clone, PartialEq, Eq)]
pub(super) enum Pointee {
    /// A struct with a known layout in [`PrintCtx::struct_layouts`].
    Struct(String),
    /// A scalar (or opaque) element of the given byte size.
    Scalar(u64),
}

/// `scale * index` term of an address.
struct IndexTerm {
    vn: Varnode,
    slot: usize,
    stmt: u32,
    scale: u64,
}

/// `base + scale*index + offset`, where `base` has a declared pointee.
struct TypedAddr {
    base: SsaVarnode,
    index: Option<IndexTerm>,
    offset: i64,
}

/// Address chains are short; this only bounds malformed cycles.
const MAX_ADDR_DEPTH: u32 = 8;

/// Render the access of `width` bytes at `addr_vn` (an input of `stmt_idx`)
/// through its base pointer's declared pointee, if it has one.
pub(super) fn try_typed_access(
    addr_vn: &Varnode,
    stmt_idx: u32,
    width: u8,
    ctx: &mut PrintCtx,
) -> Option<String> {
    let (addr, access) = typed_access_shape(addr_vn, stmt_idx, width, ctx)?;
    let base = CExpr::Lit(ctx.name_of(&addr.base));
    let index = addr.index.map(|term| {
        let idx = CExpr::Lit(paren_if_non_atomic_base(&emit_operand_resolved(
            &term.vn, term.slot, term.stmt, ctx,
        )));
        match access.element_delta {
            0 => idx,
            d if d > 0 => CExpr::cot_add(idx, CExpr::lit(d.to_string())),
            d => CExpr::cot_sub(idx, CExpr::lit(d.unsigned_abs().to_string())),
        }
    });
    let element = match index {
        Some(idx) => Some(CExpr::index(base.clone(), idx)),
        None if access.element_delta != 0 => Some(CExpr::index(
            base.clone(),
            CExpr::lit(access.element_delta.to_string()),
        )),
        None => None,
    };
    let rendered = match (element, access.member) {
        (Some(element), Some(path)) => path.through_value(element),
        (Some(element), None) => element,
        (None, Some(path)) => path.through_pointer(base),
        (None, None) => CExpr::deref(base),
    };
    Some(rendered.to_string())
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
    typed_access_shape(addr_vn, stmt_idx, width, ctx).is_some_and(|(addr, _)| addr.index.is_none())
}

/// The element and member an access selects.
struct AccessShape {
    /// Element index added to the index term (or the whole index when there
    /// is no index term).
    element_delta: i64,
    /// Member path within a struct element.
    member: Option<MemberPath>,
}

fn typed_access_shape(
    addr_vn: &Varnode,
    stmt_idx: u32,
    width: u8,
    ctx: &PrintCtx,
) -> Option<(TypedAddr, AccessShape)> {
    if ctx.pointees.is_empty() || addr_vn.space == SpaceId::Const {
        return None;
    }
    let addr_sv = input_sv(ctx, stmt_idx, addr_vn)?;
    let addr = decompose(addr_sv, ctx, 0)?;
    let width = u64::from(width);
    let shape = match ctx.pointees.get(&addr.base)? {
        Pointee::Scalar(size) => {
            let size = *size;
            if size != width || addr.offset % size as i64 != 0 {
                return None;
            }
            if addr.index.as_ref().is_some_and(|term| term.scale != size) {
                return None;
            }
            AccessShape {
                element_delta: addr.offset / size as i64,
                member: None,
            }
        }
        Pointee::Struct(name) => {
            let size = ctx.struct_layouts.size_of(name).filter(|&s| s > 0)?;
            if addr.index.as_ref().is_some_and(|term| term.scale != size) {
                return None;
            }
            if addr.index.is_none() && addr.offset < 0 {
                return None;
            }
            let element_delta = addr.offset.div_euclid(size as i64);
            let within = addr.offset.rem_euclid(size as i64) as u64;
            let member = ctx.struct_layouts.member_path(name, within, width)?;
            AccessShape {
                element_delta,
                member: Some(member),
            }
        }
    };
    Some((addr, shape))
}

fn input_sv(ctx: &PrintCtx, stmt: u32, vn: &Varnode) -> Option<SsaVarnode> {
    ctx.stmt_inputs
        .get(&stmt)
        .and_then(|inputs| inputs.iter().find(|sv| sv.base == *vn).copied())
}

/// Split `sv` into `base + scale*index + offset` through the printer's
/// foldable address statements.
fn decompose(sv: SsaVarnode, ctx: &PrintCtx, depth: u32) -> Option<TypedAddr> {
    if ctx.pointees.contains_key(&sv) {
        return Some(TypedAddr {
            base: sv,
            index: None,
            offset: 0,
        });
    }
    if depth > MAX_ADDR_DEPTH {
        return None;
    }
    let &stmt = ctx.sv_defining_stmt.get(&sv)?;
    let insn = ctx.stmt_insns.get(&stmt)?;
    let operand =
        |slot: usize| -> Option<SsaVarnode> { input_sv(ctx, stmt, insn.inputs.get(slot)?) };
    match insn.op {
        IrOp::Copy => decompose(operand(0)?, ctx, depth + 1),
        IrOp::IntAdd | IrOp::IntSub if insn.inputs.len() == 2 => {
            let (lhs, rhs) = (&insn.inputs[0], &insn.inputs[1]);
            if rhs.space == SpaceId::Const {
                let c = signed_const_value(rhs);
                let c = if insn.op == IrOp::IntSub {
                    c.checked_neg()?
                } else {
                    c
                };
                let mut addr = decompose(operand(0)?, ctx, depth + 1)?;
                addr.offset = addr.offset.checked_add(c)?;
                return Some(addr);
            }
            if insn.op == IrOp::IntSub {
                return None;
            }
            if lhs.space == SpaceId::Const {
                let mut addr = decompose(operand(1)?, ctx, depth + 1)?;
                addr.offset = addr.offset.checked_add(signed_const_value(lhs))?;
                return Some(addr);
            }
            [(0, 1), (1, 0)]
                .into_iter()
                .find_map(|(base_slot, index_slot)| {
                    let mut addr = decompose(operand(base_slot)?, ctx, depth + 1)?;
                    if addr.index.is_some() {
                        return None;
                    }
                    addr.index = Some(index_term(stmt, index_slot, ctx)?);
                    Some(addr)
                })
        }
        IrOp::Ptradd if insn.inputs.len() >= 3 && insn.inputs[2].space == SpaceId::Const => {
            let mut addr = decompose(operand(0)?, ctx, depth + 1)?;
            if addr.index.is_some() || addr.offset != 0 || insn.inputs[1].space == SpaceId::Const {
                return None;
            }
            addr.index = Some(IndexTerm {
                vn: insn.inputs[1],
                slot: 1,
                stmt,
                scale: insn.inputs[2].offset,
            });
            Some(addr)
        }
        _ => None,
    }
}

/// The index term in operand `slot` of `stmt`: `i * k`, `i << s`, or a bare
/// `i` with scale 1.
fn index_term(stmt: u32, slot: usize, ctx: &PrintCtx) -> Option<IndexTerm> {
    let vn = *ctx.stmt_insns.get(&stmt)?.inputs.get(slot)?;
    if vn.space == SpaceId::Const {
        return None;
    }
    let scaled = input_sv(ctx, stmt, &vn)
        .and_then(|sv| ctx.sv_defining_stmt.get(&sv).copied())
        .and_then(|def| Some((def, ctx.stmt_insns.get(&def)?)))
        .and_then(|(def, insn)| {
            if insn.inputs.len() != 2 {
                return None;
            }
            let (a, b) = (&insn.inputs[0], &insn.inputs[1]);
            let (idx_slot, k) = match insn.op {
                IrOp::IntMult if b.space == SpaceId::Const && a.space != SpaceId::Const => {
                    (0, b.offset)
                }
                IrOp::IntMult if a.space == SpaceId::Const && b.space != SpaceId::Const => {
                    (1, a.offset)
                }
                IrOp::IntLeft
                    if b.space == SpaceId::Const && a.space != SpaceId::Const && b.offset < 64 =>
                {
                    (0, 1u64 << b.offset)
                }
                _ => return None,
            };
            Some(IndexTerm {
                vn: insn.inputs[idx_slot],
                slot: idx_slot,
                stmt: def,
                scale: k,
            })
        });
    Some(scaled.unwrap_or(IndexTerm {
        vn,
        slot,
        stmt,
        scale: 1,
    }))
}
