# Completion Plan §1 — Full PDB Type-Index Resolution

Self-contained handoff. The big-picture plan lives at
`docs/handoffs/COMPLETION_PLAN.md` §1.

## Goal

Every `Type::Struct` / `Type::Union` / `Type::Ptr` / `Type::Array` /
`Type::FuncPtr` lowered from a PDB has every field's type **resolved**,
not `Unknown`. Recovered PDB types land in
`SsaFunction::composite_var_types`.

## Files touched

- `crates/unlace-loader/src/pdb_types.rs` (primary)
- `crates/unlace-loader/src/lib.rs` (re-exports)
- `crates/unlace-cli/src/pipeline.rs` (SSA wiring)
- `docs/status.md` (matrix update)
- `plan.md` (acceptance lines)

## Phase 1 — Primitive TI lookup (1 day)

Add `pub fn primitive_ti_to_type(ti: u32) -> Option<Type>`.
Map CodeView primitive TIs (< 0x1000) → unlace `Type`. Handle the
`0x04xx` pointer-to-primitive family by recursing on the low byte.

**Tests:**

- `primitive_ti_lookup_for_common_widths`
- `primitive_ti_pointer_family_unwraps_pointee`
- `primitive_ti_returns_none_for_user_indices`

## Phase 2 — User TI registry (2 days)

Refactor `walk_tpi` → `walk_tpi_with_index` returning
`(Vec<PdbType>, BTreeMap<u32, Type>)`. Compute each record's TI
(`0x1000 + index`), call `pdb_type_to_ir_type`, insert into the map.

Run a fixpoint over the map: for each entry whose fields still hold
`Unknown`, attempt resolution against the now-populated map (via the
preserved `field_type` on `PdbField`). Cap at 16 iterations to avoid
diverging on malformed cyclic TPI streams.

**Keep** the old `walk_tpi` as a thin shim that drops the index map.

**Tests:**

- `walk_tpi_with_index_returns_named_types`
- `walk_tpi_with_index_resolves_primitive_field_types`
- `walk_tpi_with_index_handles_forward_refs_via_fixpoint`

## Phase 3 — Complex record decoders (2–3 days)

Add decoders that today skip:

| Leaf | Hex | Decoded shape |
|------|----:|---------------|
| `LF_MODIFIER` | 0x1001 | pass through to underlying |
| `LF_POINTER` | 0x1002 | `Type::Ptr(Box<Type>)` |
| `LF_PROCEDURE` | 0x1008 | `Type::FuncPtr { params, return_type, variadic }` |
| `LF_ARGLIST` | 0x1201 | internal — used by procedure resolution |
| `LF_ARRAY` | 0x1503 | `Type::Array { element, size }` |
| `LF_BITFIELD` | 0x1205 | `Type::Bitfield { underlying, offset, width }` |

Each decoder reads a fixed prefix per the CodeView spec, then any
trailing variable payload. Insert the decoded `Type` into the TI map.

**Tests (one per leaf):**

- `decode_lf_pointer_returns_ptr_type`
- `decode_lf_array_returns_array_type`
- `decode_lf_procedure_returns_funcptr_type`
- `decode_lf_bitfield_returns_bitfield_type`
- `decode_lf_modifier_passes_through_underlying`

## Phase 4 — SSA wiring (1 day)

Add `apply_pdb_types_to_ssa(ssa: &mut SsaFunction, image: &BinaryImage)`
in `crates/unlace-cli/src/pipeline.rs`, mirroring `apply_dwarf_to_ssa`.

For each PDB symbol whose `function` matches `ssa.function.name`, walk
its declared locals; for each local with a known frame offset and a
type that resolves in `image.pdb_types.by_index`, write the type onto
`composite_var_types` for every SSA varnode that aliases that stack
offset (re-use `stack_bases_for_frame_offset`).

Call site: `decompile_function_with_symbols` immediately after
`apply_dwarf_to_ssa`.

**Test:**

- `pdb_types_land_in_composite_var_types`

## Acceptance

- All 11 listed tests green under `cargo test -p unlace-loader pdb_types`.
- `apply_pdb_types_to_ssa` populates `composite_var_types` for a
  synthetic test fixture.
- `cargo xtask lint-determinism` clean.
- `docs/status.md` PDB row updated to *"Production: TPI lowering with
  primitive + complex-record resolution"*.

## Estimated effort

5–7 days of focused work.
