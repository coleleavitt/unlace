//! (kuna `nameladder`) The spellings a function name is tried under when its
//! exact spelling is not in a prototype or no-return table.
//!
//! IDA's type-library lookup (`guess_tinfo` -> 0x66f410) and `cleanup_name`
//! retry a miss after stripping the decorations a name picks up on its way into
//! a database: a `j_` jump-thunk prefix, an import prefix (`__imp_`, `_imp_`,
//! `imp__`), the ABI underscores of 32-bit COFF and Mach-O, a stdcall or
//! fastcall `@N` decoration, and a trailing `_<digits>` duplicate-name suffix
//! (a FLIRT or FID match named a second copy `memcpy_0`). Each rung strips one
//! more decoration from the previous one, so the order decides which spelling
//! wins when two of them are in a table.

/// The fallback spellings of `name`, most specific first, excluding `name`
/// itself. Empty when nothing can be stripped.
pub fn fallbacks(name: &str) -> Vec<String> {
    let mut out: Vec<String> = Vec::new();
    let push = |s: &str, out: &mut Vec<String>| {
        if !s.is_empty() && s != name && !out.iter().any(|o| o == s) {
            out.push(s.to_string());
        }
    };
    let mut cur = name;
    while let Some(rest) = cur.strip_prefix("j_") {
        cur = rest;
    }
    push(cur, &mut out);
    let unprefixed = ["__imp__", "__imp_", "_imp__", "_imp_", "imp__", "imp_"]
        .iter()
        .find_map(|p| cur.strip_prefix(p))
        .unwrap_or(cur);
    cur = unprefixed;
    push(cur, &mut out);
    let undecorated = strip_at_decoration(cur);
    cur = undecorated;
    push(cur, &mut out);
    if let Some(one) = cur.strip_prefix('_') {
        push(one, &mut out);
    }
    cur = cur.trim_start_matches('_');
    push(cur, &mut out);
    if let Some(base) = strip_dup_suffix(cur) {
        push(base, &mut out);
    }
    out
}

/// `f@12` / `@f@12` -> `f`; anything else unchanged.
fn strip_at_decoration(name: &str) -> &str {
    let body = name.strip_prefix('@').unwrap_or(name);
    match body.rsplit_once('@') {
        Some((base, n)) if !base.is_empty() && !n.is_empty() && n.bytes().all(|b| b.is_ascii_digit()) => base,
        _ => name,
    }
}

/// `memcpy_0` -> `memcpy`: a trailing `_` followed only by digits.
fn strip_dup_suffix(name: &str) -> Option<&str> {
    let (base, n) = name.rsplit_once('_')?;
    (!base.is_empty() && !n.is_empty() && n.bytes().all(|b| b.is_ascii_digit())).then_some(base)
}

#[cfg(test)]
mod tests {
    use super::fallbacks;

    #[test]
    fn ladder_strips_one_decoration_per_rung() {
        assert_eq!(fallbacks("j_printf"), vec!["printf"]);
        assert_eq!(fallbacks("j_j_exit"), vec!["exit"]);
        assert_eq!(fallbacks("__imp_CreateFileW"), vec!["CreateFileW"]);
        assert_eq!(fallbacks("_CreateFileW@28"), vec!["_CreateFileW", "CreateFileW"]);
        assert_eq!(fallbacks("@f@8"), vec!["f"]);
        assert_eq!(fallbacks("_memcpy"), vec!["memcpy"]);
        assert_eq!(fallbacks("memcpy_0"), vec!["memcpy"]);
        assert_eq!(fallbacks("j___imp__strlen_12"), vec!["__imp__strlen_12", "strlen_12", "strlen"]);
        assert_eq!(fallbacks("__Znwm"), vec!["_Znwm", "Znwm"]);
        assert!(fallbacks("printf").is_empty());
    }
}
