//! Integer extraction from a whole, addressable Go byte-array value.

use crate::funcdata_facing::FuncdataFacingExt;
use std::rc::Rc;

use crate::architecture::Architecture;
use crate::context::{OpId, VarnodeId};
use crate::dtype::{Datatype, type_metatype};
use crate::funcdata::Funcdata;

#[doc(hidden)]
pub struct Extraction {
    pub input: VarnodeId,
    pub pointer: Rc<Datatype>,
    pub offset: u64,
}

fn memory_offset(container: i32, size: i32, lsb: u64, big: bool) -> Option<u64> {
    if !matches!(size, 1 | 2 | 4 | 8) {
        return None;
    }
    let container = u64::try_from(container).ok()?;
    let end = lsb.checked_add(size as u64)?;
    if end > container {
        return None;
    }
    Some(if big { container - end } else { lsb })
}

fn compatible(source: &Datatype, target: &Datatype, size: i32) -> bool {
    source.get_metatype() == type_metatype::TYPE_ARRAY
        && !crate::typequal::is_volatile(source)
        && source.get_array_base().is_some_and(|base| {
            base.get_size() == 1
                && base.get_align_size() == 1
                && !crate::typequal::is_volatile(&base)
                && matches!(
                    base.get_metatype(),
                    type_metatype::TYPE_UINT | type_metatype::TYPE_UNKNOWN
                )
        })
        && matches!(size, 1 | 2 | 4 | 8)
        && target.get_size() == size
        && !crate::typequal::is_volatile(target)
        && matches!(
            target.get_metatype(),
            type_metatype::TYPE_INT | type_metatype::TYPE_UINT | type_metatype::TYPE_UNKNOWN
        )
}

#[doc(hidden)]
pub fn plan(
    fd: &Funcdata,
    arch: &Architecture,
    op: OpId,
    read_op: Option<OpId>,
    source: &Datatype,
    store_type: Option<Rc<Datatype>>,
) -> Option<Extraction> {
    let operation = fd.obank().get(op)?;
    if operation.code() != unlace_num::opcodes::OpCode::CPUI_SUBPIECE {
        return None;
    }
    let input = operation.get_in(0)?;
    let value = fd.vbank().get(input)?;
    if value.is_implied()
        || value.is_constant()
        || value.is_annotation()
        || value.is_persist()
        || value.is_volatile()
        || value.get_size() != source.get_size()
    {
        return None;
    }
    let lsb = fd.vbank().get(operation.get_in(1)?)?;
    let output = operation.get_out()?;
    let result = fd.vbank().get(output)?;
    let size = result.get_size();
    if !lsb.is_constant() || result.is_annotation() || result.is_volatile() {
        return None;
    }
    let offset = memory_offset(
        value.get_size(),
        size,
        lsb.get_offset(),
        value.get_space().is_big_endian(),
    )?;
    let facing = read_op
        .map(|read| fd.vn_type_read_facing(output, read))
        .unwrap_or_else(|| fd.vn_type_def_facing(output));
    let store = read_op
        .and_then(|read| fd.obank().get(read))
        .is_some_and(|read| {
            read.code() == unlace_num::opcodes::OpCode::CPUI_STORE && read.get_in(2) == Some(output)
        });
    let target = if store { store_type? } else { facing.clone() };
    if !compatible(source, &facing, size)
        || !compatible(source, &target, size)
        || ((target.get_metatype() == type_metatype::TYPE_UNKNOWN
            || facing.get_metatype() == type_metatype::TYPE_UNKNOWN)
            && crate::partialaccess::carries_float(fd, output, read_op.unwrap_or(op)))
    {
        return None;
    }
    let types = arch.types();
    Some(Extraction {
        input,
        pointer: types
            .get_type_pointer(types.get_size_of_pointer(), target, 1)
            .ok()?,
        offset,
    })
}

#[cfg(test)]
mod tests;
