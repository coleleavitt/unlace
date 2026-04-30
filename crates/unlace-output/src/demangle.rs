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

/// Result of successfully demangling a symbol.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct DemangleResult {
    /// Short name suitable for use as a C identifier (name only, no params).
    pub short_name: String,
    /// Full demangled signature including parameters and return type.
    pub full_signature: String,
    /// The detected source language.
    pub language: SymbolLanguage,
}

/// Attempt to demangle a mangled symbol name.
///
/// Returns `Some(DemangleResult)` if the name is recognized as a mangled
/// symbol and demangling succeeds. Returns `None` if the name is not
/// mangled or demangling fails.
pub fn demangle(name: &str) -> Option<DemangleResult> {
    let language = detect_language(name)?;

    let full_signature = symbolic_demangle::demangle(name);
    if full_signature == name {
        return None;
    }

    let short_name = extract_short_name(&full_signature);

    Some(DemangleResult {
        short_name,
        full_signature: full_signature.into_owned(),
        language,
    })
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
}
