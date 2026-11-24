//! (unlace `stringglobalnames`) Name a global whose bytes are a C string after
//! that string, as IDA does: a global holding `"hello world"` is `aHelloWorld`,
//! and `&aHelloWorld` replaces `&dat_<addr>` wherever the printer names a global
//! by its address (the header declaration follows the same name).
//!
//! The label capitalises the words of the text, drops every non-alphanumeric
//! byte, and reads `aEmpty` when nothing is left. The text is the run of printable
//! bytes from the global's address up to a NUL, at least two bytes long and
//! holding a letter or digit, read from the loaded image. Two globals holding the
//! same text get the same name, and the printer does not uniquify them, so this
//! is a judgement call behind an option, default off.

use std::rc::Rc;

use unlace_base::address::Address;

use crate::architecture::Architecture;

/// The longest string whose label is taken; a longer run is not named.
const MAX_STRING: usize = 256;

/// The IDA-style label for a string's text: `a` followed by each alphanumeric run's
/// first byte capitalised and the rest lowercased, with the rest dropped.
pub fn string_label(text: &[u8]) -> String {
    let mut out = String::from("a");
    let mut capitalise_next = true;
    for &byte in text {
        if byte.is_ascii_alphanumeric() {
            if capitalise_next {
                out.push(byte.to_ascii_uppercase() as char);
            } else {
                out.push(byte.to_ascii_lowercase() as char);
            }
            capitalise_next = false;
        } else {
            capitalise_next = true;
        }
    }
    if out.len() == 1 {
        out.push_str("Empty");
    }
    out
}

/// The printable NUL-terminated text at `addr` in the default data space, when it
/// is at least two bytes long and holds a letter or digit.
pub fn string_at(arch: &Architecture, addr: u64) -> Option<Vec<u8>> {
    let spc = arch.manage().get_default_data_space()?;
    let loader_rc = arch.translate().loader_rc();
    let mut loader = loader_rc.borrow_mut();
    let mut text = Vec::new();
    loop {
        if text.len() > MAX_STRING {
            return None;
        }
        let mut byte = [0u8; 1];
        let at = Address::new(Rc::clone(spc), addr.checked_add(text.len() as u64)?);
        loader.load_fill(&mut byte, &at).ok()?;
        match byte[0] {
            0 => break,
            b' '..=b'~' => text.push(byte[0]),
            _ => return None,
        }
    }
    let named = text.len() >= 2 && text.iter().any(|b| b.is_ascii_alphanumeric());
    named.then_some(text)
}

/// The name the printer gives the unnamed global at `addr`: its string label when
/// the option is on and the bytes there are a string, else `dat_<addr>` (or the
/// ghidra-mode `DAT_` spelling).
pub fn global_name(arch: &Architecture, addr: u64) -> String {
    let on = arch.unlace_options.get::<StringGlobalNames>().0;
    match on.then(|| string_at(arch, addr)).flatten() {
        Some(text) => string_label(&text),
        None => crate::printc::unlace_global_data_name(arch.unlace_name_style(), addr),
    }
}

crate::unlace_flag!(
    /// (unlace `stringglobalnames`) Name a global whose bytes are a C string after
    /// the string (`aHelloWorld`), as IDA does; default off.
    StringGlobalNames,
    "stringglobalnames",
    "string-derived names for unnamed globals",
    unset: false,
    shipped: false
);

#[cfg(test)]
mod tests {
    use super::string_label;

    #[test]
    fn labels_follow_the_ida_convention() {
        assert_eq!(string_label(b"hello world"), "aHelloWorld");
        assert_eq!(string_label(b"%s: %d"), "aSD");
        assert_eq!(string_label(b"!!"), "aEmpty");
    }
}
