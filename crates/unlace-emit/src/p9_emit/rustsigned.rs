//! Signed machine operations on Rust's unsigned primitive storage.

use crate::funcdata_facing::FuncdataFacingExt;
use std::rc::Rc;

use crate::context::{OpId, VarnodeId};
use crate::dtype::{Datatype, type_metatype};
use crate::funcdata::Funcdata;
use unlace_num::opcodes::OpCode;

#[doc(hidden)]
pub struct SignedTextPlan {
    pub inputs: [VarnodeId; 2],
    pub casts: [Option<&'static str>; 2],
    pub constant_types: [Option<Rc<Datatype>>; 2],
    pub output: Option<Rc<Datatype>>,
}

fn signed_operand_name(ty: &Datatype) -> Option<&'static str> {
    if !ty.is_core_type()
        || !(ty.get_metatype() == type_metatype::TYPE_UINT
            || ty.get_metatype() == type_metatype::TYPE_INT && ty.is_char_print())
    {
        return None;
    }
    match ty.get_size() {
        1 => Some("i8"),
        2 => Some("i16"),
        4 => Some("i32"),
        8 => Some("i64"),
        _ => None,
    }
}

#[doc(hidden)]
pub fn plan(fd: &Funcdata, op: OpId) -> Option<SignedTextPlan> {
    let operation = fd.obank().get(op)?;
    let shift = match operation.code() {
        OpCode::CPUI_INT_SLESS | OpCode::CPUI_INT_SLESSEQUAL => false,
        OpCode::CPUI_INT_SRIGHT => true,
        _ => return None,
    };
    if operation.num_input() != 2 {
        return None;
    }
    let inputs = [operation.get_in(0)?, operation.get_in(1)?];
    let width = fd.vbank().get(inputs[0])?.get_size();
    if !matches!(width, 1 | 2 | 4 | 8) {
        return None;
    }
    let mut casts = [None, None];
    let mut constant_types = [None, None];
    for slot in 0..if shift { 1 } else { 2 } {
        let ty = fd.vn_type_read_facing(inputs[slot], op);
        if !matches!(
            ty.get_metatype(),
            type_metatype::TYPE_INT | type_metatype::TYPE_UINT
        ) || !ty.is_core_type()
            || ty.get_size() != width
            || fd.vbank().get(inputs[slot])?.get_size() != width
        {
            return None;
        }
        casts[slot] = signed_operand_name(&ty);
        if casts[slot].is_some()
            && ty.get_metatype() == type_metatype::TYPE_UINT
            && fd.vbank().get(inputs[slot])?.is_constant()
        {
            constant_types[slot] = Some(ty);
        }
    }
    let output = if shift {
        let out = operation.get_out()?;
        let ty = fd.vn_type_def_facing(out);
        if ty.get_size() != width
            || fd.vbank().get(out)?.get_size() != width
            || !ty.is_core_type()
            || !matches!(
                ty.get_metatype(),
                type_metatype::TYPE_INT | type_metatype::TYPE_UINT | type_metatype::TYPE_UNKNOWN
            )
        {
            return None;
        }
        if ty.get_metatype() != type_metatype::TYPE_INT || ty.is_char_print() {
            Some(ty)
        } else {
            None
        }
    } else {
        None
    };
    if casts.iter().all(Option::is_none) && output.is_none() {
        return None;
    }
    Some(SignedTextPlan {
        inputs,
        casts,
        constant_types,
        output,
    })
}

#[cfg(test)]
mod tests;
