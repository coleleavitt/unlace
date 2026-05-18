# Completion §6 — DWARF v5 Split-DWARF + Loclists/Rnglists

Self-contained handoff. Master plan: `docs/handoffs/COMPLETION_PLAN.md`
plus `COMPLETION_05_REMAINING.md` §5.6.

## Goal

Recover DWARF v5 metadata that today's parser misses:

- `.dwo`/`.dwp` split-DWARF files referenced by `DW_AT_GNU_dwo_name`.
- `.debug_loclists` location lists (replace single-shot fbreg).
- `.debug_rnglists` range lists (replace single-shot lowpc/highpc).
- DW_OP variable-location operators beyond the §1 evaluator subset
  (`DW_OP_implicit_value`, `DW_OP_stack_value`, `DW_OP_piece`, the
  arithmetic stack ops the existing evaluator already declines).

## Files touched

- `crates/unlace-loader/src/dwarf.rs` (primary).
- `crates/unlace-loader/Cargo.toml` (no new deps; `gimli` already on the
  workspace path).
- `crates/unlace-loader/src/lib.rs` (re-exports).
- `docs/status.md` (matrix row).
- `plan.md` (acceptance bullet).

## Phase 1 — Split-DWARF discovery (2 days)

A "main" DWARF unit can carry `DW_AT_GNU_dwo_name` and/or
`DW_AT_dwo_id` pointing at an external `.dwo` (single-file) or `.dwp`
(packaged) split-DWARF artifact. The loader needs to:

1. While walking each unit in `import_dwarf`, look for
   `DW_AT_GNU_dwo_name` (also accept the DWARF v5 `DW_AT_dwo_name`).
2. Record the referenced file path + `dwo_id` on a new
   `DwarfInfo::dwo_references: Vec<DwoRef>`.
3. Add `pub fn merge_split_dwarf(&mut self, dwo_bytes: &[u8])` that
   parses the .dwo (which uses the same `gimli::Dwarf` machinery
   against the renamed sections — `.debug_info.dwo`, `.debug_abbrev.dwo`,
   `.debug_str.dwo`, etc.) and folds discovered functions/types into
   the parent `DwarfInfo`.

**New types:**

```rust
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct DwoRef {
    pub dwo_name: String,
    pub dwo_id: Option<u64>,
    pub unit_offset: u64,
}
```

**Tests:**

- `extracts_dwo_references_from_skeleton_unit` — synthetic DWARF unit
  with `DW_AT_GNU_dwo_name` lands in `dwo_references`.
- `merge_split_dwarf_imports_dwo_functions` — feed a .dwo blob, assert
  new functions appear.

## Phase 2 — `.debug_loclists` location-list reader (3–4 days)

DWARF v5 deprecates the v4 `.debug_loc` format in favour of
`.debug_loclists`. Each variable's `DW_AT_location` can be either a
direct expression (the old form, handled by `evaluate_simple_location`)
or a `DW_LLE_*` list of expressions keyed by PC range. The loader
needs:

1. Discover `.debug_loclists` via the existing `gimli::DwarfSections`
   loader.
2. For each `LocalVariable` whose `DW_AT_location` is a
   `LocationListsRef`, walk the list, capturing every
   `(pc_range, expression)` pair.
3. Add a `pub locations_dwarf_v5: Vec<(gimli::Range, SimpleLocation)>`
   field to `LocalVariable` — the existing single-value `frame_offset`
   stays as the dominant fallback for the most common entry.

**Implementation seam:** `gimli::Dwarf::locations` already iterates the
v5 list when present; the consumer side is the new field projection.

**Tests:**

- `loclists_decode_single_range_fbreg` — synthetic v5 unit with one
  PC range, fbreg expression.
- `loclists_two_ranges_keep_both` — two `DW_LLE_offset_pair` entries
  yield two `(range, location)` pairs.

## Phase 3 — `.debug_rnglists` range-list reader (1 day)

Parallel to Phase 2 for `DW_AT_ranges`. Each function with discontiguous
PC ranges (common after compiler inlining + cold-block separation) has
a `DW_AT_ranges` pointing at a `DW_RLE_*` list.

The existing `extract_die_ranges` helper already iterates via
`dwarf.die_ranges` which handles v4 and v5 transparently — verify
that v5 fixtures land the full range set on
`FunctionDebugInfo::ranges`.

**Tests:**

- `rnglists_function_with_two_ranges_lists_both` — synthetic v5 unit
  whose subprogram has `DW_AT_ranges` pointing at a 2-entry rnglist;
  resulting `FunctionDebugInfo::ranges.len()` is 2.

## Phase 4 — DW_OP_implicit_value / stack_value / piece (1 day)

The existing `evaluate_simple_location_bytes` declines piece composition
and stops on stack_value. Extend it:

- `DW_OP_stack_value` (0x9f): mark the just-emitted base as a
  "value, not address" via a new `SimpleLocation::ValueAt(...)` wrapper.
- `DW_OP_implicit_value` (0x9e): read length+bytes payload, store
  inline.
- `DW_OP_piece` / `DW_OP_bit_piece`: return a new
  `SimpleLocation::Composite(Vec<(SimpleLocation, u32 /* size_bytes */)>)`
  that captures every piece.

**Tests:**

- `evaluator_decodes_stack_value` — `DW_OP_lit5 DW_OP_stack_value`
  → `ValueAt(Lit(5))`-style result.
- `evaluator_decodes_implicit_value` — `DW_OP_implicit_value 4
  0x12 0x34 0x56 0x78` → `ImplicitValue([0x12, 0x34, 0x56, 0x78])`.
- `evaluator_decodes_piece_composition` — two-piece location.

## Acceptance

- All 7 new tests green under
  `cargo test -p unlace-loader --lib dwarf`.
- `DwarfInfo::dwo_references` populated for the `debug_calls.elf`
  fixture (when rebuilt with `-gsplit-dwarf`); when absent, empty.
- `cargo xtask lint-determinism` stays clean.
- `docs/status.md` ELF row mentions DWARF v5 split-DWARF support.

## Estimated effort

7–10 days of focused work.
