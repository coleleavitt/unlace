//! The widening decision (Hex-Rays `sub_27BC20`): does an object grow, how
//! far may it grow, and is the synthesised type accepted.

use unlace_ir::data_layout::DataLayout;
use unlace_ir::mem_object::MemObject;
use unlace_ir::ssa::{PrimitiveType, SsaFunction};
use unlace_ir::types::Type;

use super::access::ObjectAccesses;
use super::collect::Collected;
use super::synthesize::{element_size, synthesize};

/// The type `object` should get, or `None` when it keeps its current one.
pub(super) fn widen(
    func: &SsaFunction,
    collected: &Collected,
    object: MemObject,
    accesses: &ObjectAccesses,
) -> Option<Type> {
    if accesses.accesses.is_empty() || is_special(func, object) {
        return None;
    }
    let layout = DataLayout::for_arch(func.arch);
    let ext = accesses.max_end;
    // Smallest index stride that steps over the whole accessed extent: the
    // object repeats with that period.
    let min_stride = accesses
        .accesses
        .iter()
        .map(|a| a.stride)
        .filter(|&s| s >= ext.max(1))
        .min()
        .unwrap_or(0);
    let indexed = accesses.accesses.iter().any(|a| a.stride != 0);
    let cur = current_size(collected, object, accesses);
    // Neither indexed past one period nor accessed past its end: the object
    // keeps its type.
    if min_stride == 0 && ext <= cur {
        return None;
    }

    let mut room = room(func, collected, object);
    if room.is_none() && !indexed {
        room = Some(ext);
    }
    if let Some(es) = element_size(&accesses.accesses).filter(|&es| es > 1) {
        room = room.map(|r| es * (r / es));
    }
    if let Some(room) = room
        && (cur >= room || room < ext || room < min_stride)
    {
        return None;
    }

    let name = format!("obj_{}", super::object_label(object));
    let ty = synthesize(&accesses.accesses, room, true, &name)?;
    accepted(object, &ty, cur, ext, &layout).then_some(ty)
}

/// Saved-register slots (Hex-Rays `is_special_frame_member`), and every
/// frame slot of a function whose locals come from debug info (`AFL_USERTI`).
/// Debug-info offsets are not calibrated to frame offsets yet at this stage,
/// so the whole frame keeps its declared layout.
fn is_special(func: &SsaFunction, object: MemObject) -> bool {
    match object {
        MemObject::Global(_) => false,
        MemObject::Frame(off) => {
            func.saved_register_slots.contains(&off)
                || !func.dwarf_local_names.is_empty()
                || !func.pending_dwarf_locals.is_empty()
        }
    }
}

/// Size of the type the object has now (`get_item_end - ea` / the frame
/// member size). Unlace keeps no types on globals, so a global is as large as
/// the data item IDA's auto-analysis would have made there: the widest access
/// at its start.
fn current_size(collected: &Collected, object: MemObject, accesses: &ObjectAccesses) -> u64 {
    let at_start = || {
        accesses
            .accesses
            .iter()
            .take_while(|a| a.offset == 0)
            .map(|a| a.size)
            .max()
            .unwrap_or(0)
    };
    match object {
        MemObject::Global(_) => at_start(),
        MemObject::Frame(off) => collected
            .frame_members
            .get(&off)
            .copied()
            .unwrap_or_else(at_start),
    }
}

/// How far the object may grow (`calc_max_item_end - ea`). A known global
/// item has its own size; any other global grows up to the next known item,
/// clipped to its data region. A frame region grows up to the next stack slot
/// or frame object. `None` when nothing bounds the object.
///
/// Deviation: IDA bounds a global by the next item its auto-analysis created,
/// which covers every address the program references. One function sees only
/// its own references, and a constant index into the same array
/// (`tbl[5]`) is one of them, so unlace bounds globals by known items only.
fn room(func: &SsaFunction, collected: &Collected, object: MemObject) -> Option<u64> {
    match object {
        MemObject::Global(addr) => {
            let items = &func.data_items;
            if let Some((start, size)) = items.item_containing(addr)
                && start == addr
            {
                return Some(size);
            }
            let region_end = items.region_end(addr)?;
            let next_item = items.next_item_after(addr)?;
            Some(next_item.min(region_end) - addr)
        }
        MemObject::Frame(off) => {
            let next_member = collected
                .frame_members
                .range(off.checked_add(1)?..)
                .next()
                .map(|(&start, _)| start);
            let next_object = collected
                .map
                .objects()
                .filter_map(|o| match o {
                    MemObject::Frame(o) if o > off => Some(o),
                    _ => None,
                })
                .min();
            let next_saved = func
                .saved_register_slots
                .range(off.checked_add(1)?..)
                .next()
                .copied();
            // A frame below the frame base ends at the saved registers and
            // return address that sit at the base.
            let frame_top = (off < 0).then_some(0);
            let bound = [next_member, next_object, next_saved, frame_top]
                .into_iter()
                .flatten()
                .min()?;
            Some(bound.abs_diff(off))
        }
    }
}

/// The acceptance step of `sub_27BC20`. Structs pass. Arrays pass unless
/// they look like a misread pair of scalars (two integers, or two size-only
/// frame slots), or their elements are data pointers. A scalar result tells
/// unlace nothing it does not already print, so it is dropped.
///
/// Deviation: hexx64 9.3sp1 rejects an array whose element is a struct at
/// this point; unlace keeps arrays of structs.
fn accepted(object: MemObject, ty: &Type, cur: u64, ext: u64, layout: &DataLayout) -> bool {
    let total = layout.type_size(ty);
    if total.is_some_and(|t| t < ext) {
        return false;
    }
    let Type::Array { element, size } = ty else {
        return matches!(ty, Type::Struct { .. });
    };
    let Type::Primitive(elem) = **element else {
        return matches!(**element, Type::Struct { .. });
    };
    let align = u64::from(layout.pointer_size).max(1);
    // A frame slot that grows by less than one stack word to an aligned end
    // was a padded scalar slot all along.
    let padded_slot = match (object, total) {
        (MemObject::Frame(off), Some(total)) => {
            total > 1
                && total - cur.min(total) < align
                && off.wrapping_add(total as i64).rem_euclid(align as i64) == 0
        }
        _ => false,
    };
    if padded_slot {
        return true;
    }
    let total_over_3 = total.is_some_and(|t| t > 3);
    if *size == Some(2) && total_over_3 {
        let typed_int = matches!(elem, PrimitiveType::Int(_) | PrimitiveType::Bool);
        let size_only = matches!(elem, PrimitiveType::UnsignedInt(_));
        if typed_int || (size_only && matches!(object, MemObject::Frame(_))) {
            return false;
        }
    }
    elem != PrimitiveType::Ptr
}
