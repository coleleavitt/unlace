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
mod tests;
