//! Rust identifiers for functional machine operations.

const FALLBACK_PREFIX: &str = "__unlace_userop_";

#[doc(hidden)]
pub fn operator_name(name: Option<&[u8]>, index: u64) -> String {
    let name = String::from_utf8_lossy(name.unwrap_or_default());
    if raw_keyword(&name) {
        return format!("r#{name}");
    }
    if is_ascii_identifier(&name) && !name.starts_with(FALLBACK_PREFIX) {
        return name.into_owned();
    }

    let mut fallback = format!("{FALLBACK_PREFIX}{index:x}");
    if !name.is_empty() {
        fallback.push('_');
        fallback.extend(name.chars().take(64).map(
            |c| {
                if c.is_ascii_alphanumeric() { c } else { '_' }
            },
        ));
    }
    fallback
}

fn is_ascii_identifier(name: &str) -> bool {
    if matches!(name, "_" | "crate" | "self" | "Self" | "super") {
        return false;
    }
    let mut chars = name.bytes();
    chars
        .next()
        .is_some_and(|c| c == b'_' || c.is_ascii_alphabetic())
        && chars.all(|c| c == b'_' || c.is_ascii_alphanumeric())
}

#[doc(hidden)]
pub fn raw_keyword(name: &str) -> bool {
    matches!(
        name,
        "as" | "async"
            | "await"
            | "break"
            | "const"
            | "continue"
            | "dyn"
            | "else"
            | "enum"
            | "extern"
            | "false"
            | "fn"
            | "for"
            | "if"
            | "impl"
            | "in"
            | "let"
            | "loop"
            | "match"
            | "mod"
            | "move"
            | "mut"
            | "pub"
            | "ref"
            | "return"
            | "static"
            | "struct"
            | "trait"
            | "true"
            | "type"
            | "unsafe"
            | "use"
            | "where"
            | "while"
            | "abstract"
            | "become"
            | "box"
            | "do"
            | "final"
            | "gen"
            | "macro"
            | "override"
            | "priv"
            | "try"
            | "typeof"
            | "unsized"
            | "virtual"
            | "yield"
    )
}

#[cfg(test)]
mod tests;
