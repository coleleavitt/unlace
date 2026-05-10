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

// ---------------------------------------------------------------------------
// t112: dyld_cache_slide_info3 — page-chain rewriter for the modern slide
// format used by arm64e shared caches.
// ---------------------------------------------------------------------------

/// Decoded `dyld_cache_slide_info3`.
///
/// Layout on disk (little-endian):
///
/// ```text
///   uint32  version           // = 3
///   uint32  page_size
///   uint32  page_starts_count
///   uint32  pad
///   uint64  auth_value_add
///   uint16  page_starts[page_starts_count]
/// ```
///
/// We don't yet model v1/v2/v5 — the runtime caches Apple ships post-iOS 12
/// are overwhelmingly v3 (arm64e) or per-mapping v3 inside
/// `dyld_cache_mapping_and_slide_info`.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SlideInfo {
    pub version: u32,
    pub page_size: u32,
    pub page_starts: Vec<u16>,
    pub value_add: u64,
}

/// `page_starts[i] == DELTA_NONE` marks a page with no fixups.
pub const SLIDE_V3_PAGE_NONE: u16 = 0xFFFF;

/// Parse a `dyld_cache_slide_info3` blob.
///
/// Returns `None` when `data[off..off+size]` is out of bounds, when the
/// version field isn't 3, or when the header runs short of `page_starts`.
pub fn parse_v3_slide_info(data: &[u8], off: u64, size: u64) -> Option<SlideInfo> {
    let start = usize::try_from(off).ok()?;
    let len = usize::try_from(size).ok()?;
    let end = start.checked_add(len)?;
    if end > data.len() || len < 24 {
        return None;
    }
    let blob = &data[start..end];
    let version = u32::from_le_bytes(blob[0..4].try_into().ok()?);
    if version != 3 {
        return None;
    }
    let page_size = u32::from_le_bytes(blob[4..8].try_into().ok()?);
    let page_starts_count = u32::from_le_bytes(blob[8..12].try_into().ok()?) as usize;
    // bytes 12..16 are padding.
    let value_add = u64::from_le_bytes(blob[16..24].try_into().ok()?);

    let starts_end = 24usize.checked_add(page_starts_count.checked_mul(2)?)?;
    if starts_end > blob.len() {
        return None;
    }
    let mut page_starts = Vec::with_capacity(page_starts_count);
    for i in 0..page_starts_count {
        let off = 24 + i * 2;
        page_starts.push(u16::from_le_bytes(blob[off..off + 2].try_into().ok()?));
    }
    Some(SlideInfo {
        version,
        page_size,
        page_starts,
        value_add,
    })
}

const SLIDE_V3_MAX_CHAIN: usize = 1 << 14;

/// Walk a single page's chain. For each 8-byte entry encountered, invoke
/// `visit(file_offset, raw)` where `raw` is the unmodified little-endian
/// 64-bit value at that slot.
///
/// Returns the number of chain entries visited (capped at
/// `SLIDE_V3_MAX_CHAIN` to guard against malformed loops).
fn walk_v3_page<F: FnMut(usize, u64)>(image: &[u8], page_base: usize, page_start: u16, mut visit: F) -> usize {
    if page_start == SLIDE_V3_PAGE_NONE {
        return 0;
    }
    let mut chain_off = page_base + page_start as usize;
    let mut count = 0usize;
    while count < SLIDE_V3_MAX_CHAIN {
        if chain_off + 8 > image.len() {
            break;
        }
        let raw = u64::from_le_bytes(image[chain_off..chain_off + 8].try_into().unwrap_or([0; 8]));
        visit(chain_off, raw);
        // next is bits 51..62 (12 bits), in 8-byte units; 0 ends the chain.
        let next = (raw >> 51) & 0x7FF;
        count += 1;
        if next == 0 {
            break;
        }
        chain_off = chain_off.saturating_add((next as usize) * 8);
    }
    count
}

/// Apply v3 slide rewrites to `image`, returning a fresh buffer.
///
/// `slide_amount` is the post-load runtime slide added to each rebased
/// pointer (after `slide.value_add`). Authenticated entries (`is_auth=1`)
/// preserve the auth diversity bits and reuse the 32-bit `target` field as
/// `target + value_add + slide_amount`.
pub fn apply_v3_slide(image: &[u8], slide: &SlideInfo, slide_amount: u64) -> Vec<u8> {
    let mut out = image.to_vec();
    if slide.version != 3 || slide.page_size == 0 {
        return out;
    }
    let page_size = slide.page_size as usize;
    for (page_idx, &start) in slide.page_starts.iter().enumerate() {
        let page_base = page_idx * page_size;
        if page_base >= out.len() {
            break;
        }
        let mut entries = Vec::new();
        walk_v3_page(&out, page_base, start, |off, raw| entries.push((off, raw)));
        for (off, raw) in entries {
            let new_raw = rewrite_v3_entry(raw, slide.value_add + slide_amount);
            if off + 8 <= out.len() {
                out[off..off + 8].copy_from_slice(&new_raw.to_le_bytes());
            }
        }
    }
    out
}

fn rewrite_v3_entry(raw: u64, add: u64) -> u64 {
    let is_auth = (raw >> 63) & 1 == 1;
    if is_auth {
        // dyld_cache_slide_pointer3.auth:
        //   target:32 (offset within cache)
        //   diversity:16
        //   addr_div:1
        //   key:2
        //   next:11
        //   bind:1 = 0
        //   auth:1 = 1
        let target = raw & 0xFFFF_FFFF;
        let upper = raw & !0xFFFF_FFFF;
        let new_target = (target.wrapping_add(add)) & 0xFFFF_FFFF;
        new_target | upper
    } else {
        // dyld_cache_slide_pointer3.plain:
        //   target:51 + high8:8 packed as: top 8 bits of full VA in bits 36..43,
        //   target offset in bits 0..36; bits 51..62 = next; bit 62 = auth=0; bit 63=0.
        // Concretely: full value = (target as low 51 bits) + value_add.
        let next = (raw >> 51) & 0x7FF;
        let target51 = raw & 0x0007_FFFF_FFFF_FFFF;
        let new_val = target51.wrapping_add(add);
        // Preserve the original `next` so the chain can still be re-walked.
        (next << 51) | (new_val & 0x0007_FFFF_FFFF_FFFF)
    }
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

    // -----------------------------------------------------------------------
    // t112: dyld v3 slide-info tests
    // -----------------------------------------------------------------------

    /// Build a v3 slide_info blob and pad to a multiple of `page_size` so
    /// callers can splice it into a synthetic file image.
    fn build_v3_slide(page_size: u32, value_add: u64, page_starts: &[u16]) -> Vec<u8> {
        let mut buf = vec![0u8; 24 + page_starts.len() * 2];
        buf[0..4].copy_from_slice(&3u32.to_le_bytes()); // version
        buf[4..8].copy_from_slice(&page_size.to_le_bytes());
        buf[8..12].copy_from_slice(&(page_starts.len() as u32).to_le_bytes());
        // pad bytes 12..16 left zero
        buf[16..24].copy_from_slice(&value_add.to_le_bytes());
        for (i, &s) in page_starts.iter().enumerate() {
            let off = 24 + i * 2;
            buf[off..off + 2].copy_from_slice(&s.to_le_bytes());
        }
        buf
    }

    #[test]
    fn parse_v3_header() {
        let blob = build_v3_slide(0x4000, 0x1_8000_0000, &[0, SLIDE_V3_PAGE_NONE, 16]);
        let slide = parse_v3_slide_info(&blob, 0, blob.len() as u64).expect("parses");
        assert_eq!(slide.version, 3);
        assert_eq!(slide.page_size, 0x4000);
        assert_eq!(slide.value_add, 0x1_8000_0000);
        assert_eq!(slide.page_starts, vec![0, SLIDE_V3_PAGE_NONE, 16]);

        // Reject blob with wrong version.
        let mut bad = blob.clone();
        bad[0] = 1;
        assert!(parse_v3_slide_info(&bad, 0, bad.len() as u64).is_none());
    }

    #[test]
    fn walk_single_page_chain() {
        // Build a page-sized image (0x4000 bytes) with three chained entries:
        //   off=0  -> next=2 (i.e. +16 bytes)
        //   off=16 -> next=1 (i.e. +8 bytes)
        //   off=24 -> next=0 (end)
        let page_size = 0x4000usize;
        let mut image = vec![0u8; page_size];

        let mk = |target: u64, next: u64| -> u64 {
            (next << 51) | (target & 0x0007_FFFF_FFFF_FFFF)
        };
        let e0 = mk(0xAAA, 2);
        let e1 = mk(0xBBB, 1);
        let e2 = mk(0xCCC, 0);
        image[0..8].copy_from_slice(&e0.to_le_bytes());
        image[16..24].copy_from_slice(&e1.to_le_bytes());
        image[24..32].copy_from_slice(&e2.to_le_bytes());

        let mut visited = Vec::new();
        let count = walk_v3_page(&image, 0, 0, |off, raw| visited.push((off, raw)));
        assert_eq!(count, 3);
        assert_eq!(visited.len(), 3);
        assert_eq!(visited[0].0, 0);
        assert_eq!(visited[1].0, 16);
        assert_eq!(visited[2].0, 24);
    }

    #[test]
    fn apply_slide_rewrites_pointer() {
        // Single page, one rebase entry. target = 0x100, value_add = 0x1000,
        // slide_amount = 0x40 -> rewritten target = 0x1140.
        let page_size = 0x4000usize;
        let mut image = vec![0u8; page_size];
        let mk = |target: u64, next: u64| -> u64 {
            (next << 51) | (target & 0x0007_FFFF_FFFF_FFFF)
        };
        image[0..8].copy_from_slice(&mk(0x100, 0).to_le_bytes());

        let slide = SlideInfo {
            version: 3,
            page_size: page_size as u32,
            page_starts: vec![0],
            value_add: 0x1000,
        };
        let out = apply_v3_slide(&image, &slide, 0x40);
        let new_raw = u64::from_le_bytes(out[0..8].try_into().unwrap());
        // Lower 51 bits hold the slid target.
        assert_eq!(new_raw & 0x0007_FFFF_FFFF_FFFF, 0x1140);
        // Upper bits (next=0, auth=0) preserved at zero.
        assert_eq!(new_raw >> 51, 0);
    }
}
