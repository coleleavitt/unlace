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
    /// `true` when this symbol belongs to a C++ lambda closure type.
    ///
    /// A lambda closure is an anonymous class whose only normal member is
    /// the call operator.  The Itanium ABI mangles the closure-type-name
    /// as `Ul <lambda-sig> E [<digits>] _` (see Itanium ABI §5.1.6); clang
    /// historically emits the closure with the source name `$_<n>` instead
    /// (e.g. `3$_0` as a length-prefixed identifier).  Both shapes are
    /// detected here so callers can render a `// lambda` annotation
    /// without having to re-parse the mangled string.
    ///
    /// Only the `operator()` (and other artefacts of the closure type
    /// itself) are flagged.  An ordinary function that *takes* a lambda as
    /// a parameter is not.
    pub is_lambda: bool,
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
            .is_some_and(|c| !c.is_empty() && c == final_component);
    let is_dtor = symbol_kind == SymbolKind::Destructor || final_component.starts_with('~');

    let symbol_kind = match symbol_kind {
        SymbolKind::Normal if is_ctor => SymbolKind::Constructor,
        SymbolKind::Normal if is_dtor => SymbolKind::Destructor,
        other => other,
    };

    let is_lambda = detect_lambda(name, &full_signature);

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
        is_lambda,
    })
}

/// Detect whether a (mangled, demangled) pair refers to a C++ lambda
/// closure type.
///
/// Two independent signals, ORed together for robustness:
///
/// * **Itanium closure-type-name (`Ul…E_`)** — the canonical mangling per
///   Itanium ABI §5.1.6.  Implemented by [`mangled_has_itanium_lambda`].
/// * **Clang `$_<n>` source name** — older clang versions emitted the
///   closure as a normal length-prefixed source name beginning with
///   `$_<digit>` (e.g. `3$_0`).  Detected as a substring of the mangled
///   form *or* the demangled form (which surfaces it verbatim, like
///   `outer()::$_0::operator()`).
/// * **GCC `{lambda(...)#N}` demangler output** — purely a textual hint
///   from libiberty, but cheap and reliable when present.
fn detect_lambda(mangled: &str, demangled: &str) -> bool {
    if mangled_has_itanium_lambda(mangled) {
        return true;
    }
    if demangled.contains("{lambda(") {
        return true;
    }
    if demangled_has_clang_dollar_name(demangled) {
        return true;
    }
    if mangled_has_clang_dollar_name(mangled) {
        return true;
    }
    false
}

/// Scan an Itanium-mangled string for the closure-type-name production
/// `Ul <lambda-sig> E [<digits>] _`.
///
/// We don't fully parse `<lambda-sig>` (that requires a complete type
/// grammar).  Instead we look for the literal byte sequence `Ul` followed,
/// somewhere later, by an `E` then optional digits then `_` — the cheapest
/// shape that has zero practical false positives in real symbols, because
/// regular Itanium productions never start a sub-name with `Ul` (lengths
/// are decimal digits, builtin types are single-letter, and
/// `<unnamed-type-name>` uses `Ut` rather than `Ul`).
///
/// We also require that the `Ul` is preceded by either start-of-string,
/// `N` (nested-name opener), `E` (closer of a previous nested name), or
/// a digit (length-prefixed) boundary, to skip incidental `Ul` substrings
/// that happen to fall inside a mangled identifier.
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

/// Look for the `E [<digits>] _` closing of a closure-type-name starting
/// from just past the `Ul` opener.
///
/// Walks forward looking for an `E` at any depth-0 position (we treat
/// the body as opaque since we're not parsing types).  Once we see an
/// `E`, accept if it's followed by zero or more decimal digits and then
/// an underscore.  Bounded to 256 bytes to keep this O(1) on
/// pathological inputs.
fn itanium_lambda_terminator_after(rest: &[u8]) -> bool {
    let limit = rest.len().min(256);
    let mut i = 0usize;
    while i < limit {
        if rest[i] == b'E' {
            let mut j = i + 1;
            while j < rest.len() && rest[j].is_ascii_digit() {
                j += 1;
            }
            if rest.get(j) == Some(&b'_') {
                return true;
            }
        }
        i += 1;
    }
    false
}

/// Detect clang's `$_<digit>` closure source-name in a mangled string.
///
/// Clang historically emits the lambda's anonymous class as a regular
/// length-prefixed identifier whose text is `$_<n>`.  In the mangled form
/// this appears as e.g. `3$_0` — the leading length already consumed the
/// `$`.  We just look for the `$_` followed by an ASCII digit anywhere in
/// the mangled string; `$` is otherwise absent from valid Itanium output
/// (the alphabet is `[A-Za-z0-9_.]`).
fn mangled_has_clang_dollar_name(s: &str) -> bool {
    let bytes = s.as_bytes();
    let mut i = 0usize;
    while i + 2 < bytes.len() {
        if bytes[i] == b'$' && bytes[i + 1] == b'_' && bytes[i + 2].is_ascii_digit() {
            return true;
        }
        i += 1;
    }
    false
}

/// Detect clang's `$_<digit>` closure name as it appears in the demangled
/// signature (e.g. `outer()::$_0::operator()`).
///
/// We require the `$_` to be either at the start of the string, after a
/// `:` (nested-name separator), or after a space — anything else would
/// suggest the `$_` is incidental.
fn demangled_has_clang_dollar_name(s: &str) -> bool {
    let bytes = s.as_bytes();
    let mut i = 0usize;
    while i + 2 < bytes.len() {
        if bytes[i] == b'$' && bytes[i + 1] == b'_' && bytes[i + 2].is_ascii_digit() {
            let prev = if i == 0 { b'\0' } else { bytes[i - 1] };
            if matches!(prev, b'\0' | b':' | b' ' | b'(') {
                return true;
            }
        }
        i += 1;
    }
    false
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
        let class = ns.last().map(|s| strip_template_args(s).to_string());
        ns.retain(|s| !s.is_empty());
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
            b':' if depth_angle == 0
                && depth_paren == 0
                && depth_square == 0
                && i + 1 < bytes.len()
                && bytes[i + 1] == b':' =>
            {
                out.push(s[start..i].to_string());
                i += 2;
                start = i;
                continue;
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
    // Use depth-aware paren splitting so a `(` inside template arguments —
    // e.g. function-pointer template parameters like
    // `std::function<void(int)>::operator()` — isn't mistaken for the start
    // of the parameter list.
    let (before_paren, _params) = split_at_top_level_paren(full);
    let trimmed = before_paren.trim_end();
    // Then strip a leading return-type token, also depth-aware, so the
    // space before the trailing `>` in
    // `std::vector<int, std::allocator<int> >::push_back` (legacy demangler
    // form with a space between consecutive `>`) isn't treated as the
    // return-type / name boundary.
    strip_return_type(trimmed).to_string()
}

fn detect_language(name: &str) -> Option<SymbolLanguage> {
    if name.starts_with('?') {
        return Some(SymbolLanguage::Cpp);
    }

    if name.starts_with("$s")
        || name.starts_with("$S")
        || name.starts_with("_$s")
        || name.starts_with("_$S")
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
    fn dump_stl_temp() {
        for sym in [
            "_ZNSt6vectorIiSaIiEE9push_backERKi",
            "_ZNSt3__16vectorIiNS_9allocatorIiEEE9push_backERKi",
            "_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendEPKc",
            "_ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc",
            "_ZNSt3__13mapIiiNS_4lessIiEENS_9allocatorINS_4pairIKiiEEEEEixERS3_",
            "_ZNSt10shared_ptrIiE5resetEv",
            "_ZNSt3__110shared_ptrIiE5resetEv",
            "_ZNSt10unique_ptrIiSt14default_deleteIiEE5resetEPi",
        ] {
            if let Some(r) = demangle(sym) {
                eprintln!("INPUT: {}", sym);
                eprintln!("  full: {}", r.full_signature);
                eprintln!("  short: {}", r.short_name);
                eprintln!("  ns: {:?}", r.namespaces);
                eprintln!("  class: {:?}", r.class_name);
                eprintln!();
            } else {
                eprintln!("FAILED to demangle {}", sym);
            }
        }
    }

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
        assert_eq!(
            sanitize_for_c("std::io::Read::read_to_end"),
            "std_io_Read_read_to_end"
        );
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
        assert!(
            v.full_signature.contains("Base"),
            "got: {}",
            v.full_signature
        );

        let i = demangle("_ZTI4Base").expect("typeinfo demangles");
        assert_eq!(i.symbol_kind, SymbolKind::TypeInfo);
        assert!(
            i.full_signature.contains("typeinfo for Base"),
            "got: {}",
            i.full_signature
        );

        let s = demangle("_ZTS4Base").expect("typeinfo name demangles");
        assert_eq!(s.symbol_kind, SymbolKind::TypeInfoName);
        assert!(
            s.full_signature.contains("typeinfo name for Base"),
            "got: {}",
            s.full_signature
        );
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
            r.namespaces
                .last()
                .map_or(false, |s| s.starts_with("vector<")),
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

    /// Single-arg template method — short_name and full_signature must
    /// keep the `<int, ...>` template arguments verbatim instead of being
    /// truncated by a naive `rfind(' ')` that lands inside the legacy
    /// demangler's `> >` template-close.
    #[test]
    fn template_args_preserved_in_short_name_vector() {
        let r = demangle("_ZNSt6vectorIiSaIiEE9push_backERKi").expect("demangles");
        assert!(
            r.short_name.contains("vector<"),
            "short_name should retain template args, got: {:?}",
            r.short_name
        );
        assert!(
            r.short_name.contains("::push_back"),
            "short_name should include ::push_back, got: {:?}",
            r.short_name
        );
        assert!(
            !r.short_name.starts_with('>'),
            "short_name must not start with stray `>`, got: {:?}",
            r.short_name
        );
        assert!(
            r.full_signature.contains("std::vector<int"),
            "full_signature should contain std::vector<int…>, got: {:?}",
            r.full_signature
        );
    }

    /// Multi-arg template with a nested template inside an argument
    /// (`std::less<std::string>`).  Verifies that depth-aware scanning
    /// keeps every nesting level intact.
    #[test]
    fn template_args_preserved_in_short_name_map() {
        let r = demangle("_ZNSt3mapISsiSt4lessISsESaISt4pairIKSsiEEE4findERKSs")
            .expect("std::map<…>::find demangles");
        // Final-component check is the most stable assertion: the demangler
        // family-version may render the template list slightly differently
        // (`std::__1::map`, `std::map`, with/without spaces around `>>`),
        // but the trailing `::find` must always survive.
        let final_component = r.short_name.rsplit("::").next().expect("non-empty");
        assert_eq!(
            final_component, "find",
            "got short_name: {:?}",
            r.short_name
        );
        assert!(
            r.short_name.contains("map<"),
            "short_name should retain template args, got: {:?}",
            r.short_name
        );
        // The class name strips template args by design.
        assert_eq!(r.class_name.as_deref(), Some("map"));
        // Top-level template comma must NOT split the namespace.
        assert!(
            r.namespaces.last().map_or(false, |s| s.contains(',')),
            "vector ns should retain top-level commas inside <>, got: {:?}",
            r.namespaces
        );
    }

    /// Template member access on `std::pair<A, B>::first` — a *data*
    /// member, so the demangled form has no parameter list.  Verifies the
    /// no-paren branch of `extract_short_name` and that template args
    /// survive.
    #[test]
    fn template_args_preserved_in_short_name_pair_member() {
        let r = demangle("_ZNSt4pairIiiE5firstE").expect("demangles");
        assert!(
            r.short_name.contains("pair<int, int>"),
            "short_name should retain pair<int, int>, got: {:?}",
            r.short_name
        );
        let final_component = r.short_name.rsplit("::").next().expect("non-empty");
        assert_eq!(final_component, "first");
        assert_eq!(r.class_name.as_deref(), Some("pair"));
        // No params: this is a data member, not a function.
        assert!(r.param_types.is_empty());
    }

    /// Function template with a template-deduced return type.  The
    /// demangler emits `int foo<int>(int)` — the leading `int ` is the
    /// return type and must be stripped, leaving `foo<int>` as the
    /// short_name with template args intact.
    #[test]
    fn template_function_return_type_stripped() {
        let r = demangle("_Z3fooIiET_S0_").expect("demangles");
        assert_eq!(
            r.short_name, "foo<int>",
            "expected return type stripped and template args preserved",
        );
        assert!(
            r.full_signature.starts_with("int foo<int>"),
            "full_signature should still carry the return type, got: {:?}",
            r.full_signature
        );
        assert_eq!(r.param_types, vec!["int"]);
    }

    /// Variant of the above with no params (`get<T>()` returning T).
    /// Exercises the empty-parameter-list path.
    #[test]
    fn template_function_no_args_return_type_stripped() {
        let r = demangle("_Z3getIiET_v").expect("demangles");
        assert_eq!(r.short_name, "get<int>");
        assert!(r.param_types.is_empty(), "got: {:?}", r.param_types);
    }

    /// Sanitization for the C output — template args collapse into
    /// underscore-joined identifier-safe form.  This is the *intended*
    /// behaviour at the C-identifier site; the template syntax is
    /// preserved in the `// {full_signature}` comment that accompanies
    /// the declaration.
    #[test]
    fn template_short_name_sanitized_for_c_identifier() {
        let r = demangle("_ZNSt6vectorIiSaIiEE9push_backERKi").expect("demangles");
        let c_ident = sanitize_for_c(&r.short_name);
        // Must not start with `_` (would have, before the fix, because the
        // bug produced `>::push_back` and `>` sanitized to a leading `_`).
        assert!(
            !c_ident.starts_with('_'),
            "C identifier must not start with underscore (regression: bug \
             produced `_push_back`), got: {:?}",
            c_ident
        );
        assert!(
            c_ident.contains("vector"),
            "C identifier should include the class name, got: {:?}",
            c_ident
        );
        assert!(
            c_ident.contains("push_back"),
            "C identifier should include the method name, got: {:?}",
            c_ident
        );
    }

    #[test]
    fn type_recovery_template_comma_does_not_split_namespace() {
        let segs = split_top_level_scope("std::map<int, std::string>::find");
        assert_eq!(
            segs,
            vec![
                "std".to_string(),
                "map<int, std::string>".to_string(),
                "find".to_string()
            ],
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

    // -----------------------------------------------------------------------
    // Lambda closure-type detection.
    // -----------------------------------------------------------------------

    /// gcc/libstdc++ mangling: a lambda inside `call_lambda(int)` shows up
    /// as a closure-type-name `UliE_` ("lambda taking one int") nested in
    /// the local-name `Z…E…`.  The full demangled form is
    /// `call_lambda(int)::{lambda(int)#1}::operator()(int) const`.
    #[test]
    fn detect_lambda_gcc_one_param() {
        let r = demangle("_ZZ11call_lambdaiENKUliE_clEi").expect("demangles");
        assert!(r.is_lambda, "should be flagged as lambda; got: {:?}", r);
        assert!(
            r.full_signature.contains("lambda"),
            "full sig should mention lambda: {}",
            r.full_signature
        );
    }

    /// Two-parameter lambda — closure-type body is `Ulii E_`.  Verifies
    /// the terminator-scanner doesn't trip over multiple type letters.
    #[test]
    fn detect_lambda_gcc_two_params() {
        let r = demangle("_ZZ12call_lambda2iENKUliiE_clEii").expect("demangles");
        assert!(r.is_lambda, "two-arg lambda missed: {:?}", r);
    }

    /// clang mangling: closure type is emitted as a length-prefixed
    /// identifier `3$_0` (literal `$_0`).  Detection should fire from the
    /// demangled form `…::$_0::operator()` or the raw mangled `$_0`.
    #[test]
    fn detect_lambda_clang_dollar_name() {
        let r = demangle("_ZZ11call_lambdaiENK3$_0clEi").expect("demangles");
        assert!(r.is_lambda, "clang $_0 closure not detected; got: {:?}", r);
    }

    #[test]
    fn detect_lambda_clang_dollar_two_params() {
        let r = demangle("_ZZ12call_lambda2iENK3$_0clEii").expect("demangles");
        assert!(r.is_lambda, "got: {:?}", r);
    }

    /// Negative tests — none of these are lambdas and a false-positive
    /// would corrupt the C-printer annotation downstream.
    #[test]
    fn detect_lambda_negative_normal_method() {
        let r = demangle("_ZN3foo3barEv").expect("demangles");
        assert!(!r.is_lambda, "normal method flagged as lambda: {:?}", r);
    }

    #[test]
    fn detect_lambda_negative_constructor() {
        let r = demangle("_ZN4BaseC1Ev").expect("demangles");
        assert!(!r.is_lambda);

        let r = demangle("_ZN4BaseD0Ev").expect("demangles");
        assert!(!r.is_lambda);
    }

    #[test]
    fn detect_lambda_negative_template_method() {
        let r = demangle("_ZNSt6vectorIiSaIiEE9push_backERKi").expect("demangles");
        assert!(!r.is_lambda, "vector::push_back flagged: {:?}", r);
    }

    #[test]
    fn detect_lambda_negative_vtable_typeinfo() {
        assert!(!demangle("_ZTV4Base").unwrap().is_lambda);
        assert!(!demangle("_ZTI4Base").unwrap().is_lambda);
    }

    /// Direct unit test of the Itanium-mangling scanner.
    #[test]
    fn itanium_lambda_scanner_units() {
        assert!(mangled_has_itanium_lambda("_ZZ11call_lambdaiENKUliE_clEi"));
        assert!(mangled_has_itanium_lambda(
            "_ZZ12call_lambda2iENKUliiE_clEii"
        ));
        // No `Ul` at all.
        assert!(!mangled_has_itanium_lambda("_ZN3foo3barEv"));
        // `Ul` appears only inside a length-prefixed identifier — the byte
        // before `U` is an ASCII letter, not a boundary, so we skip it.
        assert!(!mangled_has_itanium_lambda("_ZN3aUlbEv"));
    }

    /// Direct unit test of the clang `$_<n>` scanner — both code paths.
    #[test]
    fn clang_dollar_scanner_units() {
        assert!(mangled_has_clang_dollar_name(
            "_ZZ11call_lambdaiENK3$_0clEi"
        ));
        assert!(demangled_has_clang_dollar_name(
            "call_lambda(int)::$_0::operator()(int) const"
        ));
        // No dollar-sign anywhere.
        assert!(!mangled_has_clang_dollar_name("_ZN3foo3barEv"));
        assert!(!demangled_has_clang_dollar_name("foo::bar()"));
        // `$_` not followed by digit must not match.
        assert!(!demangled_has_clang_dollar_name("foo::$_a"));
    }
}
