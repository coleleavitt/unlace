//! Symbol demangling for C++, Rust, Swift, and MSVC mangled names.
//!
//! Uses [`symbolic_demangle`] as a unified facade to demangle symbols from
//! multiple languages. Returns both a short (name-only) form suitable for
//! C output and a full signature for comments.

/// The detected source language of a mangled symbol.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum SymbolLanguage {
    Cpp,
    Rust,
    Swift,
    ObjC,
}

/// The kind of a (typically C++) symbol, distinguishing ordinary functions
/// from compiler-generated artifacts (vtables, RTTI, thunks, ctors/dtors)
/// that share the Itanium mangling scheme.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum SymbolKind {
    Normal,
    Vtable,
    TypeInfo,
    TypeInfoName,
    GuardVariable,
    Constructor,
    Destructor,
    VirtualThunk,
}

/// Result of successfully demangling a symbol.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct DemangleResult {
    /// Short name suitable for use as a C identifier (name only, no params).
    pub short_name: String,
    /// Full demangled signature including parameters and return type.
    pub full_signature: String,
    /// The detected source language.
    pub language: SymbolLanguage,
    /// The kind of symbol — distinguishes vtables, RTTI, ctors, dtors, etc.
    /// from ordinary functions.
    pub symbol_kind: SymbolKind,
}

/// Attempt to demangle a mangled symbol name.
///
/// Returns `Some(DemangleResult)` if the name is recognized as a mangled
/// symbol and demangling succeeds. Returns `None` if the name is not
/// mangled or demangling fails.
pub fn demangle(name: &str) -> Option<DemangleResult> {
    let language = detect_language(name)?;

    let symbol_kind = detect_symbol_kind(name);

    let full_signature = symbolic_demangle::demangle(name);
    if full_signature == name && symbol_kind == SymbolKind::Normal {
        return None;
    }

    let symbol_kind = if symbol_kind == SymbolKind::Normal {
        detect_symbol_kind_from_demangled(&full_signature)
    } else {
        symbol_kind
    };

    let short_name = extract_short_name(&full_signature);

    Some(DemangleResult {
        short_name,
        full_signature: full_signature.into_owned(),
        language,
        symbol_kind,
    })
}

/// Classify an Itanium-mangled symbol by its prefix.
///
/// `_ZTV` / `_ZTI` / `_ZTS` / `_ZGV` are unambiguous per the Itanium ABI;
/// `_ZTh` / `_ZTv` / `_ZTc` are the three thunk forms (non-virtual,
/// virtual, covariant).  Constructor / destructor detection requires
/// looking past the nested-name prefix and is handled separately by the
/// per-component check below.
fn detect_symbol_kind(name: &str) -> SymbolKind {
    let stripped = name.strip_prefix("__").unwrap_or(name);
    let body = match stripped.strip_prefix("_Z") {
        Some(b) => b,
        None => return SymbolKind::Normal,
    };

    if let Some(rest) = body.strip_prefix('T') {
        match rest.as_bytes().first() {
            Some(b'V') => return SymbolKind::Vtable,
            Some(b'I') => return SymbolKind::TypeInfo,
            Some(b'S') => return SymbolKind::TypeInfoName,
            Some(b'h') | Some(b'v') | Some(b'c') => return SymbolKind::VirtualThunk,
            _ => {}
        }
    }

    if body.starts_with('G') && body.as_bytes().get(1) == Some(&b'V') {
        return SymbolKind::GuardVariable;
    }

    if body.starts_with('N') {
        if let Some(kind) = ctor_dtor_kind_in_nested(body) {
            return kind;
        }
    }

    SymbolKind::Normal
}

/// Scan an Itanium nested-name `<N…E>` (without the leading `_Z`) for a
/// constructor/destructor tag.
///
/// The grammar (Itanium ABI §5.1.5) has `C1`/`C2`/`C3` as complete-/base-/
/// allocating-object constructors and `D0`/`D1`/`D2` as deleting-/complete-/
/// base-object destructors.  These tags only appear immediately after the
/// final source-name component, before the optional `E` terminator.
fn ctor_dtor_kind_in_nested(body: &str) -> Option<SymbolKind> {
    let mut rest = body.strip_prefix('N')?;
    if let Some(after_cv) = rest.strip_prefix(|c| matches!(c, 'r' | 'V' | 'K')) {
        rest = after_cv;
        if let Some(after_cv2) = rest.strip_prefix(|c| matches!(c, 'r' | 'V' | 'K')) {
            rest = after_cv2;
        }
    }
    loop {
        let bytes = rest.as_bytes();
        let first = *bytes.first()?;
        if first.is_ascii_digit() {
            let (len, digits) = parse_decimal(rest);
            if len == 0 || digits >= rest.len() {
                return None;
            }
            let after_digits = &rest[digits..];
            if after_digits.len() < len {
                return None;
            }
            rest = &after_digits[len..];
        } else if first == b'C' {
            let tag = rest.as_bytes().get(1).copied();
            if matches!(tag, Some(b'1') | Some(b'2') | Some(b'3')) {
                return Some(SymbolKind::Constructor);
            }
            return None;
        } else if first == b'D' {
            let tag = rest.as_bytes().get(1).copied();
            if matches!(tag, Some(b'0') | Some(b'1') | Some(b'2')) {
                return Some(SymbolKind::Destructor);
            }
            return None;
        } else {
            return None;
        }
    }
}

fn parse_decimal(s: &str) -> (usize, usize) {
    let mut value: usize = 0;
    let mut consumed = 0;
    for b in s.bytes() {
        if !b.is_ascii_digit() {
            break;
        }
        value = value.saturating_mul(10).saturating_add((b - b'0') as usize);
        consumed += 1;
    }
    (value, consumed)
}

/// Fallback classification from the demangled string for symbols whose
/// language-specific prefix this module doesn't yet parse (e.g. MSVC `?`).
fn detect_symbol_kind_from_demangled(demangled: &str) -> SymbolKind {
    if demangled.starts_with("vtable for ")
        || demangled.starts_with("{vtable(")
        || demangled.starts_with("vftable'")
        || demangled.contains("`vftable'")
    {
        return SymbolKind::Vtable;
    }
    if demangled.starts_with("typeinfo for ") {
        return SymbolKind::TypeInfo;
    }
    if demangled.starts_with("typeinfo name for ") {
        return SymbolKind::TypeInfoName;
    }
    if demangled.starts_with("guard variable for ") {
        return SymbolKind::GuardVariable;
    }
    if demangled.contains("virtual override thunk")
        || demangled.starts_with("non-virtual thunk to ")
        || demangled.starts_with("virtual thunk to ")
    {
        return SymbolKind::VirtualThunk;
    }
    SymbolKind::Normal
}

fn extract_short_name(full: &str) -> String {
    if let Some(paren_pos) = full.find('(') {
        let prefix = &full[..paren_pos];
        let trimmed = prefix.trim_end();
        if let Some(space_pos) = trimmed.rfind(' ') {
            trimmed[space_pos + 1..].to_string()
        } else {
            trimmed.to_string()
        }
    } else {
        full.to_string()
    }
}

fn detect_language(name: &str) -> Option<SymbolLanguage> {
    if name.starts_with('?') {
        return Some(SymbolLanguage::Cpp);
    }

    if name.starts_with("$s") || name.starts_with("$S")
        || name.starts_with("_$s") || name.starts_with("_$S")
        || name.starts_with("_T")
    {
        return Some(SymbolLanguage::Swift);
    }

    if name.starts_with("_R") && name.len() > 2 && name.as_bytes()[2].is_ascii_uppercase() {
        return Some(SymbolLanguage::Rust);
    }

    if name.starts_with("_ZN") || name.starts_with("__ZN") {
        if is_rust_legacy(name) {
            return Some(SymbolLanguage::Rust);
        }
        return Some(SymbolLanguage::Cpp);
    }

    if name.starts_with("_Z") || name.starts_with("__Z") {
        return Some(SymbolLanguage::Cpp);
    }

    None
}

fn is_rust_legacy(name: &str) -> bool {
    let s = name.strip_prefix("__").unwrap_or(name);
    let s = s.strip_prefix("_ZN").unwrap_or(s);
    s.contains("17h") && s.ends_with('E')
}

/// Sanitize a demangled name for use as a C identifier.
///
/// Replaces characters invalid in C identifiers with underscores and
/// collapses runs of underscores.
pub fn sanitize_for_c(name: &str) -> String {
    let mut result = String::with_capacity(name.len());
    let mut prev_underscore = false;

    for ch in name.chars() {
        if ch.is_ascii_alphanumeric() || ch == '_' {
            result.push(ch);
            prev_underscore = ch == '_';
        } else if !prev_underscore {
            result.push('_');
            prev_underscore = true;
        }
    }

    if result.ends_with('_') {
        result.pop();
    }

    if result.starts_with(|c: char| c.is_ascii_digit()) {
        result.insert(0, '_');
    }

    if result.is_empty() {
        result.push_str("_unnamed");
    }

    result
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn demangle_cpp_itanium() {
        let result = demangle("_ZN3foo3barEv").expect("should demangle C++ symbol");
        assert_eq!(result.language, SymbolLanguage::Cpp);
        assert!(
            result.short_name.contains("foo") && result.short_name.contains("bar"),
            "short_name should contain foo::bar, got: {}",
            result.short_name
        );
        assert!(
            result.full_signature.contains("foo") && result.full_signature.contains("bar"),
            "full_signature should contain foo::bar, got: {}",
            result.full_signature
        );
    }

    #[test]
    fn demangle_rust_v0() {
        let result = demangle("_ZN4core3fmt5Write9write_fmt17h123456789abcdef0E");
        let result = result.expect("should demangle Rust symbol");
        assert_eq!(result.language, SymbolLanguage::Rust);
        assert!(
            result.short_name.contains("write_fmt"),
            "short_name should contain write_fmt, got: {}",
            result.short_name
        );
    }

    #[test]
    fn demangle_msvc() {
        let result = demangle("?foo@bar@@YAHXZ").expect("should demangle MSVC symbol");
        assert_eq!(result.language, SymbolLanguage::Cpp);
        assert!(
            result.short_name.contains("foo"),
            "short_name should contain foo, got: {}",
            result.short_name
        );
        assert!(
            result.full_signature.contains("foo"),
            "full_signature should contain foo, got: {}",
            result.full_signature
        );
    }

    #[test]
    fn demangle_swift() {
        let result = demangle("$s8mangling3fooyyF");
        if let Some(r) = result {
            assert_eq!(r.language, SymbolLanguage::Swift);
            assert!(
                r.short_name.contains("foo"),
                "short_name should contain foo, got: {}",
                r.short_name
            );
        } else {
            eprintln!("Swift demangling not available (cc build dependency), skipping");
        }
    }

    #[test]
    fn demangle_not_mangled() {
        assert!(demangle("main").is_none());
        assert!(demangle("printf").is_none());
        assert!(demangle("").is_none());
        assert!(demangle("sub_11B9C0").is_none());
    }

    #[test]
    fn demangle_invalid_mangled() {
        assert!(demangle("_Z").is_none());
        assert!(demangle("_Zgarbage").is_none());
    }

    #[test]
    fn sanitize_cpp_name() {
        assert_eq!(sanitize_for_c("std::io::Read::read_to_end"), "std_io_Read_read_to_end");
        assert_eq!(sanitize_for_c("foo::bar()"), "foo_bar");
        assert_eq!(sanitize_for_c("std::vector<int>"), "std_vector_int");
    }

    #[test]
    fn sanitize_edge_cases() {
        assert_eq!(sanitize_for_c(""), "_unnamed");
        assert_eq!(sanitize_for_c("123"), "_123");
        assert_eq!(sanitize_for_c("a::b::c"), "a_b_c");
    }

    #[test]
    fn detect_vtable_typeinfo_typeinfoname() {
        let v = demangle("_ZTV4Base").expect("vtable demangles");
        assert_eq!(v.symbol_kind, SymbolKind::Vtable);
        assert!(v.full_signature.contains("Base"), "got: {}", v.full_signature);

        let i = demangle("_ZTI4Base").expect("typeinfo demangles");
        assert_eq!(i.symbol_kind, SymbolKind::TypeInfo);
        assert!(i.full_signature.contains("typeinfo for Base"), "got: {}", i.full_signature);

        let s = demangle("_ZTS4Base").expect("typeinfo name demangles");
        assert_eq!(s.symbol_kind, SymbolKind::TypeInfoName);
        assert!(s.full_signature.contains("typeinfo name for Base"), "got: {}", s.full_signature);
    }

    #[test]
    fn detect_guard_variable_and_thunk() {
        let g = demangle("_ZGVZN3foo3barEvE3val").expect("guard demangles");
        assert_eq!(g.symbol_kind, SymbolKind::GuardVariable);

        let t = demangle("_ZThn8_N4Base5valueEv").expect("thunk demangles");
        assert_eq!(t.symbol_kind, SymbolKind::VirtualThunk);
    }

    #[test]
    fn detect_normal_function() {
        let r = demangle("_ZN3foo3barEv").expect("normal func demangles");
        assert_eq!(r.symbol_kind, SymbolKind::Normal);
        assert_eq!(
            demangle("printf").map(|r| r.symbol_kind),
            None,
            "non-mangled name returns None"
        );
    }
}
