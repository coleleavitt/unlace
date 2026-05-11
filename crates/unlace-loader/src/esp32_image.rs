//! Parser for the ESP32 firmware image format.
//!
//! The ESP32 image is a flat binary loaded into flash and described by a
//! small fixed-size header followed by a sequence of segments. This module
//! parses the v1 layout used by ESP-IDF bootloaders:
//!
//! ```text
//! offset  size  field
//!   0      1    magic (0xE9)
//!   1      1    segment_count
//!   2      1    spi_mode
//!   3      1    spi_speed_size  (low nibble: speed, high nibble: size)
//!   4      4    entry_point     (u32 little-endian)
//! ```
//!
//! Each segment that follows the header has the form:
//!
//! ```text
//!   0      4    load_addr (u32 LE)
//!   4      4    size      (u32 LE)
//!   8      size data
//! ```
//!
//! The parser is intentionally lenient: it does not validate the checksum
//! byte or the optional SHA-256 trailer found in newer ESP-IDF images,
//! since those fields are not part of the format documented for this task.

use thiserror::Error;

/// Magic byte that identifies the start of an ESP32 firmware image.
pub const ESP32_MAGIC: u8 = 0xE9;

/// A parsed ESP32 firmware image.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Esp32Image {
    /// Entry-point virtual address taken from the image header.
    pub entry: u32,
    /// SPI flash mode byte from the header (QIO, QOUT, DIO, DOUT, ...).
    pub spi_mode: u8,
    /// Packed SPI speed (low nibble) and flash size (high nibble) byte.
    pub spi_speed_size: u8,
    /// All segments described by the image, in file order.
    pub segments: Vec<Esp32Segment>,
}

/// A single segment of an ESP32 firmware image.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Esp32Segment {
    /// Virtual load address for this segment.
    pub load_addr: u32,
    /// Segment payload bytes (length equals the on-disk `size` field).
    pub data: Vec<u8>,
}

/// Errors produced while parsing an ESP32 firmware image.
#[derive(Debug, Error, PartialEq, Eq)]
pub enum Esp32Error {
    /// Header magic byte did not match [`ESP32_MAGIC`].
    #[error("invalid ESP32 magic: expected 0xE9, found {0:#04x}")]
    InvalidMagic(u8),

    /// Input ended before the 8-byte image header could be read.
    #[error("ESP32 image truncated: header requires 8 bytes, found {0}")]
    TruncatedHeader(usize),

    /// Input ended inside a segment header (load_addr + size, 8 bytes).
    #[error("ESP32 image truncated in segment {index} header")]
    TruncatedSegmentHeader {
        /// Zero-based index of the segment whose header was incomplete.
        index: usize,
    },

    /// A segment claims a payload that extends past the end of the input.
    #[error(
        "ESP32 image truncated in segment {index} data: need {needed} bytes, have {available}"
    )]
    TruncatedSegmentData {
        /// Zero-based index of the segment whose payload was truncated.
        index: usize,
        /// Number of payload bytes the header declared.
        needed: usize,
        /// Number of bytes actually remaining in the input.
        available: usize,
    },

    /// A segment header declared a size larger than `usize` can represent
    /// (only reachable on 16-bit targets, but checked for safety).
    #[error("ESP32 segment {index} size {size} does not fit in usize")]
    SegmentTooLarge {
        /// Zero-based index of the offending segment.
        index: usize,
        /// The size value declared by the segment header.
        size: u32,
    },
}

/// Parse an ESP32 firmware image from a byte slice.
///
/// # Errors
///
/// Returns an [`Esp32Error`] if the header magic is wrong or if the input
/// is truncated relative to what the headers describe.
pub fn parse_esp32_image(data: &[u8]) -> Result<Esp32Image, Esp32Error> {
    if data.len() < 8 {
        return Err(Esp32Error::TruncatedHeader(data.len()));
    }

    let magic = data[0];
    if magic != ESP32_MAGIC {
        return Err(Esp32Error::InvalidMagic(magic));
    }

    let segment_count = data[1] as usize;
    let spi_mode = data[2];
    let spi_speed_size = data[3];
    let entry = u32::from_le_bytes([data[4], data[5], data[6], data[7]]);

    let mut segments = Vec::with_capacity(segment_count);
    let mut cursor: usize = 8;

    for index in 0..segment_count {
        if cursor + 8 > data.len() {
            return Err(Esp32Error::TruncatedSegmentHeader { index });
        }

        let load_addr = u32::from_le_bytes([
            data[cursor],
            data[cursor + 1],
            data[cursor + 2],
            data[cursor + 3],
        ]);
        let size_u32 = u32::from_le_bytes([
            data[cursor + 4],
            data[cursor + 5],
            data[cursor + 6],
            data[cursor + 7],
        ]);
        cursor += 8;

        let size = usize::try_from(size_u32).map_err(|_| Esp32Error::SegmentTooLarge {
            index,
            size: size_u32,
        })?;

        let available = data.len().saturating_sub(cursor);
        if size > available {
            return Err(Esp32Error::TruncatedSegmentData {
                index,
                needed: size,
                available,
            });
        }

        let payload = data[cursor..cursor + size].to_vec();
        cursor += size;

        segments.push(Esp32Segment {
            load_addr,
            data: payload,
        });
    }

    Ok(Esp32Image {
        entry,
        spi_mode,
        spi_speed_size,
        segments,
    })
}

#[cfg(test)]
mod tests {
    use super::*;

    /// Build a synthetic ESP32 image with the supplied segments.
    fn build_image(
        magic: u8,
        spi_mode: u8,
        spi_speed_size: u8,
        entry: u32,
        segments: &[(u32, &[u8])],
    ) -> Vec<u8> {
        let mut out = Vec::new();
        out.push(magic);
        out.push(segments.len() as u8);
        out.push(spi_mode);
        out.push(spi_speed_size);
        out.extend_from_slice(&entry.to_le_bytes());
        for (load_addr, data) in segments {
            out.extend_from_slice(&load_addr.to_le_bytes());
            out.extend_from_slice(&(data.len() as u32).to_le_bytes());
            out.extend_from_slice(data);
        }
        out
    }

    #[test]
    fn parses_image_with_two_segments() {
        let seg0: &[u8] = &[0xAA, 0xBB, 0xCC, 0xDD];
        let seg1: &[u8] = &[0x11, 0x22];
        let bytes = build_image(
            ESP32_MAGIC,
            0x02,
            0x1F,
            0x4008_0000,
            &[(0x3FFB_0000, seg0), (0x4008_0400, seg1)],
        );

        let img = parse_esp32_image(&bytes).expect("image should parse");
        assert_eq!(img.entry, 0x4008_0000);
        assert_eq!(img.spi_mode, 0x02);
        assert_eq!(img.spi_speed_size, 0x1F);
        assert_eq!(img.segments.len(), 2);
        assert_eq!(img.segments[0].load_addr, 0x3FFB_0000);
        assert_eq!(img.segments[0].data, seg0);
        assert_eq!(img.segments[1].load_addr, 0x4008_0400);
        assert_eq!(img.segments[1].data, seg1);
    }

    #[test]
    fn rejects_wrong_magic() {
        let mut bytes = build_image(ESP32_MAGIC, 0, 0, 0xDEAD_BEEF, &[]);
        bytes[0] = 0xAB;
        let err = parse_esp32_image(&bytes).unwrap_err();
        assert_eq!(err, Esp32Error::InvalidMagic(0xAB));
    }

    #[test]
    fn rejects_truncated_header() {
        let short = [0xE9_u8, 0x00, 0x02, 0x1F];
        let err = parse_esp32_image(&short).unwrap_err();
        assert_eq!(err, Esp32Error::TruncatedHeader(4));
    }

    #[test]
    fn rejects_truncated_segment_data() {
        let mut bytes = build_image(ESP32_MAGIC, 0, 0, 0x4008_0000, &[(0x3FFB_0000, &[0; 4])]);
        // Declared size = 4, but drop the final two payload bytes.
        bytes.truncate(bytes.len() - 2);
        let err = parse_esp32_image(&bytes).unwrap_err();
        assert_eq!(
            err,
            Esp32Error::TruncatedSegmentData {
                index: 0,
                needed: 4,
                available: 2,
            }
        );
    }
}
