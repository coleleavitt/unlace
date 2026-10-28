# Batch Handoffs

These files are operational handoffs for the implementation plan in
`../../plan.md`. They summarize where each batch stands, what a future worker
should touch first, what evidence matters, and what must be true before the
batch can be treated as done.

The historical batches, 0 through 14, are foundations. They are not proof of
production parity; use their handoffs mainly for regression triage and context.
The active roadmap is Batch 15 onward, with Batch 17 currently the sharpest
near-term implementation target.

## Recommended Execution Order

1. `BATCH17_HANDOFF.md` - stack/frame provenance and loop-helper cleanup.
2. `BATCH15_HANDOFF.md` - end-to-end emitted-C correctness gates.
3. `BATCH16_HANDOFF.md` - maturity scheduler audit and invariants.
4. `BATCH18_HANDOFF.md` - lvar allocation, merge safety, and naming.
5. `BATCH19_HANDOFF.md` - CTree/printer parity.
6. `BATCH20_HANDOFF.md` and `BATCH21_HANDOFF.md` - types/symbols and control
   flow quality.
7. `BATCH22_HANDOFF.md` through `BATCH26_HANDOFF.md` - architecture, loader,
   ecosystem, performance, and product truth.
8. `BATCH27_HANDOFF.md` - quality-axis split: stylistic score, semantic
   correctness, and type/variable recovery metrics.

## Batch Index

| Batch | Handoff | Status |
|---|---|---|
| 00 | `BATCH00_HANDOFF.md` | Historical foundation |
| 01 | `BATCH01_HANDOFF.md` | Historical foundation |
| 02 | `BATCH02_HANDOFF.md` | Historical foundation |
| 03 | `BATCH03_HANDOFF.md` | Historical foundation |
| 04 | `BATCH04_HANDOFF.md` | Historical foundation |
| 05 | `BATCH05_HANDOFF.md` | Historical foundation |
| 06 | `BATCH06_HANDOFF.md` | Historical foundation |
| 07 | `BATCH07_HANDOFF.md` | Historical foundation |
| 08 | `BATCH08_HANDOFF.md` | Historical foundation |
| 09 | `BATCH09_HANDOFF.md` | Historical foundation |
| 10 | `BATCH10_HANDOFF.md` | Historical foundation, deep handoff also in `../BATCH10_HANDOFF.md` |
| 11 | `BATCH11_HANDOFF.md` | Historical foundation |
| 12 | `BATCH12_HANDOFF.md` | Historical foundation |
| 13 | `BATCH13_HANDOFF.md` | Historical foundation |
| 14 | `BATCH14_HANDOFF.md` | Hard quality gates landed (empty-body, impossible-lvalue, lost-frame counters) |
| 15 | `BATCH15_HANDOFF.md` | Source-known fixtures gated; continued breadth still open |
| 16 | `BATCH16_HANDOFF.md` | Schedule audit + maturity snapshots wired (env-gated) |
| 17 | `BATCH17_HANDOFF.md` | `StackAccess` provenance records + tests, quality counters wired |
| 18 | `BATCH18_HANDOFF.md` | `dump_lvars` audit + naming/storage tests landed |
| 19 | `BATCH19_HANDOFF.md` | CExpr coverage table + COVERAGE.md update + regression test |
| 20 | `BATCH20_HANDOFF.md` | `dump_type_audit` + provenance bucketing |
| 21 | `BATCH21_HANDOFF.md` | `classify_gotos` HIR walker + tests |
| 22 | `BATCH22_HANDOFF.md` | `arch_support::SupportTier` matrix + `docs/status.md` |
| 23 | `BATCH23_HANDOFF.md` | Loader malformed-input regression suite (`tests/malformed_inputs.rs`) |
| 24 | `BATCH24_HANDOFF.md` | Open |
| 25 | `BATCH25_HANDOFF.md` | Fuzz harness regression tests landed; parallel decompile already present |
| 26 | `BATCH26_HANDOFF.md` | `docs/status.md`, `docs/roadmap.md`, `docs/research-ideas.md`, `docs/historical-sessions.md` |
| 27 | `BATCH27_HANDOFF.md` | Quality-axis report, semantic PASS/XFAIL report, first DWARF/source type score, and fidelity counters wired; semantic XFAIL/type breadth still open |

## Forward-Looking Plan

Beyond the per-batch handoffs above, there's a consolidated multi-week
completion plan that targets the remaining honest "not landed" items:

- `COMPLETION_PLAN.md` — master plan, ordered by dependency.
- `COMPLETION_01_PDB.md` — full PDB type-index resolution end-to-end.
- `COMPLETION_02_DYLD.md` — dyld shared-cache full image reassembly.
- `COMPLETION_03_LIFTERS.md` — stub-tier lifter completions (~22 archs).
- `COMPLETION_04_COT.md` — remaining IDA `cot_*` CExpr variants.
- `COMPLETION_05_REMAINING.md` — catch-all for items found mid-execution.
- `COMPLETION_06_DWARF_V5.md` — DWARF v5 split-DWARF + loclists/rnglists.
- `COMPLETION_07_LOADER_BREADTH.md` — Intel HEX, ESP32, UEFI, IMG4,
  Android boot/dex/oat, Java, .NET CIL, Python `.pyc`, Lua bytecode.
- `COMPLETION_08_STUB_LIFTERS.md` — EVM, TI C28x backfill, TI C6x,
  SHARC family, AppleAgx/Agx, NvidiaSass, AmdGpu, SpirV.
- `COMPETITIVE_PARITY_HANDOFF.md` — IDAPython compatibility (dropped
  2026-10-28), stable SDK,
  UI, debugger, emulator, LLVM IR export, platform/debug breadth, and
  real-binary quality dashboard.

The plan intentionally skips frontend productization and signed release / CI
infrastructure work; those are out-of-source-tree concerns.

To execute: read `COMPLETION_PLAN.md`, then run each
`COMPLETION_0?_*.md` in order. Each handoff is independently mergeable
and leaves the workspace in a clean, tested state.

## Shared Definition of Done

- The implementation is wired into the active CLI path.
- Unit tests cover the pass, module, or subsystem behavior.
- At least one source-known fixture proves final emitted C behavior when the
  batch affects decompiler output.
- The quality report shows the intended metric movement without hiding
  regressions.
- Golden C output is reviewed for semantic plausibility, not only token count.
- Determinism lint and relevant workspace tests pass.
- Any remaining failure is documented with a concrete owner and next action.
