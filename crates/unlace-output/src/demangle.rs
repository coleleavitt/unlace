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
    /// Top-level `::` segments before the final identifier, e.g.
    /// `std::vector<int>::push_back` → `["std", "vector<int>"]`.
    pub namespaces: Vec<String>,
    /// Class/struct name when the symbol is a member function — the last
    /// `namespaces` element with template arguments stripped.
    pub class_name: Option<String>,
    /// Comma-separated parameter types extracted from the parenthesised
    /// argument list, with top-level commas only.
    pub param_types: Vec<String>,
    /// `true` when this symbol is a C++ constructor — detected from the
    /// Itanium C1/C2/C3 tag or from `short_name == class_name`.
    pub is_ctor: bool,
    /// `true` when this symbol is a C++ destructor — detected from the
    /// Itanium D0/D1/D2 tag or from `short_name` starting with `~`.
    pub is_dtor: bool,
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
    let (namespaces, class_name, param_types) = parse_signature(&full_signature);

    let final_component = short_name.rsplit("::").next().unwrap_or(&short_name);
    let is_ctor = symbol_kind == SymbolKind::Constructor
        || class_name
            .as_deref()
            .map_or(false, |c| !c.is_empty() && c == final_component);
    let is_dtor = symbol_kind == SymbolKind::Destructor || final_component.starts_with('~');

    let symbol_kind = match symbol_kind {
        SymbolKind::Normal if is_ctor => SymbolKind::Constructor,
        SymbolKind::Normal if is_dtor => SymbolKind::Destructor,
        other => other,
    };

    Some(DemangleResult {
        short_name,
        full_signature: full_signature.into_owned(),
        language,
        symbol_kind,
        namespaces,
        class_name,
        param_types,
        is_ctor,
        is_dtor,
    })
}

/// Decompose a demangled signature into namespace path, class name, and
/// parameter types using bracket-aware top-level scanning.
///
/// Brackets tracked: `<>` (template args), `()` (params and function-pointer
/// types), `[]` (arrays).  `::` and `,` only act as separators at depth 0
/// across all bracket kinds, so e.g.
/// `std::map<int, std::string>::find` correctly parses as two namespace
/// segments rather than splitting inside the template comma.
fn parse_signature(full: &str) -> (Vec<String>, Option<String>, Vec<String>) {
    let (before_paren, params_section) = split_at_top_level_paren(full);

    let leading = before_paren.trim();
    let leading = strip_return_type(leading);

    let segments = split_top_level_scope(leading);

    let (namespaces, class_name) = if segments.len() <= 1 {
        (Vec::new(), None)
    } else {
        let mut ns: Vec<String> = segments[..segments.len() - 1]
            .iter()
            .map(|s| s.trim().to_string())
            .collect();
        let class = ns
            .last()
            .map(|s| strip_template_args(s).to_string());
        ns = ns.into_iter().filter(|s| !s.is_empty()).collect();
        (ns, class)
    };

    let param_types = match params_section {
        Some(inside) => split_top_level_commas(inside)
            .into_iter()
            .filter(|s| !s.is_empty())
            .collect(),
        None => Vec::new(),
    };

    (namespaces, class_name, param_types)
}

/// Find the top-level `(` that opens the parameter list and return the
/// pre-paren prefix plus the comma-separated parameter region.
///
/// Returns `(full, None)` when no top-level paren exists (e.g. `vtable for
/// Base`).  An unbalanced or missing close-paren results in the rest of
/// the string after the open being treated as the parameter region.
fn split_at_top_level_paren(s: &str) -> (&str, Option<&str>) {
    let bytes = s.as_bytes();
    let mut depth_angle: i32 = 0;
    let mut depth_paren: i32 = 0;
    let mut depth_square: i32 = 0;
    for (i, &b) in bytes.iter().enumerate() {
        match b {
            b'<' => depth_angle += 1,
            b'>' if depth_angle > 0 => depth_angle -= 1,
            b'[' => depth_square += 1,
            b']' if depth_square > 0 => depth_square -= 1,
            b'(' => {
                if depth_angle == 0 && depth_paren == 0 && depth_square == 0 {
                    let close = find_matching_paren(s, i);
                    let inside = &s[i + 1..close.unwrap_or(s.len())];
                    return (&s[..i], Some(inside));
                }
                depth_paren += 1;
            }
            b')' if depth_paren > 0 => depth_paren -= 1,
            _ => {}
        }
    }
    (s, None)
}

fn find_matching_paren(s: &str, open: usize) -> Option<usize> {
    let bytes = s.as_bytes();
    let mut depth = 0i32;
    for (i, &b) in bytes.iter().enumerate().skip(open) {
        match b {
            b'(' => depth += 1,
            b')' => {
                depth -= 1;
                if depth == 0 {
                    return Some(i);
                }
            }
            _ => {}
        }
    }
    None
}

/// Strip a leading return-type token from `auto Foo::bar` style sigs.
///
/// We only strip when there's a space at depth 0 *and* the segment after
/// the space contains a `::` — otherwise we'd misclassify a bare
/// `unsigned int` global as having a return type.
fn strip_return_type(s: &str) -> &str {
    let bytes = s.as_bytes();
    let mut depth_angle: i32 = 0;
    let mut depth_paren: i32 = 0;
    let mut depth_square: i32 = 0;
    let mut last_top_space: Option<usize> = None;
    for (i, &b) in bytes.iter().enumerate() {
        match b {
            b'<' => depth_angle += 1,
            b'>' if depth_angle > 0 => depth_angle -= 1,
            b'(' => depth_paren += 1,
            b')' if depth_paren > 0 => depth_paren -= 1,
            b'[' => depth_square += 1,
            b']' if depth_square > 0 => depth_square -= 1,
            b' ' if depth_angle == 0 && depth_paren == 0 && depth_square == 0 => {
                last_top_space = Some(i);
            }
            _ => {}
        }
    }
    match last_top_space {
        Some(i) => {
            let tail = s[i + 1..].trim_start();
            if tail.contains("::") || !s[..i].contains("::") {
                tail
            } else {
                s
            }
        }
        None => s,
    }
}

fn split_top_level_scope(s: &str) -> Vec<String> {
    let bytes = s.as_bytes();
    let mut out = Vec::new();
    let mut depth_angle: i32 = 0;
    let mut depth_paren: i32 = 0;
    let mut depth_square: i32 = 0;
    let mut start = 0usize;
    let mut i = 0usize;
    while i < bytes.len() {
        let b = bytes[i];
        match b {
            b'<' => depth_angle += 1,
            b'>' if depth_angle > 0 => depth_angle -= 1,
            b'(' => depth_paren += 1,
            b')' if depth_paren > 0 => depth_paren -= 1,
            b'[' => depth_square += 1,
            b']' if depth_square > 0 => depth_square -= 1,
            b':' if depth_angle == 0 && depth_paren == 0 && depth_square == 0 => {
                if i + 1 < bytes.len() && bytes[i + 1] == b':' {
                    out.push(s[start..i].to_string());
                    i += 2;
                    start = i;
                    continue;
                }
            }
            _ => {}
        }
        i += 1;
    }
    if start <= s.len() {
        out.push(s[start..].to_string());
    }
    out
}

fn split_top_level_commas(s: &str) -> Vec<String> {
    let bytes = s.as_bytes();
    let mut out = Vec::new();
    let mut depth_angle: i32 = 0;
    let mut depth_paren: i32 = 0;
    let mut depth_square: i32 = 0;
    let mut start = 0usize;
    for (i, &b) in bytes.iter().enumerate() {
        match b {
            b'<' => depth_angle += 1,
            b'>' if depth_angle > 0 => depth_angle -= 1,
            b'(' => depth_paren += 1,
            b')' if depth_paren > 0 => depth_paren -= 1,
            b'[' => depth_square += 1,
            b']' if depth_square > 0 => depth_square -= 1,
            b',' if depth_angle == 0 && depth_paren == 0 && depth_square == 0 => {
                out.push(s[start..i].trim().to_string());
                start = i + 1;
            }
            _ => {}
        }
    }
    out.push(s[start..].trim().to_string());
    out
}

fn strip_template_args(s: &str) -> &str {
    match s.find('<') {
        Some(i) => s[..i].trim_end(),
        None => s,
    }
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

    #[test]
    fn type_recovery_member_function() {
        let r = demangle("_ZN3foo3barEv").expect("demangles");
        assert_eq!(r.namespaces, vec!["foo"]);
        assert_eq!(r.class_name.as_deref(), Some("foo"));
        assert!(
            r.param_types.is_empty() || r.param_types == vec!["void"] || r.param_types == vec![""],
            "void params, got: {:?}",
            r.param_types
        );
    }

    #[test]
    fn type_recovery_template_method() {
        let r = demangle("_ZNSt6vectorIiSaIiEE9push_backERKi").expect("demangles");
        assert!(
            r.namespaces.iter().any(|s| s == "std"),
            "namespaces should contain std, got: {:?}",
            r.namespaces
        );
        assert!(
            r.namespaces.last().map_or(false, |s| s.starts_with("vector<")),
            "last ns segment should be templated vector<…>, got: {:?}",
            r.namespaces
        );
        assert_eq!(r.class_name.as_deref(), Some("vector"));
        assert_eq!(r.param_types.len(), 1);
        assert!(
            r.param_types[0].contains("int") && r.param_types[0].contains('&'),
            "param[0] should be reference-to-int, got: {:?}",
            r.param_types,
        );
    }

    #[test]
    fn type_recovery_free_function_two_params() {
        let r = demangle("_Z3addii").expect("demangles");
        assert!(r.namespaces.is_empty());
        assert!(r.class_name.is_none());
        assert_eq!(r.param_types, vec!["int", "int"]);
    }

    #[test]
    fn type_recovery_template_comma_does_not_split_namespace() {
        let segs = split_top_level_scope("std::map<int, std::string>::find");
        assert_eq!(
            segs,
            vec!["std".to_string(), "map<int, std::string>".to_string(), "find".to_string()],
        );
    }

    #[test]
    fn detect_constructor_from_itanium_tag() {
        for mangled in ["_ZN4BaseC1Ev", "_ZN4BaseC2Ev", "_ZN4BaseC3Ev"] {
            let r = demangle(mangled).expect("ctor demangles");
            assert!(r.is_ctor, "{} should be ctor, got {:?}", mangled, r);
            assert!(!r.is_dtor, "{} should not be dtor", mangled);
            assert_eq!(r.symbol_kind, SymbolKind::Constructor);
            assert_eq!(r.class_name.as_deref(), Some("Base"));
            let final_component = r.short_name.rsplit("::").next().unwrap();
            assert_eq!(final_component, "Base");
        }
    }

    #[test]
    fn detect_destructor_from_itanium_tag() {
        for mangled in ["_ZN4BaseD0Ev", "_ZN4BaseD1Ev", "_ZN4BaseD2Ev"] {
            let r = demangle(mangled).expect("dtor demangles");
            assert!(r.is_dtor, "{} should be dtor, got {:?}", mangled, r);
            assert!(!r.is_ctor, "{} should not be ctor", mangled);
            assert_eq!(r.symbol_kind, SymbolKind::Destructor);
            let final_component = r.short_name.rsplit("::").next().unwrap();
            assert!(
                final_component.starts_with('~'),
                "final component should start with ~, got: {}",
                final_component,
            );
        }
    }

    #[test]
    fn ctor_dtor_negative_for_normal_method() {
        let r = demangle("_ZN3foo3barEv").expect("normal method");
        assert!(!r.is_ctor);
        assert!(!r.is_dtor);
    }
}
