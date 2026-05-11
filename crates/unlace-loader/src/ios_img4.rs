//! iOS Image4 (img4 / im4p / im4m) DER container parser.
//!
//! Apple's secure-boot chain wraps every signed payload (kernelcache,
//! iBoot, SEP-firmware, etc.) in an **Image4** container — an ASN.1
//! DER structure defined informally as:
//!
//! ```text
//! IMG4 ::= SEQUENCE {
//!     magic     IA5String ("IMG4"),
//!     im4p      IM4P,
//!     manifest  [0] EXPLICIT IM4M  OPTIONAL,
//!     nonce     [1] EXPLICIT OCTET STRING OPTIONAL
//! }
//! ```
//!
//! `IM4P` itself is a SEQUENCE wrapping the (often LZSS/LZFSE-compressed
//! and encrypted) payload, and `IM4M` is the AP-ticket manifest used by
//! iBoot to authorise the payload. For reverse engineering we typically
//! only need to *peel* the outer layer to get at the raw `im4p` and
//! `im4m` bytes — the actual payload decompression and ticket-signature
//! verification are downstream concerns handled elsewhere.
//!
//! This module is intentionally a *minimal* DER walker: it understands
//! exactly the tags Image4 uses (`SEQUENCE`, `IA5String`, context-`[0]`,
//! context-`[1]`, `OCTET STRING`) and refuses anything else. It does
//! not pull in a full ASN.1 dependency.
//!
//! # Tag reference
//!
//! | Tag    | Meaning                          |
//! |--------|----------------------------------|
//! | `0x04` | OCTET STRING                     |
//! | `0x16` | IA5String                        |
//! | `0x30` | SEQUENCE (constructed)           |
//! | `0xA0` | `[0]` EXPLICIT context-specific  |
//! | `0xA1` | `[1]` EXPLICIT context-specific  |
//!
//! Length encoding follows X.690 §8.1.3 (short form < 128, otherwise
//! long form with up to four length octets — Image4 payloads never
//! exceed `u32::MAX`).

/// Parsed top-level Image4 container.
///
/// `payload` holds the inner bytes of the `im4p` SEQUENCE (i.e. the
/// content *after* the SEQUENCE tag+length — itself another DER
/// structure containing the four-CC tag, description, and payload
/// blob). `manifest` and `nonce` are the raw inner bytes of their
/// respective `[0]` / `[1]` EXPLICIT wrappers, when present.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Img4Container {
    /// Always the ASCII bytes `b"IMG4"` after a successful parse.
    pub magic: [u8; 4],
    /// Inner content of the `im4p` SEQUENCE (without its own SEQUENCE
    /// tag/length prefix).
    pub payload: Vec<u8>,
    /// Inner content of the `[0] EXPLICIT IM4M` element, when present.
    pub manifest: Option<Vec<u8>>,
    /// Inner content of the `[1] EXPLICIT OCTET STRING` nonce, when
    /// present.
    pub nonce: Option<Vec<u8>>,
}

/// Errors produced while walking an Image4 DER blob.
#[derive(Debug, thiserror::Error, PartialEq, Eq)]
pub enum Img4Error {
    /// Hit end-of-buffer before a complete TLV could be read.
    #[error("truncated DER input at offset {0}")]
    Truncated(usize),
    /// DER tag byte did not match the expected ASN.1 tag.
    #[error("unexpected DER tag {found:#04x} at offset {offset} (expected {expected:#04x})")]
    UnexpectedTag {
        offset: usize,
        expected: u8,
        found: u8,
    },
    /// DER length field is malformed or larger than `u32::MAX`.
    #[error("invalid DER length encoding at offset {0}")]
    BadLength(usize),
    /// IA5String magic field is not exactly the four bytes `IMG4`.
    #[error("magic field is not 'IMG4'")]
    BadMagic,
    /// The outer SEQUENCE contained extra unrecognised elements after
    /// the optional nonce, which is a structural violation.
    #[error("trailing junk inside IMG4 SEQUENCE at offset {0}")]
    TrailingData(usize),
}

// ---------------------------------------------------------------------------
// DER tag constants
// ---------------------------------------------------------------------------

const TAG_OCTET_STRING: u8 = 0x04;
const TAG_IA5STRING: u8 = 0x16;
const TAG_SEQUENCE: u8 = 0x30;
const TAG_CTX_0: u8 = 0xA0;
const TAG_CTX_1: u8 = 0xA1;

// ---------------------------------------------------------------------------
// Low-level DER cursor
// ---------------------------------------------------------------------------

/// Streaming reader over a DER byte slice that tracks an absolute
/// offset (used for diagnostics).
struct Cursor<'a> {
    buf: &'a [u8],
    /// Offset relative to the original input — used only for error
    /// reporting; subslicing intentionally re-bases `buf`.
    base: usize,
}

impl<'a> Cursor<'a> {
    fn new(buf: &'a [u8]) -> Self {
        Self { buf, base: 0 }
    }

    fn is_empty(&self) -> bool {
        self.buf.is_empty()
    }

    fn pos(&self) -> usize {
        self.base
    }

    /// Read one byte, advancing the cursor.
    fn read_u8(&mut self) -> Result<u8, Img4Error> {
        let b = *self.buf.first().ok_or(Img4Error::Truncated(self.base))?;
        self.buf = &self.buf[1..];
        self.base += 1;
        Ok(b)
    }

    /// Peek the next byte without advancing. Returns `None` at EOF.
    fn peek(&self) -> Option<u8> {
        self.buf.first().copied()
    }

    /// Consume `n` bytes and return them as a sub-slice.
    fn take(&mut self, n: usize) -> Result<&'a [u8], Img4Error> {
        if self.buf.len() < n {
            return Err(Img4Error::Truncated(self.base));
        }
        let (head, tail) = self.buf.split_at(n);
        self.buf = tail;
        self.base += n;
        Ok(head)
    }

    /// Read a DER length (X.690 §8.1.3). Rejects the indefinite form
    /// (0x80) and lengths needing more than four octets.
    fn read_length(&mut self) -> Result<usize, Img4Error> {
        let off = self.base;
        let first = self.read_u8()?;
        if first < 0x80 {
            // Short form — value is the length directly.
            return Ok(first as usize);
        }
        if first == 0x80 {
            // Indefinite-form length is forbidden by DER.
            return Err(Img4Error::BadLength(off));
        }
        let n = (first & 0x7F) as usize;
        if n == 0 || n > 4 {
            return Err(Img4Error::BadLength(off));
        }
        let bytes = self.take(n)?;
        let mut len: usize = 0;
        for &b in bytes {
            len = (len << 8) | (b as usize);
        }
        Ok(len)
    }

    /// Read a TLV with an expected tag and return its value bytes.
    fn read_tlv(&mut self, expected: u8) -> Result<&'a [u8], Img4Error> {
        let tag_off = self.base;
        let tag = self.read_u8()?;
        if tag != expected {
            return Err(Img4Error::UnexpectedTag {
                offset: tag_off,
                expected,
                found: tag,
            });
        }
        let len = self.read_length()?;
        self.take(len)
    }
}

// ---------------------------------------------------------------------------
// Public parser
// ---------------------------------------------------------------------------

/// Parse a top-level Image4 (`IMG4`) DER container.
///
/// Returns a [`Img4Container`] exposing the raw inner bytes of the
/// `im4p`, optional `im4m` manifest, and optional boot-nonce
/// fields. The function performs only structural validation — it
/// does *not* verify signatures or attempt to decompress / decrypt
/// the payload.
///
/// # Errors
///
/// Returns an [`Img4Error`] when the input is truncated, contains an
/// unexpected ASN.1 tag, has a malformed length, the magic string is
/// not exactly `"IMG4"`, or there is trailing data inside the outer
/// SEQUENCE.
pub fn parse_img4(data: &[u8]) -> Result<Img4Container, Img4Error> {
    let mut top = Cursor::new(data);
    let body = top.read_tlv(TAG_SEQUENCE)?;
    let mut seq = Cursor::new(body);

    // 1. Magic IA5String "IMG4"
    let magic_bytes = seq.read_tlv(TAG_IA5STRING)?;
    if magic_bytes != b"IMG4" {
        return Err(Img4Error::BadMagic);
    }
    let mut magic = [0u8; 4];
    magic.copy_from_slice(magic_bytes);

    // 2. im4p SEQUENCE (mandatory) — keep its *inner* bytes.
    let payload = seq.read_tlv(TAG_SEQUENCE)?.to_vec();

    // 3. Optional [0] EXPLICIT manifest.
    let mut manifest: Option<Vec<u8>> = None;
    if matches!(seq.peek(), Some(TAG_CTX_0)) {
        let inner = seq.read_tlv(TAG_CTX_0)?;
        manifest = Some(inner.to_vec());
    }

    // 4. Optional [1] EXPLICIT nonce — the EXPLICIT wrapper contains
    //    a single OCTET STRING whose value is the nonce. We accept
    //    either form (raw bytes inside the [1], or a nested OCTET
    //    STRING) so callers don't have to care about producer quirks.
    let mut nonce: Option<Vec<u8>> = None;
    if matches!(seq.peek(), Some(TAG_CTX_1)) {
        let inner = seq.read_tlv(TAG_CTX_1)?;
        let unwrapped = unwrap_octet_string(inner).unwrap_or(inner);
        nonce = Some(unwrapped.to_vec());
    }

    if !seq.is_empty() {
        return Err(Img4Error::TrailingData(seq.pos()));
    }

    Ok(Img4Container {
        magic,
        payload,
        manifest,
        nonce,
    })
}

/// If `inner` is itself a single OCTET STRING TLV consuming the whole
/// slice, return its contents; otherwise `None`.
fn unwrap_octet_string(inner: &[u8]) -> Option<&[u8]> {
    let mut c = Cursor::new(inner);
    let val = c.read_tlv(TAG_OCTET_STRING).ok()?;
    if c.is_empty() { Some(val) } else { None }
}

// ---------------------------------------------------------------------------
// Tests
// ---------------------------------------------------------------------------

#[cfg(test)]
mod tests {
    use super::*;

    /// Emit a DER TLV with short-form length (<128 bytes is enough
    /// for every test fixture here).
    fn tlv(tag: u8, value: &[u8]) -> Vec<u8> {
        assert!(value.len() < 128, "test helper only supports short-form length");
        let mut out = Vec::with_capacity(2 + value.len());
        out.push(tag);
        out.push(value.len() as u8);
        out.extend_from_slice(value);
        out
    }

    /// Build a synthetic IMG4 container for fixture purposes.
    fn build_img4(im4p_inner: &[u8], im4m_inner: Option<&[u8]>, nonce: Option<&[u8]>) -> Vec<u8> {
        let mut body = Vec::new();
        body.extend_from_slice(&tlv(TAG_IA5STRING, b"IMG4"));
        body.extend_from_slice(&tlv(TAG_SEQUENCE, im4p_inner));
        if let Some(m) = im4m_inner {
            body.extend_from_slice(&tlv(TAG_CTX_0, m));
        }
        if let Some(n) = nonce {
            // Wrap nonce in OCTET STRING inside [1] EXPLICIT (canonical form).
            let os = tlv(TAG_OCTET_STRING, n);
            body.extend_from_slice(&tlv(TAG_CTX_1, &os));
        }
        tlv(TAG_SEQUENCE, &body)
    }

    #[test]
    fn parses_minimal_img4_with_only_payload() {
        // Smallest legal container: IMG4 magic + an im4p SEQUENCE with
        // a stub inner payload. No manifest, no nonce.
        let im4p_inner = [0x00, 0xDEu8, 0xADu8, 0xBEu8, 0xEFu8];
        let blob = build_img4(&im4p_inner, None, None);

        let c = parse_img4(&blob).expect("parse minimal img4");
        assert_eq!(&c.magic, b"IMG4");
        assert_eq!(c.payload, im4p_inner);
        assert!(c.manifest.is_none());
        assert!(c.nonce.is_none());
    }

    #[test]
    fn parses_full_img4_with_manifest_and_nonce() {
        // Realistic shape: payload + manifest + 8-byte boot nonce.
        let im4p_inner = b"\x16\x04IM4P".to_vec(); // a stub IA5String tag
        let im4m_inner = b"\x16\x04IM4M".to_vec();
        let nonce_bytes: [u8; 8] = [0x01, 0x23, 0x45, 0x67, 0x89, 0xAB, 0xCD, 0xEF];

        let blob = build_img4(&im4p_inner, Some(&im4m_inner), Some(&nonce_bytes));
        let c = parse_img4(&blob).expect("parse full img4");

        assert_eq!(&c.magic, b"IMG4");
        assert_eq!(c.payload, im4p_inner);
        assert_eq!(c.manifest.as_deref(), Some(im4m_inner.as_slice()));
        // Nonce should have been unwrapped from the inner OCTET STRING.
        assert_eq!(c.nonce.as_deref(), Some(nonce_bytes.as_slice()));
    }

    #[test]
    fn rejects_bad_magic_and_truncation() {
        // (a) Wrong magic — IA5String "JUNK" instead of "IMG4".
        let body = {
            let mut v = Vec::new();
            v.extend_from_slice(&tlv(TAG_IA5STRING, b"JUNK"));
            v.extend_from_slice(&tlv(TAG_SEQUENCE, &[]));
            v
        };
        let bad_magic = tlv(TAG_SEQUENCE, &body);
        assert_eq!(parse_img4(&bad_magic), Err(Img4Error::BadMagic));

        // (b) Truncated input — chop the last byte off a valid blob.
        let good = build_img4(&[0xAA, 0xBB], None, None);
        let truncated = &good[..good.len() - 1];
        match parse_img4(truncated) {
            Err(Img4Error::Truncated(_)) => {}
            other => panic!("expected Truncated, got {:?}", other),
        }

        // (c) Wrong outer tag (not a SEQUENCE).
        let mut wrong_tag = good.clone();
        wrong_tag[0] = TAG_IA5STRING;
        match parse_img4(&wrong_tag) {
            Err(Img4Error::UnexpectedTag { expected: TAG_SEQUENCE, .. }) => {}
            other => panic!("expected UnexpectedTag, got {:?}", other),
        }
    }
}
