# [PROPOSAL] Open a dyld shared cache: one image at a time, at its cache addresses

Status: draft proposal, 2026-10-29; implemented on the branch (see the end). Item 5 of `notes/apple-port-from-unlace.md`.
Branch: `apple/dyld-cache`.

## Problem

Every Apple system library on iOS and macOS 11+ ships only inside the dyld shared
cache. kuna cannot open one: `dyld_shared_cache_arm64e` starts with the magic
`dyld_v1  arm64e`, which no `object` parser recognizes, so every surface fails with
"unrecognized input format". Even a correct parse would not be enough:

- A modern cache is split. iOS 16.4.1 (iPhone12,1, 20E252) is a 393 KB main file
  plus 44 sub-caches (`.01`-`.42`, `.27.dylddata`, `.43.dylddata`,
  `.28.dyldlinkedit`, `.44.dyldlinkedit`) and a 590 MB `.symbols` file. One image's
  segments live in several files: CoreFoundation's `__TEXT` is in `.01`, its
  `__DATA_CONST`/`__AUTH_CONST` in `.27.dylddata`, and its `__LINKEDIT` slice in
  `.44.dyldlinkedit`.
- Pointers in data pages are stored in slide-info chain form (v2 on iOS 14
  arm64, v3 on iOS 16 arm64e with PAC auth bits, v5 on iOS 18+), not as plain
  addresses.
- All images share one `__LINKEDIT`. `LC_SYMTAB`/`LC_DYSYMTAB` offsets point into
  that shared pool, and most local symbols were moved out to `.symbols`.
- Calls into other images do not go through the image's own `__stubs`. On the
  iOS 16 cache, CoreFoundation's `__text` has 2,796 `bl` to its own
  `__auth_stubs` and 9,136 `bl` to **stub islands** in `__TEXT_STUBS` sub-caches
  (`adrp x16; add x16; br x16` to the callee in another image, 16 bytes each).
  Decompiled naively, those calls render as `func_0x18c99b570()` instead of
  `__stack_chk_fail()`.

## User-facing shape

```text
unlace unpack <cache> --list [--json]                 # images: index, address, install name
unlace unpack <cache> --image NAME [-o OUT]           # write one image as a standalone Mach-O
unlace decompile <cache> --image NAME <func>          # every analysis surface accepts --image
unlace functions <cache> --image NAME
```

- `<cache>` is the main cache file. Sub-caches and `.symbols` are found next to it
  by the names the header records (`dyld_subcache_entry.fileSuffix`, or `.N` for
  the v1 entry form), and each sub-cache's UUID is checked against the header.
- `NAME` matches, in order: the full install name
  (`/usr/lib/libobjc.A.dylib`), then a unique basename (`libobjc.A.dylib`,
  `CoreFoundation`), then a unique basename without extension (`libobjc.A`).
  An ambiguous or unknown name exits 2 and lists the closest matches.
- A cache with more than one image and no `--image` exits 2 with
  `dyld shared cache holds N images; choose one with --image (unlace unpack <cache> --list)`.
- The selector is a load-time option, `dyldimage` (`none|<install-name>`),
  bridged through `KUNA_DYLD_IMAGE` like every other load-time gate. So
  `--option dyldimage NAME` reaches every CLI command, and the console sets it
  with `option dyldimage NAME` before `load file`. `--image NAME` is a global
  shorthand: `main.rs` removes it and sets the same variable, so it also
  reaches `unlace unpack`, which takes no `--option`.
- A `.dylib`-style path syntax (`cache!/usr/lib/libobjc.A.dylib`) was considered
  and rejected: many surfaces stat, name output after, or re-read the binary path,
  and a synthetic path would have to be taught to each of them.

### One selector with the kernelcache port?

The kernelcache port (`apple/img4-kernelcache`) picks a fileset entry with
`--option kernelcache auto|off|list|<bundle-id or unique dotted suffix>`. This
uses the same shape: a load-time option, no new flag required. The matchers
also agree in spirit: an exact name, then a unique suffix. The namespaces
differ, though. Kernelcache entries are bundle ids (`com.apple.kext.foo`),
matched on dotted suffixes. Cache images are install paths
(`/usr/lib/libobjc.A.dylib`), matched on path components. So the two options
stay separate for now. If both land, one `image` option could front both
containers, keeping one matcher per namespace. `list` is not a `dyldimage`
value, because a cache has thousands of images; `unlace unpack <cache> --list
[--json]` prints them instead.

## Where it goes

Loader tier, P1, `unlace-analysis`. No change to the decompiler core.

| File | Role |
|---|---|
| `unlace-analysis/src/loader/dyldcache.rs` | The cache view: header, sub-caches, mappings, images, `VA -> bytes`. |
| `unlace-analysis/src/loader/dyldcache/slide.rs` | Slide info v1/v2/v3/v4/v5 page-chain walkers, rewriting pointers to unslid targets. |
| `unlace-analysis/src/loader/dyldcache/extract.rs` | Rebuild one image as a thin Mach-O. |
| `unlace-analysis/src/loader/dyldcache/xrefs.rs` | Stub-island, foreign-stub and coalesced-GOT resolution to target names. |
| `unlace-decomp/src/p0_knowledge/dyldcache.rs` | The `dyldimage` and `dyldcrossrefs` env-bridged options. |
| `unlace-cli/src/unpack.rs` | `--list` / `--image` arms. |

The cache is peeled at the same two points as a fat Mach-O
(`macho_fat::peel_fat_image`): the engine dispatch in
`bootstrap_from_object_with_isa`, and `elf_shdr::read_image_sliced`, the read every
other surface goes through. Both get the path, which the cache needs to find its
sub-caches. After the peel, the input is an ordinary thin arm64/arm64e Mach-O, so
the loader, `macho_stubs`, the ObjC pass, function discovery, and the deferred
Listing need no cache-specific code. This is the shape Ghidra uses for its
"Extracted DYLD Component" path, and ipsw's `dyld extract`.

### Reconstruction (`extract.rs`)

1. Find the image by install name in the header's image array
   (`imagesOffset`/`imagesCount`, or the `...Old` pair for headers shorter than
   that field).
2. Read the Mach-O header and load commands at the image's address through the
   mapping table of whichever (sub-)cache holds it.
3. Copy each segment's VM bytes into a new file, page-aligned, and rewrite the
   segment's and its sections' file offsets. Virtual addresses are kept, so
   every address kuna prints is the address in the cache, and the one a crash
   log or `ipsw` shows.
4. Apply slide info to the data pages of the copied segments with slide 0.
   Every rebased slot then holds its unslid target address; arm64e auth
   pointers (v3 `offsetFromSharedCacheBase + auth_value_add`, v5
   `runtimeOffset + value_add`) lose their PAC diversity bits, which the
   decompiler does not model. Only the pages under this image's segments are
   walked, so the cost is proportional to the image, not the cache.
5. Build a private `__LINKEDIT`: the image's symbol-table slice plus its locals
   from `.symbols` (`dyld_cache_local_symbols_entry[_64]`, matched by
   `dylibOffset`), a compacted string table, the indirect-symbol table with its
   indices shifted past the prepended locals, and copies of the export trie,
   function starts, and data-in-code. `LC_SYMTAB`, `LC_DYSYMTAB`,
   `LC_DYLD_INFO[_ONLY]`, `LC_DYLD_EXPORTS_TRIE`, `LC_FUNCTION_STARTS`,
   `LC_DATA_IN_CODE` are rewritten to point into it. `LC_CODE_SIGNATURE` and
   `LC_SEGMENT_SPLIT_INFO` are zeroed (their data is not copied).

### Cross-image references (`xrefs.rs`, option `dyldcrossrefs`)

The extracted image is complete, but its calls into other images still target
addresses outside it. While the image is rebuilt:

1. Scan the image's code sections for `b`/`bl` targets outside the image, and
   its untyped `__got`/`__auth_got` sections (the ones the cache builder
   coalesced, which lost their indirect entries) for slid pointers outside it.
2. Name each call target with the first of these that applies: a symbol at
   that address; the import that an `S_SYMBOL_STUBS` entry there stands for,
   from the owning image's indirect-symbol table (iOS 14 branches into *other*
   images' rewritten stubs); or the stub's own jump target, followed for up to
   four hops. The decoder handles `adrp`/`add`/`ldr` (through slid data)
   ending in `br`, `braa`, or `braaz`, which covers iOS 16's
   `adrp x16; add x16; br x16` islands.
3. Look up names in the target image's symbol table, exports first, then the
   `.symbols` locals. Each image's table is built lazily, on its first lookup.
4. Store the result in the rebuilt Mach-O as an `LC_NOTE` with
   `data_owner = "kuna.dyld.xrefs"`, so `unlace unpack` output carries it too.
   `macho_stubs` reads the note back under the gate. Each call target becomes
   an import stub symbol, and each slot becomes an import slot, so
   `peimportcall` binds a call through it.

The first plan was a synthetic `S_SYMBOL_STUBS` section over the island range.
It was dropped: iOS 14 targets are scattered across other images' stubs, and a
uniform-stride section cannot describe them without copying everything in
between.

`dyldcrossrefs off` leaves the note unread, so island calls render
`sub_<addr>()` and calls through a slot render `(*dat_<addr>)()`. That is the
two-pass stage test.

## How Ghidra does it

- `DyldCacheLoader` + `DyldCacheProgramBuilder` load the **whole** cache into one
  program. Options cover fixing up and marking slide pointers, processing local
  symbols, and processing each dylib's memory, symbols, exports, and libobjc.
  `markupBranchIslands` marks up the old v1 branch pools as Mach-O headers.
- `DyldCacheFileSystem` exposes each dylib as a file.
  `DyldCacheExtractor.extractDylib` packs one dylib with slide fixups and local
  symbols into a standalone Mach-O. `DyldCacheExtractLoader` loads it and can add
  optional components into the same program (`TEXT_STUBS` and `CONST_DATA`
  mappings, `libobjc`).
- kuna takes the extraction route. A whole cache is 3.3 GB on iOS 16, and kuna's
  surfaces are per-image. Ghidra maps the stub islands as memory, so they
  decompile as thunks. kuna names each island after its final target, so the
  call renders as the callee directly.

## Testing plan

- **Unit tests** (in the module): header field presence by `mappingOffset`;
  v1/v2 sub-cache entries; v2, v3, and v5 chain walks on hand-built pages,
  including arm64e auth entries and the v2 "extras" multi-chain form; island
  decode for both forms; image-name matching rules.
- **Synthetic fixture**: `tests/fixtures/dyld_cache/` holds a two-image arm64
  cache with one sub-cache, a `__TEXT_STUBS` sub-cache with one island, v3 slide
  info on one data page, and a `.symbols` file, about 64 KB in total. A small
  Python generator (`tools/fixtures/make_dyld_cache.py`) builds it from two
  hand-assembled images, so the bytes are reviewable.
- **Stage test** `tests/stages/kuna-dyldcrossrefs.toml`:
  `option dyldimage /usr/lib/libcaller.dylib`, `option dyldcrossrefs off`, then
  `load file`. A caller's `bl` to the island renders `func_0x...` (the bug).
  With `on`, it renders `callee_add(...)` (the fix). A slid data pointer and a
  `.symbols` local name are checked in both passes.
- **Real caches** (not committed, under `kuna-data/`): iOS 16.4.1 arm64e (v3,
  44 sub-caches) and iOS 14.8 arm64 (v2, single file). List images. Decompile
  functions from `libobjc.A.dylib`, `CoreFoundation`, and `UIKitCore`, and check
  that cross-image calls carry their names. Compare against the per-image
  extracts in `~/SiteResearch/ios-16_4_1_a13/imessage_frameworks/` (same build,
  different device).
- **Speed**: report time and peak RSS for `--list`, for the extraction alone, and
  for `unlace functions` on one image. The non-cache path gains one 16-byte magic
  compare at the two peel points.

## Implemented (branch `apple/dyld-cache`, commits e5c5feec, 61812981)

- Files: `unlace-analysis/src/loader/dyldcache.rs` (+ `dyldcache/{extract,slide,xrefs,tests}.rs`),
  `unlace-decomp/src/p0_knowledge/dyldcache.rs`, `unlace-cli/src/unpack/dyld.rs`,
  fixture generator `unlace-analysis/tests/fixtures/dyld_cache_arm64e.py` (29 KB of
  output), stage test `tests/stages/kuna-dyldcrossrefs.toml`.
- Options: `dyldimage` (`none|<install-name>`, default `none`) and `dyldcrossrefs`
  (`on|off`, default `on`); global `--image NAME`; `unlace unpack <cache> --list | --image`.
- Real caches: iOS 16.4.1 arm64e (2,715 images, 44 sub-caches, slide v3) and
  iOS 14.8 arm64 (2,121 images, one file, slide v2). Every image rebuilds and parses.
  Every out-of-image branch target in libobjc, CoreFoundation and UIKitCore is named, on
  both caches.
