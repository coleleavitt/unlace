//! Rebuild a typed-pointer expression from its scaled form: `cot_idx`
//! (`p[i]`), `cot_memptr`/`cot_memref` (`p->m`, `p[i].m`), scaled `cot_add`
//! (`p + 2`), and the casts Hex-Rays adds when the units or the access width
//! differ from the pointee (hexx64 `sub_270E10` builds the index,
//! `sub_272C50` the member, `sub_26E0C0` the scaled sum, `sub_244320` the
//! sized dereference).

use super::*;

pub(super) fn render_access(plan: &AccessPlan, ctx: &mut PrintCtx) -> CExpr {
    let addr = &plan.addr;
    let root = CExpr::lit(ctx.name_of(&addr.root));
    match (addr.unit, &plan.member) {
        (Unit::Element, Some(member)) => {
            let element = index_expr(&addr.terms, addr.constant, ctx)
                .map(|idx| CExpr::index(root.clone(), idx));
            match member {
                Member::Leaf(path) => match element {
                    Some(element) => path.through_value(element),
                    None => path.through_pointer(root),
                },
                Member::Start(path) => match element {
                    Some(element) => {
                        sized_deref(plan.width, CExpr::addr_of(path.through_value(element)))
                    }
                    None if path.is_empty() => sized_deref(plan.width, root),
                    None => sized_deref(plan.width, CExpr::addr_of(path.through_pointer(root))),
                },
            }
        }
        (Unit::Element, None) if plan.width == addr.element_size => {
            match index_expr(&addr.terms, addr.constant, ctx) {
                Some(idx) => CExpr::index(root, idx),
                None => CExpr::deref(root),
            }
        }
        (Unit::Narrowed(size), _) if size == plan.width => CExpr::deref(render_pointer(addr, ctx)),
        _ => sized_deref(plan.width, render_pointer(addr, ctx)),
    }
}

/// The address as a pointer value: `p + 2`, `(_DWORD *)p + 1`,
/// `(char *)p + 6`, or `p` itself.
pub(super) fn render_pointer(addr: &ScaledAddr, ctx: &mut PrintCtx) -> CExpr {
    let root = CExpr::lit(ctx.name_of(&addr.root));
    let base = match addr.unit {
        Unit::Element => root,
        Unit::Narrowed(size) => prefix_cast(int_pointer_type(size), &root),
        Unit::Bytes => prefix_cast("char *", &root),
    };
    sum(Some(base), &addr.terms, addr.constant, ctx).expect("a sum with a base is never empty")
}

/// `lhs` moved by `addr`'s offset, as an update of `lhs` (the root):
/// `++p`, `p -= 2`, `p += i`, or `p = (char *)p + 6` across a partial
/// element.
pub(super) fn render_update(addr: &ScaledAddr, lhs: &str, ctx: &mut PrintCtx) -> Option<String> {
    if addr.unit != Unit::Element {
        return Some(format!("{lhs} = {}", render_pointer(addr, ctx)));
    }
    if addr.terms.is_empty() {
        return match addr.constant {
            0 => None,
            1 => Some(format!("++{lhs}")),
            -1 => Some(format!("--{lhs}")),
            c if c < 0 => Some(format!("{lhs} -= {}", c.unsigned_abs())),
            c => Some(format!("{lhs} += {c}")),
        };
    }
    let index = index_expr(&addr.terms, addr.constant, ctx)?;
    Some(format!("{lhs} += {index}"))
}

/// `(char *)p - (char *)q`: the byte distance between two typed pointers.
pub(super) fn render_byte_difference(
    lhs: SsaVarnode,
    rhs: SsaVarnode,
    ctx: &mut PrintCtx,
) -> CExpr {
    let lhs = CExpr::lit(ctx.name_of(&lhs));
    let rhs = CExpr::lit(ctx.name_of(&rhs));
    CExpr::cot_sub(prefix_cast("char *", &lhs), prefix_cast("char *", &rhs))
}

/// `Σ coefᵢ·termᵢ + constant`, or `None` when it is zero.
fn index_expr(terms: &[Term<ValueUse>], constant: i64, ctx: &mut PrintCtx) -> Option<CExpr> {
    sum(None, terms, constant, ctx)
}

/// `start + Σ coefᵢ·termᵢ + constant` as one left-associated sum, or `None`
/// when it is empty.
pub(super) fn sum(
    start: Option<CExpr>,
    terms: &[Term<ValueUse>],
    constant: i64,
    ctx: &mut PrintCtx,
) -> Option<CExpr> {
    let alone = start.is_none() && terms.len() == 1 && terms[0].coef == 1 && constant == 0;
    let mut acc = start;
    for term in terms {
        let leaf = render_leaf(term.leaf, ctx);
        let leaf = if alone {
            leaf
        } else {
            paren_if_non_atomic_base(&leaf)
        };
        let magnitude = term.coef.unsigned_abs();
        let scaled = if magnitude == 1 {
            CExpr::lit(leaf)
        } else {
            CExpr::cot_mul(CExpr::lit(magnitude.to_string()), CExpr::lit(leaf))
        };
        acc = Some(match acc {
            None if term.coef < 0 => CExpr::cot_neg(scaled),
            None => scaled,
            Some(sum) if term.coef < 0 => CExpr::cot_sub(sum, scaled),
            Some(sum) => CExpr::cot_add(sum, scaled),
        });
    }
    let magnitude = CExpr::lit(constant.unsigned_abs().to_string());
    match acc {
        None if constant == 0 => None,
        None => Some(CExpr::lit(constant.to_string())),
        Some(sum) if constant == 0 => Some(sum),
        Some(sum) if constant < 0 => Some(CExpr::cot_sub(sum, magnitude)),
        Some(sum) => Some(CExpr::cot_add(sum, magnitude)),
    }
}

fn render_leaf(leaf: ValueUse, ctx: &mut PrintCtx) -> String {
    let vn = ctx.stmt_insns[&leaf.stmt].inputs[leaf.slot];
    emit_operand_resolved(&vn, leaf.slot, leaf.stmt, ctx)
}

/// `*(T *)ptr`, reading `width` bytes. `*(T *)&x` keeps the `&` so the
/// reinterpreted lvalue stays visible, as Hex-Rays prints it.
pub(super) fn sized_deref(width: u64, ptr: CExpr) -> CExpr {
    CExpr::deref(prefix_cast(int_pointer_type(width), &ptr))
}

/// `(T)x` without the parentheses [`CExpr::Cast`] always puts around `x`.
///
/// The result is a prefix expression wrapped as a leaf. It is only placed
/// where a cast already binds tightly enough: under `*` and as an operand of
/// `+`/`-`, never under a postfix operator.
pub(super) fn prefix_cast(ty: &str, inner: &CExpr) -> CExpr {
    let operand = match inner {
        // `&` over a member or subscript chain needs no parentheses.
        CExpr::AddrOf(_) => inner.to_string(),
        _ => paren_if_non_atomic_base(&inner.to_string()),
    };
    CExpr::lit(format!("({ty}){operand}"))
}

fn int_pointer_type(size: u64) -> &'static str {
    ida_ptr_type(u8::try_from(size).unwrap_or(0))
}
