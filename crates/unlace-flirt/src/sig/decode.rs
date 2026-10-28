//! Body decoding (`sub_815C80` and the readers it calls).

use std::io::Read;

use flate2::read::{DeflateDecoder, ZlibDecoder};

use super::{
    Module, ModuleId, ModuleRef, NameFlags, Node, NodeChildren, PublicName, SigFeatures, SigFile,
    SigHeader, TailByte,
};
use crate::FlirtError;

/// Largest decompressed body accepted. The biggest IDA 9 signature
/// (`bds8vcl.sig`) inflates to about 23 MiB.
const MAX_BODY: u64 = 256 << 20;

/// Flags in the byte that ends a public name.
mod parse_flags {
    pub const MORE_NAMES: u8 = 0x01;
    pub const TAIL_BYTES: u8 = 0x02;
    pub const REFERENCE: u8 = 0x04;
    pub const MORE_MODULES_SAME_CRC: u8 = 0x08;
    pub const MORE_CRC_GROUPS: u8 = 0x10;
}

/// The per-name flag byte marks a negative offset delta with this bit; it
/// is cleared before the flags are stored.
const NEGATIVE_NAME_OFFSET: u8 = 0x10;

pub(super) fn decode(bytes: &[u8]) -> Result<SigFile, FlirtError> {
    let (header, body_start) = SigHeader::decode(bytes)?;
    let body = inflate(&header, &bytes[body_start..])?;
    let mut decoder = BodyDecoder {
        reader: Reader {
            bytes: &body,
            pos: 0,
        },
        version: header.body_version(),
        pattern_size: usize::from(header.pattern_size),
        modules: Vec::new(),
    };
    let root = decoder
        .node(Vec::new(), 0, 0)?
        .ok_or_else(|| FlirtError::Sig("signature tree has no fixed bytes".into()))?;
    if decoder.reader.pos != body.len() {
        return Err(FlirtError::Sig(format!(
            "{} trailing bytes after signature tree",
            body.len() - decoder.reader.pos
        )));
    }
    Ok(SigFile {
        header,
        root,
        modules: decoder.modules,
    })
}

fn inflate(header: &SigHeader, body: &[u8]) -> Result<Vec<u8>, FlirtError> {
    if !header.features.contains(SigFeatures::COMPRESSED) {
        return Ok(body.to_vec());
    }
    let mut out = Vec::new();
    let result = if header.version >= 7 {
        ZlibDecoder::new(body).take(MAX_BODY).read_to_end(&mut out)
    } else {
        DeflateDecoder::new(body)
            .take(MAX_BODY)
            .read_to_end(&mut out)
    };
    result.map_err(|e| FlirtError::Sig(format!("inflating signature body: {e}")))?;
    if out.len() as u64 == MAX_BODY {
        return Err(FlirtError::Sig("signature body exceeds 256 MiB".into()));
    }
    Ok(out)
}

struct Reader<'a> {
    bytes: &'a [u8],
    pos: usize,
}

impl Reader<'_> {
    fn u8(&mut self) -> Result<u8, FlirtError> {
        let byte = *self
            .bytes
            .get(self.pos)
            .ok_or_else(|| FlirtError::Sig("truncated signature body".into()))?;
        self.pos += 1;
        Ok(byte)
    }

    fn bytes(&mut self, len: usize) -> Result<&[u8], FlirtError> {
        let end = self
            .pos
            .checked_add(len)
            .filter(|&end| end <= self.bytes.len())
            .ok_or_else(|| FlirtError::Sig("truncated signature body".into()))?;
        let out = &self.bytes[self.pos..end];
        self.pos = end;
        Ok(out)
    }

    fn be16(&mut self) -> Result<u16, FlirtError> {
        Ok(u16::from_be_bytes([self.u8()?, self.u8()?]))
    }

    /// One or two bytes (`sub_815180`).
    fn short(&mut self) -> Result<u16, FlirtError> {
        let first = self.u8()?;
        if first & 0x80 == 0 {
            return Ok(u16::from(first));
        }
        Ok((u16::from(first & 0x7F) << 8) | u16::from(self.u8()?))
    }

    /// One to five bytes (`sub_815220`).
    fn long(&mut self) -> Result<u32, FlirtError> {
        let first = self.u8()?;
        if first & 0x80 == 0 {
            return Ok(u32::from(first));
        }
        if first & 0xC0 != 0xC0 {
            return Ok((u32::from(first & 0x7F) << 8) | u32::from(self.u8()?));
        }
        if first & 0xE0 != 0xE0 {
            let high = (u32::from(first & 0x3F) << 8) | u32::from(self.u8()?);
            return Ok((high << 16) | u32::from(self.be16()?));
        }
        Ok((u32::from(self.be16()?) << 16) | u32::from(self.be16()?))
    }
}

struct BodyDecoder<'a> {
    reader: Reader<'a>,
    /// Header version, with v5 and v6 read as v7.
    version: u8,
    pattern_size: usize,
    modules: Vec<Module>,
}

impl BodyDecoder<'_> {
    /// Offsets and lengths: short form up to v8, long form after
    /// (`sub_815370`).
    fn offset(&mut self) -> Result<u32, FlirtError> {
        if self.version > 8 {
            self.reader.long()
        } else {
            self.reader.short().map(u32::from)
        }
    }

    /// Decode one node. `depth` is the pattern length above it and `fixed`
    /// the number of non-variant bytes; IDA drops leaves reached without
    /// any fixed byte (and reads nothing for them).
    fn node(
        &mut self,
        pattern: Vec<Option<u8>>,
        depth: usize,
        fixed: usize,
    ) -> Result<Option<Node>, FlirtError> {
        let n_children = self.reader.short()?;
        if n_children == 0 {
            if fixed == 0 {
                return Ok(None);
            }
            let modules = self.leaf()?;
            return Ok(Some(Node {
                pattern,
                children: NodeChildren::Leaf(modules),
            }));
        }
        let mut children = Vec::with_capacity(usize::from(n_children));
        for _ in 0..n_children {
            let len = if self.version <= 9 {
                usize::from(self.reader.u8()?)
            } else {
                usize::from(self.reader.short()?)
            };
            // IDA only bounds each node by the pattern size. Real files
            // never exceed it in total, and bounding the total also bounds
            // the recursion depth on hostile input.
            if len == 0 || depth + len > self.pattern_size {
                return Err(FlirtError::Sig(format!(
                    "node pattern length {len} at depth {depth} exceeds pattern size {}",
                    self.pattern_size
                )));
            }
            let variant = self.variant_mask(len)?;
            let mut child_pattern = Vec::with_capacity(len);
            let mut child_fixed = 0;
            for i in 0..len {
                if variant.is_variant(len - 1 - i) {
                    child_pattern.push(None);
                } else {
                    child_pattern.push(Some(self.reader.u8()?));
                    child_fixed += 1;
                }
            }
            if let Some(child) = self.node(child_pattern, depth + len, fixed + child_fixed)? {
                children.push(child);
            }
        }
        Ok(Some(Node {
            pattern,
            children: NodeChildren::Inner(children),
        }))
    }

    /// `sub_8155C0`: the mask is appended to a bit vector least
    /// significant bit first, so bit `k` is read as `(mask >> k) & 1`.
    fn variant_mask(&mut self, len: usize) -> Result<VariantMask, FlirtError> {
        let reader = &mut self.reader;
        let bits = if len <= 0x0F {
            u64::from(reader.short()?).to_le_bytes().to_vec()
        } else if len <= 0x20 {
            u64::from(reader.long()?).to_le_bytes().to_vec()
        } else if len <= 0x40 {
            let high = u64::from(reader.long()?);
            let low = u64::from(reader.long()?);
            ((high << 32) | low).to_le_bytes().to_vec()
        } else {
            reader.bytes(len.div_ceil(8))?.to_vec()
        };
        Ok(VariantMask(bits))
    }

    fn leaf(&mut self) -> Result<Vec<ModuleId>, FlirtError> {
        let mut ids = Vec::new();
        loop {
            let crc_len = self.reader.u8()?;
            let crc16 = self.reader.be16()?;
            loop {
                let (module, flags) = self.module(crc_len, crc16)?;
                let id = u32::try_from(self.modules.len())
                    .map_err(|_| FlirtError::Sig("too many modules".into()))?;
                ids.push(ModuleId(id));
                self.modules.push(module);
                if flags & parse_flags::MORE_MODULES_SAME_CRC == 0 {
                    if flags & parse_flags::MORE_CRC_GROUPS == 0 {
                        return Ok(ids);
                    }
                    break;
                }
            }
        }
    }

    fn module(&mut self, crc_len: u8, crc16: u16) -> Result<(Module, u8), FlirtError> {
        let length = self.offset()?;
        let mut names = Vec::new();
        let mut offset = 0i32;
        let flags = loop {
            let delta = self.offset()? as i32;
            let (name, name_flags, flags) = self.public_name()?;
            offset = if name_flags & NEGATIVE_NAME_OFFSET != 0 {
                offset.wrapping_sub(delta)
            } else {
                offset.wrapping_add(delta)
            };
            names.push(PublicName {
                offset,
                name,
                flags: NameFlags::from_bits(name_flags & !NEGATIVE_NAME_OFFSET),
            });
            if flags & parse_flags::MORE_NAMES == 0 {
                break flags;
            }
        };

        let mut tail_bytes = Vec::new();
        if flags & parse_flags::TAIL_BYTES != 0 {
            let count = if self.version <= 7 {
                1
            } else {
                self.reader.u8()?
            };
            for _ in 0..count {
                let offset = self.offset()?;
                let value = self.reader.u8()?;
                tail_bytes.push(TailByte { offset, value });
            }
        }

        let mut reference = None;
        if flags & parse_flags::REFERENCE != 0 {
            // v8+ stores a count byte, but IDA reads exactly one reference.
            if self.version > 7 {
                self.reader.u8()?;
            }
            let offset = self.offset()? as i32;
            let mut len = usize::from(self.reader.u8()?);
            if len == 0 {
                len = usize::from(self.reader.short()?);
            }
            if len == 0 {
                return Err(FlirtError::Sig("empty referenced name".into()));
            }
            let raw = self.reader.bytes(len)?;
            // A trailing NUL marks a negative offset.
            let (raw, offset) = match raw.split_last() {
                Some((0, rest)) => (rest, offset.wrapping_neg()),
                _ => (raw, offset),
            };
            reference = Some(ModuleRef {
                offset,
                name: String::from_utf8_lossy(raw).into_owned(),
            });
        }

        let module = Module {
            length,
            crc_len,
            crc16,
            names,
            tail_bytes,
            reference,
        };
        Ok((module, flags))
    }

    /// `sub_815440`: an optional flag byte below 0x20, then name bytes up
    /// to the next byte below 0x20, which holds the parse flags.
    fn public_name(&mut self) -> Result<(String, u8, u8), FlirtError> {
        let mut byte = self.reader.u8()?;
        let mut name_flags = 0;
        if byte < 0x20 {
            name_flags = byte;
            byte = self.reader.u8()?;
        }
        let mut name = Vec::new();
        while byte >= 0x20 {
            name.push(byte);
            byte = self.reader.u8()?;
        }
        Ok((
            String::from_utf8_lossy(&name).into_owned(),
            name_flags,
            byte,
        ))
    }
}

struct VariantMask(Vec<u8>);

impl VariantMask {
    fn is_variant(&self, bit: usize) -> bool {
        self.0
            .get(bit / 8)
            .is_some_and(|byte| byte >> (bit % 8) & 1 != 0)
    }
}
