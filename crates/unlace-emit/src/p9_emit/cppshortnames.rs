//! (unlace `cppshortnames`) Print the short spelling of standard C++ names.
//!
//! A demangler and DWARF spell a standard library type in full:
//! `std::__cxx11::basic_string<char, std::char_traits<char>,
//! std::allocator<char> >` is what a C++ programmer writes `std::string`. With
//! the option on, the printer shortens such a name where it prints it, and the
//! type, its Symbol and every directive keep the full name:
//!
//! - an inline namespace right after `std` (`__cxx11`, `__1`, `__2`,
//!   `__ndk1`) is dropped, in a type name and in the namespaces printed in front
//!   of a function name;
//! - a character template whose other arguments are its defaults prints as its
//!   standard alias: `basic_string<char>` is `std::string`, `basic_ostream<wchar_t>`
//!   `std::wostream`, `basic_string_view<char16_t>` `std::u16string_view`;
//! - a trailing default argument of a standard container goes:
//!   `std::vector<int, std::allocator<int> >` is `std::vector<int>`, and
//!   `std::map<K, V, std::less<K>, std::allocator<std::pair<K const, V> > >` is
//!   `std::map<K, V>`.
//!
//! An argument is a default only when it names the container's own element (or,
//! for a map, its own key and value pair); a name nested deeper than 32
//! template levels, longer than 4 KiB, or with unbalanced brackets prints as it
//! is.

use std::borrow::Cow;

/// How deep [`simplify`] follows nested template arguments.
const MAX_DEPTH: usize = 32;

/// The longest name [`short_type`] rewrites.
const MAX_LEN: usize = 4096;

/// Inline namespaces the standard libraries put directly inside `std`.
const INLINE_NAMESPACES: &[&str] = &["__1", "__2", "__cxx11", "__ndk1"];

/// Character types and the prefix their aliases take (`wstring`, `u16string`).
const CHAR_PREFIXES: &[(&str, &str)] = &[
    ("char", ""),
    ("wchar_t", "w"),
    ("char8_t", "u8"),
    ("char16_t", "u16"),
    ("char32_t", "u32"),
];

/// Templates over a character type whose `char` and `wchar_t` forms have
/// aliases, `basic_<alias>`.
const STREAM_TEMPLATES: &[&str] = &[
    "basic_filebuf",
    "basic_fstream",
    "basic_ifstream",
    "basic_ios",
    "basic_iostream",
    "basic_istream",
    "basic_istringstream",
    "basic_ofstream",
    "basic_ostream",
    "basic_ostringstream",
    "basic_streambuf",
    "basic_stringbuf",
    "basic_stringstream",
];

/// Templates over a character type with an alias for every character type.
const STRING_TEMPLATES: &[&str] = &["basic_string", "basic_string_view"];

/// Standard templates whose trailing arguments have defaults.
const CONTAINERS: &[&str] = &[
    "deque",
    "forward_list",
    "list",
    "map",
    "multimap",
    "multiset",
    "set",
    "unique_ptr",
    "unordered_map",
    "unordered_multimap",
    "unordered_multiset",
    "unordered_set",
    "vector",
];

/// Templates a defaulted trailing argument is an instance of.
const DEFAULT_ARGS: &[&str] = &[
    "std::allocator",
    "std::char_traits",
    "std::default_delete",
    "std::equal_to",
    "std::hash",
    "std::less",
];

/// The short spelling of a type name, or the name itself when nothing in it
/// shortens.
pub fn short_type(name: &str) -> Cow<'_, str> {
    if !name.contains("std") || name.len() > MAX_LEN {
        return Cow::Borrowed(name);
    }
    match simplify(name, 0) {
        Some(short) if short != name => Cow::Owned(short),
        _ => Cow::Borrowed(name),
    }
}

/// The namespaces printed in front of a name, outermost first, without an
/// inline namespace right after `std`.
pub fn short_scopes(scopes: Vec<String>) -> Vec<String> {
    let mut out: Vec<String> = Vec::with_capacity(scopes.len());
    for scope in scopes {
        if out.last().is_some_and(|outer| outer == "std")
            && INLINE_NAMESPACES.contains(&scope.as_str())
        {
            continue;
        }
        out.push(scope);
    }
    out
}

fn simplify(s: &str, depth: usize) -> Option<String> {
    if depth > MAX_DEPTH {
        return None;
    }
    let Some(open) = s.find('<') else {
        return Some(drop_inline_namespaces(s));
    };
    let close = matching(s, open)?;
    let head = drop_inline_namespaces(s[..open].trim_end());
    let args = split_args(&s[open + 1..close])?
        .into_iter()
        .map(|arg| simplify(strip_tag(arg.trim()), depth + 1))
        .collect::<Option<Vec<String>>>()?;
    let rest = simplify(&s[close + 1..], depth + 1)?;
    let cut = head
        .rfind(|c: char| !(c.is_ascii_alphanumeric() || c == '_' || c == ':'))
        .map_or(0, |i| i + 1);
    let (lead, name) = head.split_at(cut);
    Some(format!("{lead}{}{rest}", rebuild(name, args)))
}

/// `name<args>` with its standard alias or without its default arguments.
fn rebuild(name: &str, mut args: Vec<String>) -> String {
    let qualified = name.strip_prefix("std::");
    let stem = qualified.unwrap_or(name);
    if let Some(alias) = char_alias(stem, &args, qualified.is_some()) {
        return format!("std::{alias}");
    }
    if CONTAINERS.contains(&stem) {
        while args.len() > 1 && args.last().is_some_and(|last| is_default(last, &args)) {
            args.pop();
        }
    }
    format!("{name}<{}>", args.join(", "))
}

/// The alias of character template `stem` over `args`: the character type,
/// then only its default traits and allocator. An unqualified `stem` (a DWARF
/// name, its namespace a separate scope) needs a default argument to show it
/// is the standard one.
fn char_alias(stem: &str, args: &[String], qualified: bool) -> Option<String> {
    let (ch, rest) = args.split_first()?;
    let prefix = CHAR_PREFIXES.iter().find(|&&(c, _)| c == ch.as_str())?.1;
    let string = STRING_TEMPLATES.contains(&stem);
    if !string && !(STREAM_TEMPLATES.contains(&stem) && matches!(ch.as_str(), "char" | "wchar_t")) {
        return None;
    }
    let traits = format!("std::char_traits<{ch}>");
    let alloc = format!("std::allocator<{ch}>");
    let defaults: &[&str] = match (stem, rest.len()) {
        (_, 0) => &[],
        (_, 1) => &[traits.as_str()],
        (
            "basic_string"
            | "basic_stringbuf"
            | "basic_stringstream"
            | "basic_istringstream"
            | "basic_ostringstream",
            2,
        ) => &[traits.as_str(), alloc.as_str()],
        _ => return None,
    };
    if rest.iter().zip(defaults).any(|(a, d)| a.as_str() != *d) || (!qualified && rest.is_empty()) {
        return None;
    }
    Some(format!("{prefix}{}", stem.strip_prefix("basic_")?))
}

/// Is `arg` the default of a trailing argument of a container over `args`?
fn is_default(arg: &str, args: &[String]) -> bool {
    let Some(open) = arg.find('<') else {
        return false;
    };
    if !arg.ends_with('>') || !DEFAULT_ARGS.contains(&&arg[..open]) {
        return false;
    }
    let inner = &arg[open + 1..arg.len() - 1];
    let first = args[0].as_str();
    inner == first
        || args.get(1).is_some_and(|second| {
            inner == format!("std::pair<{first} const, {second}>")
                || inner == format!("std::pair<const {first}, {second}>")
        })
}

/// The index of the `>` that closes the `<` at `open`.
fn matching(s: &str, open: usize) -> Option<usize> {
    let mut depth = 0usize;
    for (i, b) in s.bytes().enumerate().skip(open) {
        match b {
            b'<' => depth += 1,
            b'>' => {
                depth = depth.checked_sub(1)?;
                if depth == 0 {
                    return Some(i);
                }
            }
            _ => {}
        }
    }
    None
}

/// The top-level comma-separated arguments of a template argument list.
fn split_args(s: &str) -> Option<Vec<&str>> {
    let mut out = Vec::new();
    let mut depth = 0usize;
    let mut start = 0;
    for (i, b) in s.bytes().enumerate() {
        match b {
            b'<' | b'(' | b'[' => depth += 1,
            b'>' | b')' | b']' => depth = depth.checked_sub(1)?,
            b',' if depth == 0 => {
                out.push(&s[start..i]);
                start = i + 1;
            }
            _ => {}
        }
    }
    if depth != 0 {
        return None;
    }
    out.push(&s[start..]);
    Some(out)
}

/// An MSVC argument without its `class`/`struct`/`union`/`enum` tag.
fn strip_tag(arg: &str) -> &str {
    ["class ", "struct ", "union ", "enum "]
        .iter()
        .find_map(|tag| arg.strip_prefix(tag))
        .unwrap_or(arg)
}

/// `s` without an inline namespace right after a `std` component.
fn drop_inline_namespaces(s: &str) -> String {
    let mut out = s.to_string();
    for ns in INLINE_NAMESPACES {
        let needle = format!("std::{ns}::");
        let mut from = 0;
        while let Some(pos) = out[from..].find(&needle).map(|p| p + from) {
            let boundary = out[..pos]
                .bytes()
                .next_back()
                .is_none_or(|b| !(b.is_ascii_alphanumeric() || b == b'_'));
            if boundary {
                out.replace_range(pos + 5..pos + needle.len(), "");
                from = pos + 5;
            } else {
                from = pos + needle.len();
            }
        }
    }
    out
}

/// The printed spelling of a declared or called function's name: its
/// [`short_type`] when `cppshortnames` is on. A standalone load names a C++
/// function by its whole demangled path (`std::__cxx11::basic_string::_M_append`),
/// with no scope list for [`short_scopes`] to shorten.
pub fn function_name(arch: &crate::architecture::Architecture, name: String) -> String {
    if !arch.unlace_options.get::<CppShortNames>().0 {
        return name;
    }
    match short_type(&name) {
        Cow::Owned(short) => short,
        Cow::Borrowed(_) => name,
    }
}

crate::unlace_flag!(
    /// (unlace `cppshortnames`) Print the short spelling of standard C++ names.
    /// See [`crate::cppshortnames`].
    CppShortNames,
    "cppshortnames",
    "short standard C++ names",
    unset: false,
    shipped: false
);

#[cfg(test)]
mod tests;
