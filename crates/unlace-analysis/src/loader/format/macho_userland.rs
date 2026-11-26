//! Is a Mach-O image a program for Darwin's user space?
//!
//! An executable, a dylib or a bundle runs in user space and traps into the
//! kernel with `svc #0x80`; a kext (`MH_KEXT_BUNDLE`), a file set (a kernel
//! collection) or a preloaded image does not. A fat file answers for its first
//! slice.

const MH_MAGIC: u32 = 0xfeed_face;
const MH_MAGIC_64: u32 = 0xfeed_facf;
const FAT_MAGIC: u32 = 0xcafe_babe;
const MH_EXECUTE: u32 = 2;
const MH_DYLIB: u32 = 6;
const MH_BUNDLE: u32 = 8;

/// Is `bytes` a Mach-O executable, dylib or bundle (or a fat file whose first
/// slice is one)?
pub fn is_macho_userland_image(bytes: &[u8]) -> bool {
    let be = |at: usize| -> Option<u32> {
        Some(u32::from_be_bytes(bytes.get(at..at + 4)?.try_into().ok()?))
    };
    let le = |at: usize| -> Option<u32> {
        Some(u32::from_le_bytes(bytes.get(at..at + 4)?.try_into().ok()?))
    };
    let header = |at: usize| -> bool {
        matches!(le(at), Some(MH_MAGIC | MH_MAGIC_64))
            && matches!(le(at + 12), Some(MH_EXECUTE | MH_DYLIB | MH_BUNDLE))
    };
    if be(0) == Some(FAT_MAGIC) {
        let Some(offset) = be(16).and_then(|o| usize::try_from(o).ok()) else {
            return false;
        };
        return be(4).is_some_and(|n| n > 0 && n < 64) && header(offset);
    }
    header(0)
}

#[cfg(test)]
mod tests;
