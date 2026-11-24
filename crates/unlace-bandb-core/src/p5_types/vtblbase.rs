//! (unlace `vtabletypes`) The first word of a polymorphic object is its vtable
//! pointer, so a pointer through which a `C_vtbl *` is stored or loaded is a
//! `C *`.
//!
//! A constructor stores its class's vftable through `this`: once the typed
//! vtables have given the vftable object the type `C_vtbl`, the stored value
//! is a `C_vtbl *`, and `TypeOp::propagateToPointer` would make the pointer
//! an `undefined8 *`. Read through the class instead, the store prints as
//! `this->__vftable = &C::vftable`, and every later virtual call on the object
//! goes through a named slot. Only a record `C` whose first field is a pointer
//! to exactly that `C_vtbl` qualifies, which only the typed-vtable commit
//! builds.

use std::rc::Rc;

use unlace_base::types::int4;

use crate::dtype::{Datatype, TypeFactory, type_metatype};
use crate::funcdata::Funcdata;

/// The pointer type for the address a `value` of type `C_vtbl *` is stored
/// at or loaded from: `C *` of `size` bytes, or `None` when `value` is not
/// a typed class's vtable pointer.
pub fn class_pointer(
    data: &Funcdata,
    tlst: &dyn TypeFactory,
    value: &Datatype,
    size: int4,
    word_size: u32,
) -> Option<Rc<Datatype>> {
    if !data.get_arch().vtable_types || value.get_metatype() != type_metatype::TYPE_PTR {
        return None;
    }
    let vtbl = value.get_ptr_to()?;
    if vtbl.get_metatype() != type_metatype::TYPE_STRUCT {
        return None;
    }
    let class_name = vtbl.get_name().strip_suffix("_vtbl")?;
    if class_name.is_empty() {
        return None;
    }
    let class = tlst.find_by_name(class_name).ok().flatten()?;
    if class.get_metatype() != type_metatype::TYPE_STRUCT || class.is_incomplete() {
        return None;
    }
    let first = class.get_field(0)?;
    let held = first.field_type.get_ptr_to()?;
    if first.offset != 0 || held.get_name() != vtbl.get_name() {
        return None;
    }
    tlst.get_type_pointer(size, class, word_size).ok()
}
