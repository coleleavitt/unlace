//! Swift symbol-name recognition and minimal demangling.
//!
//! A full Swift demangler is large (Apple's reference implementation is
//! several thousand lines of C++) and the surface API churns across
//! compiler releases.  This module ships a pragmatic subset:
//!
//! * **Recognition** of every Swift-mangling prefix in current use:
//!   `$s` / `$S` (Swift 5+ stable ABI), the underscored Mach-O variants
//!   `_$s` / `_$S`, and the legacy `_T0` (Swift 4) / `_T` (Swift ≤ 3)
//!   tags.
//! * **Module + identifier extraction** via the substitution-free portion
//!   of the grammar — length-prefixed natural identifiers, e.g.
//!   `4main6sayHiyyF` → `main.sayHi`.  Anything beyond the first
//!   non-identifier byte is dropped (the rest encodes types and is not
//!   recoverable without a full grammar).
//!
//! When the input doesn't start with a known Swift prefix the recognizer
//! returns `None` and the caller can fall through to other demanglers.

/// Returns `true` when `name` carries any of the Swift mangling prefixes.
pub fn is_swift_mangled(name: &str) -> bool {
    name.starts_with("$s")
        || name.starts_with("$S")
        || name.starts_with("_$s")
        || name.starts_with("_$S")
        || name.starts_with("_T0")
        || (name.starts_with("_T") && name.len() > 2 && name.as_bytes()[2].is_ascii_uppercase())
}

/// Attempt to demangle a Swift mangled name.
///
/// Strips the recognized prefix, then walks length-prefixed identifiers
/// joining them with `.`.  Stops at the first non-digit byte.  Returns
/// `None` if the input isn't Swift-mangled or no identifiers could be
/// extracted.
pub fn try_demangle_swift(name: &str) -> Option<String> {
    if !is_swift_mangled(name) {
        return None;
    }

    let body = strip_swift_prefix(name)?;
    let idents = decode_length_prefixed(body);
    if idents.is_empty() {
        return None;
    }
    Some(idents.join("."))
}

fn strip_swift_prefix(name: &str) -> Option<&str> {
    if let Some(rest) = name.strip_prefix("_$s").or_else(|| name.strip_prefix("_$S")) {
        return Some(rest);
    }
    if let Some(rest) = name.strip_prefix("$s").or_else(|| name.strip_prefix("$S")) {
        return Some(rest);
    }
    if let Some(rest) = name.strip_prefix("_T0") {
        return Some(rest);
    }
    if let Some(rest) = name.strip_prefix("_T") {
        if rest.as_bytes().first().is_some_and(|b| b.is_ascii_uppercase()) {
            return Some(rest);
        }
    }
    None
}

/// Walk a Swift-grammar prefix made of `<digits><identifier-bytes>`
/// concatenations and return each identifier as a separate string.
fn decode_length_prefixed(s: &str) -> Vec<String> {
    let bytes = s.as_bytes();
    let mut out = Vec::new();
    let mut i = 0usize;
    while i < bytes.len() && bytes[i].is_ascii_digit() {
        let mut len: usize = 0;
        while i < bytes.len() && bytes[i].is_ascii_digit() {
            len = len.saturating_mul(10).saturating_add((bytes[i] - b'0') as usize);
            i += 1;
        }
        if len == 0 || i + len > bytes.len() {
            break;
        }
        let ident = &s[i..i + len];
        if !ident.is_ascii() {
            break;
        }
        out.push(ident.to_string());
        i += len;
    }
    out
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn recognizes_swift_5_prefix() {
        assert!(is_swift_mangled("$s4main6sayHiyyF"));
        assert!(is_swift_mangled("$S4main6sayHiyyF"));
    }

    #[test]
    fn recognizes_underscored_swift() {
        assert!(is_swift_mangled("_$s4main6sayHiyyF"));
        assert!(is_swift_mangled("_$S4main6sayHiyyF"));
    }

    #[test]
    fn decodes_simple_module_function() {
        let out = try_demangle_swift("$s4main6sayHiyyF").expect("demangles");
        assert!(out.starts_with("main"), "expected leading module 'main', got: {out}");
        assert!(out.contains("sayHi"), "expected method 'sayHi', got: {out}");
    }

    #[test]
    fn passes_through_non_swift() {
        assert!(try_demangle_swift("_ZN3foo3barEv").is_none());
        assert!(!is_swift_mangled("_ZN3foo3barEv"));
        assert!(!is_swift_mangled("main"));
        assert!(!is_swift_mangled(""));
    }

    #[test]
    fn legacy_t0_prefix() {
        assert!(is_swift_mangled("_T04main6sayHiyyF"));
        let out = try_demangle_swift("_T04main6sayHiyyF").expect("demangles");
        assert!(out.contains("main") && out.contains("sayHi"));
    }
}
