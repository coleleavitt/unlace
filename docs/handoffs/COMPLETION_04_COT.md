# Completion Plan §4 — Remaining IDA `cot_*` Opcodes

Self-contained handoff. Big-picture plan: `docs/handoffs/COMPLETION_PLAN.md` §4.

## Goal

After this batch, every `cot_*` opcode that real IDA producers emit has
a corresponding `CExpr` variant (or maps cleanly through
`CExpr::Binary { op }`).

## Current count

`CExpr` has 27 variants today. IDA has 69 `cot_*` slots; many collapse
into `Binary { op }`. The variants to add (14 total):

| IDA opcode | Hex | New `CExpr` variant |
|------------|----:|---------------------|
| `cot_empty` | 0 | `Empty` |
| `cot_type` | 3 | `TypeRef(String)` |
| `cot_label` | 4 | `Label(u32)` |
| `cot_var` | 8 | `Var { name: String, idx: u32 }` |
| `cot_num` | 9 | `Num { value: u64, signed: bool, width: u8 }` |
| `cot_fnum` | 10 | `Fnum { value: f64, width: u8 }` |
| `cot_fneg` | 38 | `FloatNeg(Box<CExpr>)` |
| `cot_fadd` | 40 | `FloatBinary { op: &'static str, lhs, rhs }` |
| `cot_fsub` | 41 | (same) |
| `cot_fmul` | 42 | (same) |
| `cot_fdiv` | 44 | (same) |
| `cot_psub` | 43 | `PtrDiff { lhs, rhs }` |
| (synthetic) | — | `PtrOffset { base, offset, scale }` |
| (synthetic) | — | already-handled by `Helper`/`Macro` |

Total *new* variants: 11 (after folding the float-arith family into a
single `FloatBinary { op }`).

## Files touched

- `crates/unlace-output/src/expr_ast.rs` (primary — variants, Display,
  precedence, substitute, coverage rows, tests)
- `crates/unlace-output/src/COVERAGE.md` (regenerate)
- `crates/unlace-output/src/lib.rs` (re-exports unchanged; the new
  variants are visible via the existing `pub use`)

## Implementation template (use for every variant)

1. Add the variant to `pub enum CExpr`.
2. Add a row to `cexpr_coverage_rows()`.
3. Add a precedence arm in `fn precedence(e: &CExpr) -> u8`.
4. Add a render arm in `impl fmt::Display for CExpr`.
5. Add a substitution arm in `substitute_lit_inner`.
6. Add a render test pinning the expected C output.
7. Update `cexpr_coverage_lists_every_variant`'s expected name list.

## Phase 1 — Leaf / atomic nodes (1 day, 5 variants)

Add: `Empty`, `Label(u32)`, `Var`, `Num`, `Fnum`.

**Render rules:**

- `Empty` → `""`.
- `Label(n)` → `LABEL_{n}`.
- `Var { name, idx: _ }` → `name`. (The `idx` field is for
  cross-reference back to lvar tables; not rendered.)
- `Num { value, signed: false, width: 8 }` → `0xVALUE` if > 0xff,
  decimal otherwise.
- `Num { signed: true, .. }` → `(int)VALUE` with width-aware C suffix.
- `Fnum { value, width: 4 }` → `{value}f`. `width: 8` → `{value}`.

**Tests:**

- `cot_leaves_empty_label_var_num_fnum_render`

## Phase 2 — Type reference (0.5 days, 1 variant)

Add: `TypeRef(String)`. Render: pass the inner string verbatim.

**Test:**

- `cot_type_ref_renders_as_inner_string`

## Phase 3 — Float arithmetic (1 day, 2 variants)

Add: `FloatBinary { op: &'static str, lhs, rhs }` and
`FloatNeg(Box<CExpr>)`.

Precedence:
- `FloatBinary` op `"+"` / `"-"` → 4. op `"*"` / `"/"` → 3.
- `FloatNeg` → 2 (prefix unary).

Render: same as integer binary/unary; the *distinction* is structural
so future passes can choose float-aware folding without re-parsing
operator tokens.

**Tests:**

- `float_binary_renders_with_correct_precedence`
- `float_neg_renders_as_prefix`

## Phase 4 — Pointer arithmetic (1 day, 1 variant)

Add: `PtrDiff { lhs, rhs }`. Render: `(lhs - rhs) / sizeof(*lhs)`
when the printer can recover the element type; otherwise `lhs - rhs`
with a `/* pointer subtraction */` comment.

Skip `PtrOffset` for now — `Binary { op: "+" }` is sufficient and the
synthetic variant has no IDA opcode behind it.

**Test:**

- `ptr_diff_renders_with_size_division`

## Coverage table reconciliation

After Phase 1–4, the variant-pinning test expects:

```rust
for expected in [
    "Lit", "Cast", "Member", "Index", "Deref", "AddrOf", "Binary",
    "Call", "Coerce", "Macro", "Ternary", "Sizeof", "PreInc", "PreDec",
    "PostInc", "PostDec", "Comma", "Assign", "CompoundAssign", "Neg",
    "LogicalNot", "BitwiseNot", "Helper", "FuncId", "StmtExpr", "Str",
    "Obj", "Empty", "TypeRef", "Label", "Var", "Num", "Fnum",
    "FloatBinary", "FloatNeg", "PtrDiff",
] { … }
```

That's 36 variants — covers the productively-emitted IDA `cot_*`
opcode set.

## Acceptance

- All listed tests green under `cargo test -p unlace-output --lib expr_ast::tests`.
- `cexpr_coverage_lists_every_variant` passes for the 36-variant list.
- `crates/unlace-output/src/COVERAGE.md` regenerated.
- `docs/status.md` CExpr row updated to "36/69 explicit variants;
  remainder collapses through `Binary { op }`".

## Estimated effort

3–4 days. Each variant is ~30 minutes of typing; the bulk of the time
is regenerating the variant test, the coverage doc, and ensuring the
`substitute_lit_inner` match stays exhaustive.

## Order

1. Phase 1 (leaves) — fastest, no precedence subtleties.
2. Phase 2 (`TypeRef`) — single render arm.
3. Phase 3 (float family) — verify precedence interacts with
   `Binary { op: "+" }` correctly when mixed.
4. Phase 4 (`PtrDiff`) — last because the size-division logic needs
   coordination with the existing `Cast` / `Sizeof` rendering.
