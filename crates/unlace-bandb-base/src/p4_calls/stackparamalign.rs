//! Stack argument alignment can differ from the in-memory type alignment.
use crate::fspec::param_entry_flags::IGNORE_TYPE_ALIGN;
use unlace_base::{
    error::{UnlaceError, UnlaceResult},
    space::{AddrSpace, spacetype},
    xml::Element,
};

#[doc(hidden)]
pub fn decode(entry: &Element, space: &AddrSpace, alignment: i32, size: i32) -> UnlaceResult<u32> {
    let value = (0..entry.get_num_attributes())
        .find(|&i| entry.get_attribute_name(i) == "stackalign")
        .map(|i| entry.get_attribute_value_at(i));
    match value {
        None | Some(b"true") => Ok(0),
        Some(b"false")
            if space.get_type() == spacetype::IPTR_SPACEBASE
                && alignment > 0
                && alignment != size =>
        {
            Ok(IGNORE_TYPE_ALIGN)
        }
        Some(b"false") => Err(UnlaceError::lowlevel(
            "pentry stackalign requires aligned stack storage",
        )),
        Some(_) => Err(UnlaceError::lowlevel("bad pentry stackalign")),
    }
}

#[doc(hidden)]
pub fn effective_alignment(flags: u32, type_alignment: i32, slot_alignment: i32) -> i32 {
    if flags & IGNORE_TYPE_ALIGN != 0 {
        slot_alignment
    } else {
        type_alignment
    }
}

/// Fill this pass's hooks ([`crate::passhooks`]).
pub fn provide(hooks: &mut crate::passhooks::UnlaceHookSlots) {
    hooks.stackparamalign_effective_alignment = Some(effective_alignment);
    hooks.stackparamalign_decode = Some(decode);
}

#[cfg(test)]
mod tests;
