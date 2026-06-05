//! Recognise libcxx / libstdc++ STL container types from demangled C++ symbols.
//!
//! When a member function's demangled symbol is e.g.
//! `std::vector<int, std::allocator<int>>::push_back`, the implicit `this`
//! parameter has type `std::vector<int>*`.  Rather than try to recover that
//! from the binary's struct layout (libcxx's `__split_buffer<T, A>` /
//! `__compressed_pair<…>` are unreliable to detect heuristically across
//! versions and ABIs), we read the type back off the demangled name itself.
//!
//! This module is intentionally string-oriented: callers pass the
//! demangled `class_name` (already with template args stripped) plus the
//! template-bearing last namespace segment, and get back a clean STL
//! type spelling like `std::vector<int>` or `std::string`.  The
//! signal-to-noise of pattern-matching libcxx struct layouts in the wild
//! is too low to justify; the demangled name is authoritative.
//!
//! Recognised classes:
//!
//! * `std::vector<T>`            — drops the trailing `std::allocator<…>`
//! * `std::string`               — `basic_string<char, …>` collapses to `std::string`
//! * `std::wstring`              — `basic_string<wchar_t, …>`
//! * `std::map<K, V>`            — drops trailing `std::less<…>`/allocator
//! * `std::set<T>`
//! * `std::unordered_map<K, V>`  — drops trailing hasher/equal/allocator
//! * `std::unordered_set<T>`
//! * `std::shared_ptr<T>`
//! * `std::unique_ptr<T>`        — drops trailing `std::default_delete<…>`
//! * `std::function<R(Args...)>` — preserves callable signature
//! * `std::list<T>` / `std::deque<T>`
//!
//! Inline namespaces (`std::__1`, `std::__cxx11`) are folded back to plain
//! `std::` so the rendered name is portable across libcxx and libstdc++.

/// Recognise an STL container type from a demangled symbol's class info.
///
/// Inputs:
///
/// * `namespaces` — top-level `::` segments excluding the final identifier,
///   e.g. `["std", "__1", "vector<int, std::__1::allocator<int>>"]`.
/// * `class_name` — the bare class name from the last segment with template
///   args stripped, e.g. `"vector"`.
///
/// Returns the canonical STL spelling (e.g. `"std::vector<int>"`) when the
/// pattern matches, or `None` otherwise.
pub fn recognize_stl_type(namespaces: &[String], class_name: &str) -> Option<String> {
    // STL types live under `std::` (possibly with an inline namespace
    // immediately after).  Reject anything that doesn't start with `std`.
    if namespaces.first().is_none_or(|s| s != "std") {
        return None;
    }

    // The template-bearing segment is the last namespace element (it carries
    // the `<…>` arg list); the bare class name is what we match on.
    let last = namespaces.last()?;
    let template_args = extract_template_args(last)?;

    match class_name {
        "vector" => {
            let elem = first_template_arg(&template_args)?;
            Some(format!("std::vector<{}>", clean_inline_ns(elem.trim())))
        }
        "list" => {
            let elem = first_template_arg(&template_args)?;
            Some(format!("std::list<{}>", clean_inline_ns(elem.trim())))
        }
        "deque" => {
            let elem = first_template_arg(&template_args)?;
            Some(format!("std::deque<{}>", clean_inline_ns(elem.trim())))
        }
        "basic_string" => {
            // basic_string<CharT, Traits, Allocator> — collapse common
            // CharT specializations to plain typedefs.
            let char_t = first_template_arg(&template_args)?;
            match clean_inline_ns(char_t.trim()).as_str() {
                "char" => Some("std::string".into()),
                "wchar_t" => Some("std::wstring".into()),
                "char16_t" => Some("std::u16string".into()),
                "char32_t" => Some("std::u32string".into()),
                other => Some(format!("std::basic_string<{}>", other)),
            }
        }
        "map" => {
            let args = top_level_args(&template_args);
            if args.len() < 2 {
                return None;
            }
            Some(format!(
                "std::map<{}, {}>",
                clean_inline_ns(args[0].trim()),
                clean_inline_ns(args[1].trim()),
            ))
        }
        "unordered_map" => {
            let args = top_level_args(&template_args);
            if args.len() < 2 {
                return None;
            }
            Some(format!(
                "std::unordered_map<{}, {}>",
                clean_inline_ns(args[0].trim()),
                clean_inline_ns(args[1].trim()),
            ))
        }
        "set" => {
            let elem = first_template_arg(&template_args)?;
            Some(format!("std::set<{}>", clean_inline_ns(elem.trim())))
        }
        "unordered_set" => {
            let elem = first_template_arg(&template_args)?;
            Some(format!(
                "std::unordered_set<{}>",
                clean_inline_ns(elem.trim())
            ))
        }
        "shared_ptr" => {
            let elem = first_template_arg(&template_args)?;
            Some(format!("std::shared_ptr<{}>", clean_inline_ns(elem.trim())))
        }
        "unique_ptr" => {
            let elem = first_template_arg(&template_args)?;
            Some(format!("std::unique_ptr<{}>", clean_inline_ns(elem.trim())))
        }
        "function" => {
            let sig = first_template_arg(&template_args)?;
            Some(format!("std::function<{}>", clean_inline_ns(sig.trim())))
        }
        _ => None,
    }
}

/// Extract the substring inside the *first* top-level `<…>` of `s`.
///
/// `vector<int, std::allocator<int> >` → `int, std::allocator<int> `
/// (returns `None` when no top-level template args are present).
fn extract_template_args(s: &str) -> Option<String> {
    let bytes = s.as_bytes();
    let open = s.find('<')?;
    let mut depth: i32 = 0;
    for (i, &b) in bytes.iter().enumerate().skip(open) {
        match b {
            b'<' => depth += 1,
            b'>' => {
                depth -= 1;
                if depth == 0 {
                    return Some(s[open + 1..i].to_string());
                }
            }
            _ => {}
        }
    }
    None
}

/// Split a comma-separated template argument list at top level only.
fn top_level_args(s: &str) -> Vec<String> {
    let bytes = s.as_bytes();
    let mut out = Vec::new();
    let mut depth_angle: i32 = 0;
    let mut depth_paren: i32 = 0;
    let mut start = 0usize;
    for (i, &b) in bytes.iter().enumerate() {
        match b {
            b'<' => depth_angle += 1,
            b'>' if depth_angle > 0 => depth_angle -= 1,
            b'(' => depth_paren += 1,
            b')' if depth_paren > 0 => depth_paren -= 1,
            b',' if depth_angle == 0 && depth_paren == 0 => {
                out.push(s[start..i].trim().to_string());
                start = i + 1;
            }
            _ => {}
        }
    }
    let last = s[start..].trim();
    if !last.is_empty() {
        out.push(last.to_string());
    }
    out
}

fn first_template_arg(args: &str) -> Option<String> {
    top_level_args(args).into_iter().next()
}

/// Strip libcxx / libstdc++ inline namespaces from a type name so the
/// rendered output is implementation-agnostic.
///
/// `std::__1::vector<int>` → `std::vector<int>`
/// `std::__cxx11::basic_string<char>` → `std::basic_string<char>`
fn clean_inline_ns(s: &str) -> String {
    let mut out = s.to_string();
    for marker in ["std::__1::", "std::__cxx11::", "std::__2::"] {
        out = out.replace(marker, "std::");
    }
    out
}

#[cfg(test)]
mod tests {
    use super::*;

    fn ns(parts: &[&str]) -> Vec<String> {
        parts.iter().map(|s| (*s).to_string()).collect()
    }

    #[test]
    fn recognises_vector_int_libstdcxx() {
        // _ZNSt6vectorIiSaIiEE9push_backERKi
        let n = ns(&["std", "vector<int, std::allocator<int> >"]);
        assert_eq!(
            recognize_stl_type(&n, "vector").as_deref(),
            Some("std::vector<int>"),
        );
    }

    #[test]
    fn recognises_vector_int_libcxx() {
        // _ZNSt3__16vectorIiNS_9allocatorIiEEE9push_backERKi
        let n = ns(&["std", "__1", "vector<int, std::__1::allocator<int> >"]);
        assert_eq!(
            recognize_stl_type(&n, "vector").as_deref(),
            Some("std::vector<int>"),
        );
    }

    #[test]
    fn recognises_string_libstdcxx() {
        // _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendEPKc
        let n = ns(&[
            "std",
            "__cxx11",
            "basic_string<char, std::char_traits<char>, std::allocator<char> >",
        ]);
        assert_eq!(
            recognize_stl_type(&n, "basic_string").as_deref(),
            Some("std::string"),
        );
    }

    #[test]
    fn recognises_string_libcxx() {
        let n = ns(&[
            "std",
            "__1",
            "basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >",
        ]);
        assert_eq!(
            recognize_stl_type(&n, "basic_string").as_deref(),
            Some("std::string"),
        );
    }

    #[test]
    fn recognises_wstring() {
        let n = ns(&[
            "std",
            "basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >",
        ]);
        assert_eq!(
            recognize_stl_type(&n, "basic_string").as_deref(),
            Some("std::wstring"),
        );
    }

    #[test]
    fn recognises_map_int_int() {
        // map<int, int, less<int>, allocator<pair<const int, int>>>
        let n = ns(&[
            "std",
            "__1",
            "map<int, int, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, int> > >",
        ]);
        assert_eq!(
            recognize_stl_type(&n, "map").as_deref(),
            Some("std::map<int, int>"),
        );
    }

    #[test]
    fn recognises_shared_ptr() {
        let n = ns(&["std", "shared_ptr<int>"]);
        assert_eq!(
            recognize_stl_type(&n, "shared_ptr").as_deref(),
            Some("std::shared_ptr<int>"),
        );
    }

    #[test]
    fn recognises_unique_ptr() {
        // _ZNSt10unique_ptrIiSt14default_deleteIiEE5resetEPi
        let n = ns(&["std", "unique_ptr<int, std::default_delete<int> >"]);
        assert_eq!(
            recognize_stl_type(&n, "unique_ptr").as_deref(),
            Some("std::unique_ptr<int>"),
        );
    }

    #[test]
    fn recognises_function_signature() {
        let n = ns(&["std", "function<void (int)>"]);
        assert_eq!(
            recognize_stl_type(&n, "function").as_deref(),
            Some("std::function<void (int)>"),
        );
    }

    #[test]
    fn recognises_function_signature_with_inline_namespace_types() {
        let n = ns(&[
            "std",
            "__1",
            "function<bool (std::__1::basic_string<char>)>",
        ]);
        assert_eq!(
            recognize_stl_type(&n, "function").as_deref(),
            Some("std::function<bool (std::basic_string<char>)>"),
        );
    }

    #[test]
    fn recognises_set_and_unordered() {
        let n = ns(&["std", "set<int, std::less<int>, std::allocator<int> >"]);
        assert_eq!(
            recognize_stl_type(&n, "set").as_deref(),
            Some("std::set<int>"),
        );

        let n = ns(&[
            "std",
            "unordered_map<int, double, std::hash<int>, std::equal_to<int>, std::allocator<std::pair<int const, double> > >",
        ]);
        assert_eq!(
            recognize_stl_type(&n, "unordered_map").as_deref(),
            Some("std::unordered_map<int, double>"),
        );
    }

    #[test]
    fn recognises_list_deque() {
        let n = ns(&["std", "list<int, std::allocator<int> >"]);
        assert_eq!(
            recognize_stl_type(&n, "list").as_deref(),
            Some("std::list<int>"),
        );
        let n = ns(&["std", "deque<int, std::allocator<int> >"]);
        assert_eq!(
            recognize_stl_type(&n, "deque").as_deref(),
            Some("std::deque<int>"),
        );
    }

    #[test]
    fn rejects_non_std_namespace() {
        let n = ns(&["mylib", "vector<int>"]);
        assert_eq!(recognize_stl_type(&n, "vector"), None);
    }

    #[test]
    fn rejects_unrecognised_class() {
        let n = ns(&["std", "weird_thing<int>"]);
        assert_eq!(recognize_stl_type(&n, "weird_thing"), None);
    }

    #[test]
    fn rejects_when_template_args_missing() {
        // Class is `vector` but the segment carries no `<…>`.
        let n = ns(&["std", "vector"]);
        assert_eq!(recognize_stl_type(&n, "vector"), None);
    }

    #[test]
    fn extract_template_args_handles_nested() {
        let s = "vector<std::pair<int, int>, std::allocator<std::pair<int, int>> >";
        assert_eq!(
            extract_template_args(s).as_deref(),
            Some("std::pair<int, int>, std::allocator<std::pair<int, int>> "),
        );
    }

    #[test]
    fn top_level_args_does_not_split_inside_brackets() {
        let s = "int, std::pair<int, int>, double";
        assert_eq!(
            top_level_args(s),
            vec!["int", "std::pair<int, int>", "double"]
        );
    }

    #[test]
    fn clean_inline_ns_strips_libcxx_markers() {
        assert_eq!(
            clean_inline_ns("std::__1::vector<std::__1::pair<int, int> >"),
            "std::vector<std::pair<int, int> >",
        );
        assert_eq!(
            clean_inline_ns("std::__cxx11::basic_string<char>"),
            "std::basic_string<char>",
        );
    }
}
