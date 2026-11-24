# Porting Apple support from unlace into unlace

Status: plan, 2026-10-29. Owner: Cole. Source project: unlace
(`~/RustProjects/active/unlace`, github.com/coleleavitt/unlace), now a research
project. unlace takes precedence; each item below lands as its own unlace PR that
follows `AGENTS.md` (owning phase folder, a named `phases.toml` option for anything
that changes emitted C, a `tests/stages/` two-pass testcase, `docs/spec/` prose, the
four gates, and a measured speed delta). Multi-part items start as a draft
`[PROPOSAL]` PR.

## Why unlace, measured

Head-to-head on 2026-10-29 (unlace master e7a0cc10d6, unlace 03ef2e6b release):

- **Correctness**, 65 scalar fixture functions recompiled and run on every input
  tuple against the source: unlace 62 correct / 1 wrong / 2 do not compile; unlace
  43 correct / 22 wrong.
- **Toyota iOS app** (`Toyota.app/Toyota`, 84 MB arm64 Mach-O, Swift + ObjC),
  500 random functions: unlace 11,588 lines vs unlace 22,257; casts 2,260 vs 8,220;
  unlace leaks prologue register saves, NZCV flag words and LR constants, drops
  call arguments and prints imported Swift calls as `_unnamed(...)`. unlace's output
  is clean and keeps the data flow.
- Where unlace is still ahead is Apple metadata breadth, listed below.

## What unlace already has (do not re-port)

- Mach-O loading through `object` (`unlace-analysis/src/loader/format/macho.rs`,
  281 lines), arm64e detection, `--slice` for fat files.
- `LC_DYLD_CHAINED_FIXUPS` resolver (`loader/format/macho/chained.rs`).
- ObjC metadata pass `objc` (`analyzers/objc/`, 1,328 lines, default off): classes,
  instance + class methods (large and relative method lists), renames IMPs to
  `-[Class sel]`. On Toyota with `--option objc on`, 10 of 120 sampled functions get
  ObjC names.
- Swift demangler subset (`analyzers/demangle/swift.rs`, 352 lines, option
  `swiftdemangle`).
- Function discovery found 314,038 functions on Toyota in 38 s and names the
  imported stubs.

## Port list, in order

Each item: what unlace has, unlace's gap with evidence, where it goes in unlace.

1. **ObjC selector, class and super references.** unlace leaves selector refs as
   data symbols: `objc_msgSendSuper2(&Stack..., dat_1045b76f0)` on Toyota even with
   `objc on`. unlace `crates/unlace-loader/src/objc.rs` (1,820 lines) parses
   `__objc_selrefs`, `__objc_classrefs`, `__objc_superrefs`. Target: extend
   `analyzers/objc/` to name the ref slots (`sel_<name>`, `classref_<Class>`), then
   a P9 emit option that renders the selector argument of `objc_msgSend*` as the
   selector name. Stage test: an arm64 ObjC fixture calling two selectors.
2. **ObjC breadth: categories, protocols, ivars, properties.** unlace `objc.rs`
   reads categories, protocol lists, ivar lists; unlace reads classes and methods
   only. Ivars give `self` a struct layout (field names instead of `+ 0x18`).
   Target: `analyzers/objc/` + a P5 types hook for the ivar layout. Verify what unlace
   does with `self` fields first.
3. **Swift name demangling.** unlace prints `$sSo9OS_os_logC0B0E9subsystem8...` and
   ObjC class names like `_TtC6Toyota24AddMileageViewController` mangled. unlace
   demangles fully through the `symbolic-demangle` crate, which builds Apple's
   C++ demangler. **Decision needed:** a C++ build dependency (breaks or
   complicates `unlace-wasm`?) versus growing `swift.rs` in Rust. At minimum, port
   the `_TtC<len><Module><len><Class>` ObjC-name form into `swift.rs` (pure
   Rust, small).
4. **Swift metadata.** unlace `swift_metadata.rs` (559 lines) scans
   `__swift5_types`, `__swift5_protos`, `__swift5_proto` (type context descriptors,
   protocol descriptors, conformances, async function pointers). unlace has none.
   Target: a new `analyzers/swift/` metadata pass (gated, Mach-O only) that names
   type descriptors and metadata accessors.
5. **dyld shared cache.** unlace `dyld_cache.rs` (3,445 lines) + `dyld_mmap.rs`:
   header, sub-caches, mappings, slide info v2/v3/v5 (incl. arm64e auth chains),
   per-image extraction. unlace cannot open a cache. Target: a loader format plus a
   CLI path to pick one image (`--image <install-name>`). Big item, so open a
   `[PROPOSAL]` PR first.
6. **Mach-O loader audit.** unlace `macho.rs` is 4,694 lines against unlace's 281.
   Compare feature by feature (`__cfstring` literals, `LC_FUNCTION_STARTS`, stub and
   lazy-pointer naming, `__got`/`__auth_got`, exports trie, two-level namespace,
   thread-local variables, init/term funcs). Port only what a stage test shows
   unlace is missing.
7. **arm64e pointer authentication.** unlace decodes auth rebase/bind entries
   (`ArmAuthMeta`, key + diversity). Check that unlace strips PAC bits in its
   fixup resolver; port the decoder if not.
8. **Firmware containers (lower priority).** `ios_img4.rs` (IMG4/IM4P),
   `apple_kernelcache.rs` (compression detection, prelink info), MH_FILESET
   kernel caches. New loader formats; only if kernel/firmware RE matters.
9. **Compact unwind** (`compact_unwind.rs`, `__unwind_info`). Low value: unlace's
   function discovery already finds Toyota's functions. Keep as a discovery
   cross-check only.

## Not porting

- unlace's decompiler core (passes, structurer, C printer, lifters). unlace's IR is
  Ghidra p-code; the head-to-head showed unlace's core is better.
- The Hex-Rays-style printer. If wanted later, it would be a unlace emit option and
  needs a maintainer conversation first.
- Anything derived from the Hex-Rays dumps in unlace's `research/`. Port only
  unlace code written from Apple's public formats or Ghidra.

## Evidence files

- Toyota binary:
  `~/SiteResearch/toyota/com.toyota.OneApp-3.6.0-Decrypted/Payload/Toyota.app/Toyota`
- unlace fixture `fixtures/ios_kcm.arm64.macho`.
- Head-to-head scratch outputs (session-local, may be gone):
  `/home/cole/.prime/agent/session-artifacts/01a1805c-4687-71ec-b216-7b64cf8f26dc/scratchpad/h2h`.


## Status (2026-10-29)

Review PRs in the fork (github.com/coleleavitt/unlace):

| PR | Branch | Base | Item |
|---|---|---|---|
| #1 | apple/objc-selrefs | main | 1: selector/class/super refs, `objc_msgSend$` stubs, chained binds + rebases at load |
| #2 | apple/swift-demangle | main | 3: full Swift demangler (pure Rust) |
| #3 | apple/objc-metadata | apple/objc-selrefs | 2: categories, protocols, ivars (typed `self`), classic bind opcodes |
| #4 | apple/swift-metadata | apple/swift-demangle | 4: Swift runtime metadata names |
| #5 | apple/img4-kernelcache | main | 8: IMG4/IM4P, LZFSE/LZSS, MH_FILESET entry selection (option `kernelcache`) |
| #6 | apple/arm64e-pac | apple/objc-selrefs | 7: `ptrauthtrap`, `authptrcall`, bind addends |
| #7 | apple/compact-unwind | main | 9: `__unwind_info` function starts (option `unwindstarts`, off) |
| #8 | apple/cfstring | main | 6: `__cfstring` literals (option `cfstrings`) |
| #9 | apple/dyld-cache | main | 5: dyld shared cache (options `dyldimage`, `dyldcrossrefs`; `unlace unpack`) |
| #10 | apple/macho-loader | main | 6: data reads through import slots (option `importdata`) |
| #11 | apple/objc-sdk-signatures | apple/objc-metadata | follow-up: ObjC signatures from SDK headers (option `objcsdk`, runtime input only) |
| #12 | apple/elf-gotdata | apple/macho-loader | follow-up: ELF `GLOB_DAT` GOT data imports |
| #13 | apple/objc-types | apple/objc-sdk-signatures | follow-up: properties/ivars/messages typed by declared class |
| #14 | apple/swift-types | apple/swift-metadata | follow-up: Swift struct/class layouts (option `swifttypes`) |

All nine items have review PRs. The Mach-O audit found unlace already covers function starts, stubs/GOT naming, exports trie, LC_MAIN and fat slices; classic bind opcodes landed in #3.

Open decisions: #1 applies chained rebases under the default-on `dynrelocs` option; `[AUTOMATED]` tag on commits; `CFSTR(...)` vs plain literal (#8); AArch64 `brk` as no-return (#6).

### Rebase #4 onto #1

Both add the chained-fixup imports table and a `binds` map to `chained.rs`. Take #1's `chained.rs`
(it also has the `ARM64E_USERLAND`/`USERLAND24` id fix, START_MULTI pages and the compressed-pool
guard), then add the one API the Swift pass uses:

```rust
pub fn binds(&self) -> impl Iterator<Item = (u64, &str)> + '_ {
    self.binds.iter().map(|(va, n)| (*va, n.as_str()))
}
```

`analyzers/swift` needs no change. Catalog and stage counts need +1 on top of whichever lands first.

### Combined branch

`apple/all` (5717e6cd) merges every PR branch onto cb2279ca in this order: objc-types, arm64e-pac,
swift-types, elf-gotdata, cfstring, img4-kernelcache, compact-unwind, dyld-cache (plus 6808d6d6, the
swiftdemangle.xml expectation under the objcivars default). Final counts: 353 settables
(121 core / 134 transform / 98 analysis), stage corpus 607.
