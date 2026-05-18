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

use std::collections::BTreeMap;
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
/// Slide-info blob location inside a [`DyldCache`].
///
/// Modern dyld caches carry slide-info offsets inside
/// `dyld_cache_mapping_and_slide_info` records, but the legacy
/// `mapping_info` parser used by this MVP does not surface them. Callers
/// that already know where the slide-info header lives (e.g. extracted
/// from a separate parse pass or a `.dylddata` sidecar) can register it
/// via [`DyldCache::set_slide_info`]; subsequent
/// [`extract_image_with_slide`] calls will then dispatch through
/// [`apply_slide_info`] and rebase the returned bytes.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct SlideInfoLocation {
    pub file_offset: u64,
    pub size: u64,
}

pub struct DyldCache<'a> {
    data: &'a [u8],
    header: DyldCacheHeader,
    mappings: Vec<Mapping>,
    images: Vec<ImageEntry>,
    slide_info: Option<SlideInfoLocation>,
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
            slide_info: None,
        })
    }

    /// Register where the slide-info blob lives inside this cache. Once
    /// set, [`extract_image_with_slide`] applies the appropriate v1–v5
    /// rebase pass to extracted image bytes.
    pub fn set_slide_info(&mut self, loc: SlideInfoLocation) {
        self.slide_info = Some(loc);
    }

    /// Currently-registered slide-info blob location, if any.
    pub fn slide_info(&self) -> Option<SlideInfoLocation> {
        self.slide_info
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

    /// Phase 1: produce a layout plan for the image installed at
    /// `image_vaddr`. Walks every `LC_SEGMENT_64` load command and
    /// records each segment's bounds inside the cache plus the
    /// linearised output offset where it should land in a standalone
    /// Mach-O blob.
    ///
    /// Returns `None` if the address doesn't translate, the header
    /// magic isn't `MH_MAGIC_64`, or the load-command region runs off
    /// the cache.
    pub fn plan_image(&self, image_vaddr: u64) -> Option<ImagePlan> {
        const MH_MAGIC_64_LE: u32 = 0xfeedfacf;
        const LC_SEGMENT_64: u32 = 0x19;

        let header_off = self.vaddr_to_file_offset(image_vaddr)? as usize;
        if header_off.checked_add(32)? > self.data.len() {
            return None;
        }
        let magic = u32::from_le_bytes(self.data[header_off..header_off + 4].try_into().ok()?);
        if magic != MH_MAGIC_64_LE {
            return None;
        }
        let ncmds = u32::from_le_bytes(
            self.data[header_off + 16..header_off + 20]
                .try_into()
                .ok()?,
        );
        let sizeofcmds = u32::from_le_bytes(
            self.data[header_off + 20..header_off + 24]
                .try_into()
                .ok()?,
        );
        let lc_start = header_off.checked_add(32)?;
        let lc_end = lc_start.checked_add(sizeofcmds as usize)?;
        if lc_end > self.data.len() {
            return None;
        }

        // Reserve room for the original mach_header_64 + load commands.
        let mach_header = self.data[header_off..lc_end].to_vec();

        // First pass: walk load commands, capture LC_SEGMENT_64 entries.
        let mut segments: Vec<SegmentPlan> = Vec::new();
        let mut cursor = lc_start;
        for _ in 0..ncmds {
            if cursor + 8 > lc_end {
                return None;
            }
            let cmd = u32::from_le_bytes(self.data[cursor..cursor + 4].try_into().ok()?);
            let cmdsize =
                u32::from_le_bytes(self.data[cursor + 4..cursor + 8].try_into().ok()?) as usize;
            if cmdsize < 8 || cursor.checked_add(cmdsize)? > lc_end {
                return None;
            }
            if cmd == LC_SEGMENT_64 {
                if cmdsize < 72 {
                    return None;
                }
                let mut segname_bytes = [0u8; 16];
                segname_bytes.copy_from_slice(&self.data[cursor + 8..cursor + 24]);
                let segname_end = segname_bytes
                    .iter()
                    .position(|&b| b == 0)
                    .unwrap_or(segname_bytes.len());
                let name = String::from_utf8_lossy(&segname_bytes[..segname_end]).into_owned();
                let vmaddr =
                    u64::from_le_bytes(self.data[cursor + 24..cursor + 32].try_into().ok()?);
                let vmsize =
                    u64::from_le_bytes(self.data[cursor + 32..cursor + 40].try_into().ok()?);
                let _orig_fileoff =
                    u64::from_le_bytes(self.data[cursor + 40..cursor + 48].try_into().ok()?);
                let filesize =
                    u64::from_le_bytes(self.data[cursor + 48..cursor + 56].try_into().ok()?);
                let fileoff_in_cache = self.vaddr_to_file_offset(vmaddr).unwrap_or(0);
                segments.push(SegmentPlan {
                    name,
                    vmaddr,
                    vmsize,
                    fileoff_in_cache,
                    filesize,
                    // Filled in below after all segments are collected.
                    fileoff_in_output: 0,
                });
            }
            cursor += cmdsize;
        }

        // Page-align (0x1000) the linearised file offsets, starting
        // right after the header + load commands.
        let mut next_out: u64 = align_up(lc_end as u64, 0x1000);
        for seg in segments.iter_mut() {
            seg.fileoff_in_output = next_out;
            next_out = align_up(next_out + seg.filesize, 0x1000);
        }
        let total_size = next_out;

        Some(ImagePlan {
            mach_header,
            segments,
            total_size,
        })
    }
}

fn align_up(value: u64, align: u64) -> u64 {
    debug_assert!(align.is_power_of_two());
    (value + align - 1) & !(align - 1)
}

impl<'a> DyldCache<'a> {
    /// Phase 2: materialise an [`ImagePlan`] into a self-contained
    /// Mach-O byte blob.
    ///
    /// Layout of the returned buffer:
    ///
    /// 1. `mach_header_64` + original load commands, with each
    ///    `LC_SEGMENT_64` entry's `fileoff` rewritten to point at the
    ///    linearised output offset.
    /// 2. Each segment's bytes copied from its cache offset, placed at
    ///    the planned output offset.
    /// 3. Zero-padded up to `plan.total_size` so the blob is page-aligned.
    pub fn assemble_image(&self, plan: &ImagePlan) -> Vec<u8> {
        const LC_SEGMENT_64: u32 = 0x19;

        let mut out = vec![0u8; plan.total_size as usize];
        // 1. Copy the original header + load commands.
        let hdr_len = plan.mach_header.len();
        out[..hdr_len].copy_from_slice(&plan.mach_header);

        // 1b. Rewrite each LC_SEGMENT_64 entry's `fileoff` field.
        // The mach_header is the first 32 bytes; load commands follow.
        let mut cursor = 32usize;
        let mut seg_idx = 0usize;
        while cursor + 8 <= hdr_len {
            let cmd = u32::from_le_bytes(out[cursor..cursor + 4].try_into().unwrap());
            let cmdsize =
                u32::from_le_bytes(out[cursor + 4..cursor + 8].try_into().unwrap()) as usize;
            if cmdsize == 0 || cursor + cmdsize > hdr_len {
                break;
            }
            if cmd == LC_SEGMENT_64 && seg_idx < plan.segments.len() {
                let new_off = plan.segments[seg_idx].fileoff_in_output;
                // `fileoff` is at offset 40 inside the LC_SEGMENT_64 command.
                out[cursor + 40..cursor + 48].copy_from_slice(&new_off.to_le_bytes());
                seg_idx += 1;
            }
            cursor += cmdsize;
        }

        // 2. Copy each segment's bytes.
        for seg in &plan.segments {
            let src_off = seg.fileoff_in_cache as usize;
            let len = seg.filesize as usize;
            if len == 0 {
                continue;
            }
            let src_end = src_off.saturating_add(len).min(self.data.len());
            if src_end <= src_off {
                continue;
            }
            let real_len = src_end - src_off;
            let dst_off = seg.fileoff_in_output as usize;
            let dst_end = dst_off + real_len;
            if dst_end > out.len() {
                continue;
            }
            out[dst_off..dst_end].copy_from_slice(&self.data[src_off..src_end]);
        }
        out
    }

    /// Convenience wrapper: plan + assemble for an image identified by
    /// path. Returns `None` when the path isn't registered or the
    /// plan fails.
    pub fn extract_image_as_macho(&self, path: &str) -> Option<Vec<u8>> {
        let entry = self.images.iter().find(|e| e.path == path)?;
        let plan = self.plan_image(entry.address)?;
        Some(self.assemble_image(&plan))
    }

    /// Phase 4: read the subcache array from a macOS 12+ dyld shared
    /// cache primary header. Pre-macOS 12 caches (single-file layout)
    /// return an empty list.
    ///
    /// The fields read live at fixed offsets in the primary header:
    ///   - `0x1c8` — `subCacheArrayOffset` (u32)
    ///   - `0x1cc` — `subCacheArrayCount`  (u32)
    ///
    /// Each entry is 56 bytes:
    ///   - `uuid[16]`
    ///   - `cacheVMOffset` (u64)
    ///   - `fileSuffix[32]` (NUL-terminated UTF-8)
    pub fn subcaches(&self) -> Vec<SubCacheEntry> {
        if self.data.len() < 0x1d0 {
            return Vec::new();
        }
        let off =
            u32::from_le_bytes(self.data[0x1c8..0x1cc].try_into().expect("4-byte slice")) as usize;
        let count =
            u32::from_le_bytes(self.data[0x1cc..0x1d0].try_into().expect("4-byte slice")) as usize;
        if off == 0 || count == 0 {
            return Vec::new();
        }
        const ENTRY_SIZE: usize = 16 + 8 + 32;
        let total = count.saturating_mul(ENTRY_SIZE);
        let Some(end) = off.checked_add(total) else {
            return Vec::new();
        };
        if end > self.data.len() {
            return Vec::new();
        }
        let mut out = Vec::with_capacity(count);
        for i in 0..count {
            let base = off + i * ENTRY_SIZE;
            let mut uuid = [0u8; 16];
            uuid.copy_from_slice(&self.data[base..base + 16]);
            let cache_vm_offset = u64::from_le_bytes(
                self.data[base + 16..base + 24]
                    .try_into()
                    .expect("8-byte slice"),
            );
            let suffix_bytes = &self.data[base + 24..base + 24 + 32];
            let nul = suffix_bytes
                .iter()
                .position(|&b| b == 0)
                .unwrap_or(suffix_bytes.len());
            let file_suffix = String::from_utf8_lossy(&suffix_bytes[..nul]).into_owned();
            out.push(SubCacheEntry {
                uuid,
                cache_vm_offset,
                file_suffix,
            });
        }
        out
    }
}

/// One entry from a macOS 12+ dyld shared cache `subCacheArray`. Each
/// entry tells the loader which subcache file holds bytes for a given
/// `cacheVMOffset` and how the file suffix maps to the on-disk name.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SubCacheEntry {
    /// The subcache's UUID (matches the LC_UUID inside that file).
    pub uuid: [u8; 16],
    /// VM offset where this subcache's mappings begin, relative to the
    /// primary cache's first mapping.
    pub cache_vm_offset: u64,
    /// File suffix appended to the primary cache filename to locate
    /// this subcache on disk (e.g. `".01"`, `".symbols"`).
    pub file_suffix: String,
}

/// §5.4: collection of a primary dyld shared cache plus its subcaches.
///
/// macOS 12+ caches split across `dyld_shared_cache_arm64e` (primary)
/// and `dyld_shared_cache_arm64e.<suffix>` files. The primary lists
/// every subcache in its `subCacheArray`; callers that want to follow
/// a virtual address across the whole cache pass each subcache file's
/// bytes here, indexed by suffix.
///
/// `vaddr_to_bytes` performs a routed translation: it tries the
/// primary first, then each subcache whose mapping range contains the
/// target VA.
pub struct DyldCacheCollection<'a> {
    primary: DyldCache<'a>,
    /// Map from file suffix → parsed subcache. Suffix matches
    /// `SubCacheEntry::file_suffix` from the primary's
    /// `subCacheArray`.
    subs: BTreeMap<String, DyldCache<'a>>,
}

impl<'a> DyldCacheCollection<'a> {
    /// Construct a collection from a parsed primary cache plus
    /// per-suffix subcache bytes. Subcache bytes are parsed eagerly so
    /// VA → bytes lookups are O(1) after construction.
    ///
    /// Returns `None` if any subcache fails to parse.
    pub fn new(primary: DyldCache<'a>, subs: BTreeMap<String, &'a [u8]>) -> Option<Self> {
        let mut parsed = BTreeMap::new();
        for (suffix, bytes) in subs {
            let sub = DyldCache::parse(bytes)?;
            parsed.insert(suffix, sub);
        }
        Some(Self {
            primary,
            subs: parsed,
        })
    }

    /// Borrow the primary cache.
    pub fn primary(&self) -> &DyldCache<'a> {
        &self.primary
    }

    /// Iterate every subcache in (suffix, cache) order.
    pub fn subcaches(&self) -> impl Iterator<Item = (&str, &DyldCache<'a>)> {
        self.subs.iter().map(|(k, v)| (k.as_str(), v))
    }

    /// Translate `vaddr` into a `(bytes, offset)` pair: the byte slice
    /// of whichever cache (primary or subcache) holds the address, plus
    /// the offset inside that slice. Returns `None` when no cache
    /// covers the address.
    pub fn vaddr_to_bytes(&self, vaddr: u64) -> Option<(&[u8], u64)> {
        if let Some(file_off) = self.primary.vaddr_to_file_offset(vaddr) {
            return Some((self.primary.data, file_off));
        }
        for sub in self.subs.values() {
            if let Some(file_off) = sub.vaddr_to_file_offset(vaddr) {
                return Some((sub.data, file_off));
            }
        }
        None
    }

    /// Extract a standalone Mach-O blob for the image at `path`. The
    /// image's `__TEXT` is in the primary cache, but its `__LINKEDIT`
    /// often lives in a subcache; we walk every segment through the
    /// collection's routed translation.
    pub fn extract_image_as_macho(&self, path: &str) -> Option<Vec<u8>> {
        let entry = self.primary.images.iter().find(|e| e.path == path)?;
        let plan = self.primary.plan_image(entry.address)?;

        // Assemble manually so each segment's bytes come from whichever
        // cache holds them (primary or subcache).
        let mut out = vec![0u8; plan.total_size as usize];
        let hdr_len = plan.mach_header.len();
        out[..hdr_len].copy_from_slice(&plan.mach_header);

        // Rewrite each LC_SEGMENT_64 fileoff to the linearised offset
        // (mirrors DyldCache::assemble_image).
        const LC_SEGMENT_64: u32 = 0x19;
        let mut cursor = 32usize;
        let mut seg_idx = 0usize;
        while cursor + 8 <= hdr_len {
            let cmd = u32::from_le_bytes(out[cursor..cursor + 4].try_into().ok()?);
            let cmdsize = u32::from_le_bytes(out[cursor + 4..cursor + 8].try_into().ok()?) as usize;
            if cmdsize == 0 || cursor + cmdsize > hdr_len {
                break;
            }
            if cmd == LC_SEGMENT_64 && seg_idx < plan.segments.len() {
                let new_off = plan.segments[seg_idx].fileoff_in_output;
                out[cursor + 40..cursor + 48].copy_from_slice(&new_off.to_le_bytes());
                seg_idx += 1;
            }
            cursor += cmdsize;
        }

        // Copy each segment from wherever the collection routes its VA.
        for seg in &plan.segments {
            if seg.filesize == 0 {
                continue;
            }
            let (bytes, src_off) = match self.vaddr_to_bytes(seg.vmaddr) {
                Some(p) => p,
                None => continue,
            };
            let src_off = src_off as usize;
            let len = (seg.filesize as usize).min(bytes.len().saturating_sub(src_off));
            if len == 0 {
                continue;
            }
            let dst_off = seg.fileoff_in_output as usize;
            let dst_end = dst_off + len;
            if dst_end > out.len() {
                continue;
            }
            out[dst_off..dst_end].copy_from_slice(&bytes[src_off..src_off + len]);
        }
        Some(out)
    }
}

// ---------------------------------------------------------------------------
// Phase 3: LC_DYLD_CHAINED_FIXUPS decoder
// ---------------------------------------------------------------------------

/// Parsed `LC_DYLD_CHAINED_FIXUPS` payload — the modern Mach-O fixup
/// scheme that replaces the older `LC_DYLD_INFO_ONLY` rebase + bind
/// opcode streams.
///
/// `imports` is the flat ordinal table; an entry's index is the
/// `ordinal` referenced from chain entries. `rebases` is keyed by
/// segment index and lists every rebase pointer the chain walker
/// recovered for that segment.
#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct ChainedFixups {
    /// Flat list of ordinal-indexed imports.
    pub imports: Vec<ChainedImport>,
    /// Rebase targets per segment.
    pub rebases: std::collections::BTreeMap<u32, Vec<RebaseEntry>>,
}

/// One ordinal-indexed import entry.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ChainedImport {
    /// Ordinal of the library this symbol comes from (0 = self,
    /// 0xfe = main executable, 0xff = weak/flat).
    pub lib_ordinal: u8,
    /// True when the import is weakly-linked.
    pub weak_import: bool,
    /// Symbol name (NUL-terminated UTF-8 read from the symbols table).
    pub name: String,
}

/// One rebase chain entry.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct RebaseEntry {
    /// Offset inside the segment where the pointer lives.
    pub segment_offset: u64,
    /// Resolved target VA (already-rebased; chain encodes the runtime
    /// address as offset from `dyld_chained_fixups_header::imports_offset`'s
    /// containing image base, but we surface the raw 64-bit target).
    pub target_vmaddr: u64,
    /// True when the chain entry carries arm64e PAC authentication
    /// metadata. See [`auth_meta`] for the parsed fields.
    pub auth: bool,
    /// §5.7: structured ARM64E pointer-authentication metadata. `None`
    /// for non-arm64e pointer formats; populated for `DYLD_CHAINED_PTR_ARM64E`
    /// and `_ARM64E_KERNEL`.
    pub auth_meta: Option<ArmAuthMeta>,
}

/// §5.7: ARM64E PAC pointer-authentication metadata extracted from a
/// chained-fixup rebase entry.
///
/// The on-disk layout of an arm64e rebase pointer packs the diversity
/// constant, address-diversifier bit, and key selector into the high
/// bits of the 64-bit pointer slot. Surfacing the decoded fields lets
/// the printer annotate `__auth(IA, 0x1234, 1)` style hints next to
/// virtual call targets.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct ArmAuthMeta {
    /// 16-bit diversity constant baked into the signed pointer.
    pub diversity: u16,
    /// `true` when the address itself is included in the diversifier.
    pub addr_diversified: bool,
    /// PAC key selector — one of `IA`, `IB`, `DA`, `DB`.
    pub key: ArmAuthKey,
}

/// ARM64E PAC key selector.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ArmAuthKey {
    /// Instruction A key — used for function pointers.
    IA,
    /// Instruction B key — used by some thunks.
    IB,
    /// Data A key — used for data pointers.
    DA,
    /// Data B key — used for some struct member pointers.
    DB,
}

impl ArmAuthKey {
    /// Decode the 2-bit key selector at bits 49–50 of an arm64e
    /// authenticated rebase entry.
    pub fn from_raw_bits(bits: u8) -> Self {
        match bits & 0x3 {
            0 => ArmAuthKey::IA,
            1 => ArmAuthKey::IB,
            2 => ArmAuthKey::DA,
            _ => ArmAuthKey::DB,
        }
    }
}

/// Parse a `LC_DYLD_CHAINED_FIXUPS` payload starting at offset 0 of
/// `data`. Returns `None` for malformed input.
pub fn parse_chained_fixups(data: &[u8]) -> Option<ChainedFixups> {
    if data.len() < 32 {
        return None;
    }
    // dyld_chained_fixups_header (32 bytes):
    //   fixups_version u32
    //   starts_offset  u32
    //   imports_offset u32
    //   symbols_offset u32
    //   imports_count  u32
    //   imports_format u32
    //   symbols_format u32  (0 = uncompressed, 1 = zlib)
    let _version = u32::from_le_bytes(data[0..4].try_into().ok()?);
    let starts_offset = u32::from_le_bytes(data[4..8].try_into().ok()?) as usize;
    let imports_offset = u32::from_le_bytes(data[8..12].try_into().ok()?) as usize;
    let symbols_offset = u32::from_le_bytes(data[12..16].try_into().ok()?) as usize;
    let imports_count = u32::from_le_bytes(data[16..20].try_into().ok()?) as usize;
    let imports_format = u32::from_le_bytes(data[20..24].try_into().ok()?);
    let _symbols_format = u32::from_le_bytes(data[24..28].try_into().ok()?);

    let imports = parse_chained_imports(
        data,
        imports_offset,
        symbols_offset,
        imports_count,
        imports_format,
    )?;

    // dyld_chained_starts_in_image at `starts_offset`:
    //   seg_count          u32
    //   seg_info_offset[]  u32 — per-segment offset, 0 = no fixups in seg
    if starts_offset.checked_add(4)? > data.len() {
        return None;
    }
    let seg_count =
        u32::from_le_bytes(data[starts_offset..starts_offset + 4].try_into().ok()?) as usize;
    let mut rebases: std::collections::BTreeMap<u32, Vec<RebaseEntry>> =
        std::collections::BTreeMap::new();
    for seg in 0..seg_count {
        let off = starts_offset + 4 + seg * 4;
        if off + 4 > data.len() {
            return None;
        }
        let seg_info_off = u32::from_le_bytes(data[off..off + 4].try_into().ok()?) as usize;
        if seg_info_off == 0 {
            continue;
        }
        // Per-segment `dyld_chained_starts_in_segment`:
        //   size                u32
        //   page_size           u16
        //   pointer_format      u16
        //   segment_offset      u64
        //   max_valid_pointer   u32
        //   page_count          u16
        //   page_start[]        u16
        let base = starts_offset + seg_info_off;
        if base + 22 > data.len() {
            return None;
        }
        let _size = u32::from_le_bytes(data[base..base + 4].try_into().ok()?);
        let page_size = u16::from_le_bytes(data[base + 4..base + 6].try_into().ok()?) as usize;
        let pointer_format = u16::from_le_bytes(data[base + 6..base + 8].try_into().ok()?);
        let segment_offset = u64::from_le_bytes(data[base + 8..base + 16].try_into().ok()?);
        let _max_valid = u32::from_le_bytes(data[base + 16..base + 20].try_into().ok()?);
        let page_count = u16::from_le_bytes(data[base + 20..base + 22].try_into().ok()?) as usize;

        let mut entries = Vec::new();
        for page in 0..page_count {
            let ps_off = base + 22 + page * 2;
            if ps_off + 2 > data.len() {
                return None;
            }
            let page_start = u16::from_le_bytes(data[ps_off..ps_off + 2].try_into().ok()?);
            // 0xFFFF = DYLD_CHAINED_PTR_START_NONE — no chain on this page.
            if page_start == 0xFFFF {
                continue;
            }
            walk_chain_for_page(
                data,
                segment_offset,
                page,
                page_size,
                page_start,
                pointer_format,
                &mut entries,
            );
        }
        if !entries.is_empty() {
            rebases.insert(seg as u32, entries);
        }
    }

    Some(ChainedFixups { imports, rebases })
}

/// Walk one page's fixup chain starting at `page_start`. Each entry's
/// `next` field gives the stride (in stride units per the
/// pointer_format) to the next entry; 0 terminates the chain.
fn walk_chain_for_page(
    data: &[u8],
    segment_offset: u64,
    page_index: usize,
    page_size: usize,
    page_start: u16,
    pointer_format: u16,
    out: &mut Vec<RebaseEntry>,
) {
    // Pointer formats we model:
    //   1 = DYLD_CHAINED_PTR_ARM64E
    //   2 = DYLD_CHAINED_PTR_64
    //   6 = DYLD_CHAINED_PTR_64_OFFSET
    //   7 = DYLD_CHAINED_PTR_ARM64E_KERNEL
    const STRIDE_8: u64 = 8;
    const STRIDE_4: u64 = 4;
    let stride = match pointer_format {
        1 | 7 => STRIDE_8,
        2 | 6 => STRIDE_4,
        _ => return,
    };
    let mut cursor_off = page_index as u64 * page_size as u64 + page_start as u64;
    // Safety cap so a malformed chain can't loop.
    let max_iters = (page_size as u64 / stride) + 1;
    for _ in 0..max_iters {
        let entry_file_off = segment_offset + cursor_off;
        if (entry_file_off as usize) + 8 > data.len() {
            return;
        }
        let raw = u64::from_le_bytes(
            data[entry_file_off as usize..entry_file_off as usize + 8]
                .try_into()
                .unwrap_or([0; 8]),
        );
        let next = chain_entry_next(raw, pointer_format);
        let is_bind = chain_entry_is_bind(raw, pointer_format);
        if !is_bind {
            let target = chain_entry_rebase_target(raw, pointer_format);
            let auth = chain_entry_is_auth(raw, pointer_format);
            let auth_meta = if auth {
                Some(decode_arm64e_auth(raw))
            } else {
                None
            };
            out.push(RebaseEntry {
                segment_offset: cursor_off,
                target_vmaddr: target,
                auth,
                auth_meta,
            });
        }
        // 0 terminates the chain.
        if next == 0 {
            return;
        }
        cursor_off = cursor_off.saturating_add(next * stride);
    }
}

/// Extract the `next` stride field for the given pointer format.
fn chain_entry_next(raw: u64, pointer_format: u16) -> u64 {
    match pointer_format {
        1 | 7 => (raw >> 51) & 0x7FF, // arm64e: next is 11 bits at bit 51
        2 | 6 => (raw >> 51) & 0xFFF, // ptr64*: next is 12 bits at bit 51
        _ => 0,
    }
}

fn chain_entry_is_bind(raw: u64, pointer_format: u16) -> bool {
    match pointer_format {
        1 | 7 => (raw >> 62) & 1 != 0,
        2 | 6 => (raw >> 63) & 1 != 0,
        _ => false,
    }
}

fn chain_entry_is_auth(raw: u64, pointer_format: u16) -> bool {
    match pointer_format {
        1 | 7 => (raw >> 63) & 1 != 0,
        _ => false,
    }
}

fn chain_entry_rebase_target(raw: u64, pointer_format: u16) -> u64 {
    match pointer_format {
        // DYLD_CHAINED_PTR_ARM64E rebase: target is the low 43 bits.
        1 | 7 => raw & ((1u64 << 43) - 1),
        // DYLD_CHAINED_PTR_64 rebase: target is the low 36 bits;
        // high 16 bits carry the high half of the 8-byte offset.
        2 | 6 => raw & ((1u64 << 36) - 1),
        _ => 0,
    }
}

/// §5.7: decode the ARM64E PAC fields from an authenticated rebase
/// entry. Layout (high → low):
///
///   bit 63  : auth flag (we only call this when set)
///   bits 62..51 : `next` stride (already consumed by chain walker)
///   bits 50..49 : key selector (IA/IB/DA/DB)
///   bit 48      : address-diversifier
///   bits 47..32 : 16-bit diversity constant
///   bits 31..0  : authenticated target (rebased value)
fn decode_arm64e_auth(raw: u64) -> ArmAuthMeta {
    let key_bits = ((raw >> 49) & 0x3) as u8;
    let addr_diversified = (raw >> 48) & 0x1 != 0;
    let diversity = ((raw >> 32) & 0xFFFF) as u16;
    ArmAuthMeta {
        diversity,
        addr_diversified,
        key: ArmAuthKey::from_raw_bits(key_bits),
    }
}

/// Decode the ordinal-indexed `dyld_chained_import` table. Format
/// determines the entry width:
///   `imports_format == 1` → DYLD_CHAINED_IMPORT       (4 bytes)
///   `imports_format == 2` → DYLD_CHAINED_IMPORT_ADDEND (8 bytes)
///   `imports_format == 3` → DYLD_CHAINED_IMPORT_ADDEND64 (16 bytes)
///
/// All variants share the leading 32 bits: `lib_ordinal:8`,
/// `weak_import:1`, `name_offset:23`.
fn parse_chained_imports(
    data: &[u8],
    imports_offset: usize,
    symbols_offset: usize,
    count: usize,
    format: u32,
) -> Option<Vec<ChainedImport>> {
    let entry_size = match format {
        1 => 4usize,
        2 => 8usize,
        3 => 16usize,
        _ => return None,
    };
    let end = imports_offset.checked_add(count.checked_mul(entry_size)?)?;
    if end > data.len() {
        return None;
    }
    let mut out = Vec::with_capacity(count);
    for i in 0..count {
        let off = imports_offset + i * entry_size;
        let word = u32::from_le_bytes(data[off..off + 4].try_into().ok()?);
        let lib_ordinal = (word & 0xFF) as u8;
        let weak_import = (word >> 8) & 0x1 != 0;
        let name_offset = (word >> 9) as usize;
        let name = read_cstr(data, symbols_offset + name_offset).unwrap_or_default();
        out.push(ChainedImport {
            lib_ordinal,
            weak_import,
            name,
        });
    }
    Some(out)
}

/// Layout plan for extracting a single image from the cache as a
/// standalone Mach-O blob. Produced by [`DyldCache::plan_image`].
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ImagePlan {
    /// Original mach_header_64 + load-command bytes, sized to
    /// `sizeofcmds + 32`.
    pub mach_header: Vec<u8>,
    /// One entry per `LC_SEGMENT_64` in declaration order.
    pub segments: Vec<SegmentPlan>,
    /// Total bytes needed to hold the assembled image (last segment's
    /// `fileoff_in_output + filesize`, page-aligned).
    pub total_size: u64,
}

/// Per-segment placement inside an [`ImagePlan`].
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SegmentPlan {
    pub name: String,
    pub vmaddr: u64,
    pub vmsize: u64,
    /// Where the segment lives in the cache file.
    pub fileoff_in_cache: u64,
    pub filesize: u64,
    /// Where the segment should live in the assembled standalone blob.
    pub fileoff_in_output: u64,
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
fn walk_v3_page<F: FnMut(usize, u64)>(
    image: &[u8],
    page_base: usize,
    page_start: u16,
    mut visit: F,
) -> usize {
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

// ---------------------------------------------------------------------------
// t133: dyld_cache_slide_info2 — older arm64/x86_64h delta-mask format used by
// macOS 10.12–11 caches. Each pointer slot encodes the delta to the next
// chain entry in a bitfield masked by `delta_mask`; chain ends when delta=0.
// ---------------------------------------------------------------------------

pub const SLIDE_V2_PAGE_NONE: u16 = 0xFFFF;
pub const SLIDE_V2_PAGE_USES_EXTRA: u16 = 0x4000;
pub const SLIDE_V2_PAGE_EXTRA_END: u16 = 0x8000;

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SlideInfoV2 {
    pub version: u32,
    pub page_size: u32,
    pub delta_mask: u64,
    pub value_add: u64,
    pub page_starts: Vec<u16>,
    pub page_extras: Vec<u16>,
}

/// Parse a `dyld_cache_slide_info2` blob.
pub fn parse_v2_slide_info(data: &[u8], off: u64, size: u64) -> Option<SlideInfoV2> {
    let start = usize::try_from(off).ok()?;
    let len = usize::try_from(size).ok()?;
    let end = start.checked_add(len)?;
    if end > data.len() || len < 40 {
        return None;
    }
    let blob = &data[start..end];
    let version = u32::from_le_bytes(blob[0..4].try_into().ok()?);
    if version != 2 {
        return None;
    }
    let page_size = u32::from_le_bytes(blob[4..8].try_into().ok()?);
    let page_starts_offset = u32::from_le_bytes(blob[8..12].try_into().ok()?) as usize;
    let page_starts_count = u32::from_le_bytes(blob[12..16].try_into().ok()?) as usize;
    let page_extras_offset = u32::from_le_bytes(blob[16..20].try_into().ok()?) as usize;
    let page_extras_count = u32::from_le_bytes(blob[20..24].try_into().ok()?) as usize;
    let delta_mask = u64::from_le_bytes(blob[24..32].try_into().ok()?);
    let value_add = u64::from_le_bytes(blob[32..40].try_into().ok()?);

    let starts_end = page_starts_offset.checked_add(page_starts_count.checked_mul(2)?)?;
    let extras_end = page_extras_offset.checked_add(page_extras_count.checked_mul(2)?)?;
    if starts_end > blob.len() || extras_end > blob.len() {
        return None;
    }

    let mut page_starts = Vec::with_capacity(page_starts_count);
    for i in 0..page_starts_count {
        let o = page_starts_offset + i * 2;
        page_starts.push(u16::from_le_bytes(blob[o..o + 2].try_into().ok()?));
    }
    let mut page_extras = Vec::with_capacity(page_extras_count);
    for i in 0..page_extras_count {
        let o = page_extras_offset + i * 2;
        page_extras.push(u16::from_le_bytes(blob[o..o + 2].try_into().ok()?));
    }

    Some(SlideInfoV2 {
        version,
        page_size,
        delta_mask,
        value_add,
        page_starts,
        page_extras,
    })
}

const SLIDE_V2_MAX_CHAIN: usize = 1 << 14;

fn walk_v2_chain(
    image: &[u8],
    page_base: usize,
    start_off_in_page: usize,
    delta_mask: u64,
) -> Vec<usize> {
    let mut out = Vec::new();
    if delta_mask == 0 {
        return out;
    }
    let delta_shift = delta_mask.trailing_zeros();
    let mut off = page_base + start_off_in_page;
    let mut count = 0usize;
    while count < SLIDE_V2_MAX_CHAIN {
        if off + 8 > image.len() {
            break;
        }
        out.push(off);
        let raw = u64::from_le_bytes(image[off..off + 8].try_into().unwrap_or([0; 8]));
        let delta = (raw & delta_mask) >> delta_shift;
        count += 1;
        if delta == 0 {
            break;
        }
        off = off.saturating_add((delta as usize) * 4);
    }
    out
}

/// Apply v2 slide rewrites to `image`, returning a fresh buffer.
pub fn apply_v2_slide(image: &[u8], slide: &SlideInfoV2, slide_amount: u64) -> Vec<u8> {
    let mut out = image.to_vec();
    if slide.version != 2 || slide.page_size == 0 {
        return out;
    }
    let page_size = slide.page_size as usize;
    let add = slide.value_add.wrapping_add(slide_amount);

    for (page_idx, &start) in slide.page_starts.iter().enumerate() {
        if start == SLIDE_V2_PAGE_NONE {
            continue;
        }
        let page_base = page_idx * page_size;
        if page_base >= out.len() {
            break;
        }

        let chain_starts: Vec<usize> = if (start & SLIDE_V2_PAGE_USES_EXTRA) != 0 {
            let mut starts = Vec::new();
            let mut idx = (start & !SLIDE_V2_PAGE_USES_EXTRA) as usize;
            while idx < slide.page_extras.len() {
                let extra = slide.page_extras[idx];
                let off_in_page = (extra & !SLIDE_V2_PAGE_EXTRA_END) as usize * 4;
                starts.push(off_in_page);
                if (extra & SLIDE_V2_PAGE_EXTRA_END) != 0 {
                    break;
                }
                idx += 1;
            }
            starts
        } else {
            vec![(start as usize) * 4]
        };

        for s in chain_starts {
            let slots = walk_v2_chain(&out, page_base, s, slide.delta_mask);
            for off in slots {
                if off + 8 > out.len() {
                    continue;
                }
                let raw = u64::from_le_bytes(out[off..off + 8].try_into().unwrap_or([0; 8]));
                let value = raw & !slide.delta_mask;
                let new_value = value.wrapping_add(add) & !slide.delta_mask;
                let new_raw = (raw & slide.delta_mask) | new_value;
                out[off..off + 8].copy_from_slice(&new_raw.to_le_bytes());
            }
        }
    }
    out
}

// ---------------------------------------------------------------------------
// t133: dyld_cache_slide_info5 — variant of v3 used on arm64e caches in the
// iOS 16/macOS 13 era. The on-disk header matches v3; full chain rewriting
// is deferred (key_index + IA/IB/DA/DB selector decoding).
// ---------------------------------------------------------------------------

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SlideInfoV5 {
    pub version: u32,
    pub page_size: u32,
    pub page_starts: Vec<u16>,
    pub value_add: u64,
}

/// Parse a `dyld_cache_slide_info5` blob.
pub fn parse_v5_slide_info(data: &[u8], off: u64, size: u64) -> Option<SlideInfoV5> {
    let start = usize::try_from(off).ok()?;
    let len = usize::try_from(size).ok()?;
    let end = start.checked_add(len)?;
    if end > data.len() || len < 24 {
        return None;
    }
    let blob = &data[start..end];
    let version = u32::from_le_bytes(blob[0..4].try_into().ok()?);
    if version != 5 {
        return None;
    }
    let page_size = u32::from_le_bytes(blob[4..8].try_into().ok()?);
    let page_starts_count = u32::from_le_bytes(blob[8..12].try_into().ok()?) as usize;
    let value_add = u64::from_le_bytes(blob[16..24].try_into().ok()?);

    let starts_end = 24usize.checked_add(page_starts_count.checked_mul(2)?)?;
    if starts_end > blob.len() {
        return None;
    }
    let mut page_starts = Vec::with_capacity(page_starts_count);
    for i in 0..page_starts_count {
        let o = 24 + i * 2;
        page_starts.push(u16::from_le_bytes(blob[o..o + 2].try_into().ok()?));
    }
    Some(SlideInfoV5 {
        version,
        page_size,
        page_starts,
        value_add,
    })
}

/// PAC auth-signature bits attached to an arm64e v5 chain entry.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct SlideEntryAuth {
    /// 0 = IA, 1 = IB, 2 = DA, 3 = DB.
    pub key: u8,
    /// 15-bit discriminator constant baked into the chain entry.
    pub diversity: u16,
    /// When set, the runtime mixes the address into the discriminator.
    pub use_addr: bool,
}

/// One decoded v5 chain entry. `target` is the image-relative offset of the
/// pointer's destination; `auth` is `Some` for arm64e auth pointers.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct SlideEntry {
    pub offset: u64,
    pub target: u64,
    pub auth: Option<SlideEntryAuth>,
}

/// Sentinel `next_offset_div8` value marking the last entry in a v5 chain.
pub const SLIDE_V5_CHAIN_END: u16 = 0xFFF;

/// Decode a single 64-bit v5 chain entry.
///
/// Layout (per `dyld_cache_slide_pointer5`):
///   bits 51..62 = next_offset_div8 (0xFFF = end of chain)
///   bit  50     = is_auth
///   if auth:
///     bits 48..49 = key_index (0=IA, 1=IB, 2=DA, 3=DB)
///     bit  47     = addr_diversity
///     bits 32..46 = diversity (15 bits)
///     bits  0..31 = unsigned 32-bit image-relative offset
///   else:
///     bits  0..49 = pointer offset (50 bits)
pub fn decode_v5_chain_entry(raw: u64) -> SlideEntry {
    let is_auth = (raw >> 50) & 1 != 0;
    if is_auth {
        let key = ((raw >> 48) & 0x3) as u8;
        let use_addr = (raw >> 47) & 1 != 0;
        let diversity = ((raw >> 32) & 0x7FFF) as u16;
        let target = raw & 0xFFFF_FFFF;
        SlideEntry {
            offset: 0,
            target,
            auth: Some(SlideEntryAuth {
                key,
                diversity,
                use_addr,
            }),
        }
    } else {
        let target = raw & 0x0003_FFFF_FFFF_FFFF;
        SlideEntry {
            offset: 0,
            target,
            auth: None,
        }
    }
}

const SLIDE_V5_MAX_CHAIN: usize = 1 << 14;

fn walk_v5_page<F: FnMut(usize, u64)>(
    image: &[u8],
    page_base: usize,
    page_start: u16,
    mut visit: F,
) -> usize {
    if page_start == SLIDE_V3_PAGE_NONE {
        return 0;
    }
    let mut chain_off = page_base + page_start as usize;
    let mut count = 0usize;
    while count < SLIDE_V5_MAX_CHAIN {
        if chain_off + 8 > image.len() {
            break;
        }
        let raw = u64::from_le_bytes(image[chain_off..chain_off + 8].try_into().unwrap_or([0; 8]));
        visit(chain_off, raw);
        let next = ((raw >> 51) & 0xFFF) as u16;
        count += 1;
        if next == SLIDE_V5_CHAIN_END || next == 0 {
            break;
        }
        chain_off = chain_off.saturating_add((next as usize) * 8);
    }
    count
}

fn rewrite_v5_entry(raw: u64, add: u64) -> u64 {
    let entry = decode_v5_chain_entry(raw);
    let next_bits = raw & 0x7FF8_0000_0000_0000;
    match entry.auth {
        Some(_) => {
            let auth_bits = raw & 0x0007_FFFF_0000_0000;
            let new_target = (entry.target.wrapping_add(add)) & 0xFFFF_FFFF;
            next_bits | auth_bits | (1u64 << 50) | new_target
        }
        None => {
            let new_target = entry.target.wrapping_add(add) & 0x0003_FFFF_FFFF_FFFF;
            next_bits | new_target
        }
    }
}

/// Apply v5 slide rewrites to `image`, returning a fresh buffer.
///
/// Auth pointers preserve the key/diversity/addr-div bits so a subsequent
/// runtime authentication pass still has the original discriminator; only
/// the 32-bit image offset is slid.
pub fn apply_v5_slide(image: &[u8], slide: &SlideInfoV5, slide_amount: u64) -> Vec<u8> {
    apply_v5_slide_ex(image, slide, slide_amount).0
}

/// Like [`apply_v5_slide`] but also returns one [`AuthPointer`] per auth
/// chain entry encountered while walking the page tables. `(image, auths)`
/// where `image` is the slid buffer and `auths` is ordered by ascending
/// slot offset within the image. Plain (non-auth) entries are not
/// reported. Used by [`extract_image_with_slide_ex`] (t190) to feed the
/// decompiler's pointer-auth-aware printer.
pub fn apply_v5_slide_ex(
    image: &[u8],
    slide: &SlideInfoV5,
    slide_amount: u64,
) -> (Vec<u8>, Vec<AuthPointer>) {
    let mut out = image.to_vec();
    let mut auths = Vec::new();
    if slide.version != 5 || slide.page_size == 0 {
        return (out, auths);
    }
    let page_size = slide.page_size as usize;
    let add = slide.value_add.wrapping_add(slide_amount);
    for (page_idx, &start) in slide.page_starts.iter().enumerate() {
        let page_base = page_idx * page_size;
        if page_base >= out.len() {
            break;
        }
        let mut entries = Vec::new();
        walk_v5_page(&out, page_base, start, |off, raw| entries.push((off, raw)));
        for (off, raw) in entries {
            let entry = decode_v5_chain_entry(raw);
            if let Some(a) = entry.auth {
                auths.push(AuthPointer {
                    offset: off,
                    key: a.key,
                    diversifier: a.diversity,
                    use_addr_div: a.use_addr,
                });
            }
            let new_raw = rewrite_v5_entry(raw, add);
            if off + 8 <= out.len() {
                out[off..off + 8].copy_from_slice(&new_raw.to_le_bytes());
            }
        }
    }
    (out, auths)
}

/// A single ARM64e v5 auth chain slot recovered from a dyld cache image
/// (t190). Records the offset inside the extracted image bytes where the
/// pointer slot lives and the PAC auth-key parameters baked into the v5
/// chain entry.
///
/// The decompiler uses this to render `__ptrauth(...)` annotations on
/// global pointers and to model auth-stripped runtime behaviour without
/// re-decoding the chain.
///
/// `key` follows the same convention as `dyld_cache_slide_pointer5.auth`:
/// `0=IA`, `1=IB`, `2=DA`, `3=DB`. `diversifier` is the 15-bit constant
/// from the chain entry. `use_addr_div` mirrors the entry's
/// `addr_diversity` bit: when set the runtime XORs the slot's virtual
/// address into the discriminator before signing.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct AuthPointer {
    /// Byte offset inside the extracted image bytes where the slot lives.
    pub offset: usize,
    /// PAC key selector: 0=IA, 1=IB, 2=DA, 3=DB.
    pub key: u8,
    /// 15-bit constant discriminator baked into the chain entry.
    pub diversifier: u16,
    /// True when the runtime mixes the slot's address into the
    /// discriminator (auth's `addr_diversity` bit).
    pub use_addr_div: bool,
}

/// Output of [`extract_image_with_slide_ex`]: the slid image bytes plus
/// every ARM64e v5 auth pointer slot discovered while applying the chain.
///
/// For non-v5 caches (v1/v2/v3/v4) `auth_pointers` is empty — those slide
/// formats either predate arm64e (v1/v2) or pack auth bits differently
/// in a way that's not currently surfaced here. The plain `Vec<u8>` from
/// [`extract_image_with_slide`] remains available via `.bytes` for
/// back-compat with existing consumers.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ExtractedImage {
    /// Slid image bytes (same as [`extract_image_with_slide`]).
    pub bytes: Vec<u8>,
    /// Auth pointer slots encountered while walking v5 chains. Empty for
    /// non-v5 caches or when the cache has no slide info.
    pub auth_pointers: Vec<AuthPointer>,
}

/// Extract a single image from a dyld_shared_cache by index, applying slide
/// info where wired. Returns up to [`EXTRACT_WINDOW`] bytes starting at the
/// image's mach_header file offset.
///
/// When the cache has a slide-info blob registered via
/// [`DyldCache::set_slide_info`], the returned bytes have the appropriate
/// v1/v2/v3/v4/v5 rebase pass applied. Slot offsets in the slide-info
/// page tables are interpreted relative to the start of the extracted
/// window (which equals the image's `mach_header` file offset), matching
/// the convention used by dyld for per-mapping `mapping_and_slide_info`
/// records.
pub fn extract_image_with_slide(
    cache: &DyldCache,
    image_index: usize,
    slide_amount: u64,
) -> Option<Vec<u8>> {
    extract_image_with_slide_ex(cache, image_index, slide_amount).map(|ei| ei.bytes)
}

/// Like [`extract_image_with_slide`] but also records every ARM64e v5
/// auth chain entry encountered while applying the slide, returning an
/// [`ExtractedImage`] carrying both the slid `bytes` and the per-slot
/// `auth_pointers` list.
///
/// For caches with no slide info — or with v1/v2/v3/v4 slide formats —
/// the returned `auth_pointers` is empty (those formats either predate
/// arm64e or pack auth differently than v5). Use the plain
/// [`extract_image_with_slide`] when only the bytes are needed.
pub fn extract_image_with_slide_ex(
    cache: &DyldCache,
    image_index: usize,
    slide_amount: u64,
) -> Option<ExtractedImage> {
    let entry = cache.list_images().get(image_index)?;
    let off = cache.vaddr_to_file_offset(entry.address)? as usize;
    let end = off
        .checked_add(EXTRACT_WINDOW)
        .map(|e| e.min(cache.data.len()))
        .unwrap_or(cache.data.len());
    if off >= cache.data.len() {
        return None;
    }
    let raw = cache.data[off..end].to_vec();
    let Some(loc) = cache.slide_info() else {
        return Some(ExtractedImage {
            bytes: raw,
            auth_pointers: Vec::new(),
        });
    };
    let Some(version) = apply_slide_info(cache.data, loc.file_offset, loc.size) else {
        return Some(ExtractedImage {
            bytes: raw,
            auth_pointers: Vec::new(),
        });
    };
    let (bytes, auth_pointers) = match version {
        SlideVersion::V1(s) => (apply_v1_slide(&raw, &s, slide_amount), Vec::new()),
        SlideVersion::V2(s) => (apply_v2_slide(&raw, &s, slide_amount), Vec::new()),
        SlideVersion::V3(s) => (apply_v3_slide(&raw, &s, slide_amount), Vec::new()),
        SlideVersion::V4(s) => (apply_v4_slide(&raw, &s, slide_amount), Vec::new()),
        SlideVersion::V5(s) => apply_v5_slide_ex(&raw, &s, slide_amount),
    };
    Some(ExtractedImage {
        bytes,
        auth_pointers,
    })
}

// =============================================================================
// t165: slide-info v1 + v4 + unified dispatcher
// =============================================================================

/// Parsed `dyld_cache_slide_info` (version 1) — pre-iOS-13 layout.
///
/// v1 is the original ARMv7 / x86_64 32-bit-pointer format. Each entry in
/// `toc` is a 16-bit file-offset (relative to the mapping base) pointing at
/// a bitmap (`entries_size` bytes per bitmap entry, `entries_count` total)
/// of 4-byte pointer slots that need the slide added. Modern macOS / iOS
/// caches use v2+; v1 is kept for fidelity when analysing legacy caches.
#[derive(Debug, Clone)]
pub struct SlideInfoV1 {
    pub version: u32,
    pub toc_offset: u32,
    pub toc_count: u32,
    pub entries_offset: u32,
    pub entries_count: u32,
    pub entries_size: u32,
    /// `toc[i]` indexes into `entries` selecting a bitmap covering the i-th
    /// page (page_size = `SLIDE_V1_PAGE_SIZE`).
    pub toc: Vec<u16>,
    /// Flat bitmap pool. Entry `i` occupies bytes
    /// `entries[i*entries_size..(i+1)*entries_size]`.
    pub entries: Vec<u8>,
}

/// v1 hardcoded page size (4 KiB) covered by one bitmap entry.
pub const SLIDE_V1_PAGE_SIZE: usize = 4096;

/// Parse a v1 `dyld_cache_slide_info` header **plus** the toc and bitmap
/// tables it references. All sub-tables are required to live inside
/// `data[off..off+size]`; out-of-range offsets return `None`.
pub fn parse_v1_slide_info(data: &[u8], off: u64, size: u64) -> Option<SlideInfoV1> {
    let off = off as usize;
    let size = size as usize;
    let blob_end = off.checked_add(size)?;
    if blob_end > data.len() || size < 24 {
        return None;
    }
    let header = &data[off..off + 24];
    let version = u32::from_le_bytes(header[0..4].try_into().ok()?);
    if version != 1 {
        return None;
    }
    let toc_offset = u32::from_le_bytes(header[4..8].try_into().ok()?);
    let toc_count = u32::from_le_bytes(header[8..12].try_into().ok()?);
    let entries_offset = u32::from_le_bytes(header[12..16].try_into().ok()?);
    let entries_count = u32::from_le_bytes(header[16..20].try_into().ok()?);
    let entries_size = u32::from_le_bytes(header[20..24].try_into().ok()?);

    let toc_start = off.checked_add(toc_offset as usize)?;
    let toc_bytes = (toc_count as usize).checked_mul(2)?;
    let toc_end = toc_start.checked_add(toc_bytes)?;
    if toc_end > blob_end {
        return None;
    }
    let mut toc = Vec::with_capacity(toc_count as usize);
    for i in 0..toc_count as usize {
        let o = toc_start + i * 2;
        toc.push(u16::from_le_bytes(data[o..o + 2].try_into().ok()?));
    }

    let entries_start = off.checked_add(entries_offset as usize)?;
    let entries_bytes = (entries_count as usize).checked_mul(entries_size as usize)?;
    let entries_end = entries_start.checked_add(entries_bytes)?;
    if entries_end > blob_end {
        return None;
    }
    let entries = data[entries_start..entries_end].to_vec();

    Some(SlideInfoV1 {
        version,
        toc_offset,
        toc_count,
        entries_offset,
        entries_count,
        entries_size,
        toc,
        entries,
    })
}

/// Apply v1 slide rewrites to `image`, returning a fresh buffer.
///
/// For each `toc[i]` entry, the bitmap at
/// `entries[toc[i] * entries_size .. + entries_size]` enumerates which
/// 4-byte slots of page `i` (page_size = [`SLIDE_V1_PAGE_SIZE`]) need
/// the slide added. Each set bit `b` in bitmap byte `B` selects the slot
/// at page offset `(B*8 + b) * 4`. Slots are little-endian u32s; the
/// rewrite adds `slide_amount` modulo 2^32.
pub fn apply_v1_slide(image: &[u8], slide: &SlideInfoV1, slide_amount: u64) -> Vec<u8> {
    let mut out = image.to_vec();
    if slide.version != 1 || slide.entries_size == 0 {
        return out;
    }
    let entries_size = slide.entries_size as usize;
    let page_size = SLIDE_V1_PAGE_SIZE;
    let slide_lo = (slide_amount & 0xFFFF_FFFF) as u32;
    for (page_idx, &entry_idx) in slide.toc.iter().enumerate() {
        let page_base = page_idx * page_size;
        if page_base >= out.len() {
            break;
        }
        let bitmap_start = (entry_idx as usize) * entries_size;
        let bitmap_end = bitmap_start.saturating_add(entries_size);
        if bitmap_end > slide.entries.len() {
            continue;
        }
        let bitmap = &slide.entries[bitmap_start..bitmap_end];
        for (byte_idx, &byte) in bitmap.iter().enumerate() {
            if byte == 0 {
                continue;
            }
            for bit in 0..8 {
                if (byte >> bit) & 1 == 0 {
                    continue;
                }
                let slot_off = page_base + (byte_idx * 8 + bit) * 4;
                if slot_off + 4 > out.len() {
                    continue;
                }
                let raw =
                    u32::from_le_bytes(out[slot_off..slot_off + 4].try_into().unwrap_or([0; 4]));
                let new_raw = raw.wrapping_add(slide_lo);
                out[slot_off..slot_off + 4].copy_from_slice(&new_raw.to_le_bytes());
            }
        }
    }
    out
}

/// Parsed `dyld_cache_slide_info` (version 4) — armv7-style 32-bit pointer
/// chains. Same shape as v2 but with a 32-bit `value_add` and
/// `delta_mask`.
#[derive(Debug, Clone)]
pub struct SlideInfoV4 {
    pub version: u32,
    pub page_size: u32,
    pub page_starts_offset: u32,
    pub page_starts_count: u32,
    pub page_extras_offset: u32,
    pub page_extras_count: u32,
    pub delta_mask: u64,
    pub value_add: u64,
    pub page_starts: Vec<u16>,
    pub page_extras: Vec<u16>,
}

/// v4 page-start sentinel: page contains no slide entries.
pub const SLIDE_V4_PAGE_NONE: u16 = 0xFFFF;
/// v4 page-start flag: indirects into `page_extras` for multi-chain pages.
pub const SLIDE_V4_PAGE_USES_EXTRA: u16 = 0x4000;
/// v4 page-extras flag marking the last chain in a multi-chain page.
pub const SLIDE_V4_PAGE_EXTRA_END: u16 = 0x8000;

/// Parse a v4 slide-info header + page_starts table.
pub fn parse_v4_slide_info(data: &[u8], off: u64, size: u64) -> Option<SlideInfoV4> {
    let off = off as usize;
    let size = size as usize;
    if off.checked_add(size)? > data.len() || size < 40 {
        return None;
    }
    let header = &data[off..off + 40];
    let version = u32::from_le_bytes(header[0..4].try_into().ok()?);
    if version != 4 {
        return None;
    }
    let page_size = u32::from_le_bytes(header[4..8].try_into().ok()?);
    let page_starts_offset = u32::from_le_bytes(header[8..12].try_into().ok()?);
    let page_starts_count = u32::from_le_bytes(header[12..16].try_into().ok()?);
    let page_extras_offset = u32::from_le_bytes(header[16..20].try_into().ok()?);
    let page_extras_count = u32::from_le_bytes(header[20..24].try_into().ok()?);
    let delta_mask = u64::from_le_bytes(header[24..32].try_into().ok()?);
    let value_add = u64::from_le_bytes(header[32..40].try_into().ok()?);
    let blob_end = off.checked_add(size)?;
    let table_off = off.checked_add(page_starts_offset as usize)?;
    let table_len = (page_starts_count as usize).checked_mul(2)?;
    if table_off.checked_add(table_len)? > blob_end {
        return None;
    }
    let mut page_starts = Vec::with_capacity(page_starts_count as usize);
    for i in 0..page_starts_count as usize {
        let bytes = &data[table_off + i * 2..table_off + i * 2 + 2];
        page_starts.push(u16::from_le_bytes([bytes[0], bytes[1]]));
    }

    let extras_off = off.checked_add(page_extras_offset as usize)?;
    let extras_len = (page_extras_count as usize).checked_mul(2)?;
    if page_extras_count > 0 && extras_off.checked_add(extras_len)? > blob_end {
        return None;
    }
    let mut page_extras = Vec::with_capacity(page_extras_count as usize);
    for i in 0..page_extras_count as usize {
        let bytes = &data[extras_off + i * 2..extras_off + i * 2 + 2];
        page_extras.push(u16::from_le_bytes([bytes[0], bytes[1]]));
    }
    Some(SlideInfoV4 {
        version,
        page_size,
        page_starts_offset,
        page_starts_count,
        page_extras_offset,
        page_extras_count,
        delta_mask,
        value_add,
        page_starts,
        page_extras,
    })
}

const SLIDE_V4_MAX_CHAIN: usize = 1 << 14;

fn walk_v4_chain(
    image: &[u8],
    page_base: usize,
    start_off_in_page: usize,
    delta_mask: u32,
) -> Vec<usize> {
    let mut out = Vec::new();
    if delta_mask == 0 {
        return out;
    }
    let delta_shift = delta_mask.trailing_zeros();
    let mut off = page_base + start_off_in_page;
    let mut count = 0usize;
    while count < SLIDE_V4_MAX_CHAIN {
        if off + 4 > image.len() {
            break;
        }
        out.push(off);
        let raw = u32::from_le_bytes(image[off..off + 4].try_into().unwrap_or([0; 4]));
        let delta = (raw & delta_mask) >> delta_shift;
        count += 1;
        if delta == 0 {
            break;
        }
        off = off.saturating_add((delta as usize) * 4);
    }
    out
}

/// Apply v4 slide rewrites to `image`, returning a fresh buffer.
///
/// v4 is the 32-bit-pointer analogue of v2. Each chain entry is a
/// little-endian u32 whose high bits (`delta_mask`) carry the chain
/// delta (in 4-byte units, 0 = end) and whose low bits hold the
/// pointer. Rebase replaces the pointer with `(pointer + value_add +
/// slide_amount) & !delta_mask`, preserving the chain delta in place.
pub fn apply_v4_slide(image: &[u8], slide: &SlideInfoV4, slide_amount: u64) -> Vec<u8> {
    let mut out = image.to_vec();
    if slide.version != 4 || slide.page_size == 0 {
        return out;
    }
    let page_size = slide.page_size as usize;
    // v4 stores 32-bit chain entries; only the low 32 bits of `delta_mask`
    // are meaningful.
    let delta_mask32 = (slide.delta_mask & 0xFFFF_FFFF) as u32;
    let add = slide.value_add.wrapping_add(slide_amount) & 0xFFFF_FFFF;
    let add32 = add as u32;

    for (page_idx, &start) in slide.page_starts.iter().enumerate() {
        if start == SLIDE_V4_PAGE_NONE {
            continue;
        }
        let page_base = page_idx * page_size;
        if page_base >= out.len() {
            break;
        }

        let chain_starts: Vec<usize> = if (start & SLIDE_V4_PAGE_USES_EXTRA) != 0 {
            let mut starts = Vec::new();
            let mut idx = (start & !SLIDE_V4_PAGE_USES_EXTRA) as usize;
            while idx < slide.page_extras.len() {
                let extra = slide.page_extras[idx];
                let off_in_page = (extra & !SLIDE_V4_PAGE_EXTRA_END) as usize * 4;
                starts.push(off_in_page);
                if (extra & SLIDE_V4_PAGE_EXTRA_END) != 0 {
                    break;
                }
                idx += 1;
            }
            starts
        } else {
            vec![(start as usize) * 4]
        };

        for s in chain_starts {
            let slots = walk_v4_chain(&out, page_base, s, delta_mask32);
            for off in slots {
                if off + 4 > out.len() {
                    continue;
                }
                let raw = u32::from_le_bytes(out[off..off + 4].try_into().unwrap_or([0; 4]));
                let value = raw & !delta_mask32;
                let new_value = value.wrapping_add(add32) & !delta_mask32;
                let new_raw = (raw & delta_mask32) | new_value;
                out[off..off + 4].copy_from_slice(&new_raw.to_le_bytes());
            }
        }
    }
    out
}

/// One slide-fixup record: a file offset and the slid pointer value.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct SlideFixup {
    pub offset: usize,
    pub new_value: u64,
}

/// Decoded slide-info version variant returned by [`apply_slide_info`].
#[derive(Debug, Clone)]
pub enum SlideVersion {
    V1(SlideInfoV1),
    V2(SlideInfoV2),
    V3(SlideInfo),
    V4(SlideInfoV4),
    V5(SlideInfoV5),
}

/// Unified slide-info dispatcher. Reads the version word at `data[off..off+4]`,
/// parses the appropriate header, and returns a [`SlideVersion`] tagged union.
/// Returns `None` if the version is unsupported or the bytes are truncated.
pub fn apply_slide_info(data: &[u8], off: u64, size: u64) -> Option<SlideVersion> {
    if (off as usize).checked_add(4)? > data.len() {
        return None;
    }
    let v = u32::from_le_bytes(data[off as usize..off as usize + 4].try_into().ok()?);
    match v {
        1 => parse_v1_slide_info(data, off, size).map(SlideVersion::V1),
        2 => parse_v2_slide_info(data, off, size).map(SlideVersion::V2),
        3 => parse_v3_slide_info(data, off, size).map(SlideVersion::V3),
        4 => parse_v4_slide_info(data, off, size).map(SlideVersion::V4),
        5 => parse_v5_slide_info(data, off, size).map(SlideVersion::V5),
        _ => None,
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

        let mk =
            |target: u64, next: u64| -> u64 { (next << 51) | (target & 0x0007_FFFF_FFFF_FFFF) };
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
        let mk =
            |target: u64, next: u64| -> u64 { (next << 51) | (target & 0x0007_FFFF_FFFF_FFFF) };
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

    // -----------------------------------------------------------------------
    // t133: dyld v2/v5 slide-info + extract_image_with_slide tests
    // -----------------------------------------------------------------------

    fn build_v2_slide(
        page_size: u32,
        delta_mask: u64,
        value_add: u64,
        page_starts: &[u16],
        page_extras: &[u16],
    ) -> Vec<u8> {
        let header_len = 40usize;
        let starts_off = header_len;
        let extras_off = starts_off + page_starts.len() * 2;
        let total = extras_off + page_extras.len() * 2;

        let mut buf = vec![0u8; total];
        buf[0..4].copy_from_slice(&2u32.to_le_bytes());
        buf[4..8].copy_from_slice(&page_size.to_le_bytes());
        buf[8..12].copy_from_slice(&(starts_off as u32).to_le_bytes());
        buf[12..16].copy_from_slice(&(page_starts.len() as u32).to_le_bytes());
        buf[16..20].copy_from_slice(&(extras_off as u32).to_le_bytes());
        buf[20..24].copy_from_slice(&(page_extras.len() as u32).to_le_bytes());
        buf[24..32].copy_from_slice(&delta_mask.to_le_bytes());
        buf[32..40].copy_from_slice(&value_add.to_le_bytes());
        for (i, &s) in page_starts.iter().enumerate() {
            let o = starts_off + i * 2;
            buf[o..o + 2].copy_from_slice(&s.to_le_bytes());
        }
        for (i, &s) in page_extras.iter().enumerate() {
            let o = extras_off + i * 2;
            buf[o..o + 2].copy_from_slice(&s.to_le_bytes());
        }
        buf
    }

    #[test]
    fn parse_v2_slide_info_header() {
        let blob = build_v2_slide(
            0x4000,
            0x00FF_FF00_0000_0000,
            0x1_8000_0000,
            &[0, SLIDE_V2_PAGE_NONE],
            &[],
        );
        let slide = parse_v2_slide_info(&blob, 0, blob.len() as u64).expect("parses");
        assert_eq!(slide.version, 2);
        assert_eq!(slide.page_size, 0x4000);
        assert_eq!(slide.delta_mask, 0x00FF_FF00_0000_0000);
        assert_eq!(slide.value_add, 0x1_8000_0000);
        assert_eq!(slide.page_starts, vec![0, SLIDE_V2_PAGE_NONE]);
        assert!(slide.page_extras.is_empty());

        let mut bad = blob.clone();
        bad[0] = 3;
        assert!(parse_v2_slide_info(&bad, 0, bad.len() as u64).is_none());
    }

    #[test]
    fn parse_v5_slide_info_header() {
        // v5 reuses v3's header shape; stamp version=5 over a v3 build.
        let mut blob = build_v3_slide(0x4000, 0x1_8000_0000, &[0, SLIDE_V3_PAGE_NONE]);
        blob[0..4].copy_from_slice(&5u32.to_le_bytes());
        let slide = parse_v5_slide_info(&blob, 0, blob.len() as u64).expect("parses");
        assert_eq!(slide.version, 5);
        assert_eq!(slide.page_size, 0x4000);
        assert_eq!(slide.value_add, 0x1_8000_0000);
        assert_eq!(slide.page_starts, vec![0, SLIDE_V3_PAGE_NONE]);
    }

    #[test]
    fn apply_v2_slide_walks_chain() {
        // Two-entry chain on a single page. delta_mask lives in the top 16
        // bits so value_add doesn't overlap. delta is in 4-byte units.
        let page_size = 0x4000usize;
        let delta_mask: u64 = 0xFFFF_0000_0000_0000;
        let delta_shift = 48u32;
        let value_add: u64 = 0x1_8000_0000;
        let slide_amount: u64 = 0x40;

        let mut image = vec![0u8; page_size];
        let mk = |value: u64, delta: u64| -> u64 {
            (value & !delta_mask) | ((delta << delta_shift) & delta_mask)
        };
        image[0..8].copy_from_slice(&mk(0x1000, 2).to_le_bytes()); // next = +8 B
        image[8..16].copy_from_slice(&mk(0x2000, 0).to_le_bytes()); // end

        let slide = SlideInfoV2 {
            version: 2,
            page_size: page_size as u32,
            delta_mask,
            value_add,
            page_starts: vec![0],
            page_extras: vec![],
        };
        let out = apply_v2_slide(&image, &slide, slide_amount);

        let raw0 = u64::from_le_bytes(out[0..8].try_into().unwrap());
        let raw1 = u64::from_le_bytes(out[8..16].try_into().unwrap());
        assert_eq!(raw0 & !delta_mask, 0x1000 + value_add + slide_amount);
        assert_eq!(raw1 & !delta_mask, 0x2000 + value_add + slide_amount);
        assert_eq!((raw0 & delta_mask) >> delta_shift, 2);
        assert_eq!((raw1 & delta_mask) >> delta_shift, 0);
    }

    // -----------------------------------------------------------------------
    // t142: dyld v5 ARM64e auth-key bit decoding
    // -----------------------------------------------------------------------

    #[test]
    fn decode_v5_plain_pointer() {
        // is_auth=0, low-50 bits = target. Stamp some next bits to ensure
        // they're masked off.
        let target: u64 = 0x0001_2345_6789;
        let next: u64 = 7;
        let raw = (next << 51) | target;
        let entry = decode_v5_chain_entry(raw);
        assert!(entry.auth.is_none());
        assert_eq!(entry.target, target);
    }

    #[test]
    fn decode_v5_auth_ia_pointer() {
        // is_auth=1, key=0 (IA), addr_div=0, diversity=0x1234, target=0xCAFE.
        let raw: u64 = (1u64 << 50)                 // addr_div=0
            | (0x1234u64 << 32)            // diversity
            | 0xCAFEu64; // target offset
        let entry = decode_v5_chain_entry(raw);
        let auth = entry.auth.expect("auth pointer");
        assert_eq!(auth.key, 0);
        assert_eq!(auth.diversity, 0x1234);
        assert!(!auth.use_addr);
        assert_eq!(entry.target, 0xCAFE);
    }

    #[test]
    fn decode_v5_auth_addr_diversified() {
        // is_auth=1, key=2 (DA), addr_div=1.
        let raw: u64 = (1u64 << 50)
            | (2u64 << 48)                 // key = DA
            | (1u64 << 47)                 // addr_div=1
            | (0x7FFFu64 << 32)            // max 15-bit diversity
            | 0xDEAD_BEEFu64;
        let entry = decode_v5_chain_entry(raw);
        let auth = entry.auth.expect("auth pointer");
        assert!(auth.use_addr);
        assert_eq!(auth.key, 2);
        assert_eq!(auth.diversity, 0x7FFF);
        assert_eq!(entry.target, 0xDEAD_BEEF);
    }

    #[test]
    fn extract_image_with_slide_no_slide_returns_unmodified() {
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
        let needed = 0x1000 + 0x100;
        if data.len() < needed {
            data.resize(needed, 0);
        }
        data[0x1040] = 0xCF;

        let cache = DyldCache::parse(&data).expect("parse");
        let bytes = extract_image_with_slide(&cache, 0, 0).expect("extract");
        assert_eq!(bytes.first().copied(), Some(0xCF));

        assert!(extract_image_with_slide(&cache, 99, 0).is_none());
    }

    // ---- t165: v1 / v4 / dispatcher / v5 chain-walk ----

    #[test]
    fn parse_v1_slide_info_header() {
        // Header followed by toc (2 entries) and entries (3 bitmaps × 4 B).
        let toc_offset = 24u32;
        let toc_count = 2u32;
        let entries_offset = 24u32 + toc_count * 2; // 28
        let entries_count = 3u32;
        let entries_size = 4u32;
        let total = entries_offset as usize + (entries_count * entries_size) as usize; // 28 + 12 = 40
        let mut buf = vec![0u8; total];
        buf[0..4].copy_from_slice(&1u32.to_le_bytes()); // version
        buf[4..8].copy_from_slice(&toc_offset.to_le_bytes());
        buf[8..12].copy_from_slice(&toc_count.to_le_bytes());
        buf[12..16].copy_from_slice(&entries_offset.to_le_bytes());
        buf[16..20].copy_from_slice(&entries_count.to_le_bytes());
        buf[20..24].copy_from_slice(&entries_size.to_le_bytes());
        // toc: pages 0 and 1 reference entry indices 2 and 0.
        buf[24..26].copy_from_slice(&2u16.to_le_bytes());
        buf[26..28].copy_from_slice(&0u16.to_le_bytes());
        // stamp a couple of bitmap bytes so we can confirm they're copied.
        buf[28] = 0xAA;
        buf[28 + (entries_size as usize) * 2] = 0x55; // bitmap[2][0]

        let info = parse_v1_slide_info(&buf, 0, total as u64).expect("v1 parses");
        assert_eq!(info.version, 1);
        assert_eq!(info.toc_offset, toc_offset);
        assert_eq!(info.toc_count, toc_count);
        assert_eq!(info.entries_offset, entries_offset);
        assert_eq!(info.entries_count, entries_count);
        assert_eq!(info.entries_size, entries_size);
        assert_eq!(info.toc, vec![2, 0]);
        assert_eq!(info.entries.len(), 12);
        assert_eq!(info.entries[0], 0xAA);
        assert_eq!(info.entries[(entries_size as usize) * 2], 0x55);
    }

    #[test]
    fn parse_v4_slide_info_header() {
        let page_size = 0x1000u32;
        let page_starts_count = 2u32;
        let page_starts_offset = 40u32; // header size
        let mut buf = vec![0u8; 40 + 4];
        buf[0..4].copy_from_slice(&4u32.to_le_bytes()); // version
        buf[4..8].copy_from_slice(&page_size.to_le_bytes());
        buf[8..12].copy_from_slice(&page_starts_offset.to_le_bytes());
        buf[12..16].copy_from_slice(&page_starts_count.to_le_bytes());
        // page_extras_offset/count zero
        buf[24..32].copy_from_slice(&0xC0000000u64.to_le_bytes()); // delta_mask
        buf[32..40].copy_from_slice(&0x12345678u64.to_le_bytes()); // value_add
        buf[40..42].copy_from_slice(&0u16.to_le_bytes());
        buf[42..44].copy_from_slice(&SLIDE_V4_PAGE_NONE.to_le_bytes());
        let info = parse_v4_slide_info(&buf, 0, 44).expect("v4 parses");
        assert_eq!(info.version, 4);
        assert_eq!(info.page_size, page_size);
        assert_eq!(info.page_starts.len(), 2);
        assert_eq!(info.page_starts[0], 0);
        assert_eq!(info.page_starts[1], SLIDE_V4_PAGE_NONE);
        assert_eq!(info.delta_mask, 0xC0000000);
        assert_eq!(info.value_add, 0x12345678);
    }

    #[test]
    fn apply_slide_info_dispatches_on_version_word() {
        // v3
        let mut buf = vec![0u8; 32];
        buf[0..4].copy_from_slice(&3u32.to_le_bytes());
        buf[4..8].copy_from_slice(&0x1000u32.to_le_bytes()); // page_size
        buf[8..12].copy_from_slice(&0u32.to_le_bytes()); // page_starts_count = 0
        buf[16..24].copy_from_slice(&0u64.to_le_bytes()); // auth_value_add
        let v = apply_slide_info(&buf, 0, 32).expect("dispatches v3");
        assert!(matches!(v, SlideVersion::V3(_)));

        // unsupported version
        let mut buf2 = vec![0u8; 16];
        buf2[0..4].copy_from_slice(&99u32.to_le_bytes());
        assert!(apply_slide_info(&buf2, 0, 16).is_none());
    }

    #[test]
    fn apply_slide_info_rejects_truncated_header() {
        let buf = vec![0u8; 2]; // < 4 bytes
        assert!(apply_slide_info(&buf, 0, 2).is_none());
    }

    // -----------------------------------------------------------------------
    // t169: end-to-end — slide-info wiring through extract_image_with_slide
    // -----------------------------------------------------------------------

    /// Build a synthetic cache whose image starts at file offset 0x1000,
    /// then append (caller-supplied) extra bytes (slide-info blob). Stamp
    /// `image_bytes` at the image's mach_header file offset and return
    /// `(buffer, slide_blob_file_offset)`.
    /// Construct a minimal 64-bit Mach-O blob with one LC_SEGMENT_64
    /// command. The segment data immediately follows the header + load
    /// commands so the resulting blob is self-contained.
    ///
    /// `seg_vmaddr` is the segment's virtual address; the load command
    /// records its `fileoff` as `header_len`. `seg_filesize` is the
    /// byte count of segment payload appended after the load command.
    fn build_minimal_macho_one_segment(
        seg_name: &str,
        seg_vmaddr: u64,
        seg_filesize: u64,
    ) -> Vec<u8> {
        const MH_MAGIC_64: u32 = 0xfeedfacf;
        const LC_SEGMENT_64: u32 = 0x19;
        const SEG_CMDSIZE: u32 = 72;

        let mut out = Vec::new();
        // mach_header_64 (32 bytes)
        out.extend_from_slice(&MH_MAGIC_64.to_le_bytes());
        out.extend_from_slice(&0x0100_0007u32.to_le_bytes()); // cputype x86_64
        out.extend_from_slice(&0x0000_0003u32.to_le_bytes()); // cpusubtype
        out.extend_from_slice(&0x0000_0006u32.to_le_bytes()); // MH_DYLIB
        out.extend_from_slice(&1u32.to_le_bytes()); // ncmds
        out.extend_from_slice(&SEG_CMDSIZE.to_le_bytes()); // sizeofcmds
        out.extend_from_slice(&0u32.to_le_bytes()); // flags
        out.extend_from_slice(&0u32.to_le_bytes()); // reserved

        // LC_SEGMENT_64 (72 bytes)
        out.extend_from_slice(&LC_SEGMENT_64.to_le_bytes());
        out.extend_from_slice(&SEG_CMDSIZE.to_le_bytes());
        let mut seg_name_bytes = [0u8; 16];
        let copy_len = seg_name.len().min(16);
        seg_name_bytes[..copy_len].copy_from_slice(&seg_name.as_bytes()[..copy_len]);
        out.extend_from_slice(&seg_name_bytes);
        out.extend_from_slice(&seg_vmaddr.to_le_bytes());
        out.extend_from_slice(&seg_filesize.to_le_bytes()); // vmsize
        // fileoff = 32 + 72 (header_len) — segment payload appended next
        out.extend_from_slice(&(32u64 + 72).to_le_bytes());
        out.extend_from_slice(&seg_filesize.to_le_bytes());
        out.extend_from_slice(&0u32.to_le_bytes()); // maxprot
        out.extend_from_slice(&0u32.to_le_bytes()); // initprot
        out.extend_from_slice(&0u32.to_le_bytes()); // nsects
        out.extend_from_slice(&0u32.to_le_bytes()); // flags

        // Segment payload — fill with a recognisable byte pattern.
        for i in 0..seg_filesize {
            out.push((i & 0xFF) as u8);
        }
        out
    }

    fn build_cache_with_image(
        image_va: u64,
        image_file_off: u64,
        image_bytes: &[u8],
        slide_blob: &[u8],
    ) -> (Vec<u8>, u64) {
        let mapping = Mapping {
            address: image_va,
            size: 0x1_0000,
            file_offset: image_file_off,
        };
        let mut data = build_cache(
            &magic_x86_64(),
            &[("/usr/lib/libtest.dylib", image_va)],
            &[mapping],
        );
        let image_off = image_file_off as usize;
        let image_end = image_off + image_bytes.len();
        if data.len() < image_end {
            data.resize(image_end, 0);
        }
        data[image_off..image_end].copy_from_slice(image_bytes);
        let slide_off = data.len() as u64;
        data.extend_from_slice(slide_blob);
        (data, slide_off)
    }

    #[test]
    fn extract_image_with_slide_applies_v1_fixups() {
        // Image of one 4 KiB page with two 4-byte pointer slots.
        //  - slot at offset 0x10 → bit 4 of bitmap byte 0 of page 0
        //  - slot at offset 0x20 → bit 0 of bitmap byte 1 of page 0
        let mut image = vec![0u8; SLIDE_V1_PAGE_SIZE];
        image[0x10..0x14].copy_from_slice(&0x0000_0100u32.to_le_bytes());
        image[0x20..0x24].copy_from_slice(&0x0000_0200u32.to_le_bytes());

        // Build a v1 slide-info blob covering page 0 with toc[0]=0.
        // entries[0] = bitmap with bit at (byte 0, bit 4) and (byte 1, bit 0).
        let entries_size = 4u32;
        let toc_offset = 24u32;
        let toc_count = 1u32;
        let entries_offset = toc_offset + toc_count * 2; // 26
        let entries_count = 1u32;
        let total = entries_offset as usize + (entries_count * entries_size) as usize;
        let mut slide = vec![0u8; total];
        slide[0..4].copy_from_slice(&1u32.to_le_bytes()); // version
        slide[4..8].copy_from_slice(&toc_offset.to_le_bytes());
        slide[8..12].copy_from_slice(&toc_count.to_le_bytes());
        slide[12..16].copy_from_slice(&entries_offset.to_le_bytes());
        slide[16..20].copy_from_slice(&entries_count.to_le_bytes());
        slide[20..24].copy_from_slice(&entries_size.to_le_bytes());
        slide[24..26].copy_from_slice(&0u16.to_le_bytes()); // toc[0] = entry 0
        // bitmap byte 0 bit 4 → page off (0*8 + 4)*4 = 0x10
        slide[entries_offset as usize] = 1 << 4;
        // bitmap byte 1 bit 0 → page off (1*8 + 0)*4 = 0x20
        slide[entries_offset as usize + 1] = 1 << 0;

        let (data, slide_off) = build_cache_with_image(0x1_8000_0000, 0x1000, &image, &slide);
        let mut cache = DyldCache::parse(&data).expect("parse");
        cache.set_slide_info(SlideInfoLocation {
            file_offset: slide_off,
            size: slide.len() as u64,
        });

        let slide_amount = 0x40u64;
        let bytes = extract_image_with_slide(&cache, 0, slide_amount).expect("extract");
        let s0 = u32::from_le_bytes(bytes[0x10..0x14].try_into().unwrap());
        let s1 = u32::from_le_bytes(bytes[0x20..0x24].try_into().unwrap());
        assert_eq!(s0, 0x0000_0140, "slot 0 rebased by slide_amount");
        assert_eq!(s1, 0x0000_0240, "slot 1 rebased by slide_amount");
        // Untouched bytes remain zero.
        assert_eq!(&bytes[0..0x10], &[0u8; 0x10][..]);
    }

    #[test]
    fn extract_image_with_slide_applies_v4_fixups() {
        // Single-page v4 image with a 2-entry chain. Delta lives in the
        // top 8 bits of each 32-bit slot (delta units are 4 B).
        let page_size = 0x1000u32;
        let delta_mask: u32 = 0xFF00_0000;
        let delta_shift = delta_mask.trailing_zeros();
        let value_add: u64 = 0x0010_0000;
        let slide_amount: u64 = 0x40;

        let mut image = vec![0u8; page_size as usize];
        // First slot at off 0: value=0x1000, next delta=2 (i.e. +8 B).
        let raw0: u32 = (0x1000u32 & !delta_mask) | ((2u32 << delta_shift) & delta_mask);
        // Second slot at off 8: value=0x2000, next delta=0 (end).
        let raw1: u32 = 0x2000u32 & !delta_mask;
        image[0..4].copy_from_slice(&raw0.to_le_bytes());
        image[8..12].copy_from_slice(&raw1.to_le_bytes());

        // Build v4 blob: header (40 B) + page_starts (1 × 2 B) = 42 B.
        let page_starts_offset = 40u32;
        let page_starts_count = 1u32;
        let total = page_starts_offset as usize + (page_starts_count as usize) * 2;
        let mut slide = vec![0u8; total];
        slide[0..4].copy_from_slice(&4u32.to_le_bytes()); // version
        slide[4..8].copy_from_slice(&page_size.to_le_bytes());
        slide[8..12].copy_from_slice(&page_starts_offset.to_le_bytes());
        slide[12..16].copy_from_slice(&page_starts_count.to_le_bytes());
        // page_extras_offset / count zero
        slide[24..32].copy_from_slice(&(delta_mask as u64).to_le_bytes());
        slide[32..40].copy_from_slice(&value_add.to_le_bytes());
        slide[40..42].copy_from_slice(&0u16.to_le_bytes()); // page_start = 0 (offset 0)

        let (data, slide_off) = build_cache_with_image(0x1_8000_0000, 0x1000, &image, &slide);
        let mut cache = DyldCache::parse(&data).expect("parse");
        cache.set_slide_info(SlideInfoLocation {
            file_offset: slide_off,
            size: slide.len() as u64,
        });

        let bytes = extract_image_with_slide(&cache, 0, slide_amount).expect("extract");
        let r0 = u32::from_le_bytes(bytes[0..4].try_into().unwrap());
        let r1 = u32::from_le_bytes(bytes[8..12].try_into().unwrap());
        let add32 = (value_add.wrapping_add(slide_amount) & 0xFFFF_FFFF) as u32;
        assert_eq!(
            r0 & !delta_mask,
            (0x1000u32.wrapping_add(add32)) & !delta_mask
        );
        assert_eq!(
            r1 & !delta_mask,
            (0x2000u32.wrapping_add(add32)) & !delta_mask
        );
        // Delta bits preserved.
        assert_eq!((r0 & delta_mask) >> delta_shift, 2);
        assert_eq!((r1 & delta_mask) >> delta_shift, 0);
    }

    #[test]
    fn extract_image_with_slide_applies_v3_fixups() {
        // Regression: v3 chain on a single page with one entry.
        let page_size = 0x4000usize;
        let mut image = vec![0u8; page_size];
        // target=0x100, next=0 (chain ends).
        let raw: u64 = 0x100u64 & 0x0007_FFFF_FFFF_FFFF;
        image[0..8].copy_from_slice(&raw.to_le_bytes());

        // v3 slide-info: header (24 B) + page_starts (1 × 2 B).
        let mut slide = vec![0u8; 24 + 2];
        slide[0..4].copy_from_slice(&3u32.to_le_bytes());
        slide[4..8].copy_from_slice(&(page_size as u32).to_le_bytes());
        slide[8..12].copy_from_slice(&1u32.to_le_bytes()); // page_starts_count
        slide[16..24].copy_from_slice(&0x1000u64.to_le_bytes()); // value_add
        slide[24..26].copy_from_slice(&0u16.to_le_bytes()); // page_starts[0] = 0

        let (data, slide_off) = build_cache_with_image(0x1_8000_0000, 0x1000, &image, &slide);
        let mut cache = DyldCache::parse(&data).expect("parse");
        cache.set_slide_info(SlideInfoLocation {
            file_offset: slide_off,
            size: slide.len() as u64,
        });

        let slide_amount = 0x40u64;
        let bytes = extract_image_with_slide(&cache, 0, slide_amount).expect("extract");
        let new_raw = u64::from_le_bytes(bytes[0..8].try_into().unwrap());
        assert_eq!(new_raw & 0x0007_FFFF_FFFF_FFFF, 0x1140);
    }

    #[test]
    fn v5_chain_walk_visits_each_entry_once() {
        // Build a 4096-byte page with a 2-entry chain:
        //   page[0]   = raw0 with next=2 (i.e. 16/8) → page[16]
        //   page[16]  = raw1 with next=0 (terminator)
        let page_size = 4096usize;
        let mut page = vec![0u8; page_size];
        // raw0: next = 2 (in bits 51..62, scaled by 8 → +16), plain pointer 0xAAAA
        let raw0: u64 = (2u64 << 51) | 0xAAAA;
        let raw1: u64 = 0xBBBB; // next = 0 (terminator)
        page[0..8].copy_from_slice(&raw0.to_le_bytes());
        page[16..24].copy_from_slice(&raw1.to_le_bytes());
        let mut visits: Vec<(usize, u64)> = Vec::new();
        walk_v5_page(&page, 0, 0, |off, raw| visits.push((off, raw)));
        assert_eq!(visits.len(), 2, "two-entry chain visits both entries");
        assert_eq!(visits[0].0, 0);
        assert_eq!(visits[1].0, 16);
    }

    // -----------------------------------------------------------------------
    // t179: dyld v5 chain apply with auth-key preservation
    //
    // Walk a multi-entry chain mixing plain and auth pointers and verify
    // through `apply_v5_slide` that:
    //   * auth entries retain key / diversity / addr-div bits verbatim;
    //     only the low 32-bit offset is rewritten = (target + add) & 0xFFFF_FFFF
    //   * plain entries get the full 50-bit (target + add) rewrite
    //   * the next-link bits (51..62) and is_auth bit (50) are preserved
    // -----------------------------------------------------------------------

    #[test]
    fn apply_v5_preserves_auth_key_and_diversifier() {
        // Build a 3-entry chain on a single page:
        //   page[0]   = auth IB, addr_div=1, diversity=0x2BAD, target=0x1000, next=1 (+8)
        //   page[8]   = plain, target=0x2000, next=2 (+16 → page[24])
        //   page[24]  = auth DA, addr_div=0, diversity=0x0123, target=0x3000, next=0 (end)
        let page_size: usize = 4096;
        let mut page = vec![0u8; page_size];

        // Auth entry: key=IB(1), addr_div=1, diversity=0x2BAD, target=0x1000, next=1
        let auth0_raw: u64 = (1u64 << 51)            // next_offset_div8 = 1 → +8 bytes
            | (1u64 << 50)                            // is_auth
            | (1u64 << 48)                            // key = IB
            | (1u64 << 47)                            // addr_div = 1
            | (0x2BADu64 << 32)                       // diversity
            | 0x0000_1000u64; // 32-bit target offset
        // Plain entry: target=0x2000, next=2
        let plain_raw: u64 = (2u64 << 51) | 0x0000_2000u64;
        // Auth entry: key=DA(2), addr_div=0, diversity=0x0123, target=0x3000, next=0 (end)
        let auth1_raw: u64 = ((1u64 << 50)             // is_auth
            | (2u64 << 48))                            // addr_div = 0
            | (0x0123u64 << 32)                       // diversity
            | 0x0000_3000u64;
        page[0..8].copy_from_slice(&auth0_raw.to_le_bytes());
        page[8..16].copy_from_slice(&plain_raw.to_le_bytes());
        page[24..32].copy_from_slice(&auth1_raw.to_le_bytes());

        // Sanity: walk_v5_page sees all three entries in order.
        let mut visits: Vec<(usize, u64)> = Vec::new();
        walk_v5_page(&page, 0, 0, |off, raw| visits.push((off, raw)));
        assert_eq!(visits.len(), 3, "three-entry mixed chain");
        assert_eq!(visits[0].0, 0);
        assert_eq!(visits[1].0, 8);
        assert_eq!(visits[2].0, 24);

        let slide = SlideInfoV5 {
            version: 5,
            page_size: page_size as u32,
            page_starts: vec![0],
            value_add: 0x40,
        };
        let slide_amount: u64 = 0x100;
        let add = slide.value_add.wrapping_add(slide_amount); // 0x140

        let out = apply_v5_slide(&page, &slide, slide_amount);
        let new_auth0 = u64::from_le_bytes(out[0..8].try_into().unwrap());
        let new_plain = u64::from_le_bytes(out[8..16].try_into().unwrap());
        let new_auth1 = u64::from_le_bytes(out[24..32].try_into().unwrap());

        // --- auth0: key=IB, addr_div=1, diversity=0x2BAD ---
        let e0 = decode_v5_chain_entry(new_auth0);
        let a0 = e0.auth.expect("auth0 should still be auth");
        assert_eq!(a0.key, 1, "IB key preserved");
        assert!(a0.use_addr, "addr_div preserved");
        assert_eq!(a0.diversity, 0x2BAD, "diversity preserved");
        assert_eq!(
            e0.target,
            (0x1000u64 + add) & 0xFFFF_FFFF,
            "auth offset slid by (value_add + slide_amount)"
        );
        // Next-link bits (51..62) survive intact for auth0.
        assert_eq!(
            (new_auth0 >> 51) & 0xFFF,
            1,
            "auth0 next-link bits preserved"
        );

        // --- auth1: key=DA, addr_div=0, diversity=0x0123 ---
        let e2 = decode_v5_chain_entry(new_auth1);
        let a2 = e2.auth.expect("auth1 should still be auth");
        assert_eq!(a2.key, 2, "DA key preserved");
        assert!(!a2.use_addr, "addr_div=0 preserved");
        assert_eq!(a2.diversity, 0x0123, "diversity preserved");
        assert_eq!(
            e2.target,
            (0x3000u64 + add) & 0xFFFF_FFFF,
            "auth offset slid"
        );
        assert_eq!(
            (new_auth1 >> 51) & 0xFFF,
            0,
            "auth1 terminator next-link preserved"
        );

        // --- plain entry slid through full 50 bits ---
        let e1 = decode_v5_chain_entry(new_plain);
        assert!(e1.auth.is_none(), "plain entry stays plain");
        assert_eq!(e1.target, 0x2000u64 + add, "plain offset slid (no mask)");
    }

    #[test]
    fn apply_v5_slides_plain_offset() {
        // Two-entry plain chain on a single page, verify full 50-bit slide
        // is applied to both entries and is_auth bit stays 0.
        let page_size: usize = 4096;
        let mut page = vec![0u8; page_size];

        // raw0: plain, target = 0x0000_0000_DEAD_BEEF, next = 1 (+8)
        let raw0: u64 = (1u64 << 51) | 0xDEAD_BEEFu64;
        // raw1: plain, target near 50-bit ceiling, next = 0 (end)
        let raw1: u64 = 0x0001_2345_6789_ABCDu64 & 0x0003_FFFF_FFFF_FFFF;
        page[0..8].copy_from_slice(&raw0.to_le_bytes());
        page[8..16].copy_from_slice(&raw1.to_le_bytes());

        let slide = SlideInfoV5 {
            version: 5,
            page_size: page_size as u32,
            page_starts: vec![0],
            value_add: 0,
        };
        let slide_amount: u64 = 0x1_0000; // 64 KiB slide
        let out = apply_v5_slide(&page, &slide, slide_amount);

        let new0 = u64::from_le_bytes(out[0..8].try_into().unwrap());
        let new1 = u64::from_le_bytes(out[8..16].try_into().unwrap());

        // is_auth stays 0 on both.
        assert_eq!((new0 >> 50) & 1, 0);
        assert_eq!((new1 >> 50) & 1, 0);

        // next-link bits preserved.
        assert_eq!((new0 >> 51) & 0xFFF, 1, "raw0 next=1 preserved");
        assert_eq!((new1 >> 51) & 0xFFF, 0, "raw1 terminator preserved");

        // Full 50-bit slid offset.
        let e0 = decode_v5_chain_entry(new0);
        let e1 = decode_v5_chain_entry(new1);
        assert!(e0.auth.is_none());
        assert!(e1.auth.is_none());
        assert_eq!(
            e0.target,
            (0xDEAD_BEEFu64 + slide_amount) & 0x0003_FFFF_FFFF_FFFF
        );
        assert_eq!(
            e1.target,
            (0x0001_2345_6789_ABCDu64 + slide_amount) & 0x0003_FFFF_FFFF_FFFF
        );
    }

    // -----------------------------------------------------------------------
    // t190: Dyld auth-key apply to extracted images.
    //
    // `extract_image_with_slide_ex` records every ARM64e v5 auth chain entry
    // encountered while walking the slide info, returning an
    // `ExtractedImage { bytes, auth_pointers }`. The first test builds a
    // synthetic v5 cache with two auth slots (one IB+addr-div, one DA
    // plain) and asserts both are surfaced with the correct key/diversity/
    // addr-div bits and the right offsets inside the extracted bytes.
    // The second test builds a cache *without* slide info and asserts the
    // non-v5 path returns an empty `auth_pointers` list.
    // -----------------------------------------------------------------------

    /// Build a minimal v5 slide-info blob covering one page that starts at
    /// chain offset 0. Layout matches `parse_v5_slide_info`'s reader:
    ///   bytes  0..4   = version (=5)
    ///   bytes  4..8   = page_size
    ///   bytes  8..12  = page_starts_count
    ///   bytes 12..16  = (unused; zeros)
    ///   bytes 16..24  = value_add (u64 LE)
    ///   bytes 24..    = page_starts u16[]
    fn t190_build_v5_blob(page_size: u32, value_add: u64, page_starts: &[u16]) -> Vec<u8> {
        let header = 24usize;
        let mut blob = vec![0u8; header + page_starts.len() * 2];
        blob[0..4].copy_from_slice(&5u32.to_le_bytes());
        blob[4..8].copy_from_slice(&page_size.to_le_bytes());
        blob[8..12].copy_from_slice(&(page_starts.len() as u32).to_le_bytes());
        blob[16..24].copy_from_slice(&value_add.to_le_bytes());
        for (i, &s) in page_starts.iter().enumerate() {
            let o = header + i * 2;
            blob[o..o + 2].copy_from_slice(&s.to_le_bytes());
        }
        blob
    }

    #[test]
    fn extract_image_with_slide_ex_records_v5_auth_pointers() {
        // Build a single-page image whose chain has three entries:
        //   page[0]   = auth IB, addr_div=1, diversity=0x2BAD, target=0x1000, next=+8
        //   page[8]   = plain (next=+16 → page[24]); should NOT appear in
        //               auth_pointers.
        //   page[24]  = auth DA, addr_div=0, diversity=0x0123, target=0x3000,
        //               next=0 (chain end).
        let page_size: usize = 4096;
        let mut image = vec![0u8; page_size];

        let auth0_raw: u64 = (1u64 << 51)         // next_offset_div8 = 1 (+8)
            | (1u64 << 50)                         // is_auth
            | (1u64 << 48)                         // key = IB (1)
            | (1u64 << 47)                         // addr_div = 1
            | (0x2BADu64 << 32)                    // diversity
            | 0x0000_1000u64; // 32-bit target offset
        let plain_raw: u64 = (2u64 << 51) | 0x0000_2000u64;
        let auth1_raw: u64 = ((1u64 << 50)         // is_auth, next=0
            | (2u64 << 48))                         // addr_div = 0
            | (0x0123u64 << 32)
            | 0x0000_3000u64;
        image[0..8].copy_from_slice(&auth0_raw.to_le_bytes());
        image[8..16].copy_from_slice(&plain_raw.to_le_bytes());
        image[24..32].copy_from_slice(&auth1_raw.to_le_bytes());

        let blob = t190_build_v5_blob(page_size as u32, 0x40, &[0]);
        let (data, slide_off) = build_cache_with_image(0x1_8000_0000, 0x1000, &image, &blob);
        let mut cache = DyldCache::parse(&data).expect("parse");
        cache.set_slide_info(SlideInfoLocation {
            file_offset: slide_off,
            size: blob.len() as u64,
        });

        let extracted =
            extract_image_with_slide_ex(&cache, 0, 0x100).expect("extract should succeed");

        // Two auth slots (the plain entry must not appear).
        assert_eq!(
            extracted.auth_pointers.len(),
            2,
            "expected exactly 2 auth slots, got {:?}",
            extracted.auth_pointers,
        );

        // First auth slot: offset 0, key=IB, addr_div=1, diversifier=0x2BAD.
        let a0 = extracted.auth_pointers[0];
        assert_eq!(a0.offset, 0, "first auth slot lives at image offset 0");
        assert_eq!(a0.key, 1, "first auth slot key = IB");
        assert!(a0.use_addr_div, "first auth slot uses addr-diversity");
        assert_eq!(
            a0.diversifier, 0x2BAD,
            "first diversifier matches chain entry"
        );

        // Second auth slot: offset 24, key=DA, addr_div=0, diversifier=0x0123.
        let a1 = extracted.auth_pointers[1];
        assert_eq!(a1.offset, 24, "second auth slot lives at image offset 24");
        assert_eq!(a1.key, 2, "second auth slot key = DA");
        assert!(!a1.use_addr_div, "second auth slot ignores addr-diversity");
        assert_eq!(
            a1.diversifier, 0x0123,
            "second diversifier matches chain entry"
        );

        // The slid bytes must still preserve auth key/diversity bits and
        // mutate only the 32-bit offset — same invariant as
        // `apply_v5_preserves_auth_key_and_diversifier`.
        let new0 = u64::from_le_bytes(extracted.bytes[0..8].try_into().unwrap());
        let e0 = decode_v5_chain_entry(new0);
        let a0_decoded = e0.auth.expect("first slot still auth after slide");
        assert_eq!(a0_decoded.key, 1);
        assert!(a0_decoded.use_addr);
        assert_eq!(a0_decoded.diversity, 0x2BAD);
        let add = 0x40u64 + 0x100u64;
        assert_eq!(
            e0.target,
            (0x1000u64 + add) & 0xFFFF_FFFF,
            "auth offset slid by (value_add + slide_amount)"
        );

        // Plain bytes is also the canonical `extract_image_with_slide` output.
        let bytes_only = extract_image_with_slide(&cache, 0, 0x100).expect("legacy extract");
        assert_eq!(
            extracted.bytes, bytes_only,
            "ExtractedImage.bytes matches legacy extract_image_with_slide output",
        );
    }

    #[test]
    fn extract_image_with_slide_ex_non_v5_has_empty_auth_pointers() {
        // Cache with no slide info at all: `extract_image_with_slide_ex`
        // must still return the raw bytes and an empty auth-pointer list.
        // This covers both the "no slide info wired" and "non-v5" paths
        // since the same early-return branches handle both.
        let mut image = vec![0u8; SLIDE_V1_PAGE_SIZE];
        image[0x10..0x14].copy_from_slice(&0x0000_0100u32.to_le_bytes());

        let (data, _slide_off) = build_cache_with_image(
            0x1_8000_0000,
            0x1000,
            &image,
            &[], // no slide blob — set_slide_info not called.
        );
        let cache = DyldCache::parse(&data).expect("parse");

        let extracted = extract_image_with_slide_ex(&cache, 0, 0).expect("extract");
        assert!(
            extracted.auth_pointers.is_empty(),
            "non-v5 / unsliced extract must surface no auth pointers, got {:?}",
            extracted.auth_pointers,
        );
        // Bytes still match the legacy path.
        let bytes_only = extract_image_with_slide(&cache, 0, 0).expect("legacy extract");
        assert_eq!(extracted.bytes, bytes_only);

        // Also explicitly test the v1 path (non-v5 with slide info wired):
        // build a v1 blob, wire it, and confirm `auth_pointers` stays empty.
        let entries_size = 4u32;
        let toc_offset = 24u32;
        let entries_offset = toc_offset + 2; // 1 toc entry × 2 bytes
        let entries_count = 1u32;
        let total = entries_offset as usize + (entries_count * entries_size) as usize;
        let mut v1_blob = vec![0u8; total];
        v1_blob[0..4].copy_from_slice(&1u32.to_le_bytes());
        v1_blob[4..8].copy_from_slice(&toc_offset.to_le_bytes());
        v1_blob[8..12].copy_from_slice(&1u32.to_le_bytes()); // toc_count
        v1_blob[12..16].copy_from_slice(&entries_offset.to_le_bytes());
        v1_blob[16..20].copy_from_slice(&entries_count.to_le_bytes());
        v1_blob[20..24].copy_from_slice(&entries_size.to_le_bytes());
        v1_blob[24..26].copy_from_slice(&0u16.to_le_bytes());
        v1_blob[entries_offset as usize] = 1 << 4; // mark slot at off 0x10

        let (data2, slide_off2) = build_cache_with_image(0x1_8000_0000, 0x1000, &image, &v1_blob);
        let mut cache2 = DyldCache::parse(&data2).expect("parse");
        cache2.set_slide_info(SlideInfoLocation {
            file_offset: slide_off2,
            size: v1_blob.len() as u64,
        });
        let v1_extracted = extract_image_with_slide_ex(&cache2, 0, 0x40).expect("v1 extract");
        assert!(
            v1_extracted.auth_pointers.is_empty(),
            "v1 slide-info extract must surface no auth pointers",
        );
        // And the v1 slide is actually applied (sanity).
        let s0 = u32::from_le_bytes(v1_extracted.bytes[0x10..0x14].try_into().unwrap());
        assert_eq!(s0, 0x0000_0140, "v1 slot rebased by slide_amount");
    }

    // ----- Phase 1: plan_image ------------------------------------------

    /// Build a synthetic cache containing a minimal Mach-O at a fixed VA
    /// and verify `plan_image` lists the segment in declaration order
    /// with correct vmaddr / filesize / cache-relative file offset.
    #[test]
    fn plan_image_lists_segments_in_declaration_order() {
        let image_va = 0x1_8000_0000u64;
        let macho = build_minimal_macho_one_segment("__TEXT", image_va, 0x1000);
        let (data, _) = build_cache_with_image(image_va, 0x1000, &macho, &[]);
        let cache = DyldCache::parse(&data).expect("parse cache");

        let plan = cache.plan_image(image_va).expect("plan_image succeeds");
        assert_eq!(plan.segments.len(), 1);
        let seg = &plan.segments[0];
        assert_eq!(seg.name, "__TEXT");
        assert_eq!(seg.vmaddr, image_va);
        assert_eq!(seg.filesize, 0x1000);
        // The segment lives at file offset 0x1000 + 32 + 72 = 0x10A8.
        // (Cache image starts at file_offset 0x1000; mach_header is 32 B
        // then load commands 72 B before the payload.)
        // We assert the cache fileoff via vaddr_to_file_offset round-trip.
        let expected = cache
            .vaddr_to_file_offset(seg.vmaddr)
            .expect("vaddr translation");
        assert_eq!(seg.fileoff_in_cache, expected);
        // Output offset is page-aligned (0x1000) and starts past the
        // header + load commands.
        assert_eq!(seg.fileoff_in_output % 0x1000, 0);
        assert!(seg.fileoff_in_output >= 32 + 72);
        // total_size covers header + load cmds + the segment, page-aligned.
        assert!(plan.total_size >= seg.fileoff_in_output + seg.filesize);
    }

    /// An out-of-range VA returns `None` rather than panicking.
    #[test]
    fn plan_image_returns_none_for_unknown_vaddr() {
        let image_va = 0x1_8000_0000u64;
        let macho = build_minimal_macho_one_segment("__TEXT", image_va, 0x1000);
        let (data, _) = build_cache_with_image(image_va, 0x1000, &macho, &[]);
        let cache = DyldCache::parse(&data).expect("parse cache");
        assert!(cache.plan_image(0xdead_beef).is_none());
    }

    /// `plan_image` rejects an address whose first 4 bytes aren't the
    /// 64-bit Mach-O magic.
    #[test]
    fn plan_image_rejects_non_macho_magic() {
        let image_va = 0x1_8000_0000u64;
        let bogus = vec![0xffu8; 256]; // no mach-o magic
        let (data, _) = build_cache_with_image(image_va, 0x1000, &bogus, &[]);
        let cache = DyldCache::parse(&data).expect("parse cache");
        assert!(cache.plan_image(image_va).is_none());
    }

    // ----- Phase 2: assemble_image + extract_image_as_macho ----------

    /// Assemble round-trips through `MachoLoader::can_load` — the
    /// extracted blob is a syntactically valid 64-bit Mach-O.
    #[test]
    fn extract_image_as_macho_round_trips_through_macho_loader() {
        use crate::{Loader, MachoLoader};
        let image_va = 0x1_8000_0000u64;
        let macho = build_minimal_macho_one_segment("__TEXT", image_va, 0x1000);
        let (data, _) = build_cache_with_image(image_va, 0x1000, &macho, &[]);
        let cache = DyldCache::parse(&data).expect("parse cache");

        let blob = cache
            .extract_image_as_macho("/usr/lib/libtest.dylib")
            .expect("extract");
        assert!(MachoLoader::can_load(&blob), "Mach-O magic intact");
        // Loader recognises the cputype as x86_64 (cputype 0x01000007).
        let img = MachoLoader::load(&blob).expect("standalone macho parses");
        assert_eq!(img.arch, unlace_ir::ArchId::X86_64);
    }

    /// `assemble_image` rewrites each LC_SEGMENT_64 `fileoff` to point
    /// at the linearised output offset (not the cache offset).
    #[test]
    fn assemble_image_rewrites_segment_fileoff() {
        const LC_SEGMENT_64: u32 = 0x19;
        let image_va = 0x1_8000_0000u64;
        let macho = build_minimal_macho_one_segment("__TEXT", image_va, 0x1000);
        let (data, _) = build_cache_with_image(image_va, 0x1000, &macho, &[]);
        let cache = DyldCache::parse(&data).expect("parse");
        let plan = cache.plan_image(image_va).expect("plan");
        let blob = cache.assemble_image(&plan);

        // Walk the assembled blob and find the LC_SEGMENT_64.
        let ncmds = u32::from_le_bytes(blob[16..20].try_into().unwrap());
        let mut cursor = 32usize;
        let mut found = false;
        for _ in 0..ncmds {
            let cmd = u32::from_le_bytes(blob[cursor..cursor + 4].try_into().unwrap());
            let cmdsize =
                u32::from_le_bytes(blob[cursor + 4..cursor + 8].try_into().unwrap()) as usize;
            if cmd == LC_SEGMENT_64 {
                let fileoff =
                    u64::from_le_bytes(blob[cursor + 40..cursor + 48].try_into().unwrap());
                assert_eq!(
                    fileoff, plan.segments[0].fileoff_in_output,
                    "LC_SEGMENT_64 fileoff must point at the linearised output offset",
                );
                found = true;
                break;
            }
            cursor += cmdsize;
        }
        assert!(found, "LC_SEGMENT_64 not located in assembled blob");
    }

    // ----- Phase 3: parse_chained_fixups --------------------------------

    /// Build a `LC_DYLD_CHAINED_FIXUPS` payload containing one segment
    /// with one page whose chain holds a single PTR_64 rebase entry at
    /// page offset `entry_off`, then terminates.
    fn build_minimal_fixups_ptr64(entry_off: u64, target: u64) -> Vec<u8> {
        // Layout:
        //   [0 .. 32)  dyld_chained_fixups_header
        //   [32 .. 36) starts.seg_count = 1
        //   [36 .. 40) starts.seg_info_offset[0] = 8 (relative to starts_offset = 32)
        //   [40 .. 62) dyld_chained_starts_in_segment
        //   [62 .. 64) page_start[0] = entry_off
        //   [64 .. )   imports table (empty: 0 entries, format=1 → 0 bytes)
        let mut blob = vec![0u8; 64];
        // Header
        blob[0..4].copy_from_slice(&0u32.to_le_bytes()); // fixups_version
        blob[4..8].copy_from_slice(&32u32.to_le_bytes()); // starts_offset
        blob[8..12].copy_from_slice(&64u32.to_le_bytes()); // imports_offset
        blob[12..16].copy_from_slice(&64u32.to_le_bytes()); // symbols_offset
        blob[16..20].copy_from_slice(&0u32.to_le_bytes()); // imports_count = 0
        blob[20..24].copy_from_slice(&1u32.to_le_bytes()); // imports_format = 1
        blob[24..28].copy_from_slice(&0u32.to_le_bytes()); // symbols_format
        blob[28..32].copy_from_slice(&0u32.to_le_bytes()); // padding
        // starts_in_image
        blob[32..36].copy_from_slice(&1u32.to_le_bytes()); // seg_count
        blob[36..40].copy_from_slice(&8u32.to_le_bytes()); // seg_info_offset[0]
        // starts_in_segment at offset 40 (= starts_offset 32 + seg_info_offset 8):
        blob[40..44].copy_from_slice(&24u32.to_le_bytes()); // size of this struct
        blob[44..46].copy_from_slice(&0x4000u16.to_le_bytes()); // page_size = 16 KiB
        blob[46..48].copy_from_slice(&2u16.to_le_bytes()); // pointer_format = PTR_64
        // segment_offset — where the chain entries actually live (relative
        // to the start of *this* payload). We place them at offset 100
        // so the chain walker reads from blob[100 + cursor_off..].
        blob[48..56].copy_from_slice(&100u64.to_le_bytes());
        blob[56..60].copy_from_slice(&0u32.to_le_bytes()); // max_valid_pointer
        blob[60..62].copy_from_slice(&1u16.to_le_bytes()); // page_count
        blob[62..64].copy_from_slice(&(entry_off as u16).to_le_bytes()); // page_start[0]

        // Pad up to offset 100 + 8 to hold one chain entry.
        let needed = 100 + 8;
        if blob.len() < needed {
            blob.resize(needed, 0);
        }
        // Encode one PTR_64 rebase entry at segment offset `entry_off`:
        //   bit 63 = bind flag (0 = rebase)
        //   bits 62..51 = next (12 bits; 0 = end of chain)
        //   bits 50..36 = high
        //   bits 35..0  = target VA
        let raw = target & ((1u64 << 36) - 1);
        let entry_pos = 100 + entry_off as usize;
        if entry_pos + 8 > blob.len() {
            blob.resize(entry_pos + 8, 0);
        }
        blob[entry_pos..entry_pos + 8].copy_from_slice(&raw.to_le_bytes());

        blob
    }

    #[test]
    fn chained_fixups_decodes_rebase_chain_for_ptr64() {
        let blob = build_minimal_fixups_ptr64(0, 0xdeadbeef);
        let fixups = parse_chained_fixups(&blob).expect("parse fixups");
        assert!(fixups.imports.is_empty());
        let rebases = fixups
            .rebases
            .get(&0)
            .expect("segment 0 should have rebase entries");
        assert_eq!(rebases.len(), 1);
        assert_eq!(rebases[0].segment_offset, 0);
        assert_eq!(rebases[0].target_vmaddr, 0xdeadbeef);
        assert!(!rebases[0].auth);
    }

    /// `imports_count` = 1 ordinal entry that points at a NUL-terminated
    /// symbol name in the symbols region.
    #[test]
    fn chained_fixups_resolves_imports_via_ordinal() {
        // Header + minimal starts (no fixups for the single segment)
        // + 1 import entry + symbols.
        let header_len = 32usize;
        let starts_len = 8usize; // seg_count + 1 seg_info_offset = 0
        let import_len = 4usize;
        let imports_offset = header_len + starts_len;
        let symbols_offset = imports_offset + import_len;
        let mut blob = vec![0u8; symbols_offset];
        // Header
        blob[4..8].copy_from_slice(&(header_len as u32).to_le_bytes()); // starts_offset
        blob[8..12].copy_from_slice(&(imports_offset as u32).to_le_bytes());
        blob[12..16].copy_from_slice(&(symbols_offset as u32).to_le_bytes());
        blob[16..20].copy_from_slice(&1u32.to_le_bytes()); // imports_count
        blob[20..24].copy_from_slice(&1u32.to_le_bytes()); // imports_format=1
        // starts_in_image: 1 segment with seg_info_offset = 0 (no fixups).
        blob[header_len..header_len + 4].copy_from_slice(&1u32.to_le_bytes());
        // seg_info_offset[0] already zero
        // import entry: lib_ordinal=2, weak=0, name_offset=0
        let import = 2u32 | (0u32 << 8) | (0u32 << 9);
        blob[imports_offset..imports_offset + 4].copy_from_slice(&import.to_le_bytes());
        // symbols: "memcpy\0"
        blob.extend_from_slice(b"memcpy\0");

        let fixups = parse_chained_fixups(&blob).expect("parse");
        assert_eq!(fixups.imports.len(), 1);
        assert_eq!(fixups.imports[0].lib_ordinal, 2);
        assert!(!fixups.imports[0].weak_import);
        assert_eq!(fixups.imports[0].name, "memcpy");
    }

    /// §5.7: a synthetic arm64e auth rebase populates `auth_meta` with
    /// the recovered diversity / key / addr-diversifier.
    #[test]
    fn arm64e_auth_metadata_decodes_diversity_key_and_addr_div() {
        // Build a single arm64e PTR_ARM64E (format=1) auth rebase entry:
        //   bit 63 = 1 (auth)
        //   bits 62-51 = 0 (next = 0, terminates chain)
        //   bits 50-49 = 2 (key = DA)
        //   bit 48 = 1 (addr-diversified)
        //   bits 47-32 = 0xCAFE (diversity)
        //   bits 31-0 = 0x12345 (target — not validated here)
        let auth = 1u64 << 63;
        let key = (2u64) << 49;
        let addr_div = 1u64 << 48;
        let div = 0xCAFEu64 << 32;
        let target = 0x12345u64;
        let raw = auth | key | addr_div | div | target;

        // Wrap into a fixups blob the parser can consume.
        let mut blob = vec![0u8; 64];
        blob[0..4].copy_from_slice(&0u32.to_le_bytes());
        blob[4..8].copy_from_slice(&32u32.to_le_bytes()); // starts_offset
        blob[8..12].copy_from_slice(&64u32.to_le_bytes());
        blob[12..16].copy_from_slice(&64u32.to_le_bytes());
        blob[16..20].copy_from_slice(&0u32.to_le_bytes());
        blob[20..24].copy_from_slice(&1u32.to_le_bytes()); // imports_format
        blob[24..28].copy_from_slice(&0u32.to_le_bytes());
        blob[28..32].copy_from_slice(&0u32.to_le_bytes());
        blob[32..36].copy_from_slice(&1u32.to_le_bytes()); // seg_count
        blob[36..40].copy_from_slice(&8u32.to_le_bytes()); // seg_info_offset[0]
        blob[40..44].copy_from_slice(&24u32.to_le_bytes()); // size
        blob[44..46].copy_from_slice(&0x4000u16.to_le_bytes()); // page_size
        blob[46..48].copy_from_slice(&1u16.to_le_bytes()); // PTR_ARM64E
        blob[48..56].copy_from_slice(&100u64.to_le_bytes()); // segment_offset
        blob[56..60].copy_from_slice(&0u32.to_le_bytes());
        blob[60..62].copy_from_slice(&1u16.to_le_bytes()); // page_count
        blob[62..64].copy_from_slice(&0u16.to_le_bytes()); // page_start[0] = 0

        // The chain entry lives at file offset 100 + 0 = 100.
        if blob.len() < 108 {
            blob.resize(108, 0);
        }
        blob[100..108].copy_from_slice(&raw.to_le_bytes());

        let fixups = parse_chained_fixups(&blob).expect("parse");
        let rebases = fixups.rebases.get(&0).expect("seg 0 rebases");
        assert_eq!(rebases.len(), 1);
        let r = &rebases[0];
        assert!(r.auth, "auth flag set");
        let meta = r.auth_meta.as_ref().expect("auth_meta populated");
        assert_eq!(meta.diversity, 0xCAFE);
        assert!(meta.addr_diversified);
        assert_eq!(meta.key, ArmAuthKey::DA);
    }

    /// A truncated payload returns `None` rather than panicking.
    #[test]
    fn chained_fixups_rejects_truncated_input() {
        let too_short = vec![0u8; 16];
        assert!(parse_chained_fixups(&too_short).is_none());
    }

    // ----- Phase 4: subcaches() reader ---------------------------------

    /// Pre-macOS 12 caches have `subCacheArrayCount = 0` (the field
    /// either lives at zero in the header, or is past the header
    /// region entirely). Either way `subcaches()` returns an empty
    /// list.
    #[test]
    fn subcaches_empty_for_pre_macos_12_caches() {
        let data = build_cache(&magic_x86_64(), &[], &[]);
        let cache = DyldCache::parse(&data).expect("parse cache");
        assert!(cache.subcaches().is_empty());
    }

    /// macOS 12+ layout: write a 3-entry subCacheArray after the
    /// existing cache shell and point the primary header's
    /// subCacheArrayOffset/Count at it.
    #[test]
    fn subcaches_decodes_modern_layout() {
        let mut data = build_cache(&magic_x86_64(), &[], &[]);
        // Pad the cache up to the header field region we need to
        // populate (offset 0x1d0 is the end of the (Count) field).
        if data.len() < 0x200 {
            data.resize(0x200, 0);
        }
        let entries_offset = 0x200u32;
        let count = 3u32;
        let entry_size = 16 + 8 + 32usize; // 56 bytes
        let total = (count as usize) * entry_size;
        if data.len() < entries_offset as usize + total {
            data.resize(entries_offset as usize + total, 0);
        }
        // Write header fields.
        data[0x1c8..0x1cc].copy_from_slice(&entries_offset.to_le_bytes());
        data[0x1cc..0x1d0].copy_from_slice(&count.to_le_bytes());
        // Three subcache entries.
        for (i, (vm_off, suffix)) in [
            (0x1000u64, ".01"),
            (0x2000u64, ".02"),
            (0x3000u64, ".symbols"),
        ]
        .iter()
        .enumerate()
        {
            let base = entries_offset as usize + i * entry_size;
            // UUID — fill with `i + 1` so each entry has a distinct value.
            for b in &mut data[base..base + 16] {
                *b = (i + 1) as u8;
            }
            data[base + 16..base + 24].copy_from_slice(&vm_off.to_le_bytes());
            let suffix_bytes = suffix.as_bytes();
            let len = suffix_bytes.len().min(32);
            data[base + 24..base + 24 + len].copy_from_slice(&suffix_bytes[..len]);
        }
        let cache = DyldCache::parse(&data).expect("parse cache");
        let subs = cache.subcaches();
        assert_eq!(subs.len(), 3);
        assert_eq!(subs[0].cache_vm_offset, 0x1000);
        assert_eq!(subs[0].file_suffix, ".01");
        assert_eq!(subs[1].cache_vm_offset, 0x2000);
        assert_eq!(subs[1].file_suffix, ".02");
        assert_eq!(subs[2].cache_vm_offset, 0x3000);
        assert_eq!(subs[2].file_suffix, ".symbols");
        // Distinct UUIDs.
        assert_ne!(subs[0].uuid, subs[1].uuid);
        assert_ne!(subs[1].uuid, subs[2].uuid);
    }

    // ----- §5.4 DyldCacheCollection -----------------------------------

    /// Primary covers an image; lookup returns the primary's bytes.
    #[test]
    fn collection_routes_primary_vaddr_to_primary_bytes() {
        let image_va = 0x1_8000_0000u64;
        let macho = build_minimal_macho_one_segment("__TEXT", image_va, 0x1000);
        let (data, _) = build_cache_with_image(image_va, 0x1000, &macho, &[]);
        let primary = DyldCache::parse(&data).unwrap();
        let col = DyldCacheCollection::new(primary, BTreeMap::new()).unwrap();
        let (bytes, off) = col.vaddr_to_bytes(image_va).expect("primary route");
        assert_eq!(bytes.as_ptr(), data.as_ptr());
        assert_eq!(off, 0x1000);
    }

    /// VA outside the primary that falls inside a registered subcache
    /// is routed to that subcache's bytes.
    #[test]
    fn collection_routes_subcache_vaddr_to_subcache_bytes() {
        let primary_va = 0x1_8000_0000u64;
        let primary_macho = build_minimal_macho_one_segment("__TEXT", primary_va, 0x1000);
        let (primary_bytes, _) = build_cache_with_image(primary_va, 0x1000, &primary_macho, &[]);

        let sub_va = 0x1_9000_0000u64;
        let sub_macho = build_minimal_macho_one_segment("__TEXT", sub_va, 0x1000);
        let (sub_bytes, _) = build_cache_with_image(sub_va, 0x1000, &sub_macho, &[]);

        // We have to keep the sub_bytes alive for the lifetime of the
        // collection. Box::leak is fine in a test.
        let primary_leak: &'static [u8] = Box::leak(primary_bytes.into_boxed_slice());
        let sub_leak: &'static [u8] = Box::leak(sub_bytes.into_boxed_slice());

        let primary = DyldCache::parse(primary_leak).unwrap();
        let mut subs = BTreeMap::new();
        subs.insert(".01".to_string(), sub_leak);
        let col = DyldCacheCollection::new(primary, subs).unwrap();

        // Primary VA still resolves through the primary.
        let (got_primary, _) = col.vaddr_to_bytes(primary_va).unwrap();
        assert!(std::ptr::eq(got_primary.as_ptr(), primary_leak.as_ptr()));

        // Subcache VA resolves through the subcache.
        let (got_sub, _) = col.vaddr_to_bytes(sub_va).unwrap();
        assert!(std::ptr::eq(got_sub.as_ptr(), sub_leak.as_ptr()));

        // An out-of-range VA returns None.
        assert!(col.vaddr_to_bytes(0xdead_beef).is_none());
    }

    /// `extract_image_as_macho` works through the collection.
    #[test]
    fn collection_extract_image_as_macho_round_trips() {
        use crate::{Loader, MachoLoader};
        let image_va = 0x1_8000_0000u64;
        let macho = build_minimal_macho_one_segment("__TEXT", image_va, 0x1000);
        let (data, _) = build_cache_with_image(image_va, 0x1000, &macho, &[]);
        let primary = DyldCache::parse(&data).unwrap();
        let col = DyldCacheCollection::new(primary, BTreeMap::new()).unwrap();
        let blob = col
            .extract_image_as_macho("/usr/lib/libtest.dylib")
            .expect("extract");
        assert!(MachoLoader::can_load(&blob));
    }

    /// `subCacheArrayOffset` pointing past the file is ignored, not
    /// panicked on.
    #[test]
    fn subcaches_rejects_oversize_offset() {
        let mut data = build_cache(&magic_x86_64(), &[], &[]);
        if data.len() < 0x1d0 {
            data.resize(0x1d0, 0);
        }
        data[0x1c8..0x1cc].copy_from_slice(&0xFFFFFFFFu32.to_le_bytes());
        data[0x1cc..0x1d0].copy_from_slice(&1u32.to_le_bytes());
        let cache = DyldCache::parse(&data).expect("parse cache");
        assert!(cache.subcaches().is_empty());
    }

    /// The segment payload survives verbatim from the cache into the
    /// assembled blob. In a real dyld cache the `__TEXT` segment
    /// includes the mach_header + load commands at its start, so the
    /// first byte at the segment's output offset is the Mach-O magic.
    /// The synthetic payload bytes (`i & 0xFF`) start at offset
    /// 32 + 72 = 104 inside the segment.
    #[test]
    fn assemble_image_preserves_segment_payload_bytes() {
        let image_va = 0x1_8000_0000u64;
        let seg_size = 0x1000u64;
        let macho = build_minimal_macho_one_segment("__TEXT", image_va, seg_size);
        let (data, _) = build_cache_with_image(image_va, 0x1000, &macho, &[]);
        let cache = DyldCache::parse(&data).expect("parse");
        let plan = cache.plan_image(image_va).expect("plan");
        let blob = cache.assemble_image(&plan);

        let seg = &plan.segments[0];
        let off = seg.fileoff_in_output as usize;
        // First 4 bytes at the segment boundary are the MH_MAGIC_64
        // little-endian (0xfeedfacf).
        assert_eq!(&blob[off..off + 4], &[0xcf, 0xfa, 0xed, 0xfe]);
        // Synthetic payload (`i & 0xFF`) starts 104 bytes into the
        // segment.
        let payload_off = off + 104;
        assert_eq!(blob[payload_off], 0);
        assert_eq!(blob[payload_off + 1], 1);
        assert_eq!(blob[payload_off + 0xFF], 0xFF);
        assert_eq!(blob[payload_off + 0x100], 0); // wraps at byte 256
    }
}
