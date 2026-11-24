//! HELO (packet 13) and HELO_RESULT (packet 49).
//!
//! HELO (`sub_6CCA0`; zhangyoufu/lumina `HeloPacket`):
//!
//! ```text
//!   dd      protocol_version
//!   bytes   license_blob      ; the ida.key contents for Hex-Rays' servers
//!   u8[6]   license_id
//!   u8      record_conv       ; a bool byte
//!   cstr    username          ; only when protocol_version > 2
//!   cstr    password          ; only when protocol_version > 2
//! ```
//!
//! A server answers a protocol-5-or-later HELO with HELO_RESULT, the user object (`sub_73600`; lumen
//! `HelloResult`): the license id, name and email, the user name, karma, last-active time and the
//! feature word. Older clients get an empty `RPC_OK`.

use std::io;

use crate::wire::{Decoder, write_cstring, write_raw_bytes, write_u64_split, write_vuint32};

/// The highest HELO protocol version the server accepts (`sub_38E40`).
pub const MAX_PROTOCOL_VERSION: u32 = 6;

/// The version the client sends by default.
pub const DEFAULT_PROTOCOL_VERSION: u32 = 6;

/// HELO_RESULT feature bit marking an administrator session.
pub const FEATURE_ADMIN: u32 = 0x1;

#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct Helo {
    pub protocol_version: u32,
    pub license_blob: Vec<u8>,
    pub license_id: [u8; 6],
    pub record_conv: bool,
    pub username: Option<String>,
    pub password: Option<String>,
}

impl Helo {
    pub fn encode(&self) -> io::Result<Vec<u8>> {
        let mut out = Vec::with_capacity(64 + self.license_blob.len());
        write_vuint32(&mut out, self.protocol_version);
        write_raw_bytes(&mut out, &self.license_blob);
        out.extend_from_slice(&self.license_id);
        out.push(u8::from(self.record_conv));
        if self.protocol_version > 2 {
            write_cstring(&mut out, self.username.as_deref().unwrap_or(""))?;
            write_cstring(&mut out, self.password.as_deref().unwrap_or(""))?;
        }
        Ok(out)
    }

    pub fn decode(buf: &[u8]) -> io::Result<Self> {
        let mut d = Decoder::new(buf);
        let protocol_version = d.dd()?;
        let license_blob = d.bytes()?;
        let license_id = d.fixed::<6>()?;
        let record_conv = d.byte()? != 0;
        let (username, password) = if protocol_version > 2 {
            (Some(d.cstr()?), Some(d.cstr()?))
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

/// The license a session runs under.
#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct LicenseInfo {
    pub id: String,
    pub name: String,
    pub email: String,
}

/// HELO_RESULT (packet 49): the user object.
#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct HeloResult {
    pub license: LicenseInfo,
    pub username: String,
    pub karma: u32,
    pub last_active: u64,
    pub features: u32,
}

impl HeloResult {
    pub fn is_admin(&self) -> bool {
        self.features & FEATURE_ADMIN != 0
    }

    pub fn encode(&self) -> io::Result<Vec<u8>> {
        let mut out = Vec::with_capacity(64);
        write_cstring(&mut out, &self.license.id)?;
        write_cstring(&mut out, &self.license.name)?;
        write_cstring(&mut out, &self.license.email)?;
        write_cstring(&mut out, &self.username)?;
        write_vuint32(&mut out, self.karma);
        write_u64_split(&mut out, self.last_active);
        write_vuint32(&mut out, self.features);
        Ok(out)
    }

    pub fn decode(buf: &[u8]) -> io::Result<Self> {
        let mut d = Decoder::new(buf);
        let license = LicenseInfo {
            id: d.cstr()?,
            name: d.cstr()?,
            email: d.cstr()?,
        };
        Ok(Self {
            license,
            username: d.cstr()?,
            karma: d.dd()?,
            last_active: d.dq()?,
            features: d.dd()?,
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
            record_conv: false,
            username: (v > 2).then(|| "alice".to_string()),
            password: (v > 2).then(|| "s3cr3t".to_string()),
        }
    }

    #[test]
    fn helo_roundtrips_at_every_version() {
        for v in [2, 3, 5, 6] {
            let h = sample(v);
            assert_eq!(Helo::decode(&h.encode().unwrap()).unwrap(), h, "v{v}");
        }
    }

    #[test]
    fn helo_v2_carries_no_credentials() {
        let mut h = sample(2);
        h.username = Some("ignored".into());
        let back = Helo::decode(&h.encode().unwrap()).unwrap();
        assert!(back.username.is_none() && back.password.is_none());
    }

    #[test]
    fn helo_layout_is_byte_exact() {
        let h = Helo {
            protocol_version: 6,
            license_blob: vec![0xAA],
            license_id: [1, 2, 3, 4, 5, 6],
            record_conv: true,
            username: Some("u".into()),
            password: Some("p".into()),
        };
        assert_eq!(
            h.encode().unwrap(),
            vec![6, 1, 0xAA, 1, 2, 3, 4, 5, 6, 1, b'u', 0, b'p', 0]
        );
    }

    #[test]
    fn helo_short_buffer_errors() {
        assert!(Helo::decode(&[]).is_err());
        assert!(Helo::decode(&[6, 0, 1, 2]).is_err());
    }

    #[test]
    fn helo_result_roundtrips() {
        let r = HeloResult {
            license: LicenseInfo {
                id: "48-0000-0000-00".into(),
                name: "unlace".into(),
                email: String::new(),
            },
            username: "alice".into(),
            karma: 7,
            last_active: 0x1_0000_0002,
            features: FEATURE_ADMIN,
        };
        let back = HeloResult::decode(&r.encode().unwrap()).unwrap();
        assert_eq!(back, r);
        assert!(back.is_admin());
    }
}
