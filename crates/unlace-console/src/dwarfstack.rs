//! Overlapping debug locals describe views of one physical frame object.

use std::collections::BTreeSet;
use std::rc::Rc;
use unlace_base::error::UnlaceResult;
use unlace_decomp::dtype::{Datatype, TypeFactory, TypeField, type_metatype};

pub(crate) type Local = (String, Rc<Datatype>, i64);

pub(crate) fn local_name(
    stem: &str,
    mapped: &BTreeSet<String>,
    reserved: &BTreeSet<String>,
) -> String {
    if !mapped.contains(stem) {
        return stem.to_owned();
    }
    for variant in 1u64.. {
        let name = format!("{stem}_{variant}");
        if !mapped.contains(&name) && !reserved.contains(&name) {
            return name;
        }
    }
    unreachable!()
}

fn gcd(mut a: i32, mut b: i32) -> i32 {
    while b != 0 {
        (a, b) = (b, a % b);
    }
    a.max(1)
}

fn composite(
    factory: &dyn TypeFactory,
    stem: &str,
    fields: Vec<TypeField>,
    size: i32,
    alignment: i32,
    union: bool,
) -> UnlaceResult<Rc<Datatype>> {
    for variant in 0u64.. {
        let name = format!("{stem}_{variant}");
        if let Some(existing) = factory.find_by_name(&name)? {
            if existing.get_size() == size
                && !existing.is_incomplete()
                && !matches!(&existing.kind, unlace_decomp::dtype::DatatypeKind::Struct { bitfield, .. } if !bitfield.is_empty())
                && existing.get_alignment() == alignment
                && existing.num_depend() as usize == fields.len()
                && fields.iter().enumerate().all(|(i, field)| {
                    existing.get_field(i as i32).is_some_and(|old| {
                        old.offset == field.offset
                            && old.name == field.name
                            && Rc::ptr_eq(&old.field_type, &field.field_type)
                    })
                })
                && existing.get_metatype()
                    == if union {
                        type_metatype::TYPE_UNION
                    } else {
                        type_metatype::TYPE_STRUCT
                    }
            {
                return Ok(existing);
            }
            continue;
        }
        return if union {
            factory.set_fields_union_raw(&factory.get_type_union(&name)?, fields, size, alignment)
        } else {
            factory.set_fields_struct_raw(
                &factory.get_type_struct(&name)?,
                fields,
                Vec::new(),
                size,
                alignment,
                0,
            )
        };
    }
    unreachable!()
}

fn backing(factory: &dyn TypeFactory, function: u64, group: &[Local]) -> UnlaceResult<Local> {
    let start = group[0].2;
    let size = group
        .iter()
        .map(|(_, ty, off)| i128::from(*off) + i128::from(ty.get_size()))
        .max()
        .unwrap()
        - i128::from(start);
    let size = i32::try_from(size).map_err(|_| {
        unlace_base::error::UnlaceError::lowlevel(
            "Debug stack overlap exceeds supported object size",
        )
    })?;
    let stem = format!("dwarf_stack_{function:x}_{:x}", start as u64);
    let raw_name = "storage_bytes";
    let mut members = BTreeSet::from([raw_name.to_owned()]);
    let mut fields = Vec::new();
    for (index, (name, ty, off)) in group.iter().enumerate() {
        let offset = i32::try_from(i128::from(*off) - i128::from(start)).map_err(|_| {
            unlace_base::error::UnlaceError::lowlevel(
                "Debug stack view offset exceeds supported object size",
            )
        })?;
        let view = if offset == 0 {
            Rc::clone(ty)
        } else {
            let extent = offset.checked_add(ty.get_size()).ok_or_else(|| {
                unlace_base::error::UnlaceError::lowlevel("Debug stack view extent overflow")
            })?;
            composite(
                factory,
                &format!("{stem}_slice_{index}"),
                vec![TypeField::new(0, offset, "value", Rc::clone(ty))],
                extent,
                gcd(gcd(ty.get_alignment(), offset), extent),
                false,
            )?
        };
        let label = if name.is_empty() {
            "view"
        } else {
            name.as_str()
        };
        let mut member = label.to_owned();
        let mut variant = 0;
        while !members.insert(member.clone()) {
            variant += 1;
            member = format!("{label}_{variant}");
        }
        fields.push(TypeField::new(index as i32, 0, member, view));
    }
    let bytes = factory.get_type_array(size, factory.get_base(1, type_metatype::TYPE_UINT)?)?;
    fields.push(TypeField::new(fields.len() as i32, 0, raw_name, bytes));
    let alignment = gcd(
        fields
            .iter()
            .map(|f| f.field_type.get_alignment())
            .max()
            .unwrap_or(1),
        size,
    );
    let ty = composite(factory, &stem, fields, size, alignment, true)?;
    Ok((format!("shared_{:x}", start as u64), ty, start))
}

/// Views of one type at one offset stay a single local; distinct views become
/// union members named after their locals. Conflicting optional debug locks are
/// omitted if their common extent cannot be represented; the machine's storage
/// recovery remains authoritative.
pub(crate) fn coalesce(
    factory: &dyn TypeFactory,
    function: u64,
    mut locals: Vec<Local>,
    mask: u64,
) -> Vec<Local> {
    locals.retain(|(_, ty, _)| ty.get_size() > 0);
    for (_, _, offset) in &mut locals {
        let raw = *offset as u64 & mask;
        *offset = if raw & ((mask >> 1) + 1) != 0 {
            (raw | !mask) as i64
        } else {
            raw as i64
        };
    }
    let mut wraps: Vec<_> = locals
        .iter()
        .filter(|(_, ty, off)| {
            (*off as u64 & mask)
                .checked_add(ty.get_size() as u64 - 1)
                .is_none_or(|end| end > mask)
                || i128::from(*off) + i128::from(ty.get_size()) - 1 > i128::from((mask >> 1) as i64)
        })
        .map(|(_, ty, off)| (*off as u64 & mask, ty.get_size()))
        .collect();
    loop {
        let before = wraps.len();
        for (_, ty, off) in &locals {
            let range = (*off as u64 & mask, ty.get_size());
            if !wraps.contains(&range)
                && wraps
                    .iter()
                    .any(|(start, size)| byte_overlap(range.0, range.1, *start, *size, mask))
            {
                wraps.push(range);
            }
        }
        if wraps.len() == before {
            break;
        }
    }
    locals.retain(|(_, ty, off)| {
        !wraps.iter().any(|(start, size)| {
            byte_overlap(*off as u64 & mask, ty.get_size(), *start, *size, mask)
        })
    });
    let mut names: BTreeSet<_> = locals.iter().map(|local| local.0.clone()).collect();
    locals.sort_by(|a, b| a.2.cmp(&b.2).then_with(|| a.0.cmp(&b.0)));
    let mut result = Vec::new();
    let mut first = 0;
    while first < locals.len() {
        let mut end = i128::from(locals[first].2) + i128::from(locals[first].1.get_size());
        let mut next = first + 1;
        while next < locals.len() && i128::from(locals[next].2) < end {
            end = end.max(i128::from(locals[next].2) + i128::from(locals[next].1.get_size()));
            next += 1;
        }
        let mut group: Vec<Local> = Vec::new();
        for local in &locals[first..next] {
            if !group
                .iter()
                .any(|(_, ty, off)| *off == local.2 && Rc::ptr_eq(ty, &local.1))
            {
                group.push(local.clone());
            }
        }
        if group.len() == 1 {
            result.extend(group);
        } else {
            match backing(factory, function, &group) {
                Ok(mut shared) => {
                    let stem = shared.0.clone();
                    let mut variant = 0;
                    while !names.insert(shared.0.clone()) {
                        variant += 1;
                        shared.0 = format!("{stem}_{variant}");
                    }
                    result.push(shared);
                }
                _ => {}
            }
        }
        first = next;
    }
    result
}

fn byte_overlap(left: u64, left_size: i32, right: u64, right_size: i32, mask: u64) -> bool {
    left_size > 0
        && right_size > 0
        && ((left.wrapping_sub(right) & mask) < right_size as u64
            || (right.wrapping_sub(left) & mask) < left_size as u64)
}

pub(crate) fn overlaps(
    left: &unlace_base::address::Address,
    left_size: i32,
    right: &unlace_base::address::Address,
    right_size: i32,
) -> bool {
    left_size > 0
        && right_size > 0
        && left
            .get_space()
            .zip(right.get_space())
            .is_some_and(|(a, b)| a.get_index() == b.get_index())
        && left.get_space().is_some_and(|space| {
            byte_overlap(
                left.get_offset(),
                left_size,
                right.get_offset(),
                right_size,
                space.wrap_offset(u64::MAX),
            )
        })
}

#[cfg(test)]
mod tests;
