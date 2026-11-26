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
