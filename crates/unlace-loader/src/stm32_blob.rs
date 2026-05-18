//! STM32 firmware blob loader.
//!
//! Parses raw STM32 firmware images (vector table detection, flash layout).
//! STM32 firmware typically starts with an initial stack pointer value
//! followed by reset vector and interrupt vectors.
//!
//! Two shapes are supported:
//!
//! * **Raw `.bin`** — flat firmware blob with implicit flash base at
//!   `0x0800_0000`. The loader treats the entire payload as the
//!   contents of `.text` at that virtual address.
//! * **DfuSe (`.dfu`)** — STMicroelectronics' device-firmware-update
//!   container. 11-byte `"DfuSe"` prefix, one or more image blocks,
//!   and a 16-byte suffix ending with `"UFD"` + CRC. We strip the
//!   wrapper and return the inner firmware image.

use crate::image::{ArchId, BinaryImage, Endian, Section, SectionFlags};

/// Cortex-M vector table entry count (minimum for detection).
pub const MIN_VECTORS: usize = 16;

/// STM32 flash base addresses by family. All current STM32 parts boot
/// from the same nominal address even though the silicon may alias
/// flash at 0x0 when `BOOT0=0`.
pub const STM32F1_FLASH_BASE: u32 = 0x0800_0000;
pub const STM32F4_FLASH_BASE: u32 = 0x0800_0000;
pub const STM32H7_FLASH_BASE: u32 = 0x0800_0000;
/// Default flash base used by [`parse_stm32_bin`] and the
/// [`stm32_to_binary_image`] projection.
pub const STM32_FLASH_BASE: u32 = STM32F1_FLASH_BASE;

/// A parsed STM32 firmware image — either from a raw `.bin` or the
/// payload of a DfuSe container. `base` is the virtual address the
/// firmware expects to be loaded at; `entry` is the thumb-state reset
/// vector (low bit set when the part runs Thumb, which is universal
/// on Cortex-M).
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Stm32Image {
    pub base: u32,
    pub entry: u32,
    pub data: Vec<u8>,
}

/// Errors produced by [`parse_stm32_dfu`].
#[derive(Debug, Clone, PartialEq, Eq, thiserror::Error)]
pub enum Stm32DfuError {
    #[error("buffer too small to contain a DfuSe header (need at least 27 bytes, got {0})")]
    Truncated(usize),
    #[error("missing DfuSe prefix magic")]
    BadPrefix,
    #[error("missing UFD suffix magic")]
    BadSuffix,
}

/// Parsed STM32 vector table.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Stm32VectorTable {
    /// Initial stack pointer (first word).
    pub initial_sp: u32,
    /// Reset handler address (second word).
    pub reset_vector: u32,
    /// NMI handler.
    pub nmi_handler: u32,
    /// HardFault handler.
    pub hardfault_handler: u32,
    /// All vector entries.
    pub vectors: Vec<u32>,
}

/// Detect whether a binary blob looks like an STM32 firmware image.
pub fn detect_stm32(data: &[u8]) -> bool {
    if data.len() < MIN_VECTORS * 4 {
        return false;
    }
    let sp = u32::from_le_bytes(data[0..4].try_into().unwrap());
    let reset = u32::from_le_bytes(data[4..8].try_into().unwrap());

    // Stack pointer should be in SRAM range (0x2000_0000 - 0x2002_0000 typically).
    let sp_valid = (0x2000_0000..=0x2010_0000).contains(&sp);
    // Reset vector should be in flash range with thumb bit set.
    let reset_valid = reset >= STM32F1_FLASH_BASE && (reset & 1) == 1;

    sp_valid && reset_valid
}

/// Parse a raw STM32 `.bin` firmware blob. The file is loaded at the
/// canonical flash base (`0x0800_0000`) with the entry point taken
/// from the reset vector (offset 4). Returns `None` if the buffer is
/// shorter than a single Cortex-M vector table.
pub fn parse_stm32_bin(bytes: &[u8]) -> Option<Stm32Image> {
    if bytes.len() < 8 {
        return None;
    }
    let entry = u32::from_le_bytes(bytes[4..8].try_into().ok()?);
    Some(Stm32Image {
        base: STM32_FLASH_BASE,
        entry,
        data: bytes.to_vec(),
    })
}

/// Parse a DfuSe (`.dfu`) container and return the inner firmware
/// image. The container layout is:
///
/// ```text
///  0..= 4   "DfuSe"
///  5        version (currently 0x01)
///  6..=9    image size (LE u32)
/// 10        targets count
/// 11..      target prefixes + image elements...
/// suffix: 16 bytes ending with "UFD" + 1-byte length + 4-byte CRC.
/// ```
///
/// This loader makes a conservative pass: it validates the prefix +
/// suffix magics, strips them, and returns the middle payload. The
/// inner payload is itself a flat firmware blob loadable via
/// [`parse_stm32_bin`].
pub fn parse_stm32_dfu(bytes: &[u8]) -> Result<Stm32Image, Stm32DfuError> {
    const PREFIX_LEN: usize = 11;
    const SUFFIX_LEN: usize = 16;
    if bytes.len() < PREFIX_LEN + SUFFIX_LEN {
        return Err(Stm32DfuError::Truncated(bytes.len()));
    }
    if &bytes[..5] != b"DfuSe" {
        return Err(Stm32DfuError::BadPrefix);
    }
    let suffix_start = bytes.len() - SUFFIX_LEN;
    if &bytes[suffix_start + 8..suffix_start + 11] != b"UFD" {
        return Err(Stm32DfuError::BadSuffix);
    }
    let payload = &bytes[PREFIX_LEN..suffix_start];
    let entry = if payload.len() >= 8 {
        u32::from_le_bytes(payload[4..8].try_into().unwrap_or([0; 4]))
    } else {
        0
    };
    Ok(Stm32Image {
        base: STM32_FLASH_BASE,
        entry,
        data: payload.to_vec(),
    })
}

/// Project an [`Stm32Image`] onto a generic [`BinaryImage`].
///
/// Creates a single `.text` section at `img.base` with the firmware
/// bytes, `READ | EXEC` flags, the architecture set to `arch` (caller
/// chooses [`ArchId::Arm`] for older M3/M4 parts or another variant
/// for thumb-only cores).
pub fn stm32_to_binary_image(img: &Stm32Image, arch: ArchId) -> BinaryImage {
    let mut out = BinaryImage::empty(arch, Endian::Little);
    out.entry = img.entry as u64;
    out.sections.push(Section {
        name: ".text".to_string(),
        vaddr: img.base as u64,
        size: img.data.len() as u64,
        data: img.data.clone(),
        flags: SectionFlags::READ | SectionFlags::EXEC,
    });
    out
}

/// Parse the vector table from an STM32 firmware blob.
pub fn parse_vector_table(data: &[u8]) -> Option<Stm32VectorTable> {
    if data.len() < MIN_VECTORS * 4 {
        return None;
    }
    let read_u32 = |off: usize| -> Option<u32> { Some(u32::from_le_bytes(data[off..off+4].try_into().ok()?)) };
    let initial_sp = read_u32(0)?;
    let reset_vector = read_u32(4)?;
    let nmi_handler = read_u32(8)?;
    let hardfault_handler = read_u32(12)?;

    let mut vectors = Vec::new();
    for i in 0..MIN_VECTORS {
        if let Some(v) = read_u32(i * 4) {
            vectors.push(v);
        }
    }

    Some(Stm32VectorTable {
        initial_sp,
        reset_vector,
        nmi_handler,
        hardfault_handler,
        vectors,
    })
}

#[cfg(test)]
mod tests {
    use super::*;

    fn make_stm32_image() -> Vec<u8> {
        let mut data = vec![0u8; 256];
        // SP = 0x2001_0000
        data[0..4].copy_from_slice(&0x2001_0000u32.to_le_bytes());
        // Reset = 0x0800_0101 (thumb)
        data[4..8].copy_from_slice(&0x0800_0101u32.to_le_bytes());
        // NMI
        data[8..12].copy_from_slice(&0x0800_0201u32.to_le_bytes());
        // HardFault
        data[12..16].copy_from_slice(&0x0800_0301u32.to_le_bytes());
        data
    }

    #[test]
    fn test_detect_stm32() {
        let img = make_stm32_image();
        assert!(detect_stm32(&img));
    }

    #[test]
    fn test_non_stm32_rejected() {
        let data = vec![0u8; 256]; // All zeros.
        assert!(!detect_stm32(&data));
    }

    #[test]
    fn test_parse_vector_table() {
        let img = make_stm32_image();
        let vt = parse_vector_table(&img).unwrap();
        assert_eq!(vt.initial_sp, 0x2001_0000);
        assert_eq!(vt.reset_vector, 0x0800_0101);
        assert_eq!(vt.vectors.len(), MIN_VECTORS);
    }

    /// `stm32_bin_loads_at_default_flash_base` — `parse_stm32_bin` +
    /// `stm32_to_binary_image` together must land the firmware in a
    /// single `.text` section at `0x0800_0000`.
    #[test]
    fn stm32_bin_loads_at_default_flash_base() {
        let img = make_stm32_image();
        let parsed = parse_stm32_bin(&img).expect("bin must parse");
        let bin = stm32_to_binary_image(&parsed, ArchId::Arm);
        assert_eq!(bin.entry as u32, 0x0800_0101);
        assert_eq!(bin.sections.len(), 1);
        assert_eq!(bin.sections[0].name, ".text");
        assert_eq!(bin.sections[0].vaddr, STM32_FLASH_BASE as u64);
        assert!(bin.sections[0].flags.contains(SectionFlags::EXEC));
    }

    /// `stm32_dfu_recognises_suffix_magic` — wrap an inner bin blob in
    /// a minimal DfuSe envelope and verify the parser strips the
    /// prefix + suffix.
    #[test]
    fn stm32_dfu_recognises_suffix_magic() {
        let inner = make_stm32_image();
        let mut dfu = Vec::new();
        dfu.extend_from_slice(b"DfuSe"); // 5 bytes
        dfu.push(0x01); // version
        dfu.extend_from_slice(&(inner.len() as u32).to_le_bytes()); // 4 bytes
        dfu.push(0x01); // targets count
        // prefix is now 11 bytes
        dfu.extend_from_slice(&inner);
        // Suffix: bcdDevice(2), idProduct(2), idVendor(2), bcdDFU(2),
        // "UFD"(3), bLength(1), dwCRC32(4) = 16 bytes total.
        dfu.extend_from_slice(&[0u8; 8]); // bcdDevice + idProduct + idVendor + bcdDFU
        dfu.extend_from_slice(b"UFD"); // 3 bytes magic
        dfu.push(0x10); // bLength
        dfu.extend_from_slice(&[0u8; 4]); // dwCRC32 placeholder

        let parsed = parse_stm32_dfu(&dfu).expect("DFU must parse");
        assert_eq!(parsed.data, inner);
        assert_eq!(parsed.base, STM32_FLASH_BASE);
        assert_eq!(parsed.entry, 0x0800_0101);
    }

    /// Negative test: rejecting a DfuSe blob without the proper suffix.
    #[test]
    fn stm32_dfu_rejects_missing_suffix() {
        let mut dfu = b"DfuSe".to_vec();
        dfu.push(0x01);
        dfu.extend_from_slice(&[0u8; 4]);
        dfu.push(0x01);
        dfu.extend_from_slice(&[0u8; 32]);
        // No UFD magic appended.
        let err = parse_stm32_dfu(&dfu).unwrap_err();
        assert_eq!(err, Stm32DfuError::BadSuffix);
    }
}
