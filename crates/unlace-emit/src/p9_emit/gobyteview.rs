//! Bounded integer views and whole-value reads of Go byte-array storage.

use crate::funcdata_facing::FuncdataFacingExt;
use std::rc::Rc;

use crate::architecture::Architecture;
use crate::context::{OpId, VarnodeId};
use crate::dtype::{Datatype, type_metatype};
use crate::funcdata::Funcdata;

#[doc(hidden)]
pub enum View {
    Whole,
    Integer(Rc<Datatype>),
}

fn byte_array(ty: &Datatype) -> bool {
    ty.get_metatype() == type_metatype::TYPE_ARRAY
        && !crate::typequal::is_volatile(ty)
        && ty.get_array_base().is_some_and(|base| {
            base.get_size() == 1
                && base.get_align_size() == 1
                && !crate::typequal::is_volatile(&base)
                && matches!(
                    base.get_metatype(),
                    type_metatype::TYPE_UINT | type_metatype::TYPE_UNKNOWN
                )
        })
}

fn whole_view(container: &Datatype, value: &Datatype, offset: i64, size: i32) -> Option<bool> {
    if !byte_array(container)
        || crate::typequal::is_volatile(value)
        || offset < 0
        || size <= 0
        || value.get_size() != size
        || offset.checked_add(i64::from(size))? > i64::from(container.get_size())
    {
        return None;
    }
    if offset == 0
        && size == container.get_size()
        && (byte_array(value) || (size > 8 && value.get_metatype() == type_metatype::TYPE_UNKNOWN))
    {
        return Some(true);
    }
    (matches!(size, 1 | 2 | 4 | 8)
        && matches!(
            value.get_metatype(),
            type_metatype::TYPE_INT | type_metatype::TYPE_UINT | type_metatype::TYPE_UNKNOWN
        ))
    .then_some(false)
}

fn value_type(ty: Rc<Datatype>) -> Option<Rc<Datatype>> {
    if crate::typequal::is_volatile(&ty) {
        return None;
    }
    if ty.get_metatype() != type_metatype::TYPE_PARTIALSTRUCT {
        return Some(ty);
    }
    if !ty.get_name().is_empty() || !ty.get_partial_base().is_some_and(|base| byte_array(&base)) {
        return None;
    }
    let stripped = ty.get_stripped()?;
    matches!(
        stripped.get_metatype(),
        type_metatype::TYPE_UINT | type_metatype::TYPE_UNKNOWN
    )
    .then_some(stripped)
}

#[allow(clippy::too_many_arguments)]
#[doc(hidden)]
pub fn plan(
    fd: &Funcdata,
    arch: &Architecture,
    vn: VarnodeId,
    op: OpId,
    container: &Datatype,
    offset: i64,
    size: i32,
    rendered: Rc<Datatype>,
) -> Option<View> {
    let value = fd.vbank().get(vn)?;
    if value.is_annotation() || value.is_volatile() || value.get_size() != size {
        return None;
    }
    let facing = value_type(if value.get_def() == Some(op) {
        fd.vn_type_def_facing(vn)
    } else {
        fd.vn_type_read_facing(vn, op)
    })?;
    let whole = whole_view(container, &facing, offset, size)?;
    let ty = value_type(rendered)?;
    if whole != whole_view(container, &ty, offset, size)? {
        return None;
    }
    if whole {
        return Some(View::Whole);
    }
    if (ty.get_metatype() == type_metatype::TYPE_UNKNOWN
        || facing.get_metatype() == type_metatype::TYPE_UNKNOWN)
        && crate::partialaccess::carries_float(fd, vn, op)
    {
        return None;
    }
    let types = arch.types();
    Some(View::Integer(
        types
            .get_type_pointer(types.get_size_of_pointer(), ty, 1)
            .ok()?,
    ))
}

#[cfg(test)]
mod tests;
