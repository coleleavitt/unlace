//! Static unpacking of UPX-packed executables.
//!
//! A UPX-packed binary shows the loader only: one tiny stub segment plus a blob
//! of compressed bytes. Every analysis in this crate -- function discovery,
//! strings, DWARF, the Listing walk -- therefore sees a program with almost no
//! code in it, and reports that honestly and uselessly. This module recovers the
//! *original* image so the rest of the tier has something to analyze.
//!
//! It is a reimplementation, not a wrapper: `upx -d` cannot be assumed present
//! on a machine running a release `unlace`, and shelling out to a packer to look
//! at a hostile binary is not a thing an analyzer should do. The compressed
//! stream is UCL NRV2B/NRV2D/NRV2E ([`nrv`]) or LZMA ([`lzma`]) under a
//! per-block branch filter ([`filter`]); the reconstruction walks live in
//! `elf` and `pe`.
//!
//! # Refusing beats guessing
//!
//! The output of this module is a file a human will disassemble and believe. A
//! subtly wrong one -- an unreversed filter leaves every call target wrong while
//! every size still adds up -- is far more expensive than no output at all. So
//! every unimplemented method, filter, format and layout is a named
//! [`UpxError::Unsupported`], and the walk additionally requires the stream to
//! terminate on the `UPX!` end marker at exactly the offset the last block ends
//! and to total exactly the original file size the header declares.
//!
//! Ported from UPX (GPL-2.0-or-later): `src/p_lx_elf.cpp`, `src/p_unix.cpp`,
//! `src/pefile.cpp`, `src/packer_r.cpp`, `src/packhead.cpp`, `src/filter/*.h`,
//! and UCL's `src/n2{b,d,e}_d.c`; the LZMA back-end follows the public-domain
//! LZMA SDK reference decoder.

pub mod filter;
pub mod lzma;
pub mod nrv;

mod elf;
mod pe;

use std::fmt;

/// `"UPX!"` as a little-endian u32 -- the magic on both `l_info` and the
/// trailing `PackHeader`, stored le32 regardless of target endianness.
pub const UPX_MAGIC_LE32: u32 = 0x2158_5055;

/// Size of the modern (version >= 10, non-DOS) `PackHeader`.
const PACK_HEADER_SIZE: usize = 32;

/// What the trailing `PackHeader` says about the packed file.
#[derive(Debug, Clone)]
pub struct PackInfo {
    /// File offset of the `UPX!` PackHeader.
    pub pack_header_offset: usize,
    /// Loader format version (`p[4]`), not the UPX release number.
    pub version: u8,
    /// `UPX_F_*` target format id (`p[5]`).
    pub format: u8,
    /// `M_*` compression method id (`p[6]`).
    pub method: u8,
    /// Compression level 1..=10 (`p[7]`).
    pub level: u8,
    /// File-level filter id and its `cto` byte (per-block ids override these).
    pub filter: u8,
    pub filter_cto: u8,
    /// Last block's uncompressed / compressed length, as UPX records them.
    pub u_len: u32,
    pub c_len: u32,
    /// Running Adler-32 over every uncompressed / compressed block, in stream
    /// order -- the packer's own end-to-end integrity check ([`adler32`]).
    pub u_adler: u32,
    pub c_adler: u32,
    /// Size of the original, unpacked file.
    pub u_file_size: u32,
    /// Offset of the `p_info` that starts the compressed overlay; `0` for a
    /// target whose layout has no overlay, which is every PE.
    pub overlay_offset: u32,
}

impl PackInfo {
    pub fn format_name(&self) -> &'static str {
        format_name(self.format)
    }

    pub fn method_name(&self) -> &'static str {
        method_name(self.method)
    }
}

/// One compressed block of the packed stream, as consumed.
#[derive(Debug, Clone)]
pub struct Block {
    /// File offset of the block's `b_info` header.
    pub offset: usize,
    pub u_len: u32,
    pub c_len: u32,
    pub method: u8,
    pub filter: u8,
    /// A block UPX could not compress, stored verbatim.
    pub stored: bool,
}

/// A successful unpack.
#[derive(Debug)]
pub struct Unpacked {
    pub info: PackInfo,
    /// The reconstructed original file.
    pub bytes: Vec<u8>,
    pub blocks: Vec<Block>,
}

impl Unpacked {
    /// Total compressed payload consumed, excluding block headers.
    pub fn compressed_bytes(&self) -> u64 {
        self.blocks.iter().map(|b| u64::from(b.c_len)).sum()
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum UpxError {
    /// No UPX PackHeader: the file is not UPX-packed (or not packed at all).
    NotPacked,
    /// Recognized as UPX, but this build cannot unpack it -- and says why.
    Unsupported(String),
    /// The headers are UPX's but do not describe a consistent file.
    Corrupt(String),
}

impl fmt::Display for UpxError {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            UpxError::NotPacked => write!(f, "no UPX PackHeader found"),
            UpxError::Unsupported(what) => write!(f, "unsupported UPX image: {what}"),
            UpxError::Corrupt(what) => write!(f, "corrupt UPX image: {what}"),
        }
    }
}

impl std::error::Error for UpxError {}

/// Is this image UPX-packed, and if so what does its header claim? Cheap: it
/// only reads the tail.
pub fn detect(image: &[u8]) -> Option<PackInfo> {
    parse_pack_header(image).ok()
}

/// Unpack `image`, returning the original file.
pub fn unpack(image: &[u8]) -> Result<Unpacked, UpxError> {
    let info = parse_pack_header(image)?;
    if pe::is_pe_format(info.format) {
        let img = pe::Image::new(image)?;
        let (bytes, blocks) = pe::unpack(&img, &info)?;
        return Ok(Unpacked {
            info,
            bytes,
            blocks,
        });
    }
    if !is_elf_format(info.format) {
        return Err(UpxError::Unsupported(format!(
            "target format {} ({}) -- only the ELF formats are implemented",
            info.format,
            info.format_name()
        )));
    }
    // Reject an unimplemented method up front, by name, rather than after
    // writing part of an image.
    elf::method_codec(info.method)?;
    let img = elf::Image::new(image)?;
    let (bytes, blocks) = elf::unpack(&img, &info)?;
    Ok(Unpacked {
        info,
        bytes,
        blocks,
    })
}

/// Locate and decode the `PackHeader`. A PE keeps it in the header padding
/// right before the compressed block, so that layout is probed first; every
/// other target UPX supports puts it in the tail, which is where
/// `find_overlay_offset` + `decodePackHeaderFromBuf` look.
fn parse_pack_header(image: &[u8]) -> Result<PackInfo, UpxError> {
    if let Some(at) = pe::find_pack_header(image) {
        return decode_pack_header(image, at, false);
    }
    if image.len() < PACK_HEADER_SIZE + 4 {
        return Err(UpxError::NotPacked);
    }
    // Scan only the tail UPX could have written into, and take the last
    // candidate whose own checksum validates -- the file's own bytes may well
    // contain "UPX!" elsewhere.
    let window = 2 * 4096 + 2 * (PACK_HEADER_SIZE + 4) + 1;
    let base = image.len().saturating_sub(window);
    let tail = &image[base..];
    let magic = UPX_MAGIC_LE32.to_le_bytes();
    let mut found: Option<usize> = None;
    for i in 0..tail.len().saturating_sub(PACK_HEADER_SIZE + 4 - 1) {
        if tail[i..i + 4] != magic {
            continue;
        }
        let p = &tail[i..];
        if p.len() < PACK_HEADER_SIZE + 4 {
            continue;
        }
        if p[4] < 10 {
            // Pre-10 headers have no checksum to validate and a different size;
            // this unpacker refuses them later anyway.
            continue;
        }
        if p[PACK_HEADER_SIZE - 1] != pack_header_checksum(&p[..PACK_HEADER_SIZE - 1]) {
            continue;
        }
        found = Some(i);
    }
    let i = found.ok_or(UpxError::NotPacked)?;
    // A PE-format header only turns up here when the PE probe could not read
    // the image's own headers; it still has no overlay field to decode, and
    // `unpack` then reports why those headers did not parse.
    decode_pack_header(image, base + i, !pe::is_pe_format(tail[i + 5]))
}

/// Decode the 32-byte `PackHeader` at `at`. `overlay` says whether the le32
/// after it is the overlay offset -- true for the tail layout every non-PE
/// target uses, false for a PE, where those four bytes are compressed data.
fn decode_pack_header(image: &[u8], at: usize, overlay: bool) -> Result<PackInfo, UpxError> {
    let p = image
        .get(at..)
        .filter(|p| p.len() >= PACK_HEADER_SIZE + if overlay { 4 } else { 0 })
        .ok_or(UpxError::NotPacked)?;
    let big_endian = p[5] >= 128;
    let rd = |o: usize| -> u32 {
        let a = [p[o], p[o + 1], p[o + 2], p[o + 3]];
        if big_endian {
            u32::from_be_bytes(a)
        } else {
            u32::from_le_bytes(a)
        }
    };
    let (u_len, c_len, u_adler, c_adler, u_file_size) = if big_endian {
        (rd(8), rd(12), rd(16), rd(20), rd(24))
    } else {
        (rd(16), rd(20), rd(8), rd(12), rd(24))
    };
    let overlay_offset = if overlay { rd(PACK_HEADER_SIZE) } else { 0 };
    if u_file_size == 0 || (overlay && overlay_offset as usize >= image.len()) {
        return Err(UpxError::Corrupt(
            "PackHeader declares an overlay outside the file".into(),
        ));
    }
    Ok(PackInfo {
        pack_header_offset: at,
        version: p[4],
        format: p[5],
        method: p[6],
        level: p[7] & 15,
        filter: p[28],
        filter_cto: p[29],
        u_len,
        c_len,
        u_adler,
        c_adler,
        u_file_size,
        overlay_offset,
    })
}

/// Adler-32 (RFC 1950), seeded the way UPX seeds it (`upx_adler32(nullptr, 0)`
/// is 1). This is what makes a static unpack *verifiable*: an LZ stream has no
/// internal integrity, so a flipped literal byte decodes to a wrong image of
/// exactly the right length -- only the packer's own running checksum catches it.
pub fn adler32(seed: u32, data: &[u8]) -> u32 {
    const BASE: u32 = 65521;
    // The zlib bound: the largest run that cannot overflow the u32 accumulators.
    const NMAX: usize = 5552;
    let mut s1 = seed & 0xffff;
    let mut s2 = (seed >> 16) & 0xffff;
    for chunk in data.chunks(NMAX) {
        for &b in chunk {
            s1 += u32::from(b);
            s2 += s1;
        }
        s1 %= BASE;
        s2 %= BASE;
    }
    (s2 << 16) | s1
}

/// `get_packheader_checksum`: sum of every header byte after the magic, mod 251.
fn pack_header_checksum(after_magic: &[u8]) -> u8 {
    let sum: u32 = after_magic[4..].iter().map(|b| u32::from(*b)).sum();
    (sum % 251) as u8
}

fn is_elf_format(format: u8) -> bool {
    matches!(
        format,
        12 | 20 | 22 | 23 | 25 | 30 | 39 | 42 | 45 | 132 | 133 | 137 | 140
    )
}

/// `UPX_F_*` names, from UPX's `src/conf.h`. Unknown ids report as such rather
/// than being guessed into a neighbour's name.
pub fn format_name(format: u8) -> &'static str {
    match format {
        1 => "dos/com",
        2 => "dos/sys",
        3 | 7 => "dos/exe",
        4 => "djgpp2/coff",
        5 => "watcom/le",
        8 => "tmt/adam",
        9 => "win32/pe",
        10 => "linux/i386",
        12 => "linux/elf386",
        14 => "linux/sh-i386",
        15 => "vmlinuz/i386",
        16 => "bvmlinuz/i386",
        18 => "ps1/exe",
        19 => "vmlinux/i386",
        20 => "linux/elfi386",
        21 => "wince/arm",
        22 => "linux/amd64",
        23 => "linux/arm",
        24 => "bsd/i386",
        25 => "bsd/elf386",
        26 => "bsd/sh-i386",
        27 => "vmlinux/amd64",
        28 => "vmlinux/arm",
        29 => "mach/i386",
        30 => "linux/mipsel",
        31 => "vmlinuz/arm",
        32 => "mach/arm",
        33 => "dylib/i386",
        34 => "mach/amd64",
        35 => "dylib/amd64",
        36 => "win64/pe",
        37 => "mach/arm64",
        39 => "linux/ppc64le",
        40 => "vmlinux/ppc64le",
        42 => "linux/arm64",
        43 => "win64/arm64",
        44 => "win64/arm64ec",
        45 => "linux/riscv64",
        46 => "cpm86/cmd",
        129 => "atari/tos",
        131 => "mach/ppc32",
        132 => "linux/ppc32",
        133 => "linux/armeb",
        134 => "mach/fat",
        135 => "vmlinux/armeb",
        136 => "vmlinux/ppc32",
        137 => "linux/mips",
        138 => "dylib/ppc32",
        139 => "mach/ppc64",
        140 => "linux/ppc64",
        141 => "vmlinux/ppc64",
        142 => "dylib/ppc64",
        _ => "unknown",
    }
}

/// `M_*` names, from UPX's `src/conf.h`.
pub fn method_name(method: u8) -> &'static str {
    match method {
        2 => "NRV2B_LE32",
        3 => "NRV2B_8",
        4 => "NRV2B_LE16",
        5 => "NRV2D_LE32",
        6 => "NRV2D_8",
        7 => "NRV2D_LE16",
        8 => "NRV2E_LE32",
        9 => "NRV2E_8",
        10 => "NRV2E_LE16",
        11 => "CL1B_LE32",
        12 => "CL1B_8",
        13 => "CL1B_LE16",
        14 => "LZMA",
        15 => "DEFLATE",
        16 => "ZSTD",
        17 => "BZIP2",
        _ => "unknown",
    }
}

#[cfg(test)]
mod tests;
