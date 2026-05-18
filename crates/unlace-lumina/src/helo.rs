//! HELO (packet id 13) and HELO_RESULT (packet id 49) encode/decode.
//!
//! The HELO payload shape was recovered from `sub_6CCA0.c`:
//!
//! ```text
//!   vuint32 protocol_version
//!   raw     license_blob          ; length-prefixed via vuint32
//!   bytes6  license_id            ; fixed 6 bytes: u32 + u16 in IDA's struct
//!   vuint32 record_conv_bool      ; treated as bool in `sub_38E40`
//!   cstring username              ; only when protocol_version > 2
//!   cstring password              ; only when protocol_version > 2
//! ```
//!
//! Protocol versions <= 2 omit username/password. Versions >= 5 receive a
//! `HELO_RESULT` (packet id 49) in reply; older clients see an empty
//! `RPC_OK` (packet id 10). See `sub_73600.c` for HELO_RESULT shape.

use std::io;

use crate::wire::{
    read_cstring, read_raw_bytes, read_vuint32, write_cstring, write_raw_bytes, write_vuint32,
};

/// The maximum HELO protocol version this server supports, taken from the
/// validation in `sub_38E40`.
pub const MAX_PROTOCOL_VERSION: u32 = 6;

/// The wire shape of an inbound HELO (packet id 13).
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Helo {
    /// Protocol version requested by the client. Must be `<= MAX_PROTOCOL_VERSION`.
    pub protocol_version: u32,
    /// Opaque license blob — IDA serializes its `license_t` here.
    pub license_blob: Vec<u8>,
    /// 6-byte license ID (`u32` + `u16` in IDA's struct).
    pub license_id: [u8; 6],
    /// `record_conv` bool (whether to keep history records for this session).
    pub record_conv: bool,
    /// Username — present only when `protocol_version > 2`.
    pub username: Option<String>,
    /// Password — present only when `protocol_version > 2`.
    pub password: Option<String>,
}

impl Helo {
    /// Serialize this HELO into its payload bytes (excluding the frame header).
    pub fn encode(&self) -> io::Result<Vec<u8>> {
        let mut out = Vec::with_capacity(64 + self.license_blob.len());
        write_vuint32(&mut out, self.protocol_version);
        write_raw_bytes(&mut out, &self.license_blob);
        out.extend_from_slice(&self.license_id);
        write_vuint32(&mut out, u32::from(self.record_conv));
        if self.protocol_version > 2 {
            write_cstring(&mut out, self.username.as_deref().unwrap_or(""))?;
            write_cstring(&mut out, self.password.as_deref().unwrap_or(""))?;
        }
        Ok(out)
    }

    /// Parse a HELO payload (frame payload bytes, without the length+id header).
    pub fn decode(buf: &[u8]) -> io::Result<Self> {
        let mut pos = 0;
        let protocol_version = read_vuint32(buf, &mut pos)?;
        let license_blob = read_raw_bytes(buf, &mut pos)?;

        let end = pos.checked_add(6).ok_or_else(|| {
            io::Error::new(io::ErrorKind::InvalidData, "HELO: license_id overflow")
        })?;
        if end > buf.len() {
            return Err(io::Error::new(
                io::ErrorKind::UnexpectedEof,
                "HELO: short license_id",
            ));
        }
        let mut license_id = [0u8; 6];
        license_id.copy_from_slice(&buf[pos..end]);
        pos = end;

        let record_conv = read_vuint32(buf, &mut pos)? != 0;

        let (username, password) = if protocol_version > 2 {
            let u = read_cstring(buf, &mut pos)?;
            let p = read_cstring(buf, &mut pos)?;
            (Some(u), Some(p))
        } else {
            (None, None)
        };

        Ok(Self {
            protocol_version,
            license_blob,
            license_id,
            record_conv,
            username,
            password,
        })
    }
}

/// Outbound HELO_RESULT (packet id 49). Shape per `sub_73600.c`: a single
/// `cstring` welcome message followed by per-user feature flags. We capture
/// only the fields the public protocol needs; older clients ignore unknown
/// trailing bytes.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct HeloResult {
    /// Human-readable welcome / server banner.
    pub welcome: String,
    /// Per-session feature mask AND'd with each command's low-bits in
    /// [`crate::protocol::auth_mask`].
    pub features: u32,
    /// Whether this session has admin privileges (the `0x40000000` bit in
    /// each command's auth mask).
    pub is_admin: bool,
}

impl HeloResult {
    pub fn encode(&self) -> io::Result<Vec<u8>> {
        let mut out = Vec::with_capacity(32 + self.welcome.len());
        write_cstring(&mut out, &self.welcome)?;
        write_vuint32(&mut out, self.features);
        write_vuint32(&mut out, u32::from(self.is_admin));
        Ok(out)
    }

    pub fn decode(buf: &[u8]) -> io::Result<Self> {
        let mut pos = 0;
        let welcome = read_cstring(buf, &mut pos)?;
        let features = read_vuint32(buf, &mut pos)?;
        let is_admin = read_vuint32(buf, &mut pos)? != 0;
        Ok(Self {
            welcome,
            features,
            is_admin,
        })
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    fn sample(v: u32) -> Helo {
        Helo {
            protocol_version: v,
            license_blob: b"license-blob".to_vec(),
            license_id: [0xde, 0xad, 0xbe, 0xef, 0x12, 0x34],
            record_conv: true,
            username: if v > 2 { Some("alice".into()) } else { None },
            password: if v > 2 { Some("s3cr3t".into()) } else { None },
        }
    }

    #[test]
    fn helo_roundtrip_v6() {
        let h = sample(6);
        let bytes = h.encode().unwrap();
        let back = Helo::decode(&bytes).unwrap();
        assert_eq!(back, h);
    }

    #[test]
    fn helo_roundtrip_v2_drops_credentials() {
        let h = sample(2);
        let bytes = h.encode().unwrap();
        let back = Helo::decode(&bytes).unwrap();
        assert_eq!(back.protocol_version, 2);
        assert!(back.username.is_none());
        assert!(back.password.is_none());
        assert_eq!(back.license_blob, h.license_blob);
        assert_eq!(back.license_id, h.license_id);
    }

    #[test]
    fn helo_roundtrip_v3_includes_credentials() {
        let h = sample(3);
        let bytes = h.encode().unwrap();
        let back = Helo::decode(&bytes).unwrap();
        assert_eq!(back.username.as_deref(), Some("alice"));
        assert_eq!(back.password.as_deref(), Some("s3cr3t"));
    }

    #[test]
    fn helo_short_buffer_errors() {
        assert!(Helo::decode(&[]).is_err());
    }

    #[test]
    fn helo_result_roundtrip() {
        let r = HeloResult {
            welcome: "Hex-Rays IDA Pro Lumina Server v9.3, 2026 (unlace re-impl)".into(),
            features: 0x7,
            is_admin: true,
        };
        let bytes = r.encode().unwrap();
        let back = HeloResult::decode(&bytes).unwrap();
        assert_eq!(back, r);
    }
}
