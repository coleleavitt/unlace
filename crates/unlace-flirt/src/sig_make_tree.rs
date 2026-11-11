//! The prefix tree and its encoding: the inverse of the body decoder.
//!
//! Siblings are ordered the way IDA's own files are: children whose first
//! byte is fixed come first, by byte value, and the one child starting
//! with a variant byte comes last. Siblings never share their first
//! position, so each node's pattern is the longest run its modules agree
//! on.

use std::collections::BTreeMap;
use std::io::Write as _;

use flate2::Compression;
use flate2::write::ZlibEncoder;

use super::{LeafModule, PATTERN_SIZE};
use crate::FlirtError;
use crate::sig::SigHeader;

type Pattern = Vec<Option<u8>>;
/// A leaf's full pattern and its modules.
type Entry<'a> = (&'a [Option<u8>], &'a [LeafModule]);

pub(super) fn encode(
    header: &SigHeader,
    leaves: &BTreeMap<Pattern, Vec<LeafModule>>,
) -> Result<Vec<u8>, FlirtError> {
    let entries: Vec<Entry<'_>> = leaves
        .iter()
        .map(|(pattern, modules)| (pattern.as_slice(), modules.as_slice()))
        .collect();
    let mut body = Body::default();
    body.children(&children(&entries, 0))?;

    let mut zlib = ZlibEncoder::new(Vec::new(), Compression::best());
    zlib.write_all(&body.out)?;
    let compressed = zlib.finish()?;

    let mut out = Vec::with_capacity(45 + header.library_name.len() + compressed.len());
    out.extend(SigHeader::MAGIC);
    out.push(header.version);
    out.push(header.arch.0);
    out.extend(header.file_types.to_le_bytes());
    out.extend(header.os_types.to_le_bytes());
    out.extend(header.app_types.to_le_bytes());
    out.extend(header.features.bits().to_le_bytes());
    // The old 16-bit module count; IDA leaves it zero in version 10.
    out.extend(0u16.to_le_bytes());
    out.extend(header.ctype_crc.to_le_bytes());
    out.extend([0u8; 12]);
    out.push(header.library_name.len() as u8);
    out.extend(header.ctype_crc_alt.to_le_bytes());
    out.extend(header.n_modules.to_le_bytes());
    out.extend(header.pattern_size.to_le_bytes());
    out.extend(header.ctype_crc_3v.to_le_bytes());
    out.extend(header.library_name.bytes());
    out.extend(compressed);
    Ok(out)
}

struct Child<'a> {
    pattern: &'a [Option<u8>],
    node: Node<'a>,
}

enum Node<'a> {
    Inner(Vec<Child<'a>>),
    Leaf(&'a [LeafModule]),
}

/// The children of the node at `depth` that all of `entries` share.
fn children<'a>(entries: &[Entry<'a>], depth: usize) -> Vec<Child<'a>> {
    let mut groups: BTreeMap<(bool, u8), Vec<Entry<'a>>> = BTreeMap::new();
    for &entry in entries {
        let first = entry.0[depth];
        groups
            .entry((first.is_none(), first.unwrap_or(0)))
            .or_default()
            .push(entry);
    }
    groups
        .into_values()
        .map(|group| {
            let lead = group[0].0;
            let run = (depth..PATTERN_SIZE)
                .take_while(|&pos| group.iter().all(|entry| entry.0[pos] == lead[pos]))
                .count();
            let end = depth + run;
            let node = if end == PATTERN_SIZE {
                // Patterns are unique, so a full run is a single entry.
                Node::Leaf(group[0].1)
            } else {
                Node::Inner(children(&group, end))
            };
            Child {
                pattern: &lead[depth..end],
                node,
            }
        })
        .collect()
}

/// Version 10 body writer.
#[derive(Default)]
struct Body {
    out: Vec<u8>,
}

impl Body {
    fn children(&mut self, children: &[Child<'_>]) -> Result<(), FlirtError> {
        self.short(children.len() as u32)?;
        for child in children {
            let len = child.pattern.len();
            self.short(len as u32)?;
            let mask = child
                .pattern
                .iter()
                .enumerate()
                .filter(|(_, byte)| byte.is_none())
                .fold(0u64, |mask, (i, _)| mask | 1 << (len - 1 - i));
            if len <= 0x0F {
                self.short(mask as u32)?;
            } else if len <= 0x20 {
                self.long(mask as u32);
            } else {
                self.long((mask >> 32) as u32);
                self.long(mask as u32);
            }
            self.out.extend(child.pattern.iter().flatten());
            match &child.node {
                Node::Inner(grandchildren) => self.children(grandchildren)?,
                Node::Leaf(modules) => {
                    self.short(0)?;
                    self.leaf(modules)?;
                }
            }
        }
        Ok(())
    }

    fn leaf(&mut self, modules: &[LeafModule]) -> Result<(), FlirtError> {
        const MORE_NAMES: u8 = 0x01;
        const TAIL_BYTES: u8 = 0x02;
        const REFERENCE: u8 = 0x04;
        const MORE_MODULES_SAME_CRC: u8 = 0x08;
        const MORE_CRC_GROUPS: u8 = 0x10;

        for (i, leaf) in modules.iter().enumerate() {
            let crc = (leaf.crc_len, leaf.crc16);
            if i == 0 || (modules[i - 1].crc_len, modules[i - 1].crc16) != crc {
                self.out.push(leaf.crc_len);
                self.out.extend(leaf.crc16.to_be_bytes());
            }
            let module = &leaf.module;
            self.long(module.length);
            let mut previous = 0i32;
            for (n, name) in module.names.iter().enumerate() {
                let delta = name.offset - previous;
                previous = name.offset;
                self.long(delta.unsigned_abs());
                let flags = name.flags.bits() | if delta < 0 { 0x10 } else { 0 };
                if flags != 0 {
                    self.out.push(flags);
                }
                self.out.extend(name.name.bytes());
                let mut next = 0;
                if n + 1 < module.names.len() {
                    next |= MORE_NAMES;
                } else {
                    if !module.tail_bytes.is_empty() {
                        next |= TAIL_BYTES;
                    }
                    if module.reference.is_some() {
                        next |= REFERENCE;
                    }
                    match modules.get(i + 1) {
                        Some(following) if (following.crc_len, following.crc16) == crc => {
                            next |= MORE_MODULES_SAME_CRC;
                        }
                        Some(_) => next |= MORE_CRC_GROUPS,
                        None => {}
                    }
                }
                self.out.push(next);
            }
            if !module.tail_bytes.is_empty() {
                let count = u8::try_from(module.tail_bytes.len())
                    .map_err(|_| FlirtError::Sig("more than 255 tail bytes".into()))?;
                self.out.push(count);
                for tail in &module.tail_bytes {
                    self.long(tail.offset);
                    self.out.push(tail.value);
                }
            }
            if let Some(reference) = &module.reference {
                self.out.push(1);
                self.long(reference.offset.unsigned_abs());
                let len = reference.name.len() + usize::from(reference.offset < 0);
                if let Ok(len) = u8::try_from(len)
                    && len != 0
                {
                    self.out.push(len);
                } else {
                    self.out.push(0);
                    self.short(len as u32)?;
                }
                self.out.extend(reference.name.bytes());
                if reference.offset < 0 {
                    self.out.push(0);
                }
            }
        }
        Ok(())
    }

    /// One or two bytes, up to 0x7FFF.
    fn short(&mut self, v: u32) -> Result<(), FlirtError> {
        if v < 0x80 {
            self.out.push(v as u8);
        } else if v < 0x8000 {
            self.out.extend([0x80 | (v >> 8) as u8, v as u8]);
        } else {
            return Err(FlirtError::Sig(format!("{v} does not fit a short varint")));
        }
        Ok(())
    }

    /// One to five bytes.
    fn long(&mut self, v: u32) {
        if v < 0x80 {
            self.out.push(v as u8);
        } else if v < 0x4000 {
            self.out.extend([0x80 | (v >> 8) as u8, v as u8]);
        } else if v < 0x2000_0000 {
            self.out.extend([
                0xC0 | (v >> 24) as u8,
                (v >> 16) as u8,
                (v >> 8) as u8,
                v as u8,
            ]);
        } else {
            self.out.push(0xE0);
            self.out.extend(v.to_be_bytes());
        }
    }
}
