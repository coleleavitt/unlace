# Architecture cleanup plan (branch `refactor/arch-cleanup`)

Source: architecture review of 2026-11-10, building on
`docs/architecture-audit-2026-06-21.md`. The crate split is fine (no cycles,
boundaries follow the pipeline). The debt is inside a few crates and at the
workspace edges. Rule for this branch: **pure moves first, output byte-identical,
one step per commit.**

## Ground rules

- Steps 1-5 are behavior-preserving. Goldens must not change. If a golden
  changes during a move, the move is wrong, not the golden.
- Never run a blanket `UPDATE_GOLDEN`. See the `golden-rebaseline` skill.
- Verify each step with: `cargo check --workspace`, the printer/struct crate
  tests, then `cargo nextest run -p unlace-test-harness --features all-arches --test golden_fixtures`.
- Split by **job**, not by size.

## Steps

| # | Step | Kind | Status |
|---|------|------|--------|
| 1 | Rename `unlace-engine` -> `engine` (dir, package, lib, path refs, docs) | move | done |
| 2 | Split `unlace-output/src/c_printer/mod.rs` (18.9k lines) by job | move | done (d264f1d, 6e28dda); `c_printer_emit`/`c_printer_conditions` still 1.9k/1.3k |
| 3 | Orphan lifters: `lift-sh`, `lift-sbpf`, `lift-tic6x`, `lift-lua` have no reverse dep. Wire into facade or delete. Add a check that every lifter is reachable from `unlace-lift` | decision | done: sh/sbpf/tic6x deleted (superseded or unreferenced); lua/ebpf kept as intentional standalone, guarded by `unlace-lift/tests/lifter_reachability.rs` |
| 4 | Split `unlace-cli/src/pipeline.rs` (8.7k lines) into a `pipeline/` tree, one file per phase | move | done (bd9f555); flat `pipeline_*.rs`, 8.7k -> 2k |
| 5 | Group `unlace-struct` passes (40+ flat files) into phase dirs with an ordered pass list; shrink `structurer/mod.rs` (5.8k) | move | done (2f8f91c) as flat `structurer_*.rs`; phase dirs not used (tree is flat by decision) |
| 6 | Replace stringly-typed arch registry (`arch_support.rs` feature-name strings + `cfg(feature)` in `unlace-lift`) with one generated table | refactor | done (already): `product_tier` in unlace-ir is the single table; facade returns typed `LifterUnavailable`; facade tests cross-check every ArchId against the table and Cargo.toml, incl. under `all-arches`. Remaining cfg arms in `get_lifter` are boilerplate, drift-guarded by tests; no macro added |
| 7 | Replace text-level C rewriters (post-print line patching) with IR/HIR fixes; typed variable origins instead of name-prefix checks | behavior | partial; `buf_`/`v_` fallback names now minted and detected only via `unlace_ir::stack_names` (no scattered prefix literals). Remaining: `saved_` in passes/var_naming; text rewriters. `dead_assign` is load-bearing (disabling it breaks 9/19 goldens), so it needs an IR-level replacement before removal. Sized: ~4.2k lines in 24 `c_printer_postprocess_*` files (combine, dead_assign, decls, idents, idioms, labels, lvar_names, repair). Name-prefix checks are down to `buf_` (c_printer_stack_access/stack_names) and `saved_` (passes/var_naming). Do one postprocessor at a time, golden-diff each, not as one batch | **Measured (dead_assign)**: see "Step 7 measurements" below.
| 8 | Decide what `engine` is (reference oracle vs. future). ~165k lines, own IR, only used by `--engine` in CLI (cli `engine*.rs`: args, config, main) | decision | decided: keep as a documented standalone reference engine behind `--engine`; not part of the default pipeline, no other crate depends on it. Documented in CLAUDE.md crate map |

## Step 2: c_printer target layout

Target modules under `crates/unlace-output/src/c_printer/` (one per commit):

- `stack_frame` - stack-frame naming and promotion
- `folding` - fold/inline decisions
- `hoist` - declaration/expr hoisting
- `conditions` - condition rewriting
- `types` - type rendering
- `calls` - call emission
- `intrinsics` - intrinsic emission
- `regnames` - x86 register-name tables
- `objc_rtti` - ObjC / RTTI emitters
- `mod.rs` keeps `PrintCtx`, `PrintConfig`, and `print_c_attempt` as a named phase list.

Constraints: keep `PrintCtx` as the shared state, keep visibility `pub(super)`
or tighter, do not change function bodies while moving. Move `tests.rs` pieces
next to the module they test only after the module is stable.

## Open questions

- Are `lift-sh/sbpf/tic6x/lua` intentionally parked? (`lift-sh` may duplicate
  `lift-superh`; `lift-sbpf` may be covered by `lift-ebpf`. Unverified.)
- Is `engine` the future decompiler or a reference oracle?

## Findings: orphan lifter crates (needs a decision)

Four `unlace-lift-*` crates are workspace members (via the `crates/*` glob), so
they compile and run their own tests, but nothing depends on them. They have no
`[workspace.dependencies]` entry, no optional dep and no `arch-*` feature in
`unlace-lift`, and `arch_support.rs` marks their arches `FixtureOnly`.

| crate | LOC | state |
|---|---|---|
| `unlace-lift-sh` | ~1.2k | duplicates `unlace-lift-superh` (same arch, wired one is `superh`); newer (2026-06-02) |
| `unlace-lift-sbpf` | ~100 | stub; `ebpf` is wired |
| `unlace-lift-tic6x` | ~500 | single-file; `unlace-lift-ti` is wired |
| `unlace-lift-lua` | ~2.4k | newest (2026-10-28); `Lua` is FixtureOnly |

Options per crate: (a) wire into the facade with an `arch-*` feature, (b) merge
into the wired sibling, (c) delete. `sh` vs `superh` is the clearest dedupe:
pick one implementation and drop the other.


## Step 7 measurements: `dead_assign`

Measured by temporarily logging every line `prune_dead_plain_assignments` deletes while running the 19 goldens (instrumentation reverted). Disabling the pass outright fails 9/19 goldens, so output depends on it.

Total: 20 lines removed across the whole corpus. Classes:

- 8 dead loads (`v8 = *(_QWORD *)(v18)`, `c0 = *(_QWORD *)(buf + 16)`, ...). IR `DeadCodeElimPass` never removes `IrOp::Load` (treated as side-effecting for volatile/MMIO). Replacement: let DCE drop a Load whose output is unused when the load is not from a volatile/MMIO space.
- 6 leftover frame arithmetic (`v22 = c4 - 8LL - 8LL - ...`). Chains survive IR DCE; needs investigation of why the SSA uses remain (likely a use inside a later-removed text region).
- 3 flag-style arithmetic (`c0 += 0x7f`, `c0 = c0 + v2`). Candidates for `dead_flag_elim` or a dead-RMW rule.
- 3 dead overwritten stores (`result = "woof"`, `c5 = 1LL`, `c4 = "caught: %s\n"`). Need HIR-level liveness across branches; this is the only class the text liveness is genuinely needed for.

Plan: (1) make DCE drop non-volatile unused Loads, re-measure; (2) chase the frame arithmetic survivors; (3) only then decide whether an HIR liveness pass is worth building for the 3 overwritten stores. Do each as a golden-diffed change, not a blanket refresh.
