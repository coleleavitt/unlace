//! Preserve numeric signedness when extending Rust's unsigned text storage.

use crate::dtype::{Datatype, type_metatype};

#[doc(hidden)]
pub fn signed_text_input(input: &Datatype, output: &Datatype) -> Option<&'static str> {
    if input.get_metatype() != type_metatype::TYPE_INT
        || !input.is_char_print()
        || !input.is_core_type()
        || output.get_size() <= input.get_size()
        || !matches!(output.get_size(), 2 | 4 | 8 | 16)
        || !matches!(
            output.get_metatype(),
            type_metatype::TYPE_INT | type_metatype::TYPE_UINT | type_metatype::TYPE_UNKNOWN
        )
    {
        return None;
    }
    match input.get_size() {
        1 => Some("i8"),
        2 => Some("i16"),
        4 => Some("i32"),
        8 => Some("i64"),
        _ => None,
    }
}

#[cfg(test)]
mod tests;
