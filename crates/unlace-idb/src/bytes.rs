//! Per-address flags and bytes: ID1, the IDA 9.1+ sparse `IDAS` flags and the older ID2 (`id1.rs`, `id1/sparse.rs`, `id1/flag.rs`, `id2.rs`, `bytes_info.rs`).
//!
//! Ported from idb-rs (https://github.com/Vector35/idb-rs, Apache-2.0), Copyright Rubens
//! Brandao and the idb-rs contributors; see NOTICE.

use crate::Result;
use crate::reader::{Reader, Width, err};

const PAGE_SIZE: usize = 0x2000;
const MS_VAL: u32 = 0x0000_00ff;
const FF_IVL: u32 = 0x0000_0100;
const MS_CLS: u32 = 0x0000_0600;
const FF_CODE: u32 = 0x0000_0600;
const FF_DATA: u32 = 0x0000_0400;
const FF_TAIL: u32 = 0x0000_0200;
const FF_COMM: u32 = 0x0000_0800;
const FF_LINE: u32 = 0x0000_2000;
const FF_FUNC: u32 = 0x1000_0000;
const DT_TYPE: u32 = 0xf000_0000;
const FF_STRUCT: u32 = 0x6000_0000;
/// The most addresses one ID1 or IDAS range may cover.
const MAX_RANGE: u64 = 1 << 32;

/// The 32 flag bits IDA keeps for one address.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub(crate) struct Flags(pub(crate) u32);

impl Flags {
    pub(crate) fn value(self) -> Option<u8> {
        (self.0 & FF_IVL != 0).then_some((self.0 & MS_VAL) as u8)
    }
    pub(crate) fn is_tail(self) -> bool {
        self.0 & MS_CLS == FF_TAIL
    }
    pub(crate) fn is_code(self) -> bool {
        self.0 & MS_CLS == FF_CODE
    }
    pub(crate) fn is_data(self) -> bool {
        self.0 & MS_CLS == FF_DATA
    }
    pub(crate) fn has_comment(self) -> bool {
        self.0 & FF_COMM != 0
    }
    pub(crate) fn has_comment_ext(self) -> bool {
        self.0 & FF_LINE != 0
    }
    /// Code that starts a function, or a structure: the items IDA attaches a type to.
    pub(crate) fn may_have_type(self) -> bool {
        (self.is_code() && self.0 & FF_FUNC != 0)
            || (self.is_data() && self.0 & DT_TYPE == FF_STRUCT)
    }
}

/// One range of ID1: its first address and a flag word per address.
struct Range1 {
    start: u64,
    flags: Vec<u32>,
}

/// The sparse flags of IDA 9.1+ (`IDAS`).
#[derive(Default)]
struct Sparse {
    ranges: Vec<(u64, u64)>,
    valued: Vec<(u64, u64)>,
    /// `(address, flags, end of the item covering the following bytes)`.
    records: Vec<(u64, u32, u64)>,
}

fn contains(ranges: &[(u64, u64)], value: u64) -> bool {
    let i = ranges.partition_point(|r| r.1 <= value);
    ranges.get(i).is_some_and(|r| r.0 <= value)
}

impl Sparse {
    fn read(data: &[u8]) -> Result<Self> {
        if data.get(..8) != Some(b"IDAS\x1d\xa5\x55\x55".as_slice()) {
            return err("invalid IDAS magic");
        }
        let mut r = Reader::new(&data[8..]);
        if r.unpack_dd()? != 0 {
            return err("unknown IDAS version");
        }
        let read_ranges = |r: &mut Reader<'_>| -> Result<Vec<(u64, u64)>> {
            let count = r.unpack_dd()?;
            let mut end = 0u64;
            let mut out = Vec::new();
            for _ in 0..count {
                let start = end.checked_add(r.unpack_dq()?);
                let size = r.unpack_dq()?;
                let (Some(start), true) = (start, size <= MAX_RANGE) else {
                    return err("an IDAS range overflows");
                };
                end = start
                    .checked_add(size)
                    .ok_or_else(|| crate::Error::Format("an IDAS range overflows".into()))?;
                out.push((start, end));
            }
            Ok(out)
        };
        let ranges = read_ranges(&mut r)?;
        let valued = read_ranges(&mut r)?;
        let mut raw = Vec::new();
        let mut address = 0u64;
        loop {
            address = address.wrapping_add(r.unpack_dq()?);
            if address == u64::MAX {
                break;
            }
            let flags = r.unpack_dd()?;
            let size = r.unpack_dq()?;
            raw.push((address, flags, size));
        }
        raw.sort_unstable_by_key(|r| r.0);
        let mut item_end = 0u64;
        let records = raw
            .into_iter()
            .map(|(address, flags, size)| {
                if size > 0 {
                    item_end = address.saturating_add(size);
                }
                (address, flags, item_end)
            })
            .collect();
        Ok(Sparse {
            ranges,
            valued,
            records,
        })
    }

    fn flags(&self, address: u64) -> Option<u32> {
        if !contains(&self.ranges, address) {
            return None;
        }
        let i = self.records.partition_point(|r| r.0 <= address);
        let flags = match i.checked_sub(1).map(|i| self.records[i]) {
            Some((a, flags, _)) if a == address => flags,
            Some((_, _, end)) if address < end => FF_TAIL,
            _ => 0,
        };
        Some(if contains(&self.valued, address) {
            flags | FF_IVL
        } else {
            flags
        })
    }
}

/// The flags and bytes of every address the database holds.
#[derive(Default)]
pub(crate) struct Bytes {
    ranges: Vec<Range1>,
    sparse: Sparse,
    /// ID2: `(address, flags)` of items, address-ordered.
    id2: Vec<(u64, u32)>,
}

impl Bytes {
    pub(crate) fn read(
        id1: Option<&[u8]>,
        seg: Option<&[u8]>,
        id2: Option<&[u8]>,
        w: Width,
    ) -> Result<Self> {
        let mut bytes = Bytes::default();
        if let Some(id1) = id1 {
            bytes.ranges = read_id1(id1, w)?;
        }
        if let Some(seg) = seg {
            bytes.sparse = Sparse::read(seg)?;
        }
        if let Some(id2) = id2 {
            bytes.id2 = read_id2(id2, w)?;
        }
        Ok(bytes)
    }

    pub(crate) fn flags(&self, address: u64) -> Option<Flags> {
        let i = self.ranges.partition_point(|r| r.start <= address);
        if let Some(range) = i.checked_sub(1).map(|i| &self.ranges[i])
            && let Some(offset) = usize::try_from(address - range.start).ok()
            && let Some(flags) = range.flags.get(offset)
        {
            return Some(Flags(*flags));
        }
        if let Some(flags) = self.sparse.flags(address) {
            return Some(Flags(flags));
        }
        self.id2
            .binary_search_by_key(&address, |e| e.0)
            .ok()
            .map(|i| Flags(self.id2[i].1))
    }

    /// Every address with flags that is not the tail of an item, in address order.
    pub(crate) fn heads(&self) -> Vec<(u64, Flags)> {
        let mut out = Vec::new();
        for range in &self.ranges {
            for (i, flags) in range.flags.iter().enumerate() {
                let flags = Flags(*flags);
                if !flags.is_tail() {
                    out.push((range.start + i as u64, flags));
                }
            }
        }
        for &(address, flags, _) in &self.sparse.records {
            let flags = Flags(flags);
            if contains(&self.sparse.ranges, address) && !flags.is_tail() {
                out.push((address, flags));
            }
        }
        for &(address, flags) in &self.id2 {
            let flags = Flags(flags);
            if !flags.is_tail() && !self.ranges_hold(address) {
                out.push((address, flags));
            }
        }
        out.sort_unstable_by_key(|h| h.0);
        out.dedup_by_key(|h| h.0);
        out
    }

    fn ranges_hold(&self, address: u64) -> bool {
        let i = self.ranges.partition_point(|r| r.start <= address);
        i.checked_sub(1)
            .is_some_and(|i| address - self.ranges[i].start < self.ranges[i].flags.len() as u64)
    }
}

fn flag_words(data: &[u8], len: u64) -> Result<Vec<u32>> {
    let bytes = usize::try_from(len)
        .ok()
        .and_then(|n| n.checked_mul(4))
        .filter(|n| *n <= data.len())
        .ok_or_else(|| crate::Error::Format("an ID1 range runs past its section".into()))?;
    Ok(data[..bytes]
        .as_chunks::<4>().0.iter()
        .map(|c| u32::from_le_bytes([c[0], c[1], c[2], c[3]]))
        .collect())
}

fn read_id1(data: &[u8], w: Width) -> Result<Vec<Range1>> {
    let mut r = Reader::new(data);
    let magic = r.take(4)?;
    // (start, end, Some(offset)) or sequential data after the header page.
    let mut ranges: Vec<(u64, u64, Option<u64>)> = Vec::new();
    match magic {
        b"Va0\0" | b"Va1\0" | b"Va2\0" | b"Va3\0" | b"Va4\0" => {
            let count = r.u16()?;
            r.u16()?;
            for _ in 0..count {
                let start = r.usize(w)?;
                let end = r.usize(w)?;
                let offset = r.usize(w)?;
                ranges.push((start, end, Some(offset)));
            }
        }
        b"VA*\0" => {
            let kind = r.u32()?;
            let count = r.u32()?;
            if r.u32()? != 2048 {
                return err("unexpected ID1 header");
            }
            r.u32()?;
            if count > 1 << 20 {
                return err("too many ID1 ranges");
            }
            for _ in 0..count {
                let start = r.usize(w)?;
                let end = r.usize(w)?;
                let offset = match kind {
                    3 => None,
                    4 => Some(r.usize(w)?),
                    other => return err(format!("unknown ID1 VA* kind {other}")),
                };
                ranges.push((start, end, offset));
            }
        }
        _ => return err("invalid ID1 magic"),
    }
    let mut out = Vec::with_capacity(ranges.len());
    let mut sequential = PAGE_SIZE;
    for (start, end, offset) in ranges {
        if end < start || end - start > MAX_RANGE {
            return err("an invalid ID1 range");
        }
        let len = end - start;
        let at = match offset {
            Some(offset) => usize::try_from(offset).unwrap_or(usize::MAX),
            None => {
                let at = sequential;
                sequential = sequential.saturating_add((len as usize).saturating_mul(4));
                at
            }
        };
        let Some(slice) = data.get(at..) else {
            return err("an ID1 range starts past its section");
        };
        out.push(Range1 {
            start,
            flags: flag_words(slice, len)?,
        });
    }
    out.sort_unstable_by_key(|r| r.start);
    if out
        .windows(2)
        .any(|p| p[0].start + p[0].flags.len() as u64 > p[1].start)
    {
        return err("ID1 ranges overlap");
    }
    Ok(out)
}

fn read_id2(data: &[u8], w: Width) -> Result<Vec<(u64, u32)>> {
    if data.get(..9) != Some(b"IDAS\x1d\xa5UU\x00".as_slice()) {
        return err("invalid ID2 magic");
    }
    let mut r = Reader::new(&data[9..]);
    for _ in 0..2 {
        let n = r.unpack_dd()?;
        for _ in 0..n {
            r.unpack_usize(w)?;
            r.unpack_usize(w)?;
        }
    }
    let mut out = Vec::new();
    let mut address = 0u64;
    loop {
        address = address
            .checked_add(r.unpack_usize(w)?)
            .filter(|a| *a <= w.max())
            .ok_or_else(|| crate::Error::Format("an ID2 address wraps".into()))?;
        if address == w.max() {
            break;
        }
        let flags = r.unpack_dd()?;
        r.unpack_usize(w)?;
        out.push((address, flags));
    }
    out.sort_unstable_by_key(|e| e.0);
    out.dedup_by_key(|e| e.0);
    Ok(out)
}
