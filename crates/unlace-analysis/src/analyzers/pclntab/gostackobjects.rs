//! (unlace `gostackobjects`) The `FUNCDATA_StackObjects` table of a Go function: one
//! record per address-taken local or argument, with its frame offset, size and pointer
//! prefix.
//!
//! Layout on go1.18 and later (`runtime/symtab.go` `stackObjectRecord`, emitted by the
//! compiler's `emitStackObjects`; IDA's golang plugin `sub_22800` declares the same
//! record for these versions): a `uintptr` count, then per object `int32 off` (from
//! `varp` when negative, from `argp` otherwise), `int32 size`, `int32 ptrdata`
//! (negative when a GC program describes the type) and `uint32 gcdataoff` (an offset
//! from `moduledata.gcdata`, not resolved here). go1.16 and go1.17 store the pointer
//! map as an absolute pointer and are not read.
//!
//! Every length is checked against the image before it is read, and the count is
//! capped at [`MAX_OBJECTS`] so a corrupt word cannot allocate without bound.

use super::{End, ImageBytes, rd_ptr, rd_u32};

/// Bytes of one record on go1.18 and later.
const RECORD: usize = 16;
/// Objects read from one table: a bound against a corrupt count.
pub(super) const MAX_OBJECTS: usize = 4096;

/// One stack object: `off` is its frame offset, `size` its byte size, and `ptrdata`
/// the length of its pointer prefix (negative when a GC program describes the type).
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub(super) struct StackObject {
    pub(super) off: i32,
    pub(super) size: i32,
    pub(super) ptrdata: i32,
}

/// The table at `at`: its count word, then the records. An empty table reads as none.
pub(super) fn read(img: &ImageBytes, at: u64, ptr_size: u8, end: End) -> Option<Vec<StackObject>> {
    let count = rd_ptr(img.read(at, usize::from(ptr_size))?, ptr_size, end);
    let count = usize::try_from(count).ok().filter(|&n| n <= MAX_OBJECTS)?;
    if count == 0 {
        return Some(Vec::new());
    }
    let body = img.read(
        at.checked_add(u64::from(ptr_size))?,
        count.checked_mul(RECORD)?,
    )?;
    parse(body, end)
}

/// The records in `body`, which must hold a whole number of them. A negative size
/// is not a frame object and rejects the table.
pub(super) fn parse(body: &[u8], end: End) -> Option<Vec<StackObject>> {
    if body.len() % RECORD != 0 {
        return None;
    }
    body.chunks_exact(RECORD)
        .map(|r| {
            let size = rd_u32(&r[4..], end) as i32;
            (size >= 0).then(|| StackObject {
                off: rd_u32(r, end) as i32,
                size,
                ptrdata: rd_u32(&r[8..], end) as i32,
            })
        })
        .collect()
}

#[cfg(test)]
mod tests;
