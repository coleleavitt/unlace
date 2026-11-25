//! The metadata exchange packets: `PULL_MD`, `PUSH_MD`, their results, and `RPC_FAIL`/`RPC_NOTIFY`.
//!
//! Layouts (all integers `pack_dd`, see [`crate::wire`]):
//!
//! ```text
//!   PatternId        dd type (1 = MD5), bytes data
//!   FuncInfo         cstr name, dd size, bytes metadata
//!   PULL_MD          dd flags, dd n + n×dd keys, dd m + m×PatternId
//!   PULL_MD_RESULT   dd m + m×dd code, dd k + k×(FuncInfo, dd popularity)   ; one result per code 0
//!   PUSH_MD          dd flags, cstr idb, cstr input path, u8[16] input md5, cstr hostname,
//!                    dd n + n×(FuncInfo, PatternId), dd n + n×dq ea
//!   PUSH_MD_RESULT   dd n + n×dd code
//!   RPC_FAIL         dd code, cstr message        ; RPC_NOTIFY has the same shape
//! ```

use std::io;

use crate::protocol::Packet;
use crate::wire::{Decoder, Frame, write_cstring, write_raw_bytes, write_u64_split, write_vuint32};

/// `PatternId.type` of a calcrel MD5 key.
pub const PATTERN_MD5: u32 = 1;

/// Per-function result codes (`PDRES_*`).
pub mod codes {
    pub const BAD_PATTERN: i32 = -3;
    pub const NOT_FOUND: i32 = -2;
    pub const ERROR: i32 = -1;
    pub const OK: i32 = 0;
    pub const ADDED: i32 = 1;
}

/// `PUSH_MD` flags: the low nibble is the override mode.
pub mod push_mode {
    pub const MASK: u32 = 0xF;
    pub const OVERRIDE_IF_BETTER: u32 = 0x0;
    pub const OVERRIDE: u32 = 0x1;
    pub const DO_NOT_OVERRIDE: u32 = 0x2;
    pub const MERGE: u32 = 0x3;
}

#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct PatternId {
    pub kind: u32,
    pub data: Vec<u8>,
}

impl PatternId {
    pub fn md5(hash: [u8; 16]) -> Self {
        Self {
            kind: PATTERN_MD5,
            data: hash.to_vec(),
        }
    }

    fn write(&self, out: &mut Vec<u8>) {
        write_vuint32(out, self.kind);
        write_raw_bytes(out, &self.data);
    }

    fn read(d: &mut Decoder<'_>) -> io::Result<Self> {
        Ok(Self {
            kind: d.dd()?,
            data: d.bytes()?,
        })
    }
}

#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct FuncInfo {
    pub name: String,
    pub size: u32,
    pub metadata: Vec<u8>,
}

impl FuncInfo {
    fn write(&self, out: &mut Vec<u8>) -> io::Result<()> {
        write_cstring(out, &self.name)?;
        write_vuint32(out, self.size);
        write_raw_bytes(out, &self.metadata);
        Ok(())
    }

    fn read(d: &mut Decoder<'_>) -> io::Result<Self> {
        Ok(Self {
            name: d.cstr()?,
            size: d.dd()?,
            metadata: d.bytes()?,
        })
    }
}

/// A pulled function: its metadata and how many pushes the server has seen for it.
#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct FuncInfoAndFrequency {
    pub info: FuncInfo,
    pub popularity: u32,
}

/// A pushed function: its metadata and its key.
#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct FuncInfoAndPattern {
    pub info: FuncInfo,
    pub pattern: PatternId,
}

fn io_invalid(msg: String) -> io::Error {
    io::Error::new(io::ErrorKind::InvalidData, msg)
}

fn expect_end(d: &Decoder<'_>, what: &str) -> io::Result<()> {
    if d.is_empty() {
        Ok(())
    } else {
        Err(io_invalid(format!(
            "{what}: {} trailing byte(s)",
            d.remaining().len()
        )))
    }
}

fn count_u32(n: usize, what: &str) -> io::Result<u32> {
    u32::try_from(n).map_err(|_| io_invalid(format!("{what}: too many items")))
}

#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct PullMd {
    pub flags: u32,
    pub keys: Vec<u32>,
    pub patterns: Vec<PatternId>,
}

impl PullMd {
    pub fn encode(&self) -> io::Result<Vec<u8>> {
        let mut out = Vec::new();
        write_vuint32(&mut out, self.flags);
        write_vuint32(&mut out, count_u32(self.keys.len(), "PULL_MD")?);
        for &k in &self.keys {
            write_vuint32(&mut out, k);
        }
        write_vuint32(&mut out, count_u32(self.patterns.len(), "PULL_MD")?);
        for p in &self.patterns {
            p.write(&mut out);
        }
        Ok(out)
    }

    pub fn decode(buf: &[u8]) -> io::Result<Self> {
        let mut d = Decoder::new(buf);
        let flags = d.dd()?;
        let n = d.count("PULL_MD keys")?;
        let mut keys = Vec::with_capacity(n);
        for _ in 0..n {
            keys.push(d.dd()?);
        }
        let n = d.count("PULL_MD patterns")?;
        let mut patterns = Vec::with_capacity(n);
        for _ in 0..n {
            patterns.push(PatternId::read(&mut d)?);
        }
        expect_end(&d, "PULL_MD")?;
        Ok(Self {
            flags,
            keys,
            patterns,
        })
    }

    pub fn to_frame(&self) -> io::Result<Frame> {
        Ok(Frame::new(Packet::PullMd.as_u8(), self.encode()?))
    }
}

#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct PullMdResult {
    pub codes: Vec<i32>,
    pub results: Vec<FuncInfoAndFrequency>,
}

impl PullMdResult {
    /// Build the result for a pull from one optional answer per requested pattern.
    pub fn from_answers(answers: Vec<Option<FuncInfoAndFrequency>>) -> Self {
        let mut out = Self::default();
        for a in answers {
            match a {
                Some(found) => {
                    out.codes.push(codes::OK);
                    out.results.push(found);
                }
                None => out.codes.push(codes::NOT_FOUND),
            }
        }
        out
    }

    /// One entry per requested pattern: the result for a code-0 entry, else `None`.
    pub fn answers(&self) -> io::Result<Vec<Option<FuncInfoAndFrequency>>> {
        let mut results = self.results.iter();
        let mut out = Vec::with_capacity(self.codes.len());
        for &code in &self.codes {
            if code == codes::OK {
                let r = results.next().ok_or_else(|| {
                    io_invalid("PULL_MD_RESULT: fewer results than OK codes".into())
                })?;
                out.push(Some(r.clone()));
            } else {
                out.push(None);
            }
        }
        Ok(out)
    }

    pub fn encode(&self) -> io::Result<Vec<u8>> {
        let mut out = Vec::new();
        write_vuint32(&mut out, count_u32(self.codes.len(), "PULL_MD_RESULT")?);
        for &c in &self.codes {
            write_vuint32(&mut out, c as u32);
        }
        write_vuint32(&mut out, count_u32(self.results.len(), "PULL_MD_RESULT")?);
        for r in &self.results {
            r.info.write(&mut out)?;
            write_vuint32(&mut out, r.popularity);
        }
        Ok(out)
    }

    pub fn decode(buf: &[u8]) -> io::Result<Self> {
        let mut d = Decoder::new(buf);
        let n = d.count("PULL_MD_RESULT codes")?;
        let mut codes = Vec::with_capacity(n);
        for _ in 0..n {
            codes.push(d.dd_i32()?);
        }
        let n = d.count("PULL_MD_RESULT results")?;
        let mut results = Vec::with_capacity(n);
        for _ in 0..n {
            let info = FuncInfo::read(&mut d)?;
            let popularity = d.dd()?;
            results.push(FuncInfoAndFrequency { info, popularity });
        }
        Ok(Self { codes, results })
    }

    pub fn to_frame(&self) -> io::Result<Frame> {
        Ok(Frame::new(Packet::PullMdResult.as_u8(), self.encode()?))
    }
}

#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct PushMd {
    pub flags: u32,
    pub idb: String,
    pub input_path: String,
    pub input_md5: [u8; 16],
    pub hostname: String,
    pub contents: Vec<FuncInfoAndPattern>,
    pub eas: Vec<u64>,
}

impl PushMd {
    pub fn encode(&self) -> io::Result<Vec<u8>> {
        let mut out = Vec::new();
        write_vuint32(&mut out, self.flags);
        write_cstring(&mut out, &self.idb)?;
        write_cstring(&mut out, &self.input_path)?;
        out.extend_from_slice(&self.input_md5);
        write_cstring(&mut out, &self.hostname)?;
        write_vuint32(&mut out, count_u32(self.contents.len(), "PUSH_MD")?);
        for c in &self.contents {
            c.info.write(&mut out)?;
            c.pattern.write(&mut out);
        }
        write_vuint32(&mut out, count_u32(self.eas.len(), "PUSH_MD")?);
        for &ea in &self.eas {
            write_u64_split(&mut out, ea);
        }
        Ok(out)
    }

    pub fn decode(buf: &[u8]) -> io::Result<Self> {
        let mut d = Decoder::new(buf);
        let flags = d.dd()?;
        let idb = d.cstr()?;
        let input_path = d.cstr()?;
        let input_md5 = d.fixed::<16>()?;
        let hostname = d.cstr()?;
        let n = d.count("PUSH_MD contents")?;
        let mut contents = Vec::with_capacity(n);
        for _ in 0..n {
            let info = FuncInfo::read(&mut d)?;
            let pattern = PatternId::read(&mut d)?;
            contents.push(FuncInfoAndPattern { info, pattern });
        }
        // Older clients stop after the contents.
        let mut eas = Vec::new();
        if !d.is_empty() {
            let n = d.count("PUSH_MD eas")?;
            eas.reserve(n);
            for _ in 0..n {
                eas.push(d.dq()?);
            }
        }
        Ok(Self {
            flags,
            idb,
            input_path,
            input_md5,
            hostname,
            contents,
            eas,
        })
    }

    pub fn mode(&self) -> u32 {
        self.flags & push_mode::MASK
    }

    pub fn to_frame(&self) -> io::Result<Frame> {
        Ok(Frame::new(Packet::PushMd.as_u8(), self.encode()?))
    }
}

#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct PushMdResult {
    pub codes: Vec<i32>,
}

impl PushMdResult {
    pub fn encode(&self) -> io::Result<Vec<u8>> {
        let mut out = Vec::new();
        write_vuint32(&mut out, count_u32(self.codes.len(), "PUSH_MD_RESULT")?);
        for &c in &self.codes {
            write_vuint32(&mut out, c as u32);
        }
        Ok(out)
    }

    pub fn decode(buf: &[u8]) -> io::Result<Self> {
        let mut d = Decoder::new(buf);
        let n = d.count("PUSH_MD_RESULT")?;
        let mut codes = Vec::with_capacity(n);
        for _ in 0..n {
            codes.push(d.dd_i32()?);
        }
        Ok(Self { codes })
    }

    pub fn to_frame(&self) -> io::Result<Frame> {
        Ok(Frame::new(Packet::PushMdResult.as_u8(), self.encode()?))
    }
}

/// `RPC_FAIL` (and `RPC_NOTIFY`, same shape): a result code and a message.
#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct RpcFail {
    pub code: i32,
    pub message: String,
}

impl RpcFail {
    pub fn new(message: impl Into<String>) -> Self {
        Self {
            code: codes::ERROR,
            message: message.into(),
        }
    }

    pub fn encode(&self) -> Vec<u8> {
        let mut out = Vec::new();
        write_vuint32(&mut out, self.code as u32);
        // A message with a NUL is cut there rather than refused: this is the error path.
        let message = self.message.split('\0').next().unwrap_or("");
        let _ = write_cstring(&mut out, message);
        out
    }

    /// Decode leniently: an old peer that sent only a message still yields it.
    pub fn decode(buf: &[u8]) -> Self {
        let mut d = Decoder::new(buf);
        let parsed = d.dd_i32().and_then(|code| Ok((code, d.cstr()?)));
        match parsed {
            Ok((code, message)) => Self { code, message },
            Err(_) => Self {
                code: codes::ERROR,
                message: String::from_utf8_lossy(buf)
                    .trim_end_matches('\0')
                    .to_string(),
            },
        }
    }

    pub fn to_frame(&self) -> Frame {
        Frame::new(Packet::RpcFail.as_u8(), self.encode())
    }
}

#[cfg(test)]
mod tests;
