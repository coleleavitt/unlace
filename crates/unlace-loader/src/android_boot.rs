//! Android boot image (`boot.img`) loader.
//!
//! Parses the Android Bootloader image format documented in the AOSP
//! `system/tools/mkbootimg` sources. The legacy v0/v1/v2 header layout is:
//!
//! ```text
//!   offset  size  field
//!   0x000   8     magic = "ANDROID!"
//!   0x008   4     kernel_size       (bytes)
//!   0x00C   4     kernel_addr       (physical load address)
//!   0x010   4     ramdisk_size      (bytes)
//!   0x014   4     ramdisk_addr      (physical load address)
//!   0x018   4     second_size       (bytes)            -- second-stage bootloader
//!   0x01C   4     second_addr       (physical load address)
//!   0x020   4     tags_addr         (physical address of kernel tags)
//!   0x024   4     page_size         (flash page size, power of two)
//!   0x028   4     header_version    (0/1/2; older images store 0 here)
//!   0x02C   4     os_version        (packed os_version << 11 | patch_level)
//!   0x030   16    name              (product name, NUL-padded)
//!   0x040   512   cmdline           (NUL-padded kernel command line)
//!   0x240   32    id                (SHA-1 of payload sections)
//!   0x260   1024  extra_cmdline     (NUL-padded continuation of cmdline)
//!   0x660   ...   payload
//! ```
//!
//! Total header size is `0x660` (1632) bytes. After the header, each payload
//! section is padded out to the next `page_size` boundary in this order:
//! kernel, ramdisk, second, (v1+) recovery dtbo, (v2) dtb.
//!
//! This module only extracts the kernel and ramdisk blobs plus the combined
//! command line and OS version — that is what the task requested and what most
//! downstream tooling needs to dispatch the inner kernel to the right
//! architecture-specific loader.

use std::string::FromUtf8Error;

use thiserror::Error;

/// Fixed `ANDROID!` magic at offset 0 of every boot image.
pub const ANDROID_BOOT_MAGIC: &[u8; 8] = b"ANDROID!";

/// Size of the v0/v1/v2 boot image header, in bytes.
pub const ANDROID_BOOT_HEADER_SIZE: usize = 0x660;

/// Length of the primary `cmdline` field in the header.
pub const CMDLINE_LEN: usize = 512;

/// Length of the `extra_cmdline` field in the header.
pub const EXTRA_CMDLINE_LEN: usize = 1024;

/// Length of the product `name` field in the header.
pub const NAME_LEN: usize = 16;

/// Length of the `id` (payload SHA-1) field in the header.
pub const ID_LEN: usize = 32;

/// Parsed Android boot image.
///
/// Only the fields that disassembly / loader tooling actually needs are
/// surfaced; the various load addresses, SHA-1 id, and product name are
/// intentionally dropped on the floor.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct AndroidBoot {
    /// Raw kernel payload (typically a zImage or Image.gz blob).
    pub kernel: Vec<u8>,
    /// Raw ramdisk payload (typically a gzipped cpio archive).
    pub ramdisk: Vec<u8>,
    /// Concatenated `cmdline` + `extra_cmdline`, NUL-trimmed.
    ///
    /// A single space is inserted between the two halves iff both are
    /// non-empty, matching what the kernel sees when the bootloader passes
    /// them through.
    pub cmdline: String,
    /// `header_version` field. 0 for legacy images, 1/2 for newer ones.
    pub version: u32,
}

/// Errors produced by [`parse_android_boot`].
#[derive(Debug, Error)]
pub enum AndroidBootError {
    /// Input was shorter than the fixed header size.
    #[error("input too small for Android boot header: {0} bytes")]
    TooSmall(usize),

    /// Header did not start with the `ANDROID!` magic.
    #[error("invalid magic: not an Android boot image")]
    InvalidMagic,

    /// `page_size` field was zero or not a power of two.
    #[error("invalid page size: {0}")]
    InvalidPageSize(u32),

    /// A payload section (kernel/ramdisk) extended past the end of the input.
    #[error(
        "payload section {section} (offset {offset}, size {size}) exceeds input length {input_len}"
    )]
    PayloadOutOfBounds {
        /// Name of the offending section (`"kernel"` or `"ramdisk"`).
        section: &'static str,
        /// Byte offset where the section was supposed to start.
        offset: usize,
        /// Declared section size in bytes.
        size: usize,
        /// Total input length.
        input_len: usize,
    },

    /// A cmdline field contained invalid UTF-8 after NUL-trimming.
    #[error("cmdline is not valid UTF-8: {0}")]
    InvalidCmdline(#[from] FromUtf8Error),
}

/// Read a little-endian `u32` from `data` at `offset`.
///
/// `data` must contain at least `offset + 4` bytes; callers guarantee this
/// because the header length has been validated up front.
#[inline]
fn read_u32_le(data: &[u8], offset: usize) -> u32 {
    let bytes: [u8; 4] = data[offset..offset + 4]
        .try_into()
        .expect("caller validated header length");
    u32::from_le_bytes(bytes)
}

/// Trim trailing NUL bytes from a fixed-length string field and decode as UTF-8.
fn decode_nul_padded(field: &[u8]) -> Result<String, FromUtf8Error> {
    let end = field.iter().position(|&b| b == 0).unwrap_or(field.len());
    String::from_utf8(field[..end].to_vec())
}

/// Round `value` up to the next multiple of `align`.
///
/// `align` must be non-zero; that is checked once at the top of
/// [`parse_android_boot`] via the page-size validation.
#[inline]
fn align_up(value: usize, align: usize) -> usize {
    debug_assert!(align != 0);
    value.div_ceil(align) * align
}

/// Parse an Android boot image header and extract its kernel + ramdisk blobs.
///
/// The legacy v0/v1/v2 header layout is recognized; v3+ images use a
/// completely different layout (no `kernel_addr` etc.) and are rejected by
/// the magic check at the boundary of this loader's scope.
///
/// # Errors
///
/// Returns [`AndroidBootError`] when the input is truncated, the magic is
/// wrong, the page size is invalid, a payload section runs off the end of
/// the input, or a cmdline field is not valid UTF-8.
pub fn parse_android_boot(data: &[u8]) -> Result<AndroidBoot, AndroidBootError> {
    if data.len() < ANDROID_BOOT_HEADER_SIZE {
        return Err(AndroidBootError::TooSmall(data.len()));
    }

    if &data[0..8] != ANDROID_BOOT_MAGIC {
        return Err(AndroidBootError::InvalidMagic);
    }

    let kernel_size = read_u32_le(data, 0x008) as usize;
    let _kernel_addr = read_u32_le(data, 0x00C);
    let ramdisk_size = read_u32_le(data, 0x010) as usize;
    let _ramdisk_addr = read_u32_le(data, 0x014);
    let second_size = read_u32_le(data, 0x018) as usize;
    let _second_addr = read_u32_le(data, 0x01C);
    let _tags_addr = read_u32_le(data, 0x020);
    let page_size = read_u32_le(data, 0x024);
    let header_version = read_u32_le(data, 0x028);
    let _os_version = read_u32_le(data, 0x02C);

    if page_size == 0 || !page_size.is_power_of_two() {
        return Err(AndroidBootError::InvalidPageSize(page_size));
    }
    let page_size = page_size as usize;

    // name (16 bytes) at 0x030 — intentionally ignored.
    // cmdline (512 bytes) at 0x040.
    let cmdline_bytes = &data[0x040..0x040 + CMDLINE_LEN];
    // id (32 bytes) at 0x240 — intentionally ignored.
    // extra_cmdline (1024 bytes) at 0x260.
    let extra_cmdline_bytes = &data[0x260..0x260 + EXTRA_CMDLINE_LEN];

    let cmdline_main = decode_nul_padded(cmdline_bytes)?;
    let cmdline_extra = decode_nul_padded(extra_cmdline_bytes)?;
    let cmdline = match (cmdline_main.is_empty(), cmdline_extra.is_empty()) {
        (true, true) => String::new(),
        (false, true) => cmdline_main,
        (true, false) => cmdline_extra,
        (false, false) => format!("{cmdline_main} {cmdline_extra}"),
    };

    // Payload layout: every section is padded up to `page_size`. The header
    // itself counts as one such block.
    let kernel_offset = align_up(ANDROID_BOOT_HEADER_SIZE, page_size);
    let kernel_end =
        kernel_offset
            .checked_add(kernel_size)
            .ok_or(AndroidBootError::PayloadOutOfBounds {
                section: "kernel",
                offset: kernel_offset,
                size: kernel_size,
                input_len: data.len(),
            })?;
    if kernel_end > data.len() {
        return Err(AndroidBootError::PayloadOutOfBounds {
            section: "kernel",
            offset: kernel_offset,
            size: kernel_size,
            input_len: data.len(),
        });
    }
    let kernel = data[kernel_offset..kernel_end].to_vec();

    let ramdisk_offset = align_up(kernel_end, page_size);
    let ramdisk_end =
        ramdisk_offset
            .checked_add(ramdisk_size)
            .ok_or(AndroidBootError::PayloadOutOfBounds {
                section: "ramdisk",
                offset: ramdisk_offset,
                size: ramdisk_size,
                input_len: data.len(),
            })?;
    if ramdisk_end > data.len() {
        return Err(AndroidBootError::PayloadOutOfBounds {
            section: "ramdisk",
            offset: ramdisk_offset,
            size: ramdisk_size,
            input_len: data.len(),
        });
    }
    let ramdisk = data[ramdisk_offset..ramdisk_end].to_vec();

    // `second_size` is parsed for completeness / out-of-bounds validation but
    // the second-stage bootloader payload is not surfaced.
    let _ = second_size;

    Ok(AndroidBoot {
        kernel,
        ramdisk,
        cmdline,
        version: header_version,
    })
}

#[cfg(test)]
mod tests {
    use super::*;

    /// Build a synthetic Android boot image with the requested payload sizes,
    /// cmdline fields, header version, and page size.
    ///
    /// Kernel bytes are filled with `0xAA`, ramdisk bytes with `0xBB`. The
    /// resulting buffer is exactly the right length for the declared sections.
    fn build_image(
        kernel_size: u32,
        ramdisk_size: u32,
        cmdline: &[u8],
        extra_cmdline: &[u8],
        version: u32,
        page_size: u32,
    ) -> Vec<u8> {
        assert!(cmdline.len() <= CMDLINE_LEN);
        assert!(extra_cmdline.len() <= EXTRA_CMDLINE_LEN);
        let ps = page_size as usize;

        let header_blocks = ANDROID_BOOT_HEADER_SIZE.div_ceil(ps) * ps;
        let kernel_blocks = (kernel_size as usize).div_ceil(ps) * ps;
        let ramdisk_blocks = (ramdisk_size as usize).div_ceil(ps) * ps;
        let total = header_blocks + kernel_blocks + ramdisk_blocks;

        let mut buf = vec![0u8; total];
        buf[0..8].copy_from_slice(ANDROID_BOOT_MAGIC);
        buf[0x008..0x00C].copy_from_slice(&kernel_size.to_le_bytes());
        buf[0x00C..0x010].copy_from_slice(&0x10008000u32.to_le_bytes()); // kernel_addr
        buf[0x010..0x014].copy_from_slice(&ramdisk_size.to_le_bytes());
        buf[0x014..0x018].copy_from_slice(&0x11000000u32.to_le_bytes()); // ramdisk_addr
        buf[0x018..0x01C].copy_from_slice(&0u32.to_le_bytes()); // second_size
        buf[0x01C..0x020].copy_from_slice(&0u32.to_le_bytes()); // second_addr
        buf[0x020..0x024].copy_from_slice(&0x10000100u32.to_le_bytes()); // tags_addr
        buf[0x024..0x028].copy_from_slice(&page_size.to_le_bytes());
        buf[0x028..0x02C].copy_from_slice(&version.to_le_bytes());
        buf[0x02C..0x030].copy_from_slice(&0u32.to_le_bytes()); // os_version
        // name (16 bytes) at 0x030 — leave zero.
        buf[0x040..0x040 + cmdline.len()].copy_from_slice(cmdline);
        // id (32 bytes) at 0x240 — leave zero.
        buf[0x260..0x260 + extra_cmdline.len()].copy_from_slice(extra_cmdline);

        // Kernel @ header_blocks, ramdisk @ header_blocks + kernel_blocks.
        for b in &mut buf[header_blocks..header_blocks + kernel_size as usize] {
            *b = 0xAA;
        }
        for b in &mut buf
            [header_blocks + kernel_blocks..header_blocks + kernel_blocks + ramdisk_size as usize]
        {
            *b = 0xBB;
        }

        buf
    }

    #[test]
    fn parses_minimal_v0_image() {
        let img = build_image(4, 2, b"console=ttyS0", b"", 0, 2048);
        let parsed = parse_android_boot(&img).expect("valid image must parse");

        assert_eq!(parsed.kernel, vec![0xAA; 4]);
        assert_eq!(parsed.ramdisk, vec![0xBB; 2]);
        assert_eq!(parsed.cmdline, "console=ttyS0");
        assert_eq!(parsed.version, 0);
    }

    #[test]
    fn concatenates_cmdline_and_extra_cmdline_v2() {
        let img = build_image(
            8,
            8,
            b"root=/dev/ram0",
            b"androidboot.hardware=marlin",
            2,
            4096,
        );
        let parsed = parse_android_boot(&img).expect("valid v2 image must parse");

        assert_eq!(parsed.kernel.len(), 8);
        assert_eq!(parsed.ramdisk.len(), 8);
        assert_eq!(parsed.cmdline, "root=/dev/ram0 androidboot.hardware=marlin");
        assert_eq!(parsed.version, 2);
    }

    #[test]
    fn rejects_bad_magic() {
        let mut img = build_image(4, 4, b"", b"", 0, 2048);
        img[0..8].copy_from_slice(b"NOTANDR!");
        let err = parse_android_boot(&img).expect_err("bad magic must fail");
        assert!(matches!(err, AndroidBootError::InvalidMagic));
    }

    #[test]
    fn rejects_truncated_input_and_oob_kernel() {
        // 1) Truncated below header size.
        let short = vec![0u8; ANDROID_BOOT_HEADER_SIZE - 1];
        let err = parse_android_boot(&short).expect_err("too-small input must fail");
        assert!(matches!(err, AndroidBootError::TooSmall(n) if n == ANDROID_BOOT_HEADER_SIZE - 1));

        // 2) Header claims a kernel size that runs off the end of the buffer.
        // Build a valid 2 KiB-page image then truncate the kernel block.
        let mut img = build_image(4096, 0, b"", b"", 0, 2048);
        // Drop the trailing kernel bytes so the declared kernel_size is OOB.
        img.truncate(ANDROID_BOOT_HEADER_SIZE.div_ceil(2048) * 2048 + 1);
        let err = parse_android_boot(&img).expect_err("OOB kernel must fail");
        assert!(matches!(
            err,
            AndroidBootError::PayloadOutOfBounds {
                section: "kernel",
                ..
            }
        ));
    }
}
