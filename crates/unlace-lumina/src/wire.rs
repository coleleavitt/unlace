//! Lumina frame and primitive codec.
//!
//! A frame is a big-endian `u32` payload length (the id byte not counted), one packet-id byte and the
//! payload. Inside a payload, integers use IDA's `pack_dd` encoding ([`write_vuint32`]), a 64-bit
//! value is two of them (low half first, `pack_dq`), strings are NUL-terminated and byte vectors are a
//! `pack_dd` length followed by the bytes. Layouts follow the public reimplementations of the protocol
//! (zhangyoufu/lumina, naim94a/lumen, synacktiv/lumina_server) and the `lumina_server` v9.3 notes kept
//! with the original port (`sub_1692C0` frame reader, `sub_196CD0`/`sub_196ED0` `pack_dd`).

use std::io::{self, Read, Write};

/// Cap on a frame the peer declares, for packets other than the metadata transfers.
pub const DEFAULT_MAX_PAYLOAD: u32 = 1 << 20;

/// Cap on a `PULL_MD` request (50 MiB, as lumen enforces).
pub const MAX_PULL_PAYLOAD: u32 = 50 << 20;

/// Cap on a `PUSH_MD` request and on a `PULL_MD_RESULT` (200 MiB).
pub const MAX_PUSH_PAYLOAD: u32 = 200 << 20;

/// Cap on any item count read from a payload. A count is also bounded by the bytes left, since every
/// item takes at least one byte.
pub const MAX_ITEMS: usize = 1 << 20;

/// A decoded frame: the packet id and its payload (without the 5-byte header).
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Frame {
    pub id: u8,
    pub payload: Vec<u8>,
}

impl Frame {
    pub fn new(id: u8, payload: Vec<u8>) -> Self {
        Self { id, payload }
    }
}

fn invalid(msg: impl Into<String>) -> io::Error {
    io::Error::new(io::ErrorKind::InvalidData, msg.into())
}

fn eof(msg: &str) -> io::Error {
    io::Error::new(io::ErrorKind::UnexpectedEof, msg.to_string())
}

/// The payload cap for an inbound frame with packet id `id`.
pub fn max_payload_for(id: u8) -> u32 {
    match id {
        14 => MAX_PULL_PAYLOAD,
        15 | 16 => MAX_PUSH_PAYLOAD,
        _ => DEFAULT_MAX_PAYLOAD,
    }
}

/// Read one frame, refusing a declared payload above `max_payload`.
pub fn read_frame<R: Read>(r: &mut R, max_payload: u32) -> io::Result<Frame> {
    read_frame_limited(r, |_| max_payload)
}

/// Read one frame whose payload cap depends on its packet id.
pub fn read_frame_limited<R: Read>(r: &mut R, limit: impl Fn(u8) -> u32) -> io::Result<Frame> {
    let mut header = [0u8; 5];
    r.read_exact(&mut header)?;
    let len = u32::from_be_bytes([header[0], header[1], header[2], header[3]]);
    let id = header[4];
    let max = limit(id);
    if len > max {
        return Err(invalid(format!(
            "frame id {id}: payload length {len} exceeds cap {max}"
        )));
    }
    // Grow with the bytes that actually arrive instead of trusting the declared length.
    let mut payload = Vec::new();
    r.by_ref().take(u64::from(len)).read_to_end(&mut payload)?;
    if payload.len() != len as usize {
        return Err(eof("frame: short payload"));
    }
    Ok(Frame { id, payload })
}

/// Write one frame, refusing a payload above `max_payload`.
pub fn write_frame<W: Write>(w: &mut W, frame: &Frame, max_payload: u32) -> io::Result<()> {
    let len = u32::try_from(frame.payload.len()).map_err(|_| invalid("frame: payload too long"))?;
    if len > max_payload {
        return Err(invalid(format!(
            "frame id {}: payload length {len} exceeds cap {max_payload}",
            frame.id
        )));
    }
    let mut out = Vec::with_capacity(5 + frame.payload.len());
    out.extend_from_slice(&len.to_be_bytes());
    out.push(frame.id);
    out.extend_from_slice(&frame.payload);
    w.write_all(&out)?;
    w.flush()
}

/// `pack_dd`: 1 byte up to `0x7F`, 2 bytes (`10xxxxxx`) up to `0x3FFF`, 4 bytes (`110xxxxx`) up to
/// `0x1FFFFFFF`, else `0xFF` and the big-endian `u32`.
pub fn write_vuint32(out: &mut Vec<u8>, value: u32) {
    if value <= 0x7F {
        out.push(value as u8);
    } else if value <= 0x3FFF {
        out.extend_from_slice(&((value as u16) | 0x8000).to_be_bytes());
    } else if value <= 0x1FFF_FFFF {
        out.extend_from_slice(&(value | 0xC000_0000).to_be_bytes());
    } else {
        out.push(0xFF);
        out.extend_from_slice(&value.to_be_bytes());
    }
}

/// `unpack_dd` at `buf[*pos]`, advancing `pos`. The 5-byte form accepts any `111xxxxx` lead byte
/// (IDA writes `0xFF`, the Go client `0xE0`).
pub fn read_vuint32(buf: &[u8], pos: &mut usize) -> io::Result<u32> {
    let start = *pos;
    let b0 = *buf.get(start).ok_or_else(|| eof("dd: empty"))?;
    if b0 & 0x80 == 0 {
        *pos = start + 1;
        return Ok(u32::from(b0));
    }
    if b0 & 0xC0 == 0x80 {
        let b1 = *buf.get(start + 1).ok_or_else(|| eof("dd: short 2"))?;
        *pos = start + 2;
        return Ok((u32::from(b0 & 0x3F) << 8) | u32::from(b1));
    }
    if b0 & 0xE0 == 0xC0 {
        let b = buf
            .get(start..start + 4)
            .ok_or_else(|| eof("dd: short 4"))?;
        *pos = start + 4;
        return Ok(u32::from_be_bytes([b[0], b[1], b[2], b[3]]) & 0x1FFF_FFFF);
    }
    let b = buf
        .get(start + 1..start + 5)
        .ok_or_else(|| eof("dd: short 5"))?;
    *pos = start + 5;
    Ok(u32::from_be_bytes([b[0], b[1], b[2], b[3]]))
}

/// `pack_dq`: the low 32 bits then the high 32 bits, each as `pack_dd`.
pub fn write_u64_split(out: &mut Vec<u8>, value: u64) {
    write_vuint32(out, value as u32);
    write_vuint32(out, (value >> 32) as u32);
}

/// The inverse of [`write_u64_split`].
pub fn read_u64_split(buf: &[u8], pos: &mut usize) -> io::Result<u64> {
    let lo = u64::from(read_vuint32(buf, pos)?);
    let hi = u64::from(read_vuint32(buf, pos)?);
    Ok(lo | (hi << 32))
}

/// Append a NUL-terminated string; a string holding a NUL is refused.
pub fn write_cstring(out: &mut Vec<u8>, s: &str) -> io::Result<()> {
    if s.as_bytes().contains(&0) {
        return Err(io::Error::new(
            io::ErrorKind::InvalidInput,
            "cstring contains NUL byte",
        ));
    }
    out.extend_from_slice(s.as_bytes());
    out.push(0);
    Ok(())
}

/// Read a NUL-terminated string. Bytes that are not UTF-8 are replaced, since names come from
/// arbitrary peers.
pub fn read_cstring(buf: &[u8], pos: &mut usize) -> io::Result<String> {
    let start = *pos;
    let rest = buf.get(start..).ok_or_else(|| eof("cstring: past end"))?;
    let nul = rest
        .iter()
        .position(|&b| b == 0)
        .ok_or_else(|| eof("cstring: no NUL"))?;
    let s = String::from_utf8_lossy(&rest[..nul]).into_owned();
    *pos = start + nul + 1;
    Ok(s)
}

/// Write a `pack_dd` length then the bytes.
pub fn write_raw_bytes(out: &mut Vec<u8>, bytes: &[u8]) {
    write_vuint32(out, bytes.len() as u32);
    out.extend_from_slice(bytes);
}

/// Read a `pack_dd` length then exactly that many bytes.
pub fn read_raw_bytes(buf: &[u8], pos: &mut usize) -> io::Result<Vec<u8>> {
    let len = read_vuint32(buf, pos)? as usize;
    let start = *pos;
    let end = start
        .checked_add(len)
        .ok_or_else(|| invalid("bytes: length overflow"))?;
    let bytes = buf
        .get(start..end)
        .ok_or_else(|| eof("bytes: short body"))?;
    *pos = end;
    Ok(bytes.to_vec())
}

/// A cursor over a payload with the primitive readers.
#[derive(Debug, Clone)]
pub struct Decoder<'a> {
    buf: &'a [u8],
    pos: usize,
}

impl<'a> Decoder<'a> {
    pub fn new(buf: &'a [u8]) -> Self {
        Self { buf, pos: 0 }
    }

    pub fn dd(&mut self) -> io::Result<u32> {
        read_vuint32(self.buf, &mut self.pos)
    }

    /// A signed result code: the `pack_dd` of its two's-complement bits.
    pub fn dd_i32(&mut self) -> io::Result<i32> {
        Ok(self.dd()? as i32)
    }

    pub fn dq(&mut self) -> io::Result<u64> {
        read_u64_split(self.buf, &mut self.pos)
    }

    pub fn cstr(&mut self) -> io::Result<String> {
        read_cstring(self.buf, &mut self.pos)
    }

    pub fn bytes(&mut self) -> io::Result<Vec<u8>> {
        read_raw_bytes(self.buf, &mut self.pos)
    }

    pub fn byte(&mut self) -> io::Result<u8> {
        let b = *self
            .buf
            .get(self.pos)
            .ok_or_else(|| eof("byte: past end"))?;
        self.pos += 1;
        Ok(b)
    }

    pub fn fixed<const N: usize>(&mut self) -> io::Result<[u8; N]> {
        let end = self
            .pos
            .checked_add(N)
            .ok_or_else(|| invalid("fixed: overflow"))?;
        let bytes = self
            .buf
            .get(self.pos..end)
            .ok_or_else(|| eof("fixed: short"))?;
        let mut out = [0u8; N];
        out.copy_from_slice(bytes);
        self.pos = end;
        Ok(out)
    }

    /// An item count, bounded by [`MAX_ITEMS`] and by the bytes left.
    pub fn count(&mut self, ctx: &str) -> io::Result<usize> {
        let n = self.dd()? as usize;
        if n > MAX_ITEMS || n > self.remaining().len() {
            return Err(invalid(format!("{ctx}: item count {n} is implausible")));
        }
        Ok(n)
    }

    pub fn remaining(&self) -> &'a [u8] {
        self.buf.get(self.pos..).unwrap_or(&[])
    }

    pub fn is_empty(&self) -> bool {
        self.remaining().is_empty()
    }

    pub fn position(&self) -> usize {
        self.pos
    }
}

#[cfg(test)]
mod tests;
