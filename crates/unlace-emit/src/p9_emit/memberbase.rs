//! Member addresses must use a pointer compatible with the emitted variable.

use std::rc::Rc;

use crate::context::VarnodeId;
use crate::dtype::{Datatype, type_metatype};
use crate::funcdata::Funcdata;

#[doc(hidden)]
pub fn needs_cast(fd: &Funcdata, base: VarnodeId, pointer: &Rc<Datatype>) -> bool {
    if !fd
        .get_arch()
        .unlace_options
        .get::<crate::coreoptions::StackViews>()
        .0
        || !fd.get_func_proto().has_store()
        || pointer.is_formal_pointer_rel()
    {
        return false;
    }
    let Some(declared) = crate::printc::declared_variable_type(fd, base) else {
        return false;
    };
    declared.get_size() == pointer.get_size()
        && matches!(
            declared.get_metatype(),
            type_metatype::TYPE_INT
                | type_metatype::TYPE_UINT
                | type_metatype::TYPE_UNKNOWN
                | type_metatype::TYPE_PTR
        )
        && !Rc::ptr_eq(&declared, pointer)
        && !matches!(declared.compare(pointer, 10), Ok(0))
}
