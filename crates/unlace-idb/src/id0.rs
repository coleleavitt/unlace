//! ID0: the B-tree of netnodes and the lookups over it (`id0/btree.rs`, `id0/db.rs`, `id0/entry_iter.rs`, `id0.rs`).
//!
//! Ported from idb-rs (https://github.com/Vector35/idb-rs, Apache-2.0), Copyright Rubens
//! Brandao and the idb-rs contributors; see NOTICE.

use std::collections::BTreeSet;

use crate::Result;
use crate::reader::{Reader, Width, cstr, err};

pub(crate) const ARRAY_ALT_TAG: u8 = b'A';
pub(crate) const ARRAY_SUP_TAG: u8 = b'S';
pub(crate) const VALUE_TAG: u8 = b'V';
pub(crate) const NAME_TAG: u8 = b'N';

/// The deepest B-tree followed.
const MAX_DEPTH: usize = 64;

#[derive(Clone, Copy, PartialEq, Eq)]
enum Version {
    V15,
    V16,
    V20,
}

fn version(header: &[u8]) -> Option<Version> {
    match cstr(header) {
        b"B-tree v 1.5 (C) Pol 1990" => Some(Version::V15),
        b"B-tree v 1.6 (C) Pol 1990" => Some(Version::V16),
        b"B-tree v2" => Some(Version::V20),
        _ => None,
    }
}

/// One key/value pair of the tree.
#[derive(Clone, Debug)]
pub(crate) struct Entry {
    pub(crate) key: Vec<u8>,
    pub(crate) value: Vec<u8>,
}

struct Tree<'a> {
    data: &'a [u8],
    version: Version,
    page_size: usize,
    visited: BTreeSet<u32>,
    out: Vec<Entry>,
}

impl Tree<'_> {
    fn page(&mut self, index: u32, depth: usize) -> Result<()> {
        if depth > MAX_DEPTH || !self.visited.insert(index) {
            return err("the ID0 B-tree loops or is too deep");
        }
        let start = (index as usize).checked_mul(self.page_size).filter(|s| {
            s.checked_add(self.page_size)
                .is_some_and(|e| e <= self.data.len())
        });
        let Some(start) = start else {
            return err(format!("ID0 page {index} is past the end of the section"));
        };
        let page = &self.data[start..start + self.page_size];
        let entry_len: usize = if self.version == Version::V15 { 4 } else { 6 };
        let mut r = Reader::new(page);
        let (preceding, count) = if self.version == Version::V15 {
            (u32::from(r.u16()?), r.u16()?)
        } else {
            (r.u32()?, r.u16()?)
        };
        let min_data = entry_len * (usize::from(count) + 2);
        if min_data > self.page_size {
            return err("an ID0 page holds more entries than fit");
        }
        let record = |recofs: u16| -> Result<Reader<'_>> {
            let recofs = usize::from(recofs);
            if recofs < min_data || recofs >= page.len() {
                return err("an ID0 record offset is out of its page");
            }
            Ok(Reader::new(&page[recofs..]))
        };
        let key_value = |r: &mut Reader<'_>| -> Result<(Vec<u8>, Vec<u8>)> {
            let key_len = usize::from(r.u16()?);
            let key = r.take(key_len)?.to_vec();
            let value_len = usize::from(r.u16()?);
            let value = r.take(value_len)?.to_vec();
            Ok((key, value))
        };
        if preceding != 0 {
            self.page(preceding, depth + 1)?;
            for i in 0..usize::from(count) {
                let mut h = Reader::new(&page[entry_len * (i + 1)..]);
                let (child, recofs) = if self.version == Version::V15 {
                    (u32::from(h.u16()?), h.u16()?)
                } else {
                    (h.u32()?, h.u16()?)
                };
                let mut v = record(recofs)?;
                if self.version != Version::V20 {
                    v.u8()?;
                }
                let (key, value) = key_value(&mut v)?;
                self.out.push(Entry { key, value });
                if child != 0 {
                    self.page(child, depth + 1)?;
                }
            }
        } else {
            let mut last_key: Vec<u8> = Vec::new();
            for i in 0..usize::from(count) {
                let mut h = Reader::new(&page[entry_len * (i + 1)..]);
                let (indent, recofs) = match self.version {
                    Version::V15 => {
                        let indent = h.u8()?;
                        h.u8()?;
                        (usize::from(indent), h.u16()?)
                    }
                    Version::V16 => {
                        let indent = h.u8()?;
                        h.u8()?;
                        h.u16()?;
                        (usize::from(indent), h.u16()?)
                    }
                    Version::V20 => {
                        let indent = h.u16()?;
                        h.u16()?;
                        (usize::from(indent), h.u16()?)
                    }
                };
                if recofs == 0 {
                    continue;
                }
                let mut v = record(recofs)?;
                if self.version != Version::V20 {
                    v.u8()?;
                }
                let (ext, value) = key_value(&mut v)?;
                let Some(reused) = last_key.get(..indent) else {
                    return err("an ID0 key reuses more than the previous key");
                };
                let mut key = reused.to_vec();
                key.extend_from_slice(&ext);
                last_key.clone_from(&key);
                self.out.push(Entry { key, value });
            }
        }
        Ok(())
    }
}

/// The ID0 section: every key/value pair, sorted by key.
pub(crate) struct Id0 {
    pub(crate) w: Width,
    pub(crate) entries: Vec<Entry>,
}

impl Id0 {
    pub(crate) fn read(data: &[u8], w: Width, ida0: bool) -> Result<Self> {
        if data.len() < 64 {
            return err("ID0 is shorter than its header");
        }
        let at = if ida0 { 0x0d } else { 0x13 };
        let Some(version) = version(&data[at..at + 26]) else {
            return err("unknown ID0 B-tree version");
        };
        let mut r = Reader::new(data);
        let (page_size, root) = match version {
            Version::V15 => {
                r.u16()?;
                let page_size = r.u16()?;
                (page_size, u32::from(r.u16()?))
            }
            Version::V16 | Version::V20 => {
                r.u32()?;
                let page_size = r.u16()?;
                (page_size, r.u32()?)
            }
        };
        if page_size < 64 {
            return err("invalid ID0 page size");
        }
        let mut tree = Tree {
            data,
            version,
            page_size: usize::from(page_size),
            visited: BTreeSet::new(),
            out: Vec::new(),
        };
        if root != 0 {
            tree.page(root, 0)?;
        }
        let mut entries = tree.out;
        if !entries.windows(2).all(|p| p[0].key <= p[1].key) {
            entries.sort_by(|a, b| a.key.cmp(&b.key));
        }
        Ok(Id0 { w, entries })
    }

    fn lower_bound(&self, key: &[u8]) -> usize {
        self.entries.partition_point(|e| e.key.as_slice() < key)
    }

    /// Every entry whose key starts with `prefix`.
    pub(crate) fn prefixed(&self, prefix: &[u8]) -> &[Entry] {
        let start = self.lower_bound(prefix);
        let len = self.entries[start..]
            .iter()
            .take_while(|e| e.key.starts_with(prefix))
            .count();
        &self.entries[start..start + len]
    }

    fn exact(&self, key: &[u8]) -> Option<&[u8]> {
        let i = self.lower_bound(key);
        self.entries
            .get(i)
            .filter(|e| e.key == key)
            .map(|e| e.value.as_slice())
    }

    pub(crate) fn node_key(&self, node: u64) -> Vec<u8> {
        let mut key = vec![b'.'];
        key.extend(self.w.to_be(node));
        key
    }

    fn tag_key(&self, node: u64, tag: u8) -> Vec<u8> {
        let mut key = self.node_key(node);
        key.push(tag);
        key
    }

    fn alt_key(&self, node: u64, tag: u8, alt: u64) -> Vec<u8> {
        let mut key = self.tag_key(node, tag);
        key.extend(self.w.to_be(alt));
        key
    }

    /// The netnode a `N<name>` entry names.
    pub(crate) fn node_by_name(&self, name: &str) -> Option<u64> {
        let key = format!("N{name}");
        self.exact(key.as_bytes()).and_then(|v| self.w.from_le(v))
    }

    pub(crate) fn node_name(&self, node: u64) -> Option<&[u8]> {
        self.exact(&self.tag_key(node, NAME_TAG))
    }

    pub(crate) fn node_value(&self, node: u64) -> Option<&[u8]> {
        self.exact(&self.tag_key(node, VALUE_TAG))
    }

    pub(crate) fn sup(&self, node: u64, alt: u64, tag: u8) -> Option<&[u8]> {
        self.exact(&self.alt_key(node, tag, alt))
    }

    /// `(index, value)` of every entry of a netnode's tag, in index order.
    pub(crate) fn sup_range(&self, node: u64, tag: u8) -> impl Iterator<Item = (u64, &[u8])> {
        let prefix = self.tag_key(node, tag);
        let w = self.w;
        let skip = prefix.len();
        self.prefixed(&prefix)
            .iter()
            .filter_map(move |e| Some((w.from_be(e.key.get(skip..)?)?, e.value.as_slice())))
    }

    /// The values of a netnode's tag from index `start` on, while the indexes follow one
    /// another (`EntryTagContinuousSubkeys`).
    pub(crate) fn continuous(&self, node: u64, tag: u8, start: u64) -> Vec<&[u8]> {
        let mut out = Vec::new();
        let mut expected = start;
        for (index, value) in self.sup_range(node, tag) {
            if index < start {
                continue;
            }
            if index != expected {
                break;
            }
            out.push(value);
            expected = expected.wrapping_add(1);
        }
        out
    }

    /// A name that does not fit the netnode name entry: a reference to its pieces.
    pub(crate) fn long_name(&self, reference: u64) -> Vec<u8> {
        let w = self.w;
        let shift = (w.bytes() as u32 - 1) * 8;
        let node = 0xffu64 << shift;
        let key_tail = w.to_be(w.wrap(reference << 8));
        let mut prefix = self.tag_key(node, ARRAY_SUP_TAG);
        prefix.extend_from_slice(&key_tail[..key_tail.len() - 1]);
        self.prefixed(&prefix)
            .iter()
            .flat_map(|e| e.value.iter().copied())
            .collect()
    }

    /// The name of a segment string index when the database has no `$ segstrings`.
    pub(crate) fn name_by_index(&self, index: u64) -> Option<Vec<u8>> {
        let shift = (self.w.bytes() as u32 - 1) * 8;
        self.node_name((0xffu64 << shift) | index)
            .map(|v| cstr(v).to_vec())
    }
}
