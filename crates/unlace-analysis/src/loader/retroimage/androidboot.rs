//! Android boot image (`boot.img`, AOSP header versions 0-2): the kernel is
//! mapped as the module at its `kernel_addr`, entered at its first byte. The
//! language comes from the kernel's own header: an arm64 `Image` (`ARM\x64` at
//! 0x38) or an ARM `zImage` (0x016f2818 at 0x24). The ramdisk and second-stage
//! loader are not mapped and are named in the notes. Header fields are read as
//! little-endian; every offset and size is checked before use.

use object::SectionKind;
use unlace_base::error::UnlaceResult;

use super::{Bytes, MAX_MODULE, RetroImage, RetroSection, invalid};

const FORMAT: &str = "Android boot image";
const MAGIC: &[u8] = b"ANDROID!";
const HEADER_SIZE: u64 = 0x660;
pub const LANGUAGE_ARM64: &str = "AARCH64:LE:64:v8A";
pub const LANGUAGE_ARM32: &str = "ARM:LE:32:v7";

pub fn probe(prefix: &[u8]) -> bool {
    prefix.starts_with(MAGIC)
}

fn kernel_language(kernel: &[u8]) -> Option<&'static str> {
    if kernel.get(0x38..0x3c) == Some(&b"ARM\x64"[..]) {
        return Some(LANGUAGE_ARM64);
    }
    if (Bytes {
        data: kernel,
        big: false,
    })
    .u32(0x24)
        == Some(0x016f_2818)
    {
        return Some(LANGUAGE_ARM32);
    }
    None
}

fn align_up(value: u64, align: u64) -> Option<u64> {
    value.checked_add(align - 1).map(|v| v & !(align - 1))
}

pub fn parse(filename: &str, bytes: &[u8]) -> UnlaceResult<RetroImage> {
    let bad = |detail: &str| invalid(filename, FORMAT, detail);
    if !probe(bytes) {
        return Err(bad("missing the ANDROID! magic"));
    }
    if (bytes.len() as u64) < HEADER_SIZE {
        return Err(bad("shorter than the 0x660-byte header"));
    }
    let file = Bytes {
        data: bytes,
        big: false,
    };
    let field = |at| {
        file.u32(at)
            .map(u64::from)
            .ok_or_else(|| bad("truncated header"))
    };
    let kernel_size = field(0x008)?;
    let kernel_addr = field(0x00c)?;
    let ramdisk_size = field(0x010)?;
    let ramdisk_addr = field(0x014)?;
    let second_size = field(0x018)?;
    let page_size = field(0x024)?;
    if page_size == 0 || !page_size.is_power_of_two() {
        return Err(bad("page size is not a power of two"));
    }
    let kernel_offset =
        align_up(HEADER_SIZE, page_size).ok_or_else(|| bad("page size overflows the header"))?;
    if kernel_size == 0 || kernel_size > MAX_MODULE {
        return Err(bad("kernel size is empty or larger than the module limit"));
    }
    let kernel_end = kernel_offset
        .checked_add(kernel_size)
        .ok_or_else(|| bad("kernel size overflows"))?;
    if kernel_end > bytes.len() as u64 {
        return Err(bad("kernel runs past the end of the file"));
    }
    if ramdisk_size > 0 {
        let ramdisk_end = align_up(kernel_end, page_size)
            .and_then(|at| at.checked_add(ramdisk_size))
            .ok_or_else(|| bad("ramdisk size overflows"))?;
        if ramdisk_end > bytes.len() as u64 {
            return Err(bad("ramdisk runs past the end of the file"));
        }
    }
    if kernel_addr + kernel_size > 1 << 32 {
        return Err(bad("kernel does not fit the 32-bit address space"));
    }
    let kernel = file
        .slice(kernel_offset, kernel_size)
        .ok_or_else(|| bad("truncated kernel"))?;
    let language = kernel_language(kernel)
        .ok_or_else(|| bad("kernel is neither an arm64 Image nor an ARM zImage"))?;
    let mut notes = Vec::new();
    if ramdisk_size > 0 {
        notes.push(format!(
            "the ramdisk ({ramdisk_size:#x} bytes at {ramdisk_addr:#x}) is not mapped"
        ));
    }
    if second_size > 0 {
        notes.push(format!(
            "the second-stage loader ({second_size:#x} bytes) is not mapped"
        ));
    }
    Ok(RetroImage {
        format: FORMAT,
        language,
        base: kernel_addr,
        module: kernel.to_vec(),
        entry: kernel_addr,
        sections: vec![RetroSection {
            name: ".kernel".into(),
            offset: 0,
            size: kernel_size,
            kind: SectionKind::Text,
            file_range: Some((kernel_offset, kernel_size)),
        }],
        symbols: Vec::new(),
        tracked: Vec::new(),
        notes,
    })
}

#[cfg(test)]
mod tests {
    use super::*;

    const PAGE: usize = 2048;

    fn boot_image(kernel: &[u8], ramdisk_len: usize) -> Vec<u8> {
        let mut buf = vec![0u8; PAGE];
        buf[..8].copy_from_slice(MAGIC);
        buf[0x008..0x00c].copy_from_slice(&(kernel.len() as u32).to_le_bytes());
        buf[0x00c..0x010].copy_from_slice(&0x8008_0000u32.to_le_bytes());
        buf[0x010..0x014].copy_from_slice(&(ramdisk_len as u32).to_le_bytes());
        buf[0x014..0x018].copy_from_slice(&0x8800_0000u32.to_le_bytes());
        buf[0x024..0x028].copy_from_slice(&(PAGE as u32).to_le_bytes());
        buf.extend_from_slice(kernel);
        buf.resize(PAGE + kernel.len().div_ceil(PAGE) * PAGE, 0);
        buf.extend_from_slice(&vec![0xbb; ramdisk_len]);
        buf
    }

    fn arm64_kernel() -> Vec<u8> {
        let mut kernel = vec![0u8; 0x40];
        kernel[0x38..0x3c].copy_from_slice(b"ARM\x64");
        kernel
    }

    #[test]
    fn maps_an_arm64_kernel_at_its_load_address() {
        let kernel = arm64_kernel();
        let bytes = boot_image(&kernel, 16);
        assert!(probe(&bytes));
        let image = parse("boot.img", &bytes).unwrap_or_else(|error| panic!("{}", error.explain()));
        assert_eq!((image.format, image.language), (FORMAT, LANGUAGE_ARM64));
        assert_eq!((image.base, image.entry), (0x8008_0000, 0x8008_0000));
        assert_eq!(image.module, kernel);
        assert_eq!(image.sections[0].file_range, Some((PAGE as u64, 0x40)));
        assert_eq!(image.notes.len(), 1);
    }

    #[test]
    fn refuses_a_page_size_that_is_not_a_power_of_two() {
        let mut bytes = boot_image(&arm64_kernel(), 0);
        bytes[0x024..0x028].copy_from_slice(&3000u32.to_le_bytes());
        assert!(parse("boot.img", &bytes).is_err());
    }

    #[test]
    fn refuses_a_kernel_that_is_not_arm() {
        let bytes = boot_image(&[0u8; 0x40], 0);
        assert!(parse("boot.img", &bytes).is_err());
    }
}
