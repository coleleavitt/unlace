//! IDA Type Information Library (TIL) reader — minimal MVP.
//!
//! Parses the TIL header and the named-syms section into a flat
//! `BTreeMap<String, TypeRecord>`. Macros, anonymous-types section,
//! and the encoded type-string lowering are deferred — for now each
//! sym is exposed with its raw IDA type-string for downstream
//! inspection.
//!
//! TIL format (community-reverse-engineered, IDA SDK headers):
//!   magic (6 bytes)  : "IDATIL"
//!   format (u8)
//!   flags  (u8)
//!   tag len (u8)     : length of the human-readable tag
//!   tag    (var)     : human-readable tag, NUL-padded
//!   description len (u8)
//!   description (var)
//!   id (u8)
//!   cm (u8)          : default calling-mode
//!   size_i (u8) size_b (u8) size_e (u8) defalign (u8)
//!   sym section: count(u32 LE) entries:
//!     name (NUL-terminated)
//!     ordinal (variable-length: 1-byte tag then 1/2/4/8-byte value)
//!     typestring (NUL-terminated, IDA's encoded form)
//!     fields-string (NUL-terminated; field names)
//!     comment (NUL-terminated)
//!     fields-comments (NUL-terminated)
//!
//! This MVP only consumes the header and the syms section. Type-string
//! decoding is left for a follow-up — callers receive raw bytes.

use std::collections::BTreeMap;

const TIL_MAGIC: &[u8] = b"IDATIL";

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct TilHeader {
    pub format: u8,
    pub flags: u8,
    pub tag: String,
    pub description: String,
    pub id: u8,
    pub cm: u8,
    pub size_i: u8,
    pub size_b: u8,
    pub size_e: u8,
    pub defalign: u8,
}

#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct TilSym {
    pub name: String,
    pub ordinal: u64,
    /// Raw IDA-encoded type bytes. Decoding is deferred.
    pub typestring: Vec<u8>,
    pub fields: Vec<u8>,
    pub comment: String,
    pub fields_comment: String,
}

#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct TilFile {
    pub header: TilHeader,
    pub syms: BTreeMap<String, TilSym>,
}

impl Default for TilHeader {
    fn default() -> Self {
        Self {
            format: 0,
            flags: 0,
            tag: String::new(),
            description: String::new(),
            id: 0,
            cm: 0,
            size_i: 4,
            size_b: 1,
            size_e: 4,
            defalign: 0,
        }
    }
}

#[derive(Debug, thiserror::Error)]
pub enum TilError {
    #[error("buffer too short at offset {offset}")]
    Truncated { offset: usize },
    #[error("bad magic — expected IDATIL, got {0:?}")]
    BadMagic([u8; 6]),
    #[error("invalid utf-8 in {field}")]
    BadUtf8 { field: &'static str },
}

struct Cursor<'a> {
    bytes: &'a [u8],
    pos: usize,
}

impl<'a> Cursor<'a> {
    fn new(bytes: &'a [u8]) -> Self {
        Self { bytes, pos: 0 }
    }

    fn read_u8(&mut self) -> Result<u8, TilError> {
        let b = *self
            .bytes
            .get(self.pos)
            .ok_or(TilError::Truncated { offset: self.pos })?;
        self.pos += 1;
        Ok(b)
    }

    fn read_u32_le(&mut self) -> Result<u32, TilError> {
        let end = self.pos + 4;
        let slice = self
            .bytes
            .get(self.pos..end)
            .ok_or(TilError::Truncated { offset: self.pos })?;
        let v = u32::from_le_bytes(slice.try_into().unwrap());
        self.pos = end;
        Ok(v)
    }

    fn read_pstring(&mut self) -> Result<Vec<u8>, TilError> {
        let len = self.read_u8()? as usize;
        let end = self.pos + len;
        let slice = self
            .bytes
            .get(self.pos..end)
            .ok_or(TilError::Truncated { offset: self.pos })?;
        self.pos = end;
        Ok(slice.to_vec())
    }

    fn read_cstring(&mut self) -> Result<Vec<u8>, TilError> {
        let start = self.pos;
        while let Some(&b) = self.bytes.get(self.pos) {
            self.pos += 1;
            if b == 0 {
                return Ok(self.bytes[start..self.pos - 1].to_vec());
            }
        }
        Err(TilError::Truncated { offset: start })
    }
}

pub fn parse_til(bytes: &[u8]) -> Result<TilFile, TilError> {
    let mut cur = Cursor::new(bytes);

    let mut magic = [0u8; 6];
    for slot in magic.iter_mut() {
        *slot = cur.read_u8()?;
    }
    if magic != TIL_MAGIC {
        return Err(TilError::BadMagic(magic));
    }

    let format = cur.read_u8()?;
    let flags = cur.read_u8()?;
    let tag_bytes = cur.read_pstring()?;
    let desc_bytes = cur.read_pstring()?;
    let id = cur.read_u8()?;
    let cm = cur.read_u8()?;
    let size_i = cur.read_u8()?;
    let size_b = cur.read_u8()?;
    let size_e = cur.read_u8()?;
    let defalign = cur.read_u8()?;

    let header = TilHeader {
        format,
        flags,
        tag: String::from_utf8(tag_bytes).map_err(|_| TilError::BadUtf8 { field: "tag" })?,
        description: String::from_utf8(desc_bytes)
            .map_err(|_| TilError::BadUtf8 { field: "description" })?,
        id,
        cm,
        size_i,
        size_b,
        size_e,
        defalign,
    };

    let mut syms = BTreeMap::new();
    if cur.pos < cur.bytes.len() {
        let count = cur.read_u32_le()?;
        for _ in 0..count {
            let name_bytes = cur.read_cstring()?;
            let ordinal_tag = cur.read_u8()?;
            let ordinal: u64 = match ordinal_tag {
                1 => cur.read_u8()? as u64,
                2 => {
                    let lo = cur.read_u8()? as u64;
                    let hi = cur.read_u8()? as u64;
                    (hi << 8) | lo
                }
                4 => cur.read_u32_le()? as u64,
                _ => 0,
            };
            let typestring = cur.read_cstring()?;
            let fields = cur.read_cstring()?;
            let comment = cur.read_cstring()?;
            let fields_comment = cur.read_cstring()?;

            let name = String::from_utf8(name_bytes)
                .map_err(|_| TilError::BadUtf8 { field: "sym name" })?;
            let comment = String::from_utf8(comment)
                .map_err(|_| TilError::BadUtf8 { field: "sym comment" })?;
            let fields_comment = String::from_utf8(fields_comment)
                .map_err(|_| TilError::BadUtf8 { field: "sym fields_comment" })?;

            syms.insert(
                name.clone(),
                TilSym {
                    name,
                    ordinal,
                    typestring,
                    fields,
                    comment,
                    fields_comment,
                },
            );
        }
    }

    Ok(TilFile { header, syms })
}

#[cfg(test)]
mod tests {
    use super::*;

    fn build_header_only(tag: &str, desc: &str) -> Vec<u8> {
        let mut out = Vec::new();
        out.extend_from_slice(TIL_MAGIC);
        out.push(0x12); // format
        out.push(0x01); // flags
        out.push(tag.len() as u8);
        out.extend_from_slice(tag.as_bytes());
        out.push(desc.len() as u8);
        out.extend_from_slice(desc.as_bytes());
        out.push(0xAA); // id
        out.push(0x03); // cm
        out.push(4); // size_i
        out.push(1); // size_b
        out.push(4); // size_e
        out.push(0); // defalign
        out
    }

    #[test]
    fn parses_til_header() {
        let bytes = build_header_only("gnuc64", "GNU C++ 64-bit");
        let til = parse_til(&bytes).expect("ok");
        assert_eq!(til.header.tag, "gnuc64");
        assert_eq!(til.header.description, "GNU C++ 64-bit");
        assert_eq!(til.header.format, 0x12);
        assert_eq!(til.header.flags, 0x01);
        assert_eq!(til.header.id, 0xAA);
        assert_eq!(til.header.cm, 0x03);
        assert!(til.syms.is_empty());
    }

    #[test]
    fn rejects_bad_magic() {
        let bytes = b"NOTTILxxxxxxxxxxxxxx".to_vec();
        let err = parse_til(&bytes).expect_err("bad magic");
        assert!(matches!(err, TilError::BadMagic(_)));
    }

    #[test]
    fn parses_named_sym() {
        let mut bytes = build_header_only("test", "test");
        bytes.extend_from_slice(&1u32.to_le_bytes()); // sym count
        bytes.extend_from_slice(b"FILE\0");
        bytes.push(1); // ordinal tag = 1-byte
        bytes.push(42); // ordinal value
        bytes.extend_from_slice(b"\x0d\x01\0"); // typestring (encoded — not decoded here)
        bytes.extend_from_slice(b"\0"); // fields
        bytes.extend_from_slice(b"a stdio FILE\0");
        bytes.extend_from_slice(b"\0"); // fields comment

        let til = parse_til(&bytes).expect("ok");
        let sym = til.syms.get("FILE").expect("FILE sym present");
        assert_eq!(sym.ordinal, 42);
        assert_eq!(sym.typestring, vec![0x0d, 0x01]);
        assert_eq!(sym.comment, "a stdio FILE");
    }

    #[test]
    fn parses_multiple_syms() {
        let mut bytes = build_header_only("test", "test");
        bytes.extend_from_slice(&2u32.to_le_bytes());
        for (n, ord) in [("foo", 1u8), ("bar", 2u8)] {
            bytes.extend_from_slice(n.as_bytes());
            bytes.push(0);
            bytes.push(1); // 1-byte ordinal
            bytes.push(ord);
            bytes.push(0); // empty typestring
            bytes.push(0); // empty fields
            bytes.push(0); // empty comment
            bytes.push(0); // empty fields-comment
        }
        let til = parse_til(&bytes).expect("ok");
        assert_eq!(til.syms.len(), 2);
        assert_eq!(til.syms["foo"].ordinal, 1);
        assert_eq!(til.syms["bar"].ordinal, 2);
    }
}
