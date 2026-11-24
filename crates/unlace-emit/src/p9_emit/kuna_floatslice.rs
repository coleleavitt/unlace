//! A SUBPIECE into a float extracts storage bits rather than converting a number:
//! a binary32 or binary16 lane of a wider scalar (an eight-byte vector load, a
//! word holding two halves) is a bit reinterpretation, not a numeric cast.

use crate::context::{OpId, VarnodeId};
use crate::dtype::{Datatype, type_metatype};
use crate::funcdata::Funcdata;
use crate::funcdata_facing::FuncdataFacingExt;
use std::rc::Rc;
use unlace_num::opcodes::OpCode;

#[doc(hidden)]
pub struct Slice {
    pub input: VarnodeId,
    pub source_float: bool,
    pub source_word: Rc<Datatype>,
    pub target_word: Rc<Datatype>,
    pub shift: u64,
    /// Byte width of the extracted float: 4 (binary32) or 2 (binary16).
    pub width: i32,
}

#[doc(hidden)]
pub fn recognize(fd: &Funcdata, op: OpId) -> Option<Slice> {
    let operation = fd.obank().get(op)?;
    if operation.code() != OpCode::CPUI_SUBPIECE {
        return None;
    }
    let input = operation.get_in(0)?;
    let source = fd.vbank().get(input)?;
    let output = operation.get_out()?;
    let destination = fd.vbank().get(output)?;
    let offset = fd.vbank().get(operation.get_in(1)?)?;
    let width = destination.get_size();
    let from_size = source.get_size();
    if !matches!(width, 2 | 4)
        || !matches!(from_size, 4 | 8)
        || from_size <= width
        || !offset.is_constant()
        || offset.get_offset() > (from_size - width) as u64
    {
        return None;
    }
    let target = crate::kuna_stackviews::access_type(fd, output, op, -1)
        .unwrap_or_else(|| fd.vn_type_def_facing(output));
    if target.get_size() != width || target.get_metatype() != type_metatype::TYPE_FLOAT {
        return None;
    }
    let from = crate::kuna_stackviews::access_type(fd, input, op, operation.get_slot(input))
        .or_else(|| crate::printc::declared_variable_type(fd, input))
        .unwrap_or_else(|| fd.vn_type_read_facing(input, op));
    let from = from.get_stripped().unwrap_or(from);
    if from.get_size() != from_size
        || !matches!(
            from.get_metatype(),
            type_metatype::TYPE_INT
                | type_metatype::TYPE_UINT
                | type_metatype::TYPE_UNKNOWN
                | type_metatype::TYPE_FLOAT
        )
        || from.get_metatype() == type_metatype::TYPE_UNKNOWN
            && source.is_implied()
            && !crate::kuna_bitcast::reinterprets_to_float(fd, input)
    {
        return None;
    }
    let types = fd.get_arch().types()?;
    let source_float = from.get_metatype() == type_metatype::TYPE_FLOAT;
    if types.get_size_of_int() != 4
        || from_size == 8 && types.get_size_of_long_long() != 8
        || width == 4 && types.get_size_of_float() != 4
        || width == 2 && types.get_size_of_short() != 2
        || source_float && from_size == 8 && types.get_size_of_double() != 8
        || source_float && from_size == 4 && types.get_size_of_float() != 4
    {
        return None;
    }
    Some(Slice {
        input,
        source_float,
        source_word: types.get_base(from_size, type_metatype::TYPE_UINT).ok()?,
        target_word: types.get_base(width, type_metatype::TYPE_UINT).ok()?,
        shift: offset.get_offset() * 8,
        width,
    })
}
