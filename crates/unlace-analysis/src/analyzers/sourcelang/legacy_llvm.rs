//! Recognize validated LLVM suffixes on legacy Rust names.

pub(super) fn stem(name: &str) -> Option<&str> {
    let (stem, suffix) = name.split_once(".llvm.")?;
    let hash = stem.rsplit_once("17h")?.1.strip_suffix('E')?;
    if suffix.is_empty()
        || !suffix
            .bytes()
            .all(|b| matches!(b, b'A'..=b'F' | b'0'..=b'9' | b'@'))
        || !super::is_legacy_rust_hash_digits(hash)
        || rustc_demangle::try_demangle(name).is_err()
    {
        return None;
    }
    Some(stem)
}

#[cfg(test)]
mod tests;
