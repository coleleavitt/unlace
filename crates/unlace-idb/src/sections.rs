//! The IDB container: its header, the sections it holds and their compression (`lib.rs`).
//!
//! Ported from idb-rs (https://github.com/Vector35/idb-rs, Apache-2.0), Copyright Rubens
//! Brandao and the idb-rs contributors; see NOTICE.

use std::io::Read;

use crate::Result;
use crate::reader::{Reader, err};

/// The most a section, or a compressed database, may inflate to.
const MAX_INFLATED: u64 = 4 << 30;

/// The raw (decompressed) sections of a database.
pub(crate) struct Sections {
    /// An `.i64` (`IDA2`) rather than an `.idb`.
    pub(crate) wide: bool,
    /// The `IDA0` format of IDA 4, whose ID0 header differs.
    pub(crate) ida0: bool,
    pub(crate) id0: Option<Vec<u8>>,
    pub(crate) id1: Option<Vec<u8>>,
    pub(crate) id2: Option<Vec<u8>>,
    pub(crate) nam: Option<Vec<u8>>,
    pub(crate) til: Option<Vec<u8>>,
    /// IDA 9.1+: the sparse flags of the ranges without file bytes (`IDAS`).
    pub(crate) seg: Option<Vec<u8>>,
}

#[derive(Clone, Copy, PartialEq, Eq)]
enum Compression {
    None,
    Zlib,
    Zstd,
}

fn compression(raw: u8) -> Result<Compression> {
    match raw {
        0 => Ok(Compression::None),
        2 => Ok(Compression::Zlib),
        3 => Ok(Compression::Zstd),
        other => err(format!("unknown section compression {other}")),
    }
}

fn inflate(data: &[u8], how: Compression) -> Result<Vec<u8>> {
    let mut out = Vec::new();
    match how {
        Compression::None => out.extend_from_slice(data),
        Compression::Zlib => {
            flate2::read::ZlibDecoder::new(data)
                .take(MAX_INFLATED)
                .read_to_end(&mut out)?;
        }
        Compression::Zstd => {
            let decoder = ruzstd::decoding::StreamingDecoder::new(data)
                .map_err(|e| crate::Error::Format(format!("zstd: {e}")))?;
            decoder.take(MAX_INFLATED).read_to_end(&mut out)?;
        }
    }
    Ok(out)
}

/// A section of a pre-9.1 database: a header (compression, length) at `offset`, then
/// the data. `wide_len` says whether the length is 8 bytes (database versions 5 and 6).
fn separated(file: &[u8], offset: u64, wide_len: bool) -> Result<Option<Vec<u8>>> {
    if offset == 0 {
        return Ok(None);
    }
    let Some(start) = usize::try_from(offset).ok().filter(|o| *o < file.len()) else {
        return err(format!(
            "section offset {offset:#x} is past the end of the file"
        ));
    };
    let mut r = Reader::new(&file[start..]);
    let how = compression(r.u8()?)?;
    let len = if wide_len {
        r.u64()?
    } else {
        u64::from(r.u32()?)
    };
    let len = usize::try_from(len).map_err(|_| crate::Error::Format("section too large".into()))?;
    let data = r.take(len)?;
    inflate(data, how).map(Some)
}

/// Split a database file into its sections.
pub(crate) fn read(file: &[u8]) -> Result<Sections> {
    let mut r = Reader::new(file);
    let magic = r.take(4)?;
    let (ida0, wide) = match magic {
        b"IDA0" => (true, false),
        b"IDA1" => (false, false),
        b"IDA2" => (false, true),
        _ => return err("not an IDA database (no IDA0/IDA1/IDA2 magic)"),
    };
    if r.u16()? != 0 {
        return err("unexpected IDB header padding");
    }
    let offsets = r.take(20)?;
    let u32_at = |i: usize| {
        u64::from(u32::from_le_bytes([
            offsets[i],
            offsets[i + 1],
            offsets[i + 2],
            offsets[i + 3],
        ]))
    };
    let u64_at = |i: usize| {
        let mut b = [0u8; 8];
        b.copy_from_slice(&offsets[i..i + 8]);
        u64::from_le_bytes(b)
    };
    let signature = r.u32()?;
    let version = if signature == 0xAABB_CCDD {
        Some(r.u16()?)
    } else {
        None
    };
    match (ida0, version) {
        (true, None) => Ok(Sections {
            wide,
            ida0,
            id0: separated(file, u32_at(0), false)?,
            id1: separated(file, u32_at(4), false)?,
            nam: separated(file, u32_at(8), false)?,
            til: separated(file, u32_at(16), false)?,
            id2: None,
            seg: None,
        }),
        (true, Some(_)) | (false, None) => err("inconsistent IDB magic and version"),
        (false, Some(v @ (1 | 3 | 4))) => {
            let _unknown = r.u32()?;
            let _checksums = r.take(20)?;
            let id2 = if v == 1 {
                None
            } else {
                let offset = u64::from(r.u32()?);
                let _checksum = r.u32()?;
                separated(file, offset, false)?
            };
            Ok(Sections {
                wide,
                ida0,
                id0: separated(file, u32_at(0), false)?,
                id1: separated(file, u32_at(4), false)?,
                nam: separated(file, u32_at(8), false)?,
                til: separated(file, u32_at(16), false)?,
                id2,
                seg: None,
            })
        }
        (false, Some(5 | 6)) => {
            let nam = r.u64()?;
            let _seg = r.u64()?;
            let til = r.u64()?;
            let _checksums = r.take(20)?;
            let id2 = r.u64()?;
            Ok(Sections {
                wide,
                ida0,
                id0: separated(file, u64_at(0), true)?,
                id1: separated(file, u64_at(8), true)?,
                nam: separated(file, nam, true)?,
                til: separated(file, til, true)?,
                id2: separated(file, id2, true)?,
                seg: None,
            })
        }
        (false, Some(910 | 950)) => {
            if !wide {
                return err("a 9.1+ database must be 64-bit (IDA2)");
            }
            let how = compression(r.u8()?)?;
            let mut sizes = [0u64; 6];
            for size in &mut sizes {
                *size = r.u64()?;
            }
            let data_start = u64_at(8);
            let Some(start) = usize::try_from(data_start)
                .ok()
                .filter(|s| *s > 0 && *s <= file.len())
            else {
                return err("invalid IDB data offset");
            };
            let data = inflate(&file[start..], how)?;
            // id0, id1, nam, id2, til, seg, one after the other.
            let mut at = 0usize;
            let mut next = |size: u64| -> Result<Option<Vec<u8>>> {
                if size == 0 {
                    return Ok(None);
                }
                let size = usize::try_from(size)
                    .map_err(|_| crate::Error::Format("section too large".into()))?;
                let end = at
                    .checked_add(size)
                    .filter(|e| *e <= data.len())
                    .ok_or_else(|| {
                        crate::Error::Format("section past the end of the data".into())
                    })?;
                let section = data[at..end].to_vec();
                at = end;
                Ok(Some(section))
            };
            let id0 = next(sizes[0])?;
            let id1 = next(sizes[1])?;
            let nam = next(sizes[2])?;
            let id2 = next(sizes[3])?;
            let til = next(sizes[4])?;
            let seg = next(sizes[5])?;
            Ok(Sections {
                wide,
                ida0,
                id0,
                id1,
                id2,
                nam,
                til,
                seg,
            })
        }
        (false, Some(other)) => err(format!("unsupported IDB version {other}")),
    }
}
