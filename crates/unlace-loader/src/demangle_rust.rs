//! Rust symbol-name recognition and demangling.
//!
//! Delegates the actual demangling to the canonical `rustc-demangle`
//! crate, which understands both legacy hashed mangling
//! (`_ZN…17h<hash>E`, RFC 0689) and the v0 scheme (`_R…`, RFC 2603).
//!
//! Recognition is deliberately tighter than rustc-demangle's parser:
//! [`is_rust_mangled`] only returns `true` for prefixes the Rust ABI
//! actually emits, so callers can layer this after a C++ demangler
//! without misclassifying ordinary Itanium symbols.

/// Returns `true` when `name` carries a Rust mangling prefix.
///
/// * `_R…` is unambiguously Rust v0.
/// * `_ZN…` and `__ZN…` (Mach-O underscored) are accepted only when the
///   name carries the legacy hash suffix `…17h<16 hex>E`.  Plain Itanium
///   names without a hash are *not* matched here — those should fall
///   through to a C++ demangler.
pub fn is_rust_mangled(name: &str) -> bool {
    if let Some(rest) = name.strip_prefix("_R") {
        return !rest.is_empty() && rest.as_bytes()[0].is_ascii_uppercase();
    }
    is_rust_legacy(name)
}

/// Attempt to demangle a Rust mangled name via `rustc-demangle`.
///
/// Returns the demangled `Display` form on success; returns `None` if
/// the input doesn't look Rust-mangled or `rustc-demangle` rejects it.
pub fn try_demangle_rust(name: &str) -> Option<String> {
    if !is_rust_mangled(name) {
        return None;
    }
    let demangled = rustc_demangle::try_demangle(name).ok()?;
    Some(format!("{demangled}"))
}

fn is_rust_legacy(name: &str) -> bool {
    let s = name.strip_prefix("__").unwrap_or(name);
    let s = match s.strip_prefix("_ZN") {
        Some(rest) => rest,
        None => return false,
    };
    if !s.ends_with('E') {
        return false;
    }
    // Look for the trailing `17h<16 hex>E` length-prefixed hash component
    // that rustc's legacy mangler always emits.
    let body = &s[..s.len() - 1];
    if let Some(idx) = body.rfind("17h") {
        let hash = &body[idx + 3..];
        return hash.len() == 16 && hash.bytes().all(|b| b.is_ascii_hexdigit());
    }
    false
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn recognizes_rust_v0_prefix() {
        assert!(is_rust_mangled("_RNvCs2bWZRtgL14g_4hash3foo"));
        assert!(is_rust_mangled("_RNvC4main4main"));
    }

    #[test]
    fn demangles_rust_v0() {
        let out =
            try_demangle_rust("_RNvCs2bWZRtgL14g_4hash3foo").expect("v0 symbol should demangle");
        assert!(
            out.contains("hash") && out.contains("foo"),
            "expected hash::foo in {out}",
        );
    }

    #[test]
    fn demangles_rust_legacy() {
        let mangled = "_ZN4core3fmt5Write9write_fmt17h0123456789abcdefE";
        assert!(is_rust_mangled(mangled));
        let out = try_demangle_rust(mangled).expect("legacy symbol should demangle");
        assert!(
            out.contains("write_fmt"),
            "expected write_fmt in {out}",
        );
    }

    #[test]
    fn passes_through_non_rust() {
        assert!(try_demangle_rust("$s4main6sayHiyyF").is_none());
        assert!(!is_rust_mangled("$s4main6sayHiyyF"));
        // Plain Itanium C++ without the rust hash suffix should not be
        // claimed by the rust recognizer.
        assert!(!is_rust_mangled("_ZN3foo3barEv"));
        assert!(try_demangle_rust("_ZN3foo3barEv").is_none());
        assert!(!is_rust_mangled("main"));
        assert!(!is_rust_mangled(""));
    }
}
