# Completion §5 — Remaining Items

The catch-all handoff for everything still open after §1–§4. Each
sub-section is independently mergeable and ordered by tractability.

**Out of scope (per direct user direction):** full TUI / Web UI
front-ends; reproducible signed releases + CI signing pipeline.

## §5.1 — Standalone variants for every IDA `cot_*` opcode (1 day)

CExpr currently has 36 explicit variants; the remaining ~33 IDA `cot_*`
opcodes are absorbed by `Binary { op }` / `CompoundAssign { op }` token
dispatch. The user wants every opcode to have an explicit construction
point.

**Approach:** instead of bloating the enum to 69 variants, add a
canonical builder layer:

```rust
impl CExpr {
    pub fn cot_lor(lhs: CExpr, rhs: CExpr) -> Self { Self::binary("||", lhs, rhs) }
    pub fn cot_land(lhs, rhs)  -> Self { Self::binary("&&", lhs, rhs) }
    pub fn cot_bor(...) / cot_xor / cot_band / ...
    // Compound assigns:
    pub fn cot_asgbor(lhs, rhs) -> Self { Self::CompoundAssign { op: "|",  ... } }
    // etc.
}
```

Plus a `cot_index_to_name` lookup function so every `cot_*` (0..=68) has
a documented mapping in source. Update `cexpr_coverage_rows` to flag
which variant each `cot_*` lands in.

**Tests:** `cot_*_constructors_smoke` (every constructor returns a
non-Empty CExpr that renders something).

**Acceptance:** 69 builder functions, 69-row coverage table cross-ref,
1 smoke test, no enum bloat.

## §5.2 — `ArchId` duplicate-variant dedup (1 day)

Pick canonical names, mark others `#[deprecated]` (Rust 1.81+) or
collapse aliases.

- `Mos6502` vs `M6502` → keep `Mos6502`.
- `Agx` vs `AppleAgx` → keep `AppleAgx`.
- `NvidiaSass` vs `NvSass` → keep `NvidiaSass`.
- `Sharc` vs `SharcBlackfin` → keep both (different ISAs).

For each removed alias: update `arch_support.rs`, every fixture that
uses it, and add a "deprecated removed" line to `docs/status.md`.

## §5.3 — Persistent SSA cache integration (3 days)

`DiskCache` ships; nothing calls it. Wire it into
`decompile_one_function` so:

1. Compute SHA-256 of the input binary once.
2. Build `CacheKey { binary_sha256, function_addr, function_size,
   pipeline_revision }`.
3. Check `DiskCache::get`; on hit, deserialise + return.
4. On miss, run pipeline, serialise resulting C string, `put`.

Cache root defaults to `$XDG_CACHE_HOME/unlace/` or `~/.cache/unlace/`.

**Tests:**
- `cache_hit_skips_lifting` — second call returns same C output and
  doesn't touch the lifter.
- `cache_invalidates_on_pipeline_revision_bump`.
- `cache_invalidates_on_binary_sha_change`.

## §5.4 — `DyldCacheCollection` cross-subcache vaddr translation (1 week)

`subcaches()` enumerates the array; nothing uses it for actual lookup.
Add:

```rust
pub struct DyldCacheCollection<'a> {
    primary: DyldCache<'a>,
    subs: BTreeMap<String, &'a [u8]>, // file_suffix → bytes
}

impl<'a> DyldCacheCollection<'a> {
    pub fn new(primary: DyldCache<'a>, subs: BTreeMap<String, &'a [u8]>) -> Self;
    pub fn vaddr_to_bytes(&self, vaddr: u64) -> Option<&[u8]>;
    pub fn extract_image_as_macho(&self, path: &str) -> Option<Vec<u8>>;
}
```

The subcache files contribute their own mapping tables; the collection
walks each subcache's `cache_vm_offset` range to route a VA to the
right file.

## §5.5 — FLIRT confidence + per-match metadata surfacing (1–2 weeks)

`flirt_match` currently returns `Option<String>`. Extend to
`Option<FlirtMatch { name, confidence, signature_id }>` and propagate
through:

- `pipeline::build_symbol_table_with_functions` — emit
  `(name, confidence)` instead of bare name.
- Quality counter `flirt_matched_calls_high_confidence`.
- C printer comment annotation: `/* flirt: name@0.92 */`.

## §5.6 — DWARF v5 split-DWARF (2 weeks)

Implement `.dwo`/`.dwp` file discovery + DWARF v5 location-list parsing
(`.debug_loclists`, `.debug_rnglists`). Wire into `import_dwarf`.

## §5.7 — `LC_DYLD_CHAINED_FIXUPS` ARM64E auth surfacing (3 days)

`RebaseEntry.auth` is a bool today. Promote to:

```rust
pub struct ArmAuthMeta {
    pub diversity: u16,
    pub addr_diversified: bool,
    pub key: ArmAuthKey, // IA, IB, DA, DB
}
```

And populate it from the arm64e chain bits. Add quality counter
`pac_auth_pointers`.

## §5.8 — PDB per-function locals → SSA (1 week)

`PdbInfo` carries `symbols` + `lines` + `calling_conventions` but no
per-function local list. Extend with:

```rust
pub struct PdbInfo {
    // ... existing
    pub function_locals: BTreeMap<u64, Vec<PdbLocal>>,
}

pub struct PdbLocal {
    pub name: String,
    pub frame_offset: Option<i64>,
    pub type_index: u32,
}
```

Wire into `apply_pdb_types_to_ssa` so per-function locals project onto
`composite_var_types` (mirrors the DWARF flow).

## §5.9 — Whole-pipeline fuzz harness CI integration (1 week)

`unlace-fuzz` exists. Add:

1. `fuzz_corpus/` directory with curated seed inputs.
2. `cargo xtask fuzz` subcommand running 60-second sweeps locally.
3. GHA workflow nightly with cifuzz / honggfuzz.
4. Crash minimisation: when a crash fires, write a minimised input to
   `target/fuzz/crashes/<hash>.bin`.

## §5.10 — Memory-mapped binary access across loader boundaries (3 days)

Today `BinaryInput::open` returns a slice that's bound to the CLI's
stack frame; the loader takes `&[u8]` and the mapping outlives the call
only because `BinaryInput` is held by the caller. Promote to an
`Arc<BinaryInput>` so loader outputs can reference its bytes
zero-copy. Required for the upcoming subcache-collection flow.

## §5.11 — LSP `textDocument/didChange` + completion + goto-def (2–3 weeks)

Current LSP is request-response over a static `LspState`. Add:

1. Document store keyed by URI.
2. `textDocument/didOpen`, `didChange`, `didClose` handlers.
3. `textDocument/completion` returning recovered symbols.
4. `textDocument/definition` mapping identifier → declaration line.

## §5.12 — Loader breadth (multi-week per format)

Per-format handoffs:

- Intel HEX / S-record: ELF-like loader with sparse-map BinaryImage.
- ESP32 / STM8 firmware: vendor-specific bin format readers.
- UEFI module / iOS IMG4: ASN.1 envelope readers (parsers exist for
  IMG4, wiring open).
- Android boot / vendor images: device-tree-aware unpacker.
- dex/oat/art: bytecode → IR lifter (huge scope; ART is its own VM).
- .NET CIL: metadata table reader + IL → IR lifter.
- Python `.pyc`: marshal-format parser + bytecode → IR lifter.

Each is its own multi-week project. Track per-format in separate
handoffs as they get picked up.

## §5.13 — Stub-tier lifter completions (12 days)

Apply the §3 template to the remaining stub-tier architectures.
Priority order:

1. **PIC16** — 30 opcodes from `crates/unlace-lift-pic/`.
2. **8051** — 30 opcodes from `crates/unlace-lift-8051/`.
3. **Hexagon** — test backfill against existing decoder (813 lines, 7
   tests).
4. **TI C28x** — test backfill (764 lines, 4 tests).
5. **TI C6x** — 30 opcodes from scratch.
6. **EVM** — Solidity-friendly opcode coverage.
7. **AMD GPU / Apple AGX / NVIDIA SASS / SPIR-V / SHARC** — research
   each ISA reference; cover 15 opcodes minimum per arch.

## Definition of done

A §5 sub-section is complete when:

- Code lives in the workspace.
- Tests cover the new entry points.
- `cargo test --workspace --lib` reports green.
- `cargo xtask lint-determinism` clean.
- `docs/status.md` updated.
- `plan.md` per-line bullet flipped.
