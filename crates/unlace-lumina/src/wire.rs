//! Lumina v6 frame and primitive codec.
//!
//! All numbers are big-endian on the wire. Source references in
//! `research/lumina/all/`:
//!
//! * `sub_1692C0.c` — frame reader (`u32be length` + `u8 id` + payload,
//!   payload capped at `0x2000` unless transport's large-packet flag set).
//! * `sub_169470.c`, `sub_1694E0.c` — frame writer (5-byte header reservation
//!   + payload, length patched in via `_byteswap_ulong(buf_len - 5)`).
//! * `sub_196CD0.c` — `vuint32` writer with three length buckets plus the
//!   `0xff` escape.
//! * `sub_196ED0.c` — `vuint32` reader (mirrors the writer's bucket selection
//!   by inspecting the top bits of the leading byte).
//! * `sub_196FF0.c` — `u64` encode/decode (low32 vuint32 then high32 vuint32).
//! * `sub_6B1B0.c` — NUL-terminated string read into a growable buffer.
//! * `sub_6AE40.c` — length-prefixed raw byte buffer (vuint32 length then
//!   exact bytes).

use std::io;

use tokio::io::{AsyncRead, AsyncReadExt, AsyncWrite, AsyncWriteExt};

/// Default payload-length cap from `sub_1692C0` (`v9 > 0x2000` rejected when
/// the transport's large-packet flag is clear). The server sets the flag for
/// authenticated admin sessions and a few internal RPCs.
pub const DEFAULT_MAX_PAYLOAD: u32 = 0x2000;

/// The hard ceiling enforced by the writer side regardless of mode: a vuint32
/// must fit in 32 bits, so payloads can never legitimately exceed `i32::MAX`.
/// We use this as our "large-packet" cap.
pub const ABSOLUTE_MAX_PAYLOAD: u32 = i32::MAX as u32;

/// A decoded Lumina frame: a single packet identifier byte plus its payload.
///
/// `payload` does **not** include the leading length (`u32be`) or the
/// `packet_id` byte.
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

/// Read a frame from `r`, rejecting payloads larger than `max_payload`.
///
/// The frame structure on the wire is:
///
/// ```text
///   u32be payload_len          ; excludes the 4 length bytes AND the id byte
///   u8    packet_id
///   bytes payload[payload_len]
/// ```
pub async fn read_frame<R>(r: &mut R, max_payload: u32) -> io::Result<Frame>
where
    R: AsyncRead + Unpin,
{
    let mut len_buf = [0u8; 4];
    r.read_exact(&mut len_buf).await?;
    let len = u32::from_be_bytes(len_buf);

    // `sub_1692C0`: the server treats a payload length above 0x2000 (or its
    // configured cap) as fatal and logs "rpc: bad packet length".
    if len > max_payload {
        return Err(io::Error::new(
            io::ErrorKind::InvalidData,
            format!("rpc: bad packet length {len} > max {max_payload}"),
        ));
    }

    let mut id_buf = [0u8; 1];
    r.read_exact(&mut id_buf).await?;
    let id = id_buf[0];

    let mut payload = vec![0u8; len as usize];
    if !payload.is_empty() {
        r.read_exact(&mut payload).await?;
    }
    Ok(Frame { id, payload })
}

/// Write a frame to `w`, rejecting payloads larger than `max_payload` so we
/// cannot send something a conformant peer would reject.
pub async fn write_frame<W>(w: &mut W, frame: &Frame, max_payload: u32) -> io::Result<()>
where
    W: AsyncWrite + Unpin,
{
    let len = frame.payload.len();
    if len as u64 > max_payload as u64 {
        return Err(io::Error::new(
            io::ErrorKind::InvalidInput,
            format!("payload len {len} exceeds max {max_payload}"),
        ));
    }
    let len_be = (len as u32).to_be_bytes();
    w.write_all(&len_be).await?;
    w.write_all(&[frame.id]).await?;
    if !frame.payload.is_empty() {
        w.write_all(&frame.payload).await?;
    }
    w.flush().await?;
    Ok(())
}

// ---------------------------------------------------------------- vuint32 --

/// Append a `vuint32` to `out` following the encoding in `sub_196CD0`.
///
/// Buckets (selected by `value` magnitude):
///
/// * `value <= 0x7F`         — 1 byte, top bit clear.
/// * `value <= 0x3FFF`       — 2 bytes, big-endian with top 2 bits = `10`.
/// * `value <= 0x1FFFFFFF`   — 4 bytes, big-endian with top 3 bits = `110`.
/// * otherwise               — `0xff` then `u32be(value)` (5 bytes total).
pub fn write_vuint32(out: &mut Vec<u8>, value: u32) {
    if value <= 0x7F {
        out.push(value as u8);
    } else if value <= 0x3FFF {
        let v = (value as u16) | 0x8000;
        out.extend_from_slice(&v.to_be_bytes());
    } else if value <= 0x1FFFFFFF {
        let v = value | 0xC000_0000;
        out.extend_from_slice(&v.to_be_bytes());
    } else {
        out.push(0xff);
        out.extend_from_slice(&value.to_be_bytes());
    }
}

/// Decode a `vuint32` starting at `buf[*pos]`, advancing `pos`. Returns the
/// decoded value or an error if the buffer is short or the prefix is
/// inconsistent.
///
/// The bucket is selected by the top bits of the leading byte:
///
/// * `0xxxxxxx`            — 1-byte value (`value & 0x7F`).
/// * `10xxxxxx xxxxxxxx`   — 2-byte value (`value & 0x3FFF`).
/// * `110xxxxx xxxxxxxx*3` — 4-byte value (`value & 0x1FFFFFFF`).
/// * `0xff xxxxxxxx*4`     — 5-byte value (`u32be` follows the escape).
pub fn read_vuint32(buf: &[u8], pos: &mut usize) -> io::Result<u32> {
    let start = *pos;
    let b0 = *buf
        .get(start)
        .ok_or_else(|| io::Error::new(io::ErrorKind::UnexpectedEof, "vuint32: empty"))?;

    // Single-byte (`0xxxxxxx`).
    if b0 & 0x80 == 0 {
        *pos = start + 1;
        return Ok(b0 as u32);
    }
    // Top two bits = `11`: either the 4-byte case (`110xxxxx`) or the
    // 5-byte escape (`111xxxxx`, in practice always `0xff`).
    if b0 & 0xC0 == 0xC0 {
        if b0 & 0xE0 == 0xC0 {
            // 110xxxxx -> 4 bytes.
            let bytes = buf
                .get(start..start + 4)
                .ok_or_else(|| io::Error::new(io::ErrorKind::UnexpectedEof, "vuint32: short 4"))?;
            let raw = u32::from_be_bytes(bytes.try_into().unwrap());
            *pos = start + 4;
            return Ok(raw & 0x1FFF_FFFF);
        }
        // 111xxxxx -> 5 bytes: drop the prefix byte, follow with u32be.
        let bytes = buf
            .get(start + 1..start + 5)
            .ok_or_else(|| io::Error::new(io::ErrorKind::UnexpectedEof, "vuint32: short esc"))?;
        let v = u32::from_be_bytes(bytes.try_into().unwrap());
        *pos = start + 5;
        return Ok(v);
    }
    // 10xxxxxx -> 2 bytes.
    let b1 = *buf
        .get(start + 1)
        .ok_or_else(|| io::Error::new(io::ErrorKind::UnexpectedEof, "vuint32: short 2"))?;
    let v = (((b0 & 0x3F) as u32) << 8) | (b1 as u32);
    *pos = start + 2;
    Ok(v)
}

// -------------------------------------------------------------- u64 split --

/// Encode a `u64` as two `vuint32`s: low 32 bits first, then high 32 bits.
/// Mirrors `sub_196FF0` on the read side and the symmetric writer used by
/// HELO and the metadata packers.
pub fn write_u64_split(out: &mut Vec<u8>, value: u64) {
    write_vuint32(out, value as u32);
    write_vuint32(out, (value >> 32) as u32);
}

/// Decode the inverse of [`write_u64_split`].
pub fn read_u64_split(buf: &[u8], pos: &mut usize) -> io::Result<u64> {
    let lo = read_vuint32(buf, pos)? as u64;
    let hi = read_vuint32(buf, pos)? as u64;
    Ok(lo | (hi << 32))
}

// ---------------------------------------------------------- cstring / raw --

/// Append a NUL-terminated UTF-8 string. Mirrors `sub_6B1B0` on the read side.
///
/// Returns an error if `s` itself contains an interior NUL (which the reader
/// would otherwise interpret as end-of-string).
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

/// Decode a NUL-terminated UTF-8 string starting at `buf[*pos]`. `pos` is
/// advanced past the terminator on success.
pub fn read_cstring(buf: &[u8], pos: &mut usize) -> io::Result<String> {
    let start = *pos;
    let nul = buf[start..]
        .iter()
        .position(|&b| b == 0)
        .ok_or_else(|| io::Error::new(io::ErrorKind::UnexpectedEof, "cstring: no NUL"))?;
    let bytes = &buf[start..start + nul];
    let s = std::str::from_utf8(bytes)
        .map_err(|e| io::Error::new(io::ErrorKind::InvalidData, e))?
        .to_owned();
    *pos = start + nul + 1;
    Ok(s)
}

/// Write a `vuint32` length prefix followed by the exact bytes.
pub fn write_raw_bytes(out: &mut Vec<u8>, bytes: &[u8]) {
    write_vuint32(out, bytes.len() as u32);
    out.extend_from_slice(bytes);
}

/// Read a `vuint32` length prefix and the exact number of bytes that follow.
pub fn read_raw_bytes(buf: &[u8], pos: &mut usize) -> io::Result<Vec<u8>> {
    let len = read_vuint32(buf, pos)? as usize;
    let start = *pos;
    let end = start
        .checked_add(len)
        .ok_or_else(|| io::Error::new(io::ErrorKind::InvalidData, "raw: length overflow"))?;
    if end > buf.len() {
        return Err(io::Error::new(
            io::ErrorKind::UnexpectedEof,
            "raw: short body",
        ));
    }
    let out = buf[start..end].to_vec();
    *pos = end;
    Ok(out)
}

#[cfg(test)]
mod tests {
    use super::*;
    use std::io::Cursor;

    fn roundtrip_vuint(value: u32, expected_len: usize) {
        let mut buf = Vec::new();
        write_vuint32(&mut buf, value);
        assert_eq!(buf.len(), expected_len, "value=0x{value:x}: byte count");
        let mut pos = 0;
        let got = read_vuint32(&buf, &mut pos).expect("decode");
        assert_eq!(got, value, "value=0x{value:x}: round-trip");
        assert_eq!(pos, expected_len, "value=0x{value:x}: pos advance");
    }

    #[test]
    fn vuint32_1byte_bucket() {
        roundtrip_vuint(0x00, 1);
        roundtrip_vuint(0x01, 1);
        roundtrip_vuint(0x7E, 1);
        roundtrip_vuint(0x7F, 1);
    }

    #[test]
    fn vuint32_2byte_bucket() {
        roundtrip_vuint(0x80, 2);
        roundtrip_vuint(0x81, 2);
        roundtrip_vuint(0x100, 2);
        roundtrip_vuint(0x3FFE, 2);
        roundtrip_vuint(0x3FFF, 2);
    }

    #[test]
    fn vuint32_4byte_bucket() {
        roundtrip_vuint(0x4000, 4);
        roundtrip_vuint(0xFFFF, 4);
        roundtrip_vuint(0x100000, 4);
        roundtrip_vuint(0x1FFF_FFFE, 4);
        roundtrip_vuint(0x1FFF_FFFF, 4);
    }

    #[test]
    fn vuint32_escape_5byte_bucket() {
        roundtrip_vuint(0x2000_0000, 5);
        roundtrip_vuint(0xCAFEBABE, 5);
        roundtrip_vuint(0xFFFF_FFFE, 5);
        roundtrip_vuint(0xFFFF_FFFF, 5);
    }

    #[test]
    fn vuint32_1byte_exact_bytes() {
        let mut buf = Vec::new();
        write_vuint32(&mut buf, 0x42);
        assert_eq!(buf, vec![0x42]);
    }

    #[test]
    fn vuint32_2byte_exact_bytes() {
        // 0x123 -> 0x8123 big-endian
        let mut buf = Vec::new();
        write_vuint32(&mut buf, 0x0123);
        assert_eq!(buf, vec![0x81, 0x23]);
    }

    #[test]
    fn vuint32_4byte_exact_bytes() {
        // 0x123456 -> 0xC0123456 big-endian
        let mut buf = Vec::new();
        write_vuint32(&mut buf, 0x0012_3456);
        assert_eq!(buf, vec![0xC0, 0x12, 0x34, 0x56]);
    }

    #[test]
    fn vuint32_escape_exact_bytes() {
        let mut buf = Vec::new();
        write_vuint32(&mut buf, 0xDEAD_BEEF);
        assert_eq!(buf, vec![0xFF, 0xDE, 0xAD, 0xBE, 0xEF]);
    }

    #[test]
    fn vuint32_read_short_inputs_error() {
        // Empty buffer
        let mut pos = 0;
        assert!(read_vuint32(&[], &mut pos).is_err());
        // 2-byte prefix with only 1 byte present
        let mut pos = 0;
        assert!(read_vuint32(&[0x81], &mut pos).is_err());
        // 4-byte prefix with only 3 bytes present
        let mut pos = 0;
        assert!(read_vuint32(&[0xC0, 0x00, 0x00], &mut pos).is_err());
        // Escape prefix with truncated u32
        let mut pos = 0;
        assert!(read_vuint32(&[0xFF, 0x00, 0x00], &mut pos).is_err());
    }

    #[test]
    fn u64_split_roundtrips() {
        for v in [
            0u64,
            1,
            0x7F,
            0x80,
            0x3FFF,
            0x4000,
            0x1FFF_FFFF,
            0x2000_0000,
            0xFFFF_FFFF,
            0x1_0000_0000,
            0xDEAD_BEEF_CAFE_BABE,
            u64::MAX,
        ] {
            let mut buf = Vec::new();
            write_u64_split(&mut buf, v);
            let mut pos = 0;
            let got = read_u64_split(&buf, &mut pos).expect("decode u64");
            assert_eq!(got, v, "u64 0x{v:x}");
            assert_eq!(pos, buf.len(), "u64 0x{v:x} full consume");
        }
    }

    #[test]
    fn cstring_roundtrip() {
        let mut buf = Vec::new();
        write_cstring(&mut buf, "hello world").unwrap();
        write_cstring(&mut buf, "").unwrap();
        let mut pos = 0;
        assert_eq!(read_cstring(&buf, &mut pos).unwrap(), "hello world");
        assert_eq!(read_cstring(&buf, &mut pos).unwrap(), "");
        assert_eq!(pos, buf.len());
    }

    #[test]
    fn cstring_rejects_interior_nul() {
        let mut buf = Vec::new();
        assert!(write_cstring(&mut buf, "ab\0cd").is_err());
    }

    #[test]
    fn raw_bytes_roundtrip() {
        let payload: Vec<u8> = (0u8..200).collect();
        let mut buf = Vec::new();
        write_raw_bytes(&mut buf, &payload);
        let mut pos = 0;
        let got = read_raw_bytes(&buf, &mut pos).unwrap();
        assert_eq!(got, payload);
        assert_eq!(pos, buf.len());
    }

    #[tokio::test]
    async fn frame_roundtrip_small() {
        let frame = Frame {
            id: 14,
            payload: b"hello".to_vec(),
        };
        let mut buf = Vec::new();
        write_frame(&mut buf, &frame, DEFAULT_MAX_PAYLOAD)
            .await
            .unwrap();
        // Inspect the on-wire bytes: 4 length + 1 id + payload.
        assert_eq!(&buf[0..4], &(5u32.to_be_bytes()));
        assert_eq!(buf[4], 14);
        assert_eq!(&buf[5..], b"hello");

        let mut cur = Cursor::new(buf);
        let back = read_frame(&mut cur, DEFAULT_MAX_PAYLOAD).await.unwrap();
        assert_eq!(back, frame);
    }

    #[tokio::test]
    async fn frame_roundtrip_at_default_cap() {
        let frame = Frame {
            id: 32,
            payload: vec![0xAB; DEFAULT_MAX_PAYLOAD as usize],
        };
        let mut buf = Vec::new();
        write_frame(&mut buf, &frame, DEFAULT_MAX_PAYLOAD)
            .await
            .unwrap();
        let mut cur = Cursor::new(buf);
        let back = read_frame(&mut cur, DEFAULT_MAX_PAYLOAD).await.unwrap();
        assert_eq!(back, frame);
    }

    #[tokio::test]
    async fn frame_oversize_rejected_by_writer() {
        let frame = Frame {
            id: 32,
            payload: vec![0; DEFAULT_MAX_PAYLOAD as usize + 1],
        };
        let mut buf = Vec::new();
        assert!(
            write_frame(&mut buf, &frame, DEFAULT_MAX_PAYLOAD)
                .await
                .is_err()
        );
    }

    #[tokio::test]
    async fn frame_oversize_rejected_by_reader() {
        // Hand-craft a frame whose declared length exceeds the cap.
        let mut wire = Vec::new();
        wire.extend_from_slice(&(0x3000u32).to_be_bytes()); // len > 0x2000
        wire.push(14);
        wire.extend_from_slice(&vec![0u8; 0x3000]);
        let mut cur = Cursor::new(wire);
        let err = read_frame(&mut cur, DEFAULT_MAX_PAYLOAD).await.unwrap_err();
        assert_eq!(err.kind(), io::ErrorKind::InvalidData);
    }

    #[tokio::test]
    async fn frame_oversize_allowed_with_large_cap() {
        let frame = Frame {
            id: 14,
            payload: vec![0xCD; 0x2500],
        };
        let mut buf = Vec::new();
        write_frame(&mut buf, &frame, ABSOLUTE_MAX_PAYLOAD)
            .await
            .unwrap();
        let mut cur = Cursor::new(buf);
        let back = read_frame(&mut cur, ABSOLUTE_MAX_PAYLOAD).await.unwrap();
        assert_eq!(back, frame);
    }
}
