//! Object type synthesis from recorded accesses (Hex-Rays `sub_27AE10`).
//!
//! Three shapes, tried in order:
//!
//! 1. **Uniform elements** (`sub_278A80`): every access has the same size and
//!    every offset and stride is a multiple of it ⇒ `elem[total / size]`.
//! 2. **Common period** (`sub_278CA0`): every index stride larger than its
//!    access is a multiple of the smallest one, `period`, and no access is
//!    wider than `period` ⇒ fold every access modulo `period`, lay the folded
//!    accesses out as a struct of exactly `period` bytes, and return
//!    `struct[total / period]` — an array of structs.
//! 3. **Plain layout**: one member per distinct offset, holes filled with
//!    `_BYTE[n]`, members named `fld_0`, `fld_1`, … in layout order.

use std::collections::BTreeSet;

use unlace_ir::ssa::PrimitiveType;
use unlace_ir::types::{StructFieldType, Type};

use super::access::ObjectAccess;

/// Build the type of an object `total` bytes long (`None`: length unknown)
/// from its accesses.
///
/// `force_array` keeps a one-element result an array; the widening step sets
/// it when an access goes through a variable index. `name` names the struct a
/// struct-shaped result gets.
pub fn synthesize(
    accesses: &BTreeSet<ObjectAccess>,
    total: Option<u64>,
    force_array: bool,
    name: &str,
) -> Option<Type> {
    synthesize_with_period(accesses, total, force_array, name, 0)
}

fn synthesize_with_period(
    accesses: &BTreeSet<ObjectAccess>,
    total: Option<u64>,
    force_array: bool,
    name: &str,
    period: u64,
) -> Option<Type> {
    if let Some((size, elem)) = uniform_element(accesses) {
        let count = total.map(|t| t / size);
        if count == Some(0) {
            return None;
        }
        if count != Some(1) || force_array {
            return Some(Type::Array {
                element: Box::new(Type::Primitive(elem)),
                size: count,
            });
        }
        return Some(Type::Primitive(elem));
    }

    let period_of_strides = common_period(accesses)?;
    if period_of_strides == 0 {
        return plain_layout(accesses, name, period);
    }
    if period_of_strides == 1 {
        return None;
    }
    let folded: BTreeSet<ObjectAccess> = accesses
        .iter()
        .map(|a| ObjectAccess {
            offset: a.offset % period_of_strides,
            stride: a.stride % period_of_strides,
            ..*a
        })
        .collect();
    let element = synthesize_with_period(&folded, Some(0), false, name, period_of_strides)?;
    let count = total.map(|t| t / period_of_strides);
    if count != Some(1) || force_array {
        Some(Type::Array {
            element: Box::new(element),
            size: count,
        })
    } else {
        Some(element)
    }
}

/// The single access size shared by every access when the accesses form a
/// uniform array (`sub_278A80` without the element type).
pub(super) fn element_size(accesses: &BTreeSet<ObjectAccess>) -> Option<u64> {
    uniform_element(accesses).map(|(size, _)| size)
}

/// `sub_278A80`: the single access size shared by every access, when every
/// offset and stride is a multiple of it, with the best type seen at that
/// size.
fn uniform_element(accesses: &BTreeSet<ObjectAccess>) -> Option<(u64, PrimitiveType)> {
    let mut size = None;
    let mut best: Option<(PrimitiveType, u64)> = None;
    for access in accesses {
        if !access.offset.is_multiple_of(access.size) || !access.stride.is_multiple_of(access.size)
        {
            return None;
        }
        if size.is_some_and(|s| s != access.size) {
            return None;
        }
        size = Some(access.size);
        best = Some(better(best, (access.ty, access.size)));
    }
    Some((size?, best?.0))
}

/// `sub_278CA0`: the smallest index stride larger than its access, when every
/// such stride is a multiple of it and no access is wider than it. `Some(0)`
/// when no access has such a stride; `None` when the strides disagree.
fn common_period(accesses: &BTreeSet<ObjectAccess>) -> Option<u64> {
    let mut period: Option<u64> = None;
    let mut widest = 0;
    for access in accesses {
        if access.stride > access.size {
            period = match period {
                None => Some(access.stride),
                Some(p) if access.stride < p => {
                    if !p.is_multiple_of(access.stride) {
                        return None;
                    }
                    Some(access.stride)
                }
                Some(p) => {
                    if !access.stride.is_multiple_of(p) {
                        return None;
                    }
                    Some(p)
                }
            };
        }
        widest = widest.max(access.size);
    }
    match period {
        None => Some(0),
        Some(p) if widest > p => None,
        Some(p) => Some(p),
    }
}

/// Plain struct layout. With a nonzero `period`, members must fit inside it
/// and the struct is padded to exactly `period` bytes.
fn plain_layout(accesses: &BTreeSet<ObjectAccess>, name: &str, period: u64) -> Option<Type> {
    let mut members: Vec<(u64, Type)> = Vec::new();
    let mut end = 0u64;
    let mut iter = accesses.iter().peekable();
    while let Some(first) = iter.next() {
        let offset = first.offset;
        let mut best = (first.ty, first.size);
        while let Some(next) = iter.next_if(|a| a.offset == offset) {
            best = better(Some(best), (next.ty, next.size));
        }
        let (best, width) = best;
        if offset < end || (period != 0 && offset + width > period) {
            continue;
        }
        if best == PrimitiveType::Unknown {
            return None;
        }
        if offset > end {
            members.push((end, gap(offset - end)));
        }
        members.push((offset, Type::Primitive(best)));
        end = offset + width;
    }
    if members.is_empty() {
        return None;
    }
    if period != 0 {
        if period < end {
            return None;
        }
        if end < period {
            members.push((end, gap(period - end)));
        }
    }
    if members.len() == 1 {
        let (_, only) = members.pop()?;
        return matches!(only, Type::Struct { .. }).then_some(only);
    }
    Some(Type::Struct {
        name: name.to_string(),
        fields: members
            .into_iter()
            .enumerate()
            .map(|(i, (offset, ty))| StructFieldType {
                name: format!("fld_{i}"),
                ty,
                offset,
            })
            .collect(),
    })
}

/// `_BYTE[n]` filler for a hole of `n` bytes (`BT_UNK_BYTE`, type `0x11`).
fn gap(n: u64) -> Type {
    Type::Array {
        element: Box::new(Type::uint(1)),
        size: Some(n),
    }
}

/// `sub_2782C0`: of the `(type, size)` kept so far and a new candidate, the
/// one an object member should get. A known type beats an unknown one, a
/// concrete type beats a size-only one (`_DWORD`-like, unlace's
/// `UnsignedInt`); otherwise a pointer is kept, and then the wider access
/// wins. Ties keep the current type.
fn better(
    current: Option<(PrimitiveType, u64)>,
    cand: (PrimitiveType, u64),
) -> (PrimitiveType, u64) {
    let Some(current) = current else {
        return cand;
    };
    let unknown = PrimitiveType::Unknown;
    if current.0 == unknown || cand.0 == unknown {
        return if current.0 == unknown { cand } else { current };
    }
    match (is_size_only(current.0), is_size_only(cand.0)) {
        (true, false) => cand,
        (false, true) => current,
        _ if current.0 == PrimitiveType::Ptr && cand.0 != PrimitiveType::Ptr => current,
        _ if cand.1 > current.1 => cand,
        _ => current,
    }
}

fn is_size_only(ty: PrimitiveType) -> bool {
    matches!(ty, PrimitiveType::UnsignedInt(_))
}
