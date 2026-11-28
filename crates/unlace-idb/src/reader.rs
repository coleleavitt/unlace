//! A bounded cursor over a byte slice and IDA's packed integer encodings (`ida_reader.rs`).
//!
//! Ported from idb-rs (https://github.com/Vector35/idb-rs, Apache-2.0), Copyright Rubens
//! Brandao and the idb-rs contributors; see NOTICE.

use crate::{Error, Result};

/// The address width of a database: 4 bytes (`.idb`) or 8 (`.i64`).
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub(crate) struct Width {
    pub(crate) wide: bool,
}

impl Width {
    pub(crate) fn bytes(self) -> usize {
        if self.wide { 8 } else { 4 }
    }

    pub(crate) fn max(self) -> u64 {
        if self.wide {
            u64::MAX
        } else {
            u64::from(u32::MAX)
        }
    }

    pub(crate) fn wrap(self, value: u64) -> u64 {
        value & self.max()
    }

    #[allow(clippy::wrong_self_convention)]
    pub(crate) fn from_le(self, bytes: &[u8]) -> Option<u64> {
        match (self.wide, bytes.len()) {
            (true, 8) => Some(u64::from_le_bytes(bytes.try_into().ok()?)),
            (false, 4) => Some(u64::from(u32::from_le_bytes(bytes.try_into().ok()?))),
            _ => None,
        }
    }

    #[allow(clippy::wrong_self_convention)]
    pub(crate) fn from_be(self, bytes: &[u8]) -> Option<u64> {
        match (self.wide, bytes.len()) {
            (true, 8) => Some(u64::from_be_bytes(bytes.try_into().ok()?)),
            (false, 4) => Some(u64::from(u32::from_be_bytes(bytes.try_into().ok()?))),
            _ => None,
        }
    }

    pub(crate) fn to_be(self, value: u64) -> Vec<u8> {
        if self.wide {
            value.to_be_bytes().to_vec()
        } else {
            (value as u32).to_be_bytes().to_vec()
        }
    }
}

pub(crate) fn err<T>(what: impl Into<String>) -> Result<T> {
    Err(Error::Format(what.into()))
}

/// A cursor that never reads past its slice.
#[derive(Clone, Copy)]
pub(crate) struct Reader<'a> {
    buf: &'a [u8],
}

impl<'a> Reader<'a> {
    pub(crate) fn new(buf: &'a [u8]) -> Self {
        Reader { buf }
    }

    pub(crate) fn rest(&self) -> &'a [u8] {
        self.buf
    }

    pub(crate) fn is_empty(&self) -> bool {
        self.buf.is_empty()
    }

    pub(crate) fn take(&mut self, n: usize) -> Result<&'a [u8]> {
        if n > self.buf.len() {
            return err("unexpected end of data");
        }
        let (head, rest) = self.buf.split_at(n);
        self.buf = rest;
        Ok(head)
    }

    /// Up to `n` bytes, fewer at the end of the data.
    fn take_some(&mut self, n: usize) -> &'a [u8] {
        let n = n.min(self.buf.len());
        let (head, rest) = self.buf.split_at(n);
        self.buf = rest;
        head
    }

    pub(crate) fn u8(&mut self) -> Result<u8> {
        Ok(self.take(1)?[0])
    }

    fn u8_or_none(&mut self) -> Option<u8> {
        self.take_some(1).first().copied()
    }

    pub(crate) fn u16(&mut self) -> Result<u16> {
        Ok(u16::from_le_bytes(
            self.take(2)?.try_into().map_err(|_| short())?,
        ))
    }

    pub(crate) fn u32(&mut self) -> Result<u32> {
        Ok(u32::from_le_bytes(
            self.take(4)?.try_into().map_err(|_| short())?,
        ))
    }

    pub(crate) fn u64(&mut self) -> Result<u64> {
        Ok(u64::from_le_bytes(
            self.take(8)?.try_into().map_err(|_| short())?,
        ))
    }

    /// A little-endian address-sized value.
    pub(crate) fn usize(&mut self, w: Width) -> Result<u64> {
        if w.wide {
            self.u64()
        } else {
            self.u32().map(u64::from)
        }
    }

    /// `unpack_dw`: 1 to 3 bytes; a value cut short by the end of the data reads
    /// as IDA reads it, with zeros.
    pub(crate) fn unpack_dw(&mut self) -> Result<u16> {
        let Some(b1) = self.u8_or_none() else {
            return Ok(0);
        };
        Ok(match b1 {
            0x00..=0x7f => u16::from(b1),
            0x80..=0xbf => {
                let lo = self.u8_or_none().unwrap_or(0);
                u16::from_be_bytes([b1 & 0x3f, lo])
            }
            0xc0..=0xff => {
                let lo = self.u8_or_none().unwrap_or(0);
                let hi = self.u8_or_none().unwrap_or(0);
                u16::from_be_bytes([lo, hi])
            }
        })
    }

    /// `unpack_dd`: 1 to 5 bytes.
    pub(crate) fn unpack_dd(&mut self) -> Result<u32> {
        let b1 = self.u8()?;
        Ok(match b1 {
            0x00..=0x7f => u32::from(b1),
            0x80..=0xbf => {
                let lo = self.u8_or_none().unwrap_or(0);
                u32::from_be_bytes([0, 0, b1 & 0x3f, lo])
            }
            0xc0..=0xdf => {
                let mut b = [0u8; 3];
                let got = self.take_some(3);
                b[..got.len()].copy_from_slice(got);
                u32::from_be_bytes([b1 & 0x1f, b[0], b[1], b[2]])
            }
            0xe0..=0xff => {
                let mut b = [0u8; 4];
                let got = self.take_some(4);
                b[..got.len()].copy_from_slice(got);
                u32::from_be_bytes(b)
            }
        })
    }

    /// `unpack_dq`: two `unpack_dd`, low half first.
    pub(crate) fn unpack_dq(&mut self) -> Result<u64> {
        let lo = self.unpack_dd()?;
        let hi = self.unpack_dd()?;
        Ok((u64::from(hi) << 32) | u64::from(lo))
    }

    /// An address-sized packed value (`unpack_dd` or `unpack_dq`).
    pub(crate) fn unpack_usize(&mut self, w: Width) -> Result<u64> {
        if w.wide {
            self.unpack_dq()
        } else {
            self.unpack_dd().map(u64::from)
        }
    }
}

fn short() -> Error {
    Error::Format("unexpected end of data".into())
}

/// A string ended by its first NUL, or the whole slice.
pub(crate) fn cstr(data: &[u8]) -> &[u8] {
    let end = data.iter().position(|b| *b == 0).unwrap_or(data.len());
    &data[..end]
}
