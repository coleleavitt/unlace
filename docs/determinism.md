# Determinism Charter

Unlace must produce **byte-identical output** for the same input binary across
runs, platforms, and Rust toolchain versions. This is non-negotiable — golden
file testing (Task 23) depends on it.

## Rules

### 1. No `HashMap` / `HashSet` in output-affecting crates

The following crates **must not** use `std::collections::HashMap` or
`std::collections::HashSet`:

| Crate | Reason |
|---|---|
| `unlace-ir` | IR is the canonical intermediate form |
| `unlace-passes` | Transforms IR; iteration order matters |
| `unlace-struct` | Structure recovery feeds output |
| `unlace-output` | Final emission — must be deterministic |

**Allowed alternatives:**

- `std::collections::BTreeMap` / `BTreeSet` — sorted by key, deterministic
  iteration.
- `indexmap::IndexMap` / `IndexSet` — insertion-ordered, deterministic
  iteration.

**Exempt crates** (no effect on output):

- `unlace-cli` — user-facing, no IR output
- `unlace-loader` — reads input, does not emit
- `unlace-lift-*` — emit IR consumed by passes/output
- `xtask` — build tooling

### 2. Deterministic iteration over IR nodes

All iteration over IR structures must use a deterministic key:

- **Blocks**: iterate by `BlockId` (entry address), ascending.
- **Instructions**: iterate by index `0..N` within each block.
- **Functions**: iterate by entry address, ascending.

Never rely on pointer identity, allocation order, or hash iteration order.

### 3. Monotonic counters for variable naming

All generated names (temporaries, SSA variables, labels) must use monotonic
counters initialized to `0` at the start of each function:

```text
tmp_0, tmp_1, tmp_2, ...
var_0, var_1, var_2, ...
block_0, block_1, block_2, ...
```

Counters must not depend on allocation addresses or hash table order.

### 4. Canonical IR form

The canonical serialization of IR is:

1. **Functions** sorted by entry address ascending.
2. **Blocks** within each function sorted by entry address ascending.
3. **Instructions** within each block by index `0..N` (insertion order).
4. **Edges** (CFG) sorted by `(source_block, target_block)` pair.

Any pass that reorders blocks or instructions must restore canonical order
before emitting.

### 5. Platform-identical output formatting

Output formatters must produce identical bytes on all platforms:

- Force `LANG=C` / `LC_ALL=C` semantics — no locale-dependent formatting.
- Use `\n` (LF) line endings unconditionally (never `\r\n`).
- No floating-point formatting that varies by platform (use fixed-precision
  where needed).
- No use of `Debug` formatting for output (it is not stable across Rust
  versions).

### 6. No randomness (or deterministically seeded)

Any use of randomness in output-affecting crates is forbidden unless seeded
with a deterministic value derived from the input binary. Prefer no randomness
at all.

### 7. No thread-dependent ordering

If parallelism is used in output-affecting crates, results must be collected
and sorted into canonical order before emission. Do not depend on thread
scheduling order.

## Enforcement

The lint is enforced by `cargo xtask lint-determinism`, which:

1. Walks `crates/{unlace-ir,unlace-passes,unlace-struct,unlace-output}/src/**/*.rs`
2. Scans each line for `\bHashMap\b` or `\bHashSet\b` in Rust code positions
3. Skips lines containing `// determinism:allow` escape hatch
4. Reports `file:line: violation` and exits non-zero on any finding

This lint runs in CI on every push and PR.

## Escape hatch

If a `HashMap`/`HashSet` is genuinely needed (e.g., for a temporary lookup
that never affects output order), annotate the line:

```rust
use std::collections::HashMap; // determinism:allow — lookup only, not iterated
```

The lint will skip that line. Use sparingly and document why.
