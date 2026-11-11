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
| 1 | Rename `unlace-engine` -> `engine` (dir, package, lib, path refs, docs) | move | todo |
| 2 | Split `unlace-output/src/c_printer/mod.rs` (18.9k lines) by job | move | done (d264f1d, 6e28dda); `c_printer_emit`/`c_printer_conditions` still 1.9k/1.3k |
| 3 | Orphan lifters: `lift-sh`, `lift-sbpf`, `lift-tic6x`, `lift-lua` have no reverse dep. Wire into facade or delete. Add a check that every lifter is reachable from `unlace-lift` | decision | todo |
| 4 | Split `unlace-cli/src/pipeline.rs` (8.7k lines) into a `pipeline/` tree, one file per phase | move | done (bd9f555); flat `pipeline_*.rs`, 8.7k -> 2k |
| 5 | Group `unlace-struct` passes (40+ flat files) into phase dirs with an ordered pass list; shrink `structurer/mod.rs` (5.8k) | move | done (2f8f91c) as flat `structurer_*.rs`; phase dirs not used (tree is flat by decision) |
| 6 | Replace stringly-typed arch registry (`arch_support.rs` feature-name strings + `cfg(feature)` in `unlace-lift`) with one generated table | refactor | todo |
| 7 | Replace text-level C rewriters (post-print line patching) with IR/HIR fixes; typed variable origins instead of name-prefix checks | behavior | todo |
| 8 | Decide what `engine` is (reference oracle vs. future). 175k lines, own IR, only used by `--engine` in CLI | decision | open |

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
