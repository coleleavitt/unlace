//! C++ lambda closure-type detection, ported from the archived unlace
//! `detect_lambda` (`origin/master:crates/unlace-output/src/demangle.rs`).
//!
//! A lambda's closure type is an anonymous class whose only normal member is
//! its call operator. A demangled name that reaches into that class carries
//! one of three signatures, checked in this order: the Itanium closure-type
//! name `Ul <lambda-sig> E [<digits>] _` (Itanium ABI section 5.1.6), the clang
//! `$_<n>` source name (older clang emitted the closure as that identifier),
//! and the GCC/libiberty `{lambda(...)#N}` text. The flag marks the symbol; no
//! output changes from it by itself.

use super::demangle_raw;

/// `true` when the mangled name `mangled` (with its demangled form
/// `demangled`, possibly empty) names a lambda closure type or one of its
/// members.
pub fn is_lambda_closure(mangled: &str, demangled: &str) -> bool {
    mangled_has_itanium_lambda(mangled)
        || demangled.contains("{lambda(")
        || demangled_has_clang_dollar_name(demangled)
        || mangled_has_clang_dollar_name(mangled)
}

/// `true` when the raw symbol `raw` is a lambda closure per
/// [`is_lambda_closure`]. A name that does not demangle is judged on its
/// mangled form alone.
pub fn is_lambda_symbol(raw: &str) -> bool {
    let demangled = demangle_raw(raw).unwrap_or_default();
    is_lambda_closure(raw, &demangled)
}

/// Scan an Itanium-mangled string for the closure-type-name production
/// `Ul <lambda-sig> E [<digits>] _`. The lambda signature is not parsed; the
/// `Ul` must sit at a nested-name, substitution or length boundary so that an
/// incidental `Ul` inside an identifier is skipped.
fn mangled_has_itanium_lambda(s: &str) -> bool {
    let bytes = s.as_bytes();
    let mut i = 0usize;
    while i + 1 < bytes.len() {
        if bytes[i] == b'U' && bytes[i + 1] == b'l' {
            let prev = if i == 0 { b'\0' } else { bytes[i - 1] };
            let boundary =
                matches!(prev, b'\0' | b'N' | b'E' | b'K' | b'V' | b'r') || prev.is_ascii_digit();
            if boundary && itanium_lambda_terminator_after(&bytes[i + 2..]) {
                return true;
            }
        }
        i += 1;
    }
    false
}

/// Look for the `E [<digits>] _` closing of a closure-type name, starting just
/// past the `Ul` opener. The body is treated as opaque and the search is
/// bounded to 256 bytes.
fn itanium_lambda_terminator_after(rest: &[u8]) -> bool {
    let limit = rest.len().min(256);
    for i in 0..limit {
        if rest[i] == b'E' {
            let mut j = i + 1;
            while j < rest.len() && rest[j].is_ascii_digit() {
                j += 1;
            }
            if rest.get(j) == Some(&b'_') {
                return true;
            }
        }
    }
    false
}

/// Detect clang's `$_<digit>` closure source name in a mangled string. The
/// alphabet of Itanium output has no `$`, so any `$_<digit>` is the name.
fn mangled_has_clang_dollar_name(s: &str) -> bool {
    let bytes = s.as_bytes();
    bytes
        .windows(3)
        .any(|w| w[0] == b'$' && w[1] == b'_' && w[2].is_ascii_digit())
}

/// Detect clang's `$_<digit>` closure name in a demangled signature, such as
/// `outer()::$_0::operator()`. The `$_` must start the string or follow `:`,
/// a space or `(`, so an incidental `$_` is not taken.
fn demangled_has_clang_dollar_name(s: &str) -> bool {
    let bytes = s.as_bytes();
    (0..bytes.len().saturating_sub(2)).any(|i| {
        bytes[i] == b'$'
            && bytes[i + 1] == b'_'
            && bytes[i + 2].is_ascii_digit()
            && matches!(
                if i == 0 { b'\0' } else { bytes[i - 1] },
                b'\0' | b':' | b' ' | b'('
            )
    })
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn itanium_closure_type_is_a_lambda() {
        assert!(is_lambda_closure(
            "_ZZ4mainENKUlvE_clEv",
            "main::{lambda()#1}::operator()() const",
        ));
    }

    #[test]
    fn clang_dollar_name_is_a_lambda() {
        assert!(is_lambda_closure(
            "_ZZ4mainEN3$_0clEv",
            "main::$_0::operator()()"
        ));
        assert!(is_lambda_closure("_ZZ4mainEN3$_0clEv", ""));
    }

    #[test]
    fn gcc_lambda_text_is_a_lambda() {
        assert!(is_lambda_closure(
            "",
            "outer()::{lambda()#1}::operator()() const"
        ));
    }

    #[test]
    fn ordinary_names_are_not_lambdas() {
        assert!(!is_lambda_closure("_ZN3foo3barEv", "foo::bar()"));
        assert!(!is_lambda_closure("_ZN1AC2Ev", "A::A()"));
    }

    #[test]
    fn ul_inside_an_identifier_is_not_a_lambda() {
        assert!(!is_lambda_closure("_ZN5Ulrik3runEv", "Ulrik::run()"));
    }

    #[test]
    fn plain_symbol_is_not_a_lambda() {
        assert!(!is_lambda_symbol("_ZN3foo3barEv"));
        assert!(!is_lambda_symbol("puts"));
    }
}
