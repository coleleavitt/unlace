//! Mach-O export trie (`LC_DYLD_EXPORTS_TRIE`, or the `export_off` range of
//! `LC_DYLD_INFO[_ONLY]`): the names an image exports and where each one lives.
//!
//! The trie is a prefix tree of nodes, each `terminal_size` (ULEB), then, when
//! the node ends a name, `flags` (ULEB) and either an image-relative address
//! (ULEB; plus a resolver offset for `EXPORT_SYMBOL_FLAGS_STUB_AND_RESOLVER`) or,
//! for `EXPORT_SYMBOL_FLAGS_REEXPORT`, the ordinal of the dylib the name comes
//! from and the name it has there (empty for the same name). A child count
//! byte and `(edge string, child offset)` pairs follow (`mach-o/loader.h`).
//!
//! The walk is iterative and queues each node offset once, so a cyclic or
//! shared-node hostile trie terminates in time and memory linear in its size;
//! names longer than [`MAX_NAME`] are dropped.

const EXPORT_SYMBOL_FLAGS_KIND_MASK: u64 = 0x03;
const EXPORT_SYMBOL_FLAGS_KIND_ABSOLUTE: u64 = 0x02;
const EXPORT_SYMBOL_FLAGS_REEXPORT: u64 = 0x08;
const EXPORT_SYMBOL_FLAGS_STUB_AND_RESOLVER: u64 = 0x10;
const MAX_NAME: usize = 4096;
const MAX_EXPORTS: usize = 1 << 21;

/// Where an exported name lives.
#[derive(Clone, Debug, PartialEq, Eq)]
pub enum ExportTarget {
    /// An offset from the image's mach header (regular and thread-local
    /// exports, and the stub of a stub-and-resolver export).
    Offset(u64),
    /// An absolute value (`EXPORT_SYMBOL_FLAGS_KIND_ABSOLUTE`).
    Absolute(u64),
    /// Re-exported from the dylib with this 1-based load ordinal, under `name`
    /// there (`None` for the same name).
    Reexport { ordinal: u64, name: Option<String> },
}

/// One exported name.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct TrieExport {
    pub name: String,
    pub flags: u64,
    pub target: ExportTarget,
}

fn uleb(data: &[u8], p: &mut usize) -> Option<u64> {
    let mut result = 0u64;
    let mut shift = 0u32;
    loop {
        let byte = *data.get(*p)?;
        *p += 1;
        if shift >= 64 {
            return None;
        }
        result |= u64::from(byte & 0x7F) << shift;
        if byte & 0x80 == 0 {
            return Some(result);
        }
        shift += 7;
    }
}

fn cstr<'a>(data: &'a [u8], p: &mut usize) -> Option<&'a [u8]> {
    let rest = data.get(*p..)?;
    let end = rest.iter().position(|&b| b == 0)?;
    *p += end + 1;
    Some(&rest[..end])
}

/// Every export in `trie`; a malformed node ends its branch, never the walk.
pub fn parse_export_trie(trie: &[u8]) -> Vec<TrieExport> {
    let mut out = Vec::new();
    let mut seen = std::collections::HashSet::from([0usize]);
    let mut stack: Vec<(usize, Vec<u8>)> = vec![(0, Vec::new())];
    while let Some((node, prefix)) = stack.pop() {
        if out.len() >= MAX_EXPORTS {
            break;
        }
        let mut p = node;
        let Some(terminal) = uleb(trie, &mut p) else { continue };
        let children = p.saturating_add(terminal as usize);
        if terminal > 0 {
            if let Some(export) = terminal_info(trie, p, &prefix) {
                out.push(export);
            }
        }
        let mut p = children;
        let Some(&count) = trie.get(p) else { continue };
        p += 1;
        for _ in 0..count {
            let Some(edge) = cstr(trie, &mut p) else { break };
            let Some(child) = uleb(trie, &mut p) else { break };
            if prefix.len() + edge.len() > MAX_NAME || child as usize >= trie.len() || !seen.insert(child as usize) {
                continue;
            }
            let mut name = prefix.clone();
            name.extend_from_slice(edge);
            stack.push((child as usize, name));
        }
    }
    out
}

fn terminal_info(trie: &[u8], mut p: usize, name: &[u8]) -> Option<TrieExport> {
    let flags = uleb(trie, &mut p)?;
    let target = if flags & EXPORT_SYMBOL_FLAGS_REEXPORT != 0 {
        let ordinal = uleb(trie, &mut p)?;
        let other = cstr(trie, &mut p)?;
        let name = (!other.is_empty()).then(|| String::from_utf8_lossy(other).into_owned());
        ExportTarget::Reexport { ordinal, name }
    } else {
        let address = uleb(trie, &mut p)?;
        if flags & EXPORT_SYMBOL_FLAGS_KIND_MASK == EXPORT_SYMBOL_FLAGS_KIND_ABSOLUTE {
            ExportTarget::Absolute(address)
        } else {
            if flags & EXPORT_SYMBOL_FLAGS_STUB_AND_RESOLVER != 0 {
                uleb(trie, &mut p)?;
            }
            ExportTarget::Offset(address)
        }
    };
    Some(TrieExport { name: String::from_utf8_lossy(name).into_owned(), flags, target })
}

#[cfg(test)]
mod tests {
    use super::*;

    /// root -> "_f" (offset 0x100), root -> "_re" (re-export from ordinal 2 as
    /// "_impl"), root -> "_a" (absolute 0x40).
    fn sample() -> Vec<u8> {
        let mut t = vec![0u8, 3];
        let edges: [(&[u8], usize); 3] = [(b"_f", 0), (b"_re", 1), (b"_a", 2)];
        let header_len = 2 + edges.iter().map(|(e, _)| e.len() + 1 + 1).sum::<usize>();
        let nodes: [Vec<u8>; 3] = [
            vec![3, 0x00, 0x80, 0x02, 0],
            [vec![8, 0x08, 0x02], b"_impl\0".to_vec(), vec![0]].concat(),
            vec![2, 0x02, 0x40, 0],
        ];
        let mut offsets = Vec::new();
        let mut at = header_len;
        for n in &nodes {
            offsets.push(at);
            at += n.len();
        }
        for (edge, i) in edges {
            t.extend_from_slice(edge);
            t.push(0);
            t.push(offsets[i] as u8);
        }
        for n in nodes {
            t.extend(n);
        }
        t
    }

    #[test]
    fn regular_reexport_and_absolute_exports_decode() {
        let mut exports = parse_export_trie(&sample());
        exports.sort_by(|a, b| a.name.cmp(&b.name));
        assert_eq!(
            exports.iter().map(|e| (e.name.as_str(), e.target.clone())).collect::<Vec<_>>(),
            [
                ("_a", ExportTarget::Absolute(0x40)),
                ("_f", ExportTarget::Offset(0x100)),
                ("_re", ExportTarget::Reexport { ordinal: 2, name: Some("_impl".into()) }),
            ]
        );
    }

    #[test]
    fn a_cyclic_trie_terminates() {
        let trie = [0u8, 1, b'a', 0, 0];
        assert!(parse_export_trie(&trie).is_empty());
        assert!(parse_export_trie(&[]).is_empty());
    }
}
