# Completion Plan §2 — dyld Shared-Cache Full Image Reassembly

Self-contained handoff. Big-picture plan: `docs/handoffs/COMPLETION_PLAN.md` §2.

## Goal

`DyldCache::extract_image_as_macho(path) -> Option<Vec<u8>>` returns a
standalone Mach-O blob that loads cleanly through `MachoLoader`.
Modern subcache filesets and `LC_DYLD_CHAINED_FIXUPS` are handled.

## Files touched

- `crates/unlace-loader/src/dyld_cache.rs` (primary)
- `crates/unlace-loader/src/macho.rs` (chained-fixups consumer)
- `crates/unlace-loader/src/lib.rs` (re-exports)
- `docs/status.md`
- `plan.md`

## Phase 1 — Image plan (3 days)

Add `ImagePlan` and `SegmentPlan`:

```rust
#[derive(Debug, Clone)]
pub struct ImagePlan {
    pub mach_header: Vec<u8>,
    pub segments: Vec<SegmentPlan>,
    pub total_size: u64,
}

#[derive(Debug, Clone)]
pub struct SegmentPlan {
    pub name: String,
    pub vmaddr: u64,
    pub vmsize: u64,
    pub fileoff_in_cache: u64,
    pub filesize: u64,
    pub fileoff_in_output: u64,
}
```

Add `DyldCache::plan_image(&self, image_vaddr: u64) -> Option<ImagePlan>`:

1. Translate `image_vaddr` via `vaddr_to_file_offset`.
2. Decode `mach_header_64` at that offset (32 bytes).
3. Iterate `ncmds` load commands. For each `LC_SEGMENT_64` (cmd id
   `0x19`), capture name, vmaddr, vmsize, fileoff (in cache),
   filesize. Cache's segment file offset is
   `vaddr_to_file_offset(segment.vmaddr)`.
4. Lay output offsets back-to-back, page-aligned to 0x1000.

**Tests:**

- `plan_image_lists_segments_in_declaration_order`
- `plan_image_returns_none_for_unknown_vaddr`

## Phase 2 — Image assembly (1–2 days)

Add `DyldCache::assemble_image(&self, plan: &ImagePlan) -> Vec<u8>` and
`DyldCache::extract_image_as_macho(&self, path: &str) -> Option<Vec<u8>>`.

1. Allocate `plan.total_size` bytes.
2. Copy `mach_header` bytes, rewriting each segment's `fileoff` to
   `plan.segments[i].fileoff_in_output`.
3. For each segment, copy `filesize` bytes from
   `plan.segments[i].fileoff_in_cache` into the output.
4. If `self.slide_info` is set, apply `apply_v3_slide` /
   `apply_v2_slide` / `apply_v5_slide` per-segment.

**Test:**

- `extract_image_as_macho_round_trips_through_macho_loader`

This test builds a tiny synthetic cache containing one image (a
minimal Mach-O with `__TEXT` + `__LINKEDIT`) and asserts
`MachoLoader::load` accepts the extracted blob.

## Phase 3 — LC_DYLD_CHAINED_FIXUPS (2–3 days)

Add at module top:

```rust
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ChainedFixups {
    pub imports: Vec<ChainedImport>,
    pub rebases: BTreeMap<u32, Vec<RebaseEntry>>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ChainedImport {
    pub lib_ordinal: u8,
    pub weak_import: bool,
    pub name: String,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct RebaseEntry {
    pub segment_offset: u64,
    pub target_vmaddr: u64,
    pub auth: bool,
}
```

Add `pub fn parse_chained_fixups(data: &[u8]) -> Option<ChainedFixups>`:

1. Parse `dyld_chained_fixups_header { fixups_version, starts_offset,
   imports_offset, symbols_offset, imports_count, imports_format,
   symbols_format }`.
2. At `starts_offset`, parse `dyld_chained_starts_in_image { seg_count,
   seg_info_offset[] }`.
3. For each segment with a non-zero offset, parse
   `dyld_chained_starts_in_segment { size, page_size, pointer_format,
   segment_offset, max_valid_pointer, page_count, page_start[] }`.
4. For each non-`DYLD_CHAINED_PTR_START_NONE` page start, walk the
   chain. Each entry's `bind` bit chooses between `RebaseEntry` and an
   import reference (resolved via `imports_offset`).

Pointer formats to support: `DYLD_CHAINED_PTR_64` (1),
`DYLD_CHAINED_PTR_ARM64E` (2), `DYLD_CHAINED_PTR_64_OFFSET` (6),
`DYLD_CHAINED_PTR_ARM64E_KERNEL` (7).

**Tests:**

- `chained_fixups_decodes_rebase_chain_for_arm64e`
- `chained_fixups_resolves_imports_via_ordinal`
- `chained_fixups_rejects_oversize_page_start`

## Phase 4 — Subcache filesets (1–2 days)

Add:

```rust
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SubCacheEntry {
    pub uuid: [u8; 16],
    pub cache_vm_offset: u64,
    pub file_suffix: String,
}

impl<'a> DyldCache<'a> {
    pub fn subcaches(&self) -> Vec<SubCacheEntry>;
}
```

Read `subCacheArrayOffset` at primary-header offset `0x1c8` and
`subCacheArrayCount` at `0x1cc`. Each entry is 56 bytes:
`uuid[16] + cacheVMOffset(u64) + fileSuffix[32]`.

A consumer that wants to *use* a subcache must construct a
`DyldCacheCollection { primary: DyldCache, subs: BTreeMap<String, &[u8]> }`
and route `vaddr_to_file_offset` queries to the subcache whose
`cache_vm_offset` range contains the target VA. Land
`DyldCacheCollection` in a follow-up — Phase 4 only ships the
header-level discovery.

**Tests:**

- `subcaches_decodes_modern_layout`
- `subcaches_empty_for_pre_macos_12_caches`

## Acceptance

- All listed tests green under `cargo test -p unlace-loader dyld_cache`.
- `extract_image_as_macho` produces a blob accepted by `MachoLoader`.
- `parse_chained_fixups` returns a populated `ChainedFixups` for the
  synthetic ARM64e stream.
- `subcaches()` returns 1+ for a macOS 12 synthetic primary header.
- `docs/status.md` Mach-O row updated.

## Estimated effort

7–10 days of focused work.
