//! Python `.pyc` bytecode-file header parser (Python 3.7+).
//!
//! Layout (PEP 552, Python 3.7+):
//!
//! ```text
//!   offset 0  : 4 bytes — magic number (Python-version-specific, LE u16 + "\r\n")
//!   offset 4  : 4 bytes — bit-field flags (bit 0 = hash-based, bit 1 = checked)
//!   offset 8  : 8 bytes — either (mtime_u32, source_size_u32) [flags & 1 == 0]
//!                          or       (source_hash_u64)        [flags & 1 == 1]
//!   offset 16 : marshal-serialized code object
//! ```
//!
//! This parser only recognises the *header*; the marshal-encoded code
//! object itself is left for a higher-level decoder.  The returned
//! [`PycFile`] reports the Python `(major, minor)` version inferred from
//! the magic number and the byte offset of the code object so callers
//! can slice it out cheaply.

use thiserror::Error;

/// Errors returned by [`parse_pyc`].
#[derive(Debug, Error, PartialEq, Eq)]
pub enum PycError {
    /// Input is shorter than the 16-byte fixed header.
    #[error("pyc file too short: {0} bytes (need at least 16)")]
    Truncated(usize),

    /// Magic-number low half is not one of the Python-3.7+ values we recognise.
    #[error("unrecognised Python .pyc magic number: {0:#010x}")]
    UnknownMagic(u32),

    /// Bytes 2..4 of the magic word were not the canonical `\r\n` terminator.
    #[error("invalid magic terminator: expected \\r\\n, got {0:#06x}")]
    BadMagicTerminator(u16),
}

/// Parsed `.pyc` file header.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PycFile {
    /// Inferred `(major, minor)` Python version (e.g. `(3, 11)`).
    pub python_version: (u8, u8),
    /// Raw 4-byte magic word as a little-endian `u32`.
    pub magic: u32,
    /// PEP 552 flag bits (bit 0 = hash-based, bit 1 = checked).
    pub flags: u32,
    /// Byte offset at which the marshal-serialised code object begins.
    pub code_object_offset: usize,
}

impl PycFile {
    /// `true` when the header is hash-based (PEP 552, flag bit 0 set).
    #[inline]
    pub fn is_hash_based(&self) -> bool {
        self.flags & 0x1 != 0
    }
}

/// Parse the fixed 16-byte header of a `.pyc` file.
///
/// Validates the magic number against the table of known Python-3.7
/// through Python-3.13 release magics and returns the offset at which
/// the marshalled code object begins (always 16 for these versions).
pub fn parse_pyc(data: &[u8]) -> Result<PycFile, PycError> {
    if data.len() < 16 {
        return Err(PycError::Truncated(data.len()));
    }

    let magic = u32::from_le_bytes([data[0], data[1], data[2], data[3]]);

    // Upper half must be 0x0a0d — the literal "\r\n" CPython appends
    // so that text-mode reads of a .pyc fail loudly.
    let terminator = (magic >> 16) as u16;
    if terminator != 0x0a0d {
        return Err(PycError::BadMagicTerminator(terminator));
    }

    let magic_lo = (magic & 0xffff) as u16;
    let python_version = magic_to_version(magic_lo).ok_or(PycError::UnknownMagic(magic))?;

    let flags = u32::from_le_bytes([data[4], data[5], data[6], data[7]]);

    Ok(PycFile {
        python_version,
        magic,
        flags,
        code_object_offset: 16,
    })
}

/// Map the low 16 bits of a `.pyc` magic number to its Python release.
///
/// Sourced from CPython's `Lib/importlib/_bootstrap_external.py` —
/// every CPython release stamps a fresh magic so that mismatched
/// bytecode is rejected at import time.  We list the *final* magic of
/// each 3.x release line; intermediate alpha/beta values are mapped to
/// the same `(major, minor)` for convenience.
fn magic_to_version(magic_lo: u16) -> Option<(u8, u8)> {
    // Each entry: (magic, (major, minor)).  Keep sorted by magic for
    // readability; lookup is a small linear scan (table is short).
    const TABLE: &[(u16, (u8, u8))] = &[
        // Python 3.7 — PEP 552 introduced; magics 3390..=3394.
        (3390, (3, 7)),
        (3391, (3, 7)),
        (3392, (3, 7)),
        (3393, (3, 7)),
        (3394, (3, 7)),
        // Python 3.8 — 3400..=3413.
        (3400, (3, 8)),
        (3401, (3, 8)),
        (3410, (3, 8)),
        (3411, (3, 8)),
        (3412, (3, 8)),
        (3413, (3, 8)),
        // Python 3.9 — 3420..=3425.
        (3420, (3, 9)),
        (3421, (3, 9)),
        (3422, (3, 9)),
        (3423, (3, 9)),
        (3424, (3, 9)),
        (3425, (3, 9)),
        // Python 3.10 — 3430..=3439.
        (3430, (3, 10)),
        (3431, (3, 10)),
        (3432, (3, 10)),
        (3433, (3, 10)),
        (3434, (3, 10)),
        (3435, (3, 10)),
        (3436, (3, 10)),
        (3437, (3, 10)),
        (3438, (3, 10)),
        (3439, (3, 10)),
        // Python 3.11 — 3450..=3495.
        (3450, (3, 11)),
        (3451, (3, 11)),
        (3452, (3, 11)),
        (3453, (3, 11)),
        (3454, (3, 11)),
        (3455, (3, 11)),
        (3456, (3, 11)),
        (3457, (3, 11)),
        (3458, (3, 11)),
        (3459, (3, 11)),
        (3460, (3, 11)),
        (3461, (3, 11)),
        (3462, (3, 11)),
        (3463, (3, 11)),
        (3464, (3, 11)),
        (3465, (3, 11)),
        (3466, (3, 11)),
        (3467, (3, 11)),
        (3468, (3, 11)),
        (3469, (3, 11)),
        (3470, (3, 11)),
        (3471, (3, 11)),
        (3472, (3, 11)),
        (3473, (3, 11)),
        (3474, (3, 11)),
        (3475, (3, 11)),
        (3476, (3, 11)),
        (3477, (3, 11)),
        (3478, (3, 11)),
        (3479, (3, 11)),
        (3480, (3, 11)),
        (3481, (3, 11)),
        (3482, (3, 11)),
        (3483, (3, 11)),
        (3484, (3, 11)),
        (3485, (3, 11)),
        (3486, (3, 11)),
        (3487, (3, 11)),
        (3488, (3, 11)),
        (3489, (3, 11)),
        (3490, (3, 11)),
        (3491, (3, 11)),
        (3492, (3, 11)),
        (3493, (3, 11)),
        (3494, (3, 11)),
        (3495, (3, 11)),
        // Python 3.12 — 3500..=3531.
        (3500, (3, 12)),
        (3501, (3, 12)),
        (3502, (3, 12)),
        (3503, (3, 12)),
        (3504, (3, 12)),
        (3505, (3, 12)),
        (3506, (3, 12)),
        (3507, (3, 12)),
        (3508, (3, 12)),
        (3509, (3, 12)),
        (3510, (3, 12)),
        (3511, (3, 12)),
        (3512, (3, 12)),
        (3513, (3, 12)),
        (3514, (3, 12)),
        (3515, (3, 12)),
        (3516, (3, 12)),
        (3517, (3, 12)),
        (3518, (3, 12)),
        (3519, (3, 12)),
        (3520, (3, 12)),
        (3521, (3, 12)),
        (3522, (3, 12)),
        (3523, (3, 12)),
        (3524, (3, 12)),
        (3525, (3, 12)),
        (3526, (3, 12)),
        (3527, (3, 12)),
        (3528, (3, 12)),
        (3529, (3, 12)),
        (3530, (3, 12)),
        (3531, (3, 12)),
        // Python 3.13 — 3550..=3571.
        (3550, (3, 13)),
        (3551, (3, 13)),
        (3552, (3, 13)),
        (3553, (3, 13)),
        (3554, (3, 13)),
        (3555, (3, 13)),
        (3556, (3, 13)),
        (3557, (3, 13)),
        (3558, (3, 13)),
        (3559, (3, 13)),
        (3560, (3, 13)),
        (3561, (3, 13)),
        (3562, (3, 13)),
        (3563, (3, 13)),
        (3564, (3, 13)),
        (3565, (3, 13)),
        (3566, (3, 13)),
        (3567, (3, 13)),
        (3568, (3, 13)),
        (3569, (3, 13)),
        (3570, (3, 13)),
        (3571, (3, 13)),
    ];

    TABLE
        .iter()
        .find(|(m, _)| *m == magic_lo)
        .map(|(_, v)| *v)
}

#[cfg(test)]
mod tests {
    use super::*;

    /// Build a minimal 16-byte header for a given magic-low value and flags.
    fn header(magic_lo: u16, flags: u32, tail: [u8; 8]) -> Vec<u8> {
        let mut v = Vec::with_capacity(16);
        v.extend_from_slice(&magic_lo.to_le_bytes());
        v.extend_from_slice(&0x0a0du16.to_le_bytes()); // "\r\n"
        v.extend_from_slice(&flags.to_le_bytes());
        v.extend_from_slice(&tail);
        v
    }

    #[test]
    fn parses_python_311_timestamp_header() {
        // Python 3.11 magic 3495, classic (non-hash) header with mtime + size.
        let mtime: u32 = 0x6500_0000;
        let source_size: u32 = 1234;
        let mut tail = [0u8; 8];
        tail[..4].copy_from_slice(&mtime.to_le_bytes());
        tail[4..].copy_from_slice(&source_size.to_le_bytes());

        let buf = header(3495, 0, tail);
        let pyc = parse_pyc(&buf).expect("header parses");

        assert_eq!(pyc.python_version, (3, 11));
        assert_eq!(pyc.flags, 0);
        assert!(!pyc.is_hash_based());
        assert_eq!(pyc.code_object_offset, 16);
        // Magic is stored as the full LE u32, terminator in the upper half.
        assert_eq!(pyc.magic & 0xffff, 3495);
        assert_eq!(pyc.magic >> 16, 0x0a0d);
    }

    #[test]
    fn parses_python_312_hash_based_header() {
        // Python 3.12 magic 3531, PEP 552 hash-based (flag bit 0 set).
        let source_hash = [0xDEu8, 0xAD, 0xBE, 0xEF, 0xCA, 0xFE, 0xBA, 0xBE];
        let buf = header(3531, 0x1, source_hash);
        let pyc = parse_pyc(&buf).expect("hash-based header parses");

        assert_eq!(pyc.python_version, (3, 12));
        assert!(pyc.is_hash_based());
        assert_eq!(pyc.flags & 0x1, 1);
        assert_eq!(pyc.code_object_offset, 16);
    }

    #[test]
    fn rejects_truncated_unknown_and_bad_terminator() {
        // Too short.
        assert_eq!(parse_pyc(&[0u8; 8]), Err(PycError::Truncated(8)));

        // Unknown magic (some Python 2.7 value, low half = 62211).
        let buf = header(62211, 0, [0u8; 8]);
        match parse_pyc(&buf) {
            Err(PycError::UnknownMagic(_)) => {}
            other => panic!("expected UnknownMagic, got {other:?}"),
        }

        // Bad terminator: replace the "\r\n" bytes with garbage.
        let mut buf = header(3495, 0, [0u8; 8]);
        buf[2] = 0xFF;
        buf[3] = 0xFF;
        match parse_pyc(&buf) {
            Err(PycError::BadMagicTerminator(0xFFFF)) => {}
            other => panic!("expected BadMagicTerminator, got {other:?}"),
        }
    }
}
