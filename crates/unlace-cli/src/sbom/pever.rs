//! The PE version resource (`VS_VERSIONINFO`): the `StringFileInfo` strings
//! (`ProductName`, `FileVersion`, `CompanyName`, ...) and the fixed file and
//! product versions. Found by its UTF-16 key anywhere in the image rather than by
//! walking the resource directory, and parsed by the block lengths it states,
//! each bounded by its parent.

use std::collections::BTreeMap;

const MAX_DEPTH: usize = 4;
const MAX_CHILDREN: usize = 512;
const FIXED_SIGNATURE: u32 = 0xfeef_04bd;
const MAX_CANDIDATES: usize = 16;

struct Block<'a> {
    key: String,
    /// The value bytes (UTF-16 text for a `String` block).
    value: &'a [u8],
    children: Vec<Block<'a>>,
}

fn u16_at(data: &[u8], at: usize) -> Option<u16> {
    Some(u16::from_le_bytes(data.get(at..at + 2)?.try_into().ok()?))
}

fn u32_at(data: &[u8], at: usize) -> Option<u32> {
    Some(u32::from_le_bytes(data.get(at..at + 4)?.try_into().ok()?))
}

fn align4(at: usize) -> usize {
    (at + 3) & !3
}

/// UTF-16LE text up to its NUL; the offset after the NUL.
fn utf16z(data: &[u8], at: usize) -> Option<(String, usize)> {
    let mut units = Vec::new();
    let mut p = at;
    loop {
        let u = u16_at(data, p)?;
        p += 2;
        if u == 0 {
            break;
        }
        units.push(u);
        if units.len() > 1024 {
            return None;
        }
    }
    Some((String::from_utf16_lossy(&units), p))
}

fn utf16_text(bytes: &[u8]) -> String {
    let units: Vec<u16> = bytes
        .chunks_exact(2)
        .map(|c| u16::from_le_bytes([c[0], c[1]]))
        .take_while(|&u| u != 0)
        .collect();
    String::from_utf16_lossy(&units).trim().to_string()
}

/// The block at `at` of `data` (offsets relative to the version resource's
/// start, so the 4-byte alignment is the resource's own).
fn block(data: &[u8], at: usize, depth: usize) -> Option<(Block<'_>, usize)> {
    let len = usize::from(u16_at(data, at)?);
    let value_len = usize::from(u16_at(data, at + 2)?);
    let text = u16_at(data, at + 4)? == 1;
    let end = at
        .checked_add(len)
        .filter(|&e| len >= 6 && e <= data.len())?;
    let (key, after_key) = utf16z(&data[..end], at + 6)?;
    let value_at = align4(after_key).min(end);
    let value_bytes = if text { value_len * 2 } else { value_len };
    let value_end = value_at.saturating_add(value_bytes).min(end);
    let value = &data[value_at..value_end];
    let mut children = Vec::new();
    let mut p = align4(value_end);
    while depth < MAX_DEPTH && p + 6 <= end && children.len() < MAX_CHILDREN {
        let Some((child, child_end)) = block(&data[..end], p, depth + 1) else {
            break;
        };
        children.push(child);
        let next = align4(child_end);
        if next <= p {
            break;
        }
        p = next;
    }
    Some((
        Block {
            key,
            value,
            children,
        },
        end,
    ))
}

/// The `VS_VERSION_INFO` key in UTF-16LE.
fn key_bytes() -> Vec<u8> {
    "VS_VERSION_INFO"
        .encode_utf16()
        .flat_map(u16::to_le_bytes)
        .collect()
}

fn version_pair(ms: u32, ls: u32) -> String {
    format!("{}.{}.{}.{}", ms >> 16, ms & 0xffff, ls >> 16, ls & 0xffff)
}

/// The version strings of the first version resource in `image` (a PE
/// file's bytes). Empty when there is none. The block is located by its key
/// anywhere in the image, not through `.rsrc`: the resource directory's RVA
/// can fall in another section (the fixture explicit_branch_assertion_pe_i386.exe
/// keeps its version block in `.reloc`), so a `.rsrc`-only search misses it.
pub(crate) fn string_table(image: &[u8]) -> BTreeMap<String, String> {
    let key = key_bytes();
    let mut tried = 0;
    for (key_at, window) in image.windows(key.len()).enumerate() {
        if window != key.as_slice() {
            continue;
        }
        tried += 1;
        if tried > MAX_CANDIDATES {
            break;
        }
        let out = table_at(image, key_at);
        if !out.is_empty() {
            return out;
        }
    }
    BTreeMap::new()
}

/// The version strings of the version block whose key starts at `key_at`.
fn table_at(image: &[u8], key_at: usize) -> BTreeMap<String, String> {
    let mut out = BTreeMap::new();
    let Some(start) = key_at.checked_sub(6) else {
        return out;
    };
    let data = &image[start..];
    let Some((root, _)) = block(data, 0, 0) else {
        return out;
    };
    if root.value.len() >= 24 && u32_at(root.value, 0) == Some(FIXED_SIGNATURE) {
        let w = |at| u32_at(root.value, at).unwrap_or(0);
        out.insert("FixedFileVersion".into(), version_pair(w(8), w(12)));
        out.insert("FixedProductVersion".into(), version_pair(w(16), w(20)));
    }
    for info in root.children.iter().filter(|c| c.key == "StringFileInfo") {
        for table in &info.children {
            for s in &table.children {
                let value = utf16_text(s.value);
                if !s.key.is_empty() && !value.is_empty() {
                    out.entry(s.key.clone()).or_insert(value);
                }
            }
        }
    }
    out
}

#[cfg(test)]
mod tests;
