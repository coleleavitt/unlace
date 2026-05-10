//! Dyld shared-cache parser (header + image listing MVP).
//!
//! The dyld shared cache (`/System/Library/dyld/dyld_shared_cache_*` on macOS,
//! and the equivalent inside iOS firmware) packs all system frameworks into a
//! single contiguous file. Each image's mach_header is laid out at a virtual
//! address inside one of the cache's mappings; the file offset for that header
//! is recovered by translating the VA through the mapping table.
//!
//! This MVP covers:
//!
//! * 16-byte magic recognition (`dyld_v1*`).
//! * Header parse — `mappingOffset/Count`, `imagesOffset/Count`.
//! * Image listing — paths and addresses.
//! * Raw byte extraction by image path: a fixed 16 MiB window starting at the
//!   translated file offset is returned. Full Mach-O reconstruction (segment
//!   fix-ups, slid linkedit, stripped __OBJC_RO) is a follow-up.

use std::convert::TryInto;

/// Maximum bytes returned from [`DyldCache::extract_image`] per image.
const EXTRACT_WINDOW: usize = 16 * 1024 * 1024;

/// dyld magic prefix; the full string is `dyld_v1` + arch (e.g. `   x86_64`).
const MAGIC_PREFIX: &[u8] = b"dyld_v1";

/// Decoded fields of the dyld_cache_header relevant to MVP parsing.
#[derive(Debug, Clone)]
pub struct DyldCacheHeader {
    pub magic: [u8; 16],
    pub mapping_offset: u32,
    pub mapping_count: u32,
    pub images_offset: u32,
    pub images_count: u32,
}

/// One entry from `dyld_cache_mapping_info`.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct Mapping {
    pub address: u64,
    pub size: u64,
    pub file_offset: u64,
}

/// One entry from `dyld_cache_image_info`.
#[derive(Debug, Clone)]
pub struct ImageEntry {
    pub address: u64,
    pub path: String,
}

/// Parsed dyld shared cache.
pub struct DyldCache<'a> {
    data: &'a [u8],
    header: DyldCacheHeader,
    mappings: Vec<Mapping>,
    images: Vec<ImageEntry>,
}

impl<'a> DyldCache<'a> {
    /// Parse a dyld shared cache from raw bytes.
    ///
    /// Returns `None` if the magic doesn't match or the header / image / mapping
    /// tables are truncated.
    pub fn parse(data: &'a [u8]) -> Option<Self> {
        let header = parse_header(data)?;
        let mappings = parse_mappings(data, &header)?;
        let images = parse_images(data, &header)?;
        Some(Self {
            data,
            header,
            mappings,
            images,
        })
    }

    pub fn header(&self) -> &DyldCacheHeader {
        &self.header
    }

    pub fn mappings(&self) -> &[Mapping] {
        &self.mappings
    }

    pub fn list_images(&self) -> &[ImageEntry] {
        &self.images
    }

    /// Translate a runtime virtual address to a file offset using the mapping
    /// table.
    pub fn vaddr_to_file_offset(&self, vaddr: u64) -> Option<u64> {
        for m in &self.mappings {
            if vaddr >= m.address && vaddr < m.address.checked_add(m.size)? {
                return Some(m.file_offset + (vaddr - m.address));
            }
        }
        None
    }

    /// Extract a raw byte window for the image installed at `path`.
    ///
    /// The window is up to `EXTRACT_WINDOW` bytes starting at the image's
    /// mach_header file offset. Callers wanting a self-contained Mach-O must
    /// further reconstruct segment LINKEDIT — that's out of scope for the MVP.
    pub fn extract_image(&self, path: &str) -> Option<Vec<u8>> {
        let entry = self.images.iter().find(|e| e.path == path)?;
        let off = self.vaddr_to_file_offset(entry.address)? as usize;
        let end = off
            .checked_add(EXTRACT_WINDOW)
            .map(|e| e.min(self.data.len()))
            .unwrap_or(self.data.len());
        if off >= self.data.len() {
            return None;
        }
        Some(self.data[off..end].to_vec())
    }
}

fn parse_header(data: &[u8]) -> Option<DyldCacheHeader> {
    if data.len() < 32 {
        return None;
    }
    let mut magic = [0u8; 16];
    magic.copy_from_slice(&data[0..16]);
    if !magic.starts_with(MAGIC_PREFIX) {
        return None;
    }
    Some(DyldCacheHeader {
        magic,
        mapping_offset: u32::from_le_bytes(data[16..20].try_into().ok()?),
        mapping_count: u32::from_le_bytes(data[20..24].try_into().ok()?),
        images_offset: u32::from_le_bytes(data[24..28].try_into().ok()?),
        images_count: u32::from_le_bytes(data[28..32].try_into().ok()?),
    })
}

fn parse_mappings(data: &[u8], h: &DyldCacheHeader) -> Option<Vec<Mapping>> {
    // dyld_cache_mapping_info is 32 bytes:
    //   uint64 address; uint64 size; uint64 fileOffset;
    //   uint32 maxProt; uint32 initProt;
    const ENTRY_SIZE: usize = 32;
    let count = h.mapping_count as usize;
    if count == 0 {
        return Some(Vec::new());
    }
    let start = h.mapping_offset as usize;
    let end = start.checked_add(count.checked_mul(ENTRY_SIZE)?)?;
    if end > data.len() {
        return None;
    }

    let mut out = Vec::with_capacity(count);
    for i in 0..count {
        let base = start + i * ENTRY_SIZE;
        out.push(Mapping {
            address: u64::from_le_bytes(data[base..base + 8].try_into().ok()?),
            size: u64::from_le_bytes(data[base + 8..base + 16].try_into().ok()?),
            file_offset: u64::from_le_bytes(data[base + 16..base + 24].try_into().ok()?),
        });
    }
    Some(out)
}

fn parse_images(data: &[u8], h: &DyldCacheHeader) -> Option<Vec<ImageEntry>> {
    // dyld_cache_image_info is 32 bytes:
    //   uint64 address; uint64 modTime; uint64 inode;
    //   uint32 pathFileOffset; uint32 pad;
    const ENTRY_SIZE: usize = 32;
    let count = h.images_count as usize;
    if count == 0 {
        return Some(Vec::new());
    }
    let start = h.images_offset as usize;
    let end = start.checked_add(count.checked_mul(ENTRY_SIZE)?)?;
    if end > data.len() {
        return None;
    }

    let mut out = Vec::with_capacity(count);
    for i in 0..count {
        let base = start + i * ENTRY_SIZE;
        let address = u64::from_le_bytes(data[base..base + 8].try_into().ok()?);
        let path_offset = u32::from_le_bytes(data[base + 24..base + 28].try_into().ok()?) as usize;
        let path = read_cstr(data, path_offset).unwrap_or_default();
        out.push(ImageEntry { address, path });
    }
    Some(out)
}

fn read_cstr(data: &[u8], offset: usize) -> Option<String> {
    if offset >= data.len() {
        return None;
    }
    let tail = &data[offset..];
    let len = tail.iter().position(|&b| b == 0).unwrap_or(tail.len());
    Some(String::from_utf8_lossy(&tail[..len]).into_owned())
}

#[cfg(test)]
mod tests {
    use super::*;

    /// Minimum cache shell: header + N mappings + M image-infos + a path table.
    ///
    /// Layout (all little-endian):
    ///   0x0000..0x0010  magic (16 B)
    ///   0x0010          mapping_offset (u32) = 0x0040
    ///   0x0014          mapping_count  (u32)
    ///   0x0018          images_offset  (u32) = 0x0040 + 32*mapping_count
    ///   0x001C          images_count   (u32)
    ///   ...mappings (32 B each)
    ///   ...image infos (32 B each)
    ///   ...path bytes (NUL-terminated)
    fn build_cache(magic: &[u8; 16], images: &[(&str, u64)], mappings: &[Mapping]) -> Vec<u8> {
        let mapping_offset = 0x40u32;
        let images_offset = mapping_offset + (mappings.len() as u32) * 32;
        let path_table_offset = images_offset + (images.len() as u32) * 32;

        // Reserve enough space; we will append paths and recompute as we go.
        let mut buf = vec![0u8; path_table_offset as usize];

        buf[0..16].copy_from_slice(magic);
        buf[16..20].copy_from_slice(&mapping_offset.to_le_bytes());
        buf[20..24].copy_from_slice(&(mappings.len() as u32).to_le_bytes());
        buf[24..28].copy_from_slice(&images_offset.to_le_bytes());
        buf[28..32].copy_from_slice(&(images.len() as u32).to_le_bytes());

        for (i, m) in mappings.iter().enumerate() {
            let base = mapping_offset as usize + i * 32;
            buf[base..base + 8].copy_from_slice(&m.address.to_le_bytes());
            buf[base + 8..base + 16].copy_from_slice(&m.size.to_le_bytes());
            buf[base + 16..base + 24].copy_from_slice(&m.file_offset.to_le_bytes());
            // maxProt / initProt left zero — unused by the parser.
        }

        // Write image-info records, recording path offsets as we append paths.
        let mut path_cursor = path_table_offset as usize;
        for (i, (path, addr)) in images.iter().enumerate() {
            let base = images_offset as usize + i * 32;
            buf[base..base + 8].copy_from_slice(&addr.to_le_bytes());
            // modTime / inode left zero.
            buf[base + 24..base + 28].copy_from_slice(&(path_cursor as u32).to_le_bytes());

            buf.extend_from_slice(path.as_bytes());
            buf.push(0);
            path_cursor += path.len() + 1;
        }
        buf
    }

    fn magic_x86_64() -> [u8; 16] {
        let mut m = [0u8; 16];
        m[..b"dyld_v1   x86_64".len()].copy_from_slice(b"dyld_v1   x86_64");
        m
    }

    #[test]
    fn parse_synthetic_header() {
        let data = build_cache(&magic_x86_64(), &[], &[]);
        let cache = DyldCache::parse(&data).expect("magic recognized");
        assert_eq!(&cache.header().magic[..7], b"dyld_v1");
        assert_eq!(cache.header().mapping_count, 0);
        assert_eq!(cache.header().images_count, 0);
        assert!(cache.list_images().is_empty());
        assert!(cache.mappings().is_empty());
    }

    #[test]
    fn list_images_finds_paths() {
        let data = build_cache(
            &magic_x86_64(),
            &[
                ("/usr/lib/libSystem.B.dylib", 0x1_8000_0000),
                ("/usr/lib/libobjc.A.dylib", 0x1_8001_0000),
            ],
            &[],
        );
        let cache = DyldCache::parse(&data).expect("parse cache");
        let images = cache.list_images();
        assert_eq!(images.len(), 2);
        assert_eq!(images[0].path, "/usr/lib/libSystem.B.dylib");
        assert_eq!(images[0].address, 0x1_8000_0000);
        assert_eq!(images[1].path, "/usr/lib/libobjc.A.dylib");
        assert_eq!(images[1].address, 0x1_8001_0000);
    }

    #[test]
    fn rejects_bad_magic() {
        let mut data = vec![0u8; 256];
        data[..b"NOTACACHE".len()].copy_from_slice(b"NOTACACHE");
        assert!(DyldCache::parse(&data).is_none());
    }

    #[test]
    fn extract_image_uses_mapping_translation() {
        // Mapping covers VA 0x1_8000_0000..+0x1000 → file offset 0x1000.
        let mapping = Mapping {
            address: 0x1_8000_0000,
            size: 0x1000,
            file_offset: 0x1000,
        };
        let mut data = build_cache(
            &magic_x86_64(),
            &[("/usr/lib/libfoo.dylib", 0x1_8000_0040)],
            &[mapping],
        );
        // Resize to include the mapped region and stamp a recognizable byte.
        let needed = 0x1000 + 0x100;
        if data.len() < needed {
            data.resize(needed, 0);
        }
        data[0x1040] = 0xCF;

        let cache = DyldCache::parse(&data).expect("parse");
        let bytes = cache
            .extract_image("/usr/lib/libfoo.dylib")
            .expect("extract image");
        assert_eq!(bytes.first().copied(), Some(0xCF));
    }
}
