//! Registry crates named by the source paths a Rust image carries.
//!
//! Panic locations and debug paths of a dependency spell its unpacked registry
//! directory, `<cargo home>/registry/src/<index>/<crate>-<version>/...`, where
//! `<index>` is the registry host and a 16-digit hash. The crate directory is
//! split at the first `-` that starts a `major.minor.patch` version.

use memchr::memmem;
use std::collections::BTreeSet;

const MAX_CRATES: usize = 4096;

fn is_sep(b: u8) -> bool {
    matches!(b, b'/' | b'\\')
}

/// The leading path component of `bytes` and the rest after its separator.
fn component(bytes: &[u8], max: usize) -> Option<(&[u8], &[u8])> {
    let end = bytes.iter().take(max + 1).position(|&b| is_sep(b))?;
    Some((&bytes[..end], &bytes[end + 1..]))
}

fn is_index(name: &[u8]) -> bool {
    let Some(dash) = name.iter().rposition(|&b| b == b'-') else {
        return false;
    };
    let (host, hash) = (&name[..dash], &name[dash + 1..]);
    !host.is_empty()
        && host
            .iter()
            .all(|b| b.is_ascii_alphanumeric() || matches!(b, b'.' | b'-' | b'_'))
        && hash.len() == 16
        && hash.iter().all(|b| matches!(b, b'0'..=b'9' | b'a'..=b'f'))
}

fn is_version(text: &[u8]) -> bool {
    let core = text
        .split(|b| matches!(b, b'-' | b'+'))
        .next()
        .unwrap_or(text);
    let mut fields = core.split(|&b| b == b'.');
    let numeric = |field: Option<&[u8]>| {
        field.is_some_and(|f| !f.is_empty() && f.len() <= 9 && f.iter().all(u8::is_ascii_digit))
    };
    numeric(fields.next())
        && numeric(fields.next())
        && numeric(fields.next())
        && fields.next().is_none()
        && text
            .iter()
            .all(|b| b.is_ascii_alphanumeric() || matches!(b, b'.' | b'-' | b'+'))
}

/// Split a registry directory name such as `sha-1-0.10.1` into name and version.
fn split_crate(dir: &[u8]) -> Option<(&str, &str)> {
    let at = (1..dir.len()).find(|&i| dir[i] == b'-' && is_version(&dir[i + 1..]))?;
    let name = &dir[..at];
    if !name
        .iter()
        .all(|b| b.is_ascii_alphanumeric() || matches!(b, b'-' | b'_'))
    {
        return None;
    }
    Some((
        std::str::from_utf8(name).ok()?,
        std::str::from_utf8(&dir[at + 1..]).ok()?,
    ))
}

/// The `(name, version)` pairs of the registry crates `bytes` names, sorted.
pub fn registry_crates(bytes: &[u8]) -> Vec<(String, String)> {
    let mut found = BTreeSet::new();
    for at in memmem::find_iter(bytes, b"registry") {
        let rest = &bytes[at + 8..];
        let [open, b's', b'r', b'c', close, rest @ ..] = rest else {
            continue;
        };
        if !is_sep(*open) || !is_sep(*close) {
            continue;
        }
        let Some((index, rest)) = component(rest, 96) else {
            continue;
        };
        let Some((dir, _)) = component(rest, 128) else {
            continue;
        };
        if !is_index(index) {
            continue;
        }
        if let Some((name, version)) = split_crate(dir) {
            found.insert((name.to_string(), version.to_string()));
            if found.len() == MAX_CRATES {
                break;
            }
        }
    }
    found.into_iter().collect()
}

#[cfg(test)]
mod tests;
