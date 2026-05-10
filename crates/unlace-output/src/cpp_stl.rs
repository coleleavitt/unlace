//! Recognition of C++ Standard Library container types from demangled
//! symbol names.
//!
//! The Itanium C++ ABI mangles every member function with the fully
//! qualified class name (template arguments included), so a demangled
//! signature like `std::vector<int, std::allocator<int> >::push_back`
//! exposes both the container kind (`vector`) and its element type
//! (`int`).  This module pattern-matches on the `class_name` and last
//! namespace segment produced by [`crate::demangle`] to recover a
//! conservative, user-facing label such as `std::vector<int>`.
//!
//! # Why bother
//!
//! Without this layer the decompiler would emit `Foo *this` based on
//! RTTI, but for STL types there is no RTTI entry — the compiler
//! generates the vtable inline at every translation unit and
//! `__cxxabiv1::__class_type_info` is only emitted for user classes.
//! So an unannotated `_ZNSt6vectorIiSaIiEE9push_backERKi` would emit
//! `int64 *this` instead of the much more useful
//! `std::vector<int> *this`.
//!
//! # Layout pattern matching
//!
//! The libcxx layouts referenced in the design notes are:
//!
//! | Type                | Layout (64-bit)                                   | Size  |
//! | ------------------- | ------------------------------------------------- | ----- |
//! | `std::vector<T>`    | `{T* __begin, T* __end, T* __end_cap}`            | 24    |
//! | `std::string`       | `{char* __data, size_t __size, size_t __cap}`     | 24    |
//! | `std::shared_ptr<T>`| `{T* __ptr, ControlBlock* __cntrl}`               | 16    |
//! | `std::unique_ptr<T>`| `{T* __ptr}`                                      |  8    |
//!
//! The structural matcher in this module is a *post-hoc verification*
//! step — we only fire a layout match once the demangled name has
//! already pinned the container kind (otherwise three pointers in a row
//! could equally well be a custom triple). See
//! [`looks_like_vector_layout`] / [`looks_like_string_layout`] /
//! [`looks_like_shared_ptr_layout`].

use crate::demangle::DemangleResult;

/// A recognised C++ Standard Library container type.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum StlType {
    /// `std::vector<T>` — three pointers (begin, end, end_cap).
    Vector { elem: String },
    /// `std::basic_string<char,…>` (i.e. `std::string`) — pointer + size + cap.
    String,
    /// `std::basic_string<char16_t/char32_t/wchar_t,…>` — printed as the
    /// concrete name (`std::u16string`, `std::u32string`, `std::wstring`).
    BasicString { char_type: String },
    /// `std::map<K, V>` — node-based ordered map.
    Map { key: String, value: String },
    /// `std::set<K>` — node-based ordered set.
    Set { elem: String },
    /// `std::unordered_map<K, V>` — hash-bucketed map.
    UnorderedMap { key: String, value: String },
    /// `std::unordered_set<K>` — hash-bucketed set.
    UnorderedSet { elem: String },
    /// `std::list<T>` — doubly linked list.
    List { elem: String },
    /// `std::deque<T>` — double-ended queue.
    Deque { elem: String },
    /// `std::array<T, N>` — stack-allocated array.
    Array { elem: String, size: String },
    /// `std::shared_ptr<T>` — refcounted pointer.
    SharedPtr { pointee: String },
    /// `std::weak_ptr<T>` — non-owning weak reference.
    WeakPtr { pointee: String },
    /// `std::unique_ptr<T>` — owning single-owner pointer.
    UniquePtr { pointee: String },
}

impl StlType {
    /// Render the type the way it should appear in C-like output, e.g.
    /// `std::vector<int>` or `std::shared_ptr<Foo>`.
    pub fn display(&self) -> String {
        match self {
            StlType::Vector { elem } => format!("std::vector<{}>", elem),
            StlType::String => "std::string".to_string(),
            StlType::BasicString { char_type } => match char_type.as_str() {
                "char" => "std::string".to_string(),
                "wchar_t" => "std::wstring".to_string(),
                "char16_t" => "std::u16string".to_string(),
                "char32_t" => "std::u32string".to_string(),
                other => format!("std::basic_string<{}>", other),
            },
            StlType::Map { key, value } => format!("std::map<{}, {}>", key, value),
            StlType::Set { elem } => format!("std::set<{}>", elem),
            StlType::UnorderedMap { key, value } => {
                format!("std::unordered_map<{}, {}>", key, value)
            }
            StlType::UnorderedSet { elem } => format!("std::unordered_set<{}>", elem),
            StlType::List { elem } => format!("std::list<{}>", elem),
            StlType::Deque { elem } => format!("std::deque<{}>", elem),
            StlType::Array { elem, size } => format!("std::array<{}, {}>", elem, size),
            StlType::SharedPtr { pointee } => format!("std::shared_ptr<{}>", pointee),
            StlType::WeakPtr { pointee } => format!("std::weak_ptr<{}>", pointee),
            StlType::UniquePtr { pointee } => format!("std::unique_ptr<{}>", pointee),
        }
    }

    /// Number of bytes a value of this type occupies on a 64-bit target,
    /// when statically known (matching the libcxx layouts documented at
    /// the module level).
    pub fn size_bytes(&self) -> Option<u64> {
        match self {
            // Three pointers each (begin/end/cap or data/size/cap).
            StlType::Vector { .. } | StlType::String | StlType::BasicString { .. } => Some(24),
            // Two pointers (ptr + control block, or sentinel + size, etc.)
            StlType::SharedPtr { .. } => Some(16),
            // Single pointer.
            StlType::UniquePtr { .. } => Some(8),
            // weak_ptr is the same as shared_ptr (ptr + control block).
            StlType::WeakPtr { .. } => Some(16),
            // Node-based containers — sentinel + size.
            StlType::Map { .. }
            | StlType::Set { .. }
            | StlType::UnorderedMap { .. }
            | StlType::UnorderedSet { .. }
            | StlType::List { .. }
            | StlType::Deque { .. } => None,
            // std::array<T, N> is sizeof(T) * N — element type unknown.
            StlType::Array { .. } => None,
        }
    }
}

/// Attempt to recognise a Standard Library container type from a
/// demangled symbol name.
///
/// Returns `Some(StlType)` only when:
///
/// 1. The first namespace segment is `std` (or `__1`/`__cxx11` after
///    `std`, the libcxx and libstdc++ inline namespaces);
/// 2. The class name is one of the recognised STL container kinds;
/// 3. Template arguments can be extracted from the last namespace
///    segment.
///
/// Returns `None` otherwise — keep the existing fallback (RTTI lookup,
/// unknown type) intact.
pub fn recognize_stl(dr: &DemangleResult) -> Option<StlType> {
    let class_name = dr.class_name.as_deref()?;

    // The qualifying namespace path must lead with `std`.
    if dr.namespaces.first().map(String::as_str) != Some("std") {
        return None;
    }

    // The last segment carries the templated type, e.g.
    // `vector<int, std::allocator<int> >`.  We always have at least
    // two segments here because `class_name` was non-None.
    let templated = dr.namespaces.last()?;
    let args = extract_template_args(templated)?;

    match class_name {
        "vector" => {
            let elem = args.first()?.clone();
            Some(StlType::Vector { elem })
        }
        "basic_string" => {
            // std::basic_string<CharT, Traits, Alloc> — first arg is the
            // char type.  `char` collapses to `std::string`.
            let char_type = args.first()?.clone();
            if char_type == "char" {
                Some(StlType::String)
            } else {
                Some(StlType::BasicString { char_type })
            }
        }
        "map" => {
            let key = args.first()?.clone();
            let value = args.get(1)?.clone();
            Some(StlType::Map { key, value })
        }
        "set" => {
            let elem = args.first()?.clone();
            Some(StlType::Set { elem })
        }
        "unordered_map" => {
            let key = args.first()?.clone();
            let value = args.get(1)?.clone();
            Some(StlType::UnorderedMap { key, value })
        }
        "unordered_set" => {
            let elem = args.first()?.clone();
            Some(StlType::UnorderedSet { elem })
        }
        "list" => {
            let elem = args.first()?.clone();
            Some(StlType::List { elem })
        }
        "deque" => {
            let elem = args.first()?.clone();
            Some(StlType::Deque { elem })
        }
        "array" => {
            let elem = args.first()?.clone();
            let size = args.get(1)?.clone();
            Some(StlType::Array { elem, size })
        }
        "shared_ptr" => {
            let pointee = args.first()?.clone();
            Some(StlType::SharedPtr { pointee })
        }
        "weak_ptr" => {
            let pointee = args.first()?.clone();
            Some(StlType::WeakPtr { pointee })
        }
        "unique_ptr" => {
            let pointee = args.first()?.clone();
            Some(StlType::UniquePtr { pointee })
        }
        _ => None,
    }
}

/// Extract top-level template arguments from a string like
/// `vector<int, std::allocator<int> >`.
///
/// Returns `Some(args)` with each argument trimmed and any nested
/// template arguments preserved verbatim.  Returns `None` if no `<` is
/// present or the brackets are unbalanced.
fn extract_template_args(s: &str) -> Option<Vec<String>> {
    let open = s.find('<')?;
    // Find the matching `>` by depth.
    let bytes = s.as_bytes();
    let mut depth = 0i32;
    let mut close = None;
    for (i, &b) in bytes.iter().enumerate().skip(open) {
        match b {
            b'<' => depth += 1,
            b'>' => {
                depth -= 1;
                if depth == 0 {
                    close = Some(i);
                    break;
                }
            }
            _ => {}
        }
    }
    let close = close?;
    let inside = &s[open + 1..close];
    let args = split_top_level_commas(inside);
    Some(args)
}

/// Split `s` on top-level commas, respecting `<>` template depth.
fn split_top_level_commas(s: &str) -> Vec<String> {
    let bytes = s.as_bytes();
    let mut depth = 0i32;
    let mut start = 0usize;
    let mut out = Vec::new();
    for (i, &b) in bytes.iter().enumerate() {
        match b {
            b'<' => depth += 1,
            b'>' if depth > 0 => depth -= 1,
            b',' if depth == 0 => {
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

// ---------------------------------------------------------------------------
// Structural layout pattern matchers
//
// These check that a struct field layout — usually inferred by
// [`unlace_passes::struct_field_detect::StructFieldDetectPass`] — matches
// one of the canonical libcxx layouts.  They are intentionally
// conservative: they accept exactly the field offsets/sizes documented at
// the module level and reject anything else.
//
// The layout matchers are independent of the demangle-based classifier;
// they exist so callers (e.g. the C printer) can corroborate the
// demangled name with the inferred struct shape before promoting the type
// label.  None of the higher-level emission paths require the structural
// match — they only need it as an extra confidence signal.
// ---------------------------------------------------------------------------

/// Check whether the given field layout (offset → size in bytes) matches
/// `std::vector<T>` on a 64-bit target: three 8-byte fields at offsets
/// 0, 8, 16.
pub fn looks_like_vector_layout(fields: &[(u64, u8)]) -> bool {
    fields == [(0, 8), (8, 8), (16, 8)]
}

/// Check whether the given field layout matches the libcxx
/// "long-string" layout for `std::string`: pointer + size + capacity, all
/// at 8-byte slots.  (The SSO short-string layout is identical at the
/// byte level — both overlay 24 bytes — so a structural match alone
/// cannot tell them apart from `std::vector<char>`; the demangled name
/// is what disambiguates.)
pub fn looks_like_string_layout(fields: &[(u64, u8)]) -> bool {
    fields == [(0, 8), (8, 8), (16, 8)]
}

/// Check whether the given field layout matches `std::shared_ptr<T>`:
/// two 8-byte pointers at offsets 0 and 8 (object pointer + control
/// block).
pub fn looks_like_shared_ptr_layout(fields: &[(u64, u8)]) -> bool {
    fields == [(0, 8), (8, 8)]
}

/// Check whether the given field layout matches `std::unique_ptr<T>`:
/// a single 8-byte pointer at offset 0.  (When the deleter is empty —
/// the default — `unique_ptr` is exactly `sizeof(T*)`.)
pub fn looks_like_unique_ptr_layout(fields: &[(u64, u8)]) -> bool {
    fields == [(0, 8)]
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::demangle::demangle;

    fn d(name: &str) -> DemangleResult {
        demangle(name).expect("symbol should demangle")
    }

    // ── recognize_stl: positive cases ─────────────────────────────────

    #[test]
    fn recognise_vector_int() {
        let ty = recognize_stl(&d("_ZNSt6vectorIiSaIiEE9push_backERKi"))
            .expect("vector<int>::push_back");
        assert_eq!(ty.display(), "std::vector<int>");
    }

    #[test]
    fn recognise_libcxx_vector_int() {
        // libcxx (LLVM) wraps everything in `std::__1::`.
        let ty = recognize_stl(&d("_ZNSt3__16vectorIiNS_9allocatorIiEEE9push_backERKi"))
            .expect("std::__1::vector<int>::push_back");
        assert_eq!(ty.display(), "std::vector<int>");
    }

    #[test]
    fn recognise_basic_string_char_is_std_string() {
        let ty = recognize_stl(&d(
            "_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendEPKc",
        ))
        .expect("std::string::append");
        assert_eq!(ty.display(), "std::string");
        assert!(matches!(ty, StlType::String));
    }

    #[test]
    fn recognise_libcxx_string() {
        let ty = recognize_stl(&d(
            "_ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc",
        ))
        .expect("libcxx std::string::append");
        assert_eq!(ty.display(), "std::string");
    }

    #[test]
    fn recognise_map_int_int() {
        let ty = recognize_stl(&d(
            "_ZNSt3__13mapIiiNS_4lessIiEENS_9allocatorINS_4pairIKiiEEEEEixERS3_",
        ))
        .expect("map<int,int>");
        assert!(matches!(ty, StlType::Map { .. }));
        assert!(ty.display().starts_with("std::map<int, int"));
    }

    #[test]
    fn recognise_shared_ptr_int() {
        let ty = recognize_stl(&d("_ZNSt10shared_ptrIiE5resetEv"))
            .expect("shared_ptr<int>::reset");
        assert_eq!(ty.display(), "std::shared_ptr<int>");
        assert_eq!(ty.size_bytes(), Some(16));
    }

    #[test]
    fn recognise_libcxx_shared_ptr() {
        let ty = recognize_stl(&d("_ZNSt3__110shared_ptrIiE5resetEv"))
            .expect("libcxx shared_ptr<int>::reset");
        assert_eq!(ty.display(), "std::shared_ptr<int>");
    }

    #[test]
    fn recognise_unique_ptr_int() {
        let ty = recognize_stl(&d("_ZNSt10unique_ptrIiSt14default_deleteIiEE5resetEPi"))
            .expect("unique_ptr<int>::reset");
        assert_eq!(ty.display(), "std::unique_ptr<int>");
        assert_eq!(ty.size_bytes(), Some(8));
    }

    // ── recognize_stl: negative cases ─────────────────────────────────

    #[test]
    fn rejects_user_class() {
        // `Foo::bar()` is not in `std::`.
        let ty = recognize_stl(&d("_ZN3foo3barEv"));
        assert!(ty.is_none());
    }

    #[test]
    fn rejects_non_member_function() {
        // `_Z3addii` → `add(int, int)` — no class.
        let ty = recognize_stl(&d("_Z3addii"));
        assert!(ty.is_none());
    }

    // ── size_bytes ────────────────────────────────────────────────────

    #[test]
    fn vector_size_is_24() {
        let ty = StlType::Vector {
            elem: "int".to_string(),
        };
        assert_eq!(ty.size_bytes(), Some(24));
    }

    #[test]
    fn string_size_is_24() {
        assert_eq!(StlType::String.size_bytes(), Some(24));
    }

    #[test]
    fn shared_ptr_size_is_16() {
        let ty = StlType::SharedPtr {
            pointee: "Foo".to_string(),
        };
        assert_eq!(ty.size_bytes(), Some(16));
    }

    #[test]
    fn unique_ptr_size_is_8() {
        let ty = StlType::UniquePtr {
            pointee: "Foo".to_string(),
        };
        assert_eq!(ty.size_bytes(), Some(8));
    }

    // ── extract_template_args ─────────────────────────────────────────

    #[test]
    fn extract_simple() {
        assert_eq!(
            extract_template_args("vector<int>"),
            Some(vec!["int".to_string()])
        );
    }

    #[test]
    fn extract_two_args() {
        assert_eq!(
            extract_template_args("map<int, std::string>"),
            Some(vec!["int".to_string(), "std::string".to_string()])
        );
    }

    #[test]
    fn extract_nested() {
        // Nested template arguments stay intact when they live inside a
        // top-level argument.
        assert_eq!(
            extract_template_args("vector<std::pair<int, int> >"),
            Some(vec!["std::pair<int, int>".to_string()])
        );
    }

    #[test]
    fn extract_no_template() {
        assert_eq!(extract_template_args("vector"), None);
    }

    #[test]
    fn extract_unbalanced() {
        // Unbalanced `<` returns None rather than panicking.
        assert_eq!(extract_template_args("vector<int"), None);
    }

    // ── layout matchers ───────────────────────────────────────────────

    #[test]
    fn vector_layout_matches() {
        assert!(looks_like_vector_layout(&[(0, 8), (8, 8), (16, 8)]));
    }

    #[test]
    fn vector_layout_rejects_extra_field() {
        assert!(!looks_like_vector_layout(&[
            (0, 8),
            (8, 8),
            (16, 8),
            (24, 8)
        ]));
    }

    #[test]
    fn vector_layout_rejects_wrong_size() {
        // A 4-byte field at offset 16 is not a pointer.
        assert!(!looks_like_vector_layout(&[(0, 8), (8, 8), (16, 4)]));
    }

    #[test]
    fn shared_ptr_layout_matches() {
        assert!(looks_like_shared_ptr_layout(&[(0, 8), (8, 8)]));
    }

    #[test]
    fn shared_ptr_layout_rejects_three_fields() {
        assert!(!looks_like_shared_ptr_layout(&[(0, 8), (8, 8), (16, 8)]));
    }

    #[test]
    fn unique_ptr_layout_matches() {
        assert!(looks_like_unique_ptr_layout(&[(0, 8)]));
    }

    #[test]
    fn unique_ptr_layout_rejects_two_fields() {
        assert!(!looks_like_unique_ptr_layout(&[(0, 8), (8, 8)]));
    }

    #[test]
    fn string_layout_matches() {
        // libcxx long-string layout — same shape as vector at the byte
        // level, which is what we expect (the demangled name
        // disambiguates).
        assert!(looks_like_string_layout(&[(0, 8), (8, 8), (16, 8)]));
    }
}
