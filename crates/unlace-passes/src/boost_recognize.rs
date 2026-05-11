//! Recognise Boost C++ library types from a demangled symbol's class spelling.
//!
//! Where [`cpp_stl`](crate::cpp_stl) handles `std::` containers, this module
//! handles the most common Boost smart-pointer / type-erasure templates that
//! still show up in stripped binaries (legacy code that pre-dates C++11, or
//! that intentionally pins itself to Boost for portability). Recognising them
//! lets the caller render parameter types like `boost::shared_ptr<Foo>*`
//! instead of an opaque struct from the binary's layout, which is brittle to
//! recover because the layout differs between Boost versions and between the
//! "intrusive" and "non-intrusive" variants of each template.
//!
//! The input is the fully demangled symbol *or* the class portion of one
//! (anything that contains a leading `boost::<template>< … >` is fine — we
//! anchor on the prefix and parse a balanced `<…>` group). Unlike the STL
//! recogniser, callers don't need to pre-split namespaces because Boost
//! doesn't have inline-namespace variants to fold away.
//!
//! Recognised templates:
//!
//! * `boost::shared_ptr<T>` → [`BoostType::SharedPtr`]
//! * `boost::weak_ptr<T>`   → [`BoostType::WeakPtr`]
//! * `boost::scoped_ptr<T>` → [`BoostType::ScopedPtr`]
//! * `boost::function<R(Args…)>` → [`BoostType::Function`]
//! * `boost::variant<T…>`   → [`BoostType::Variant`]
//! * `boost::optional<T>`   → [`BoostType::Optional`]
//!
//! Anything that doesn't match returns `None` — callers should fall through
//! to other recognisers (`cpp_stl`, generic struct recovery, etc.).
//!
//! The parser is deliberately string-oriented and tolerant of whitespace
//! variants produced by different demanglers (`itanium-demangle` emits
//! `T > >`; libiberty emits `T>>`).

/// A recognised Boost template instantiation.
///
/// All `String` payloads are the *cleaned* type spelling — trailing spaces
/// are trimmed and the parser preserves nested template brackets verbatim,
/// so e.g. `boost::shared_ptr<std::vector<int> >` yields a `SharedPtr`
/// carrying `"std::vector<int>"`.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum BoostType {
    /// `boost::shared_ptr<T>` — reference-counted smart pointer.
    SharedPtr(String),
    /// `boost::weak_ptr<T>` — non-owning companion to `shared_ptr`.
    WeakPtr(String),
    /// `boost::scoped_ptr<T>` — non-copyable single-owner pointer.
    ScopedPtr(String),
    /// `boost::function<R(Args…)>` — type-erased callable.
    ///
    /// Boost spells this as a single template argument that is itself a
    /// function type, so we further split the return type from the
    /// parenthesised argument list.
    Function {
        /// Return type spelling.
        ret: String,
        /// Argument-type spellings, in declaration order.
        args: Vec<String>,
    },
    /// `boost::variant<T…>` — discriminated union.
    Variant(Vec<String>),
    /// `boost::optional<T>` — nullable value wrapper.
    Optional(String),
}

/// Recognise a `boost::…` template instantiation from a demangled symbol.
///
/// `demangled` is expected to *start with* a `boost::<name>< … >` prefix —
/// callers typically pass either the bare class portion of a demangled name
/// (e.g. `boost::shared_ptr<Foo>`) or trim a method symbol down to its class
/// part before calling. Returns the matched [`BoostType`] or `None` if no
/// recognised prefix is present.
pub fn recognize_boost(demangled: &str) -> Option<BoostType> {
    // Anchor on the `boost::` prefix. We *don't* search arbitrarily deep into
    // the string, because `std::vector<boost::shared_ptr<T>>` is a vector of
    // shared_ptr, not a shared_ptr.
    let rest = demangled.strip_prefix("boost::")?;

    // Each arm strips the template name + `<`, then hands the inner span
    // (without the outer `>`) to a dedicated parser. Order doesn't matter
    // here because the prefixes are distinct, but we keep the listing
    // grouped (smart pointers, then type-erasure, then variant/optional).
    if let Some(inner) = strip_template(rest, "shared_ptr") {
        return Some(BoostType::SharedPtr(clean(inner)));
    }
    if let Some(inner) = strip_template(rest, "weak_ptr") {
        return Some(BoostType::WeakPtr(clean(inner)));
    }
    if let Some(inner) = strip_template(rest, "scoped_ptr") {
        return Some(BoostType::ScopedPtr(clean(inner)));
    }
    if let Some(inner) = strip_template(rest, "function") {
        let (ret, args) = parse_function_signature(inner)?;
        return Some(BoostType::Function { ret, args });
    }
    if let Some(inner) = strip_template(rest, "variant") {
        return Some(BoostType::Variant(split_top_level_commas(inner)));
    }
    if let Some(inner) = strip_template(rest, "optional") {
        return Some(BoostType::Optional(clean(inner)));
    }

    None
}

/// If `s` starts with `<name><` then return the substring inside the matching
/// outer `<…>` (template-argument bracket balanced). Otherwise return `None`.
fn strip_template<'a>(s: &'a str, name: &str) -> Option<&'a str> {
    let after_name = s.strip_prefix(name)?;
    // The character right after the template name must be `<` — otherwise
    // we'd false-match `shared_ptr_foo` or `functional`.
    let after_lt = after_name.strip_prefix('<')?;
    // Find the matching `>` at depth 0. Templates nest, and for
    // `boost::function` the argument is itself a function type with
    // parentheses — those don't count toward `<>` depth, but tracking paren
    // depth too lets us reject obviously malformed input cheaply.
    let mut depth: i32 = 1;
    let mut paren: i32 = 0;
    for (i, ch) in after_lt.char_indices() {
        match ch {
            '<' => depth += 1,
            '>' => {
                depth -= 1;
                if depth == 0 {
                    // Slice up to (but not including) the closing `>`.
                    return Some(&after_lt[..i]);
                }
            }
            '(' => paren += 1,
            ')' => paren -= 1,
            _ => {}
        }
        let _ = paren; // silence unused-assignment if input is well-formed
    }
    None
}

/// Trim whitespace from a captured type spelling.
fn clean(s: &str) -> String {
    s.trim().to_string()
}

/// Split a comma-separated template argument list at depth 0, respecting
/// nested `<…>` and `(…)` so that `vector<int, int>` doesn't get torn apart.
fn split_top_level_commas(s: &str) -> Vec<String> {
    let mut out = Vec::new();
    let mut depth: i32 = 0;
    let mut paren: i32 = 0;
    let mut start = 0;
    for (i, ch) in s.char_indices() {
        match ch {
            '<' => depth += 1,
            '>' => depth -= 1,
            '(' => paren += 1,
            ')' => paren -= 1,
            ',' if depth == 0 && paren == 0 => {
                out.push(s[start..i].trim().to_string());
                start = i + 1;
            }
            _ => {}
        }
    }
    let tail = s[start..].trim();
    if !tail.is_empty() {
        out.push(tail.to_string());
    }
    out
}

/// Parse a `boost::function` template argument, which is itself a function
/// type: `R(A1, A2, …)`. Returns `(return_type, args)`.
fn parse_function_signature(inner: &str) -> Option<(String, Vec<String>)> {
    let inner = inner.trim();
    // Find the *first* top-level `(` — the return type is everything before
    // it, and the parenthesised list is the argument types.
    let mut depth: i32 = 0;
    let lparen = inner.char_indices().find_map(|(i, ch)| match ch {
        '<' => {
            depth += 1;
            None
        }
        '>' => {
            depth -= 1;
            None
        }
        '(' if depth == 0 => Some(i),
        _ => None,
    })?;
    let ret = inner[..lparen].trim().to_string();
    let after = &inner[lparen + 1..];
    let rparen = after.rfind(')')?;
    let args_str = &after[..rparen];
    let args = if args_str.trim().is_empty() {
        Vec::new()
    } else {
        split_top_level_commas(args_str)
    };
    Some((ret, args))
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn recognises_shared_ptr() {
        // e.g. _ZN5boost10shared_ptrI3FooE3getEv -> boost::shared_ptr<Foo>::get()
        assert_eq!(
            recognize_boost("boost::shared_ptr<Foo>"),
            Some(BoostType::SharedPtr("Foo".into())),
        );
        // Trailing `> >` artefact and nested template should pass through verbatim.
        assert_eq!(
            recognize_boost("boost::shared_ptr<std::vector<int> >"),
            Some(BoostType::SharedPtr("std::vector<int>".into())),
        );
    }

    #[test]
    fn recognises_weak_ptr() {
        assert_eq!(
            recognize_boost("boost::weak_ptr<Bar>"),
            Some(BoostType::WeakPtr("Bar".into())),
        );
    }

    #[test]
    fn recognises_scoped_ptr() {
        assert_eq!(
            recognize_boost("boost::scoped_ptr<Baz>"),
            Some(BoostType::ScopedPtr("Baz".into())),
        );
    }

    #[test]
    fn recognises_function() {
        // boost::function<int(double, char const*)>
        let got = recognize_boost("boost::function<int(double, char const*)>");
        assert_eq!(
            got,
            Some(BoostType::Function {
                ret: "int".into(),
                args: vec!["double".into(), "char const*".into()],
            }),
        );
        // Zero-arg form.
        assert_eq!(
            recognize_boost("boost::function<void()>"),
            Some(BoostType::Function {
                ret: "void".into(),
                args: Vec::new(),
            }),
        );
    }

    #[test]
    fn recognises_variant() {
        assert_eq!(
            recognize_boost("boost::variant<int, double, std::string>"),
            Some(BoostType::Variant(vec![
                "int".into(),
                "double".into(),
                "std::string".into(),
            ])),
        );
    }

    #[test]
    fn recognises_optional() {
        assert_eq!(
            recognize_boost("boost::optional<int>"),
            Some(BoostType::Optional("int".into())),
        );
    }

    #[test]
    fn rejects_non_boost_and_unknown_templates() {
        // Belongs to std, not boost.
        assert_eq!(recognize_boost("std::shared_ptr<int>"), None);
        // Unknown boost template — caller should fall through to generic recovery.
        assert_eq!(recognize_boost("boost::not_a_real_template<int>"), None);
        // `boost::` alone with no template at all.
        assert_eq!(recognize_boost("boost::"), None);
    }
}
