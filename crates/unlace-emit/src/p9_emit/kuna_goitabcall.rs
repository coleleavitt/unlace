//! (kuna `goitabcalls`) An indirect call through a method slot of a Go itab
//! record prints as `Interface.Method(receiver, ...)`.
//!
//! The callee of the CALLIND is a LOAD of one slot of a `go.itab.<interface>`
//! record (`PTRSUB` or `INT_ADD` of a pointer typed to that record and a
//! constant): the record's `GoItab` facet names the interface and the field at
//! that offset names the method. Anything else prints as before.

use std::rc::Rc;

use unlace_num::opcodes::OpCode;

use crate::architecture::Architecture;
use crate::context::{OpId, VarnodeId};
use crate::dtype::{Datatype, type_metatype};
use crate::funcdata::Funcdata;
use crate::kuna_goitabcalls::{GoItabCalls, ITAB_FUN_OFFSET_64};
use crate::kuna_langfacet::LangFacet;

/// `Interface.Method` for a CALLIND through an itab method slot, under
/// `option goitabcalls`.
pub(crate) fn interface_method(fd: &Funcdata, arch: &Architecture, id: OpId) -> Option<String> {
    if !arch.kuna_options.get::<GoItabCalls>().0 {
        return None;
    }
    let op = fd.obank().get(id)?;
    if op.code() != OpCode::CPUI_CALLIND {
        return None;
    }
    let callee = fd.vbank().get(op.get_in(0)?)?;
    let load = fd.obank().get(callee.get_def()?)?;
    if load.code() != OpCode::CPUI_LOAD {
        return None;
    }
    let (base, offset) = slot_address(fd, load.get_in(1)?)?;
    let record = itab_record(fd.vbank().get(base)?.get_type())?;
    let Some(LangFacet::GoItab { interface }) = arch.types().kuna_lang_facet(record.get_name())
    else {
        return None;
    };
    let method = (0..record.num_depend())
        .filter_map(|i| record.get_field(i))
        .find(|field| i64::from(field.offset) == offset)?;
    (method.offset >= ITAB_FUN_OFFSET_64
        && method.field_type.get_metatype() == type_metatype::TYPE_PTR)
        .then(|| format!("{interface}.{}", method.name))
}

/// The record pointer and constant byte offset a slot address is built from.
fn slot_address(fd: &Funcdata, vn: VarnodeId) -> Option<(VarnodeId, i64)> {
    let def = fd.obank().get(fd.vbank().get(vn)?.get_def()?)?;
    if !matches!(def.code(), OpCode::CPUI_PTRSUB | OpCode::CPUI_INT_ADD) {
        return None;
    }
    let offset = fd.vbank().get(def.get_in(1)?)?;
    if !offset.is_constant() {
        return None;
    }
    Some((def.get_in(0)?, i64::try_from(offset.get_offset()).ok()?))
}

/// The struct a pointer type points at, when it is an itab record.
fn itab_record(ty: &Rc<Datatype>) -> Option<Rc<Datatype>> {
    if ty.get_metatype() != type_metatype::TYPE_PTR {
        return None;
    }
    let record = ty.get_ptr_to()?;
    (record.get_metatype() == type_metatype::TYPE_STRUCT
        && record
            .get_name()
            .starts_with(crate::kuna_goitabcalls::ITAB_RECORD_PREFIX))
    .then_some(record)
}
