//! The function-metadata blob a `FuncInfo` carries: a sequence of chunks, each a `pack_dd` key and a
//! `pack_dd`-length byte string (`metadata_t`; zhangyoufu/lumina `MdKey`, lumen `parse_metadata`).
//!
//! Only the chunks a decompiler can apply are interpreted here: the function type (`MDK_TYPE`, an IDA
//! serialized type, see [`crate::tinfo`]) and the function comments (`MDK_FCMT`/`MDK_FRPTCMT`). Every
//! other chunk is kept as opaque bytes, so a blob round-trips unchanged.

use std::io;

use crate::wire::{Decoder, write_raw_bytes, write_vuint32};

/// Chunk keys (`MDK_*`).
pub mod keys {
    pub const TYPE: u32 = 1;
    pub const VD_ELAPSED: u32 = 2;
    pub const FCMT: u32 = 3;
    pub const FRPTCMT: u32 = 4;
    pub const CMTS: u32 = 5;
    pub const RPTCMTS: u32 = 6;
    pub const EXTRACMTS: u32 = 7;
    pub const USER_STKPNTS: u32 = 8;
    pub const FRAME_DESC: u32 = 9;
    pub const OPS: u32 = 10;

    /// The `MDK_*` name of a key, for reports.
    pub fn name(key: u32) -> &'static str {
        match key {
            TYPE => "type",
            VD_ELAPSED => "vd_elapsed",
            FCMT => "function_comment",
            FRPTCMT => "repeatable_function_comment",
            CMTS => "comments",
            RPTCMTS => "repeatable_comments",
            EXTRACMTS => "extra_comments",
            USER_STKPNTS => "user_stack_points",
            FRAME_DESC => "frame",
            OPS => "operands",
            _ => "unknown",
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Chunk {
    pub key: u32,
    pub data: Vec<u8>,
}

/// Split a metadata blob into its chunks.
pub fn decode_chunks(buf: &[u8]) -> io::Result<Vec<Chunk>> {
    let mut d = Decoder::new(buf);
    let mut out = Vec::new();
    while !d.is_empty() {
        let key = d.dd()?;
        let data = d.bytes()?;
        out.push(Chunk { key, data });
    }
    Ok(out)
}

pub fn encode_chunks(chunks: &[Chunk]) -> Vec<u8> {
    let mut out = Vec::new();
    for c in chunks {
        write_vuint32(&mut out, c.key);
        write_raw_bytes(&mut out, &c.data);
    }
    out
}

/// What a decompiler can take from a metadata blob.
#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct Summary {
    /// The `MDK_TYPE` chunk, undecoded.
    pub type_info: Option<Vec<u8>>,
    pub comment: Option<String>,
    pub repeatable_comment: Option<String>,
    /// Every key present, in blob order.
    pub keys: Vec<u32>,
    /// The blob did not split into chunks cleanly.
    pub malformed: bool,
}

fn text(data: &[u8]) -> Option<String> {
    let end = data.iter().position(|&b| b == 0).unwrap_or(data.len());
    let s = String::from_utf8_lossy(&data[..end]).into_owned();
    (!s.is_empty()).then_some(s)
}

/// Read the applicable parts of a blob; never fails.
pub fn summarize(blob: &[u8]) -> Summary {
    let mut out = Summary::default();
    let chunks = match decode_chunks(blob) {
        Ok(c) => c,
        Err(_) => {
            out.malformed = true;
            return out;
        }
    };
    for c in chunks {
        out.keys.push(c.key);
        match c.key {
            keys::TYPE => out.type_info = Some(c.data),
            keys::FCMT => out.comment = text(&c.data),
            keys::FRPTCMT => out.repeatable_comment = text(&c.data),
            _ => {}
        }
    }
    out
}

/// A blob holding a function type and an optional function comment.
pub fn build(type_info: Option<Vec<u8>>, comment: Option<&str>) -> Vec<u8> {
    let mut chunks = Vec::new();
    if let Some(data) = type_info {
        chunks.push(Chunk {
            key: keys::TYPE,
            data,
        });
    }
    if let Some(c) = comment.filter(|c| !c.is_empty()) {
        chunks.push(Chunk {
            key: keys::FCMT,
            data: c.as_bytes().to_vec(),
        });
    }
    encode_chunks(&chunks)
}

#[cfg(test)]
mod tests;
