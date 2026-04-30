# unlace Phase 10 — Comprehensive Parity Push (Loaders + Output Quality + Type Recovery + ARM64)

## TL;DR

> **Quick Summary**: Unified Phase 10 covers four themes in seven waves: (1) fix the medium.c goto regression and extend output quality, (2) deepen type recovery beyond what `type_infer.rs` already handles, (3) close the IDA P0 PE loader gaps (.pdata/.xdata/debug/load-config/resources/Rich), (4) close the IDA P0 Mach-O gaps (LC_DYLD_INFO opcodes/LC_DYSYMTAB/relocations/per-page chained walking/stub recognition), (5) extend the existing ARM64 lifter (33 mnemonics already → ~48) plus a real iOS Mach-O ARM64 integration fixture, and (6) end-to-end polish.
>
> **Metis Reframings (CRITICAL)**: The original menu listed ARM64 as a "stub" — it isn't, the lifter has 33 working mnemonics with 25+ tests. Wave 1 features (CSE, expression trees, ternary recovery, idiom recognition, tail call detection, noreturn marking) are ALL already implemented. PE loader's `relocations` is no longer `Vec::new()` (P9-18 fixed it). Plan was rebalanced from 54 → 42 tasks: deduplicate already-done work, defer research-grade items (union discrimination, Go gopclntab, function pointer tables) to Phase 11+.
>
> **Real-Binary Fixtures**: `~/VulnerabilityResearch/chase/Chase` and `~/RustProjects/active/iphonern/decrypted/kcm/KCM` are real iOS Mach-O ARM64 executables — perfect dual-purpose integration fixtures exercising both Wave 4 (Mach-O loader P0) and Wave 5 (ARM64 lifter coverage extension) end-to-end on production binaries.
>
> **Estimated Effort**: XL (7 waves, 42 tasks)
> **Parallel Execution**: YES — 3-5 concurrent tasks per wave
> **Critical Path**: Wave 0 baseline → Wave 1 goto fix → Wave 4 Mach-O loader → Wave 5 ARM64 extension → P10-F1

---

## Context

### Phase 9 Outcome Recap
- 1359 tests passing, 0 failures (was 1005 pre-Phase-9, +354)
- 33 commits delivered to `master`
- Aggregate parity: 59.6% (unchanged from baseline — Phase 9 added functionality, not score-fixture coverage)
- medium.c: 30 gotos / 39 ifs / 573 lines (gotos regressed from 12 baseline due to Wave 1 node_split work)
- 16 crates, 1359 tests, 28 optimization passes, lint-determinism clean
- BUG FOUND DURING PHASE 9: `MachoLoader` was orphan in lib.rs (P9-22 wired it in, +11 newly-active tests)

### Metis Pre-Plan Findings (from this session)
1. **ARM64 lifter has 33 mnemonics** — Wave 5 reframed as "extend" not "create"
2. **Wave 1 features ALREADY EXIST** — `ExpressionTreePass`, `CsePass`, `GvnPass`, `ternary_recovery.rs`, `IdiomRecognitionPass` (35+ patterns), `TailCallDetectPass`, `NoreturnDetectPass` all live. Wave 1 reframed as "improve/extend"
3. **Type recovery infrastructure exists** — `type_infer.rs` (1115 lines), `detect_array_strides()`, `composite_var_types`, `dwarf.rs` struct recovery, `variable_merge.rs` (891 lines, interference-graph coalescing). Wave 2 capped at Tier 1+2 per Metis recommendation
4. **PE loader already has** base relocations (P9-18), exports/imports, delay-load (P9-19), TLS callbacks (P9-19). Wave 3 targets remaining P0 gaps
5. **Mach-O loader** has LC_FUNCTION_STARTS (P9-20), chained-fixup imports (P9-21) — but `relocations: Vec::new()` still empty, LC_DYLD_INFO unparsed

### IDA Reference Inventory (from Phase 9 librarian agents)
- `references/ida/loaders/macho/`: 40 decompiled IDA functions, 132KB. P0 gaps confirmed: LC_DYLD_INFO opcodes, LC_DYSYMTAB indirect table, relocation application, per-page chained walking
- `references/ida/loaders/dyld/`: 1000+ shared-cache functions (P2 only — out of scope)
- `references/ida/loaders/pe/`: 567 functions. P0 gaps: .pdata/.xdata, debug directory, load config/CFG, resource tree
- `references/hexrays/ida_dump/`: hex_loader, hexarc, hexarm, hexmips, hexppc, hexrv, hexv850, hexx64

### Real iOS Mach-O ARM64 Fixtures Available
- `~/VulnerabilityResearch/chase/Chase` — Mach-O 64-bit arm64 (Chase banking app, full real-world iOS executable)
- `~/RustProjects/active/iphonern/decrypted/kcm/KCM` — Mach-O 64-bit arm64
- These exercise BOTH the Mach-O loader (Wave 4) AND ARM64 lifter (Wave 5) in a single integration test.

### Key Constraints (carried)
- **Determinism**: BTreeMap/IndexMap only in unlace-ir, unlace-passes, unlace-struct, unlace-output. NO HashMap/HashSet (lint-determinism enforces).
- **Pass-loop iteration caps** in place (200/100/100/2*blocks) — DO NOT remove.
- **tracing instrumentation idioms** (debug_span!/trace!/debug!/warn!/error!) per Phase 9.
- **Existing 28 passes** — extend, don't rewrite.
- **Structurer core** (`structurer.rs` 118KB) — never touch directly. All structurer improvements are pre-passes or post-passes only (per Metis Phase 9 directive, carried forward).

---

## Work Objectives

### Core Objective
Land the IDA P0 gaps captured during Phase 9 research (PE + Mach-O loaders), fix the medium.c goto regression, deepen type recovery to surface struct fields and bitfields in C output, and broaden architecture coverage to AArch64 with a real iOS binary integration test. Targeted parity uplift: **59.6% → ≥62%**.

### Concrete Deliverables
- New synthetic fixtures: PE-with-pdata, Mach-O-with-LC_DYLD_INFO, ARM64-ELF (hand-crafted, no toolchain dep)
- Real iOS Mach-O ARM64 integration fixture wired in (Chase or KCM)
- medium.c gotos: 30 → ≤15
- 7 new IrOp (or existing extension) idioms: ROL/ROR, abs, min, max, memcpy
- New type recovery: struct fields from access patterns, bitfield extraction, 1-level pointer-chain propagation
- 6 new PE data directories parsed
- 5 new Mach-O load-command paths implemented
- ~15 new ARM64 mnemonics: MUL, SDIV, UDIV, CSEL, CSINC, CSINV, CSNEG, MADD, MSUB, UBFM, SBFM, EXTR, LDXR, STXR, DMB
- Capstone caching for ARM64 perf (per Metis EC6)
- Aggregate parity score ≥ 62%
- Workspace tests ≥ 1400 (currently 1359, +new fixtures + new tests)

### Definition of Done
- [ ] `cargo test --workspace` passes with ≥ 1400 tests, 0 failures
- [ ] `cargo xtask lint-determinism` passes
- [ ] medium.c gotos ≤ 15 (from 30 baseline)
- [ ] medium.c ifs ≥ 35 (preserve Phase 9 win)
- [ ] No fixture's goto count increases by more than 2 (Metis G5 directive)
- [ ] Real iOS Mach-O ARM64 fixture loads and decompiles (≥3 functions emit C without panic)
- [ ] Aggregate parity ≥ 62% (3+ point improvement over Phase 9)
- [ ] All P10 evidence files present in `.sisyphus/evidence/`
- [ ] Pushed to GitHub

### Must Have
- IDA-style C output convention preserved (matches Phase 9 prelude conventions)
- All existing pass-loop caps preserved (no oscillation regressions)
- Per-task golden refresh + lint-determinism (no batched golden refresh — per Metis G5)
- Capstone instance caching in ARM64 lifter (per Metis EC6 risk)
- Pre-existing 1359 tests must remain passing throughout

### Must NOT Have (Guardrails — Metis-flagged)
- **No new HashMap/HashSet** in determinism-locked crates
- **No core `structurer.rs` edits** — pre/post-passes only
- **No NEON/SVE/Thumb/PACIA** in ARM64 lifter (cap at ARMv8.0 + ARMv8.1 atomics)
- **No union discrimination, function pointer tables, interprocedural type propagation** in Wave 2 (deferred to Phase 11+)
- **No Go gopclntab parsing** (Wave 0 fixture removed per Metis SC4)
- **No string-function recognition beyond existing libc_signatures** (Metis SC5)
- **No code signature verification, .NET metadata, ObjC runtime parsing** in loaders
- **No MAX_SPLIT_ROUNDS increase** — node_split fix must be in `pick_split_target` heuristic, not iteration cap (Metis G4)
- **No removal of pass-loop iteration caps** — they prevent oscillation
- **No "user manually verifies"** acceptance criteria (Metis-mandated)
- **No new fixture binaries requiring cross-compile toolchains** in CI (hand-crafted only, except for the real-iOS integration fixtures which are committed pre-built)

---

## Verification Strategy (MANDATORY)

> **ZERO HUMAN INTERVENTION** — ALL verification is agent-executed. Per Metis directive: every task that touches `unlace-passes` or `unlace-struct` must end with `cargo test --workspace` + golden comparison. No batching golden refreshes.

### Test Decision
- **Infrastructure exists**: YES (cargo test, golden_fixtures, score_parity.sh)
- **Automated tests**: TDD (test-first per task)
- **Framework**: cargo test
- **Baseline capture**: Wave 0 captures per-fixture metrics BEFORE any pass changes

### QA Policy
Every task includes agent-executed QA scenarios (see TODO template). Evidence saved to `.sisyphus/evidence/p10-{task}-{slug}.txt`.

- **Synthetic-binary fixtures**: cargo test asserts byte-level field extraction
- **Real-binary fixtures (iOS Mach-O)**: `./target/debug/unlace decompile` returns 0 + stdout has ≥1 function signature
- **Pass changes**: golden refresh + grep for goto/if counts
- **Loader changes**: cargo test asserts BinaryImage fields populated correctly
- **Lifter changes**: cargo test asserts no `Unimplemented` for newly-supported mnemonics

### Per-Wave Acceptance (Metis-mandated)
- **Wave 0**: All new fixtures load without panic. medium.c baseline metrics captured.
- **Wave 1**: medium.c gotos ≤ 15 AND `cargo test --workspace` ≥ 1359 AND aggregate parity ≥ 59.6%.
- **Wave 2**: At least one fixture's golden contains `->field_<offset>` access syntax from pattern-based detection.
- **Wave 3**: `cargo test -p unlace-loader -- pe` covers .pdata, debug, load_config tests.
- **Wave 4**: Mach-O loader populates relocations (not Vec::new()), passes LC_DYLD_INFO bind opcode tests, recognizes stubs.
- **Wave 5**: ARM64 lifter mnemonic count ≥ 48 (up from 33). Real iOS Mach-O ARM64 binary decompiles ≥3 functions without panic.
- **Wave 6**: aggregate parity ≥ 62%. Tests ≥ 1400.
- **P10-F1**: Workspace test 0 failures + lint-determinism + parity ≥ 62%.

---

## Execution Strategy

### Parallel Execution Waves

```
Wave 0 (Foundation — 4 tasks, run in parallel):
├── P10-0: Capture per-fixture goto/if/var baseline metrics [general]
├── P10-1: Synthetic PE fixture with .pdata + debug + load_config [general]
├── P10-2: Synthetic Mach-O fixture with LC_DYLD_INFO + LC_DYSYMTAB [general]
└── P10-3: Hand-crafted ARM64 ELF fixture covering MUL/CSEL/UBFM [general]

Wave 1 (Output Quality — 5 tasks, mostly parallel):
├── P10-4: node_split heuristic retune (pick_split_target scoring) [general]
├── P10-5: Idiom recognition: rotate (ROL/ROR) detection [general]
├── P10-6: Idiom recognition: abs/min/max conditional select patterns [general]
├── P10-7: Idiom recognition: memcpy/memset call sequence patterns [general]
└── P10-8: Refresh medium golden + measure goto/if delta + per-fixture regression check [general]

Wave 2 (Type Recovery — 5 tasks, sequential due to type_infer interactions):
├── P10-9: Struct field detection from base + const_offset Load patterns [general]
├── P10-10: Bitfield extraction from AND/SHIFT patterns [general]
├── P10-11: Pointer-chain type propagation (1-level Load) [general]
├── P10-12: Array stride C-output emission (existing detection → field syntax) [general]
└── P10-13: Validation pass: at least one golden has ->field_<n> syntax [general]

Wave 3 (PE Loader P0 — 7 tasks, mostly parallel):
├── P10-14: Parse .pdata RUNTIME_FUNCTION array [general]
├── P10-15: Decode .xdata UNWIND_INFO records (codes + frame_offset) [general]
├── P10-16: Parse IMAGE_DIRECTORY_ENTRY_DEBUG (CodeView/PDB references) [general]
├── P10-17: Parse IMAGE_DIRECTORY_ENTRY_LOAD_CONFIG (CFG tables, security cookie) [general]
├── P10-18: Parse IMAGE_DIRECTORY_ENTRY_RESOURCE (tree walk, version strings) [general]
├── P10-19: Parse IMAGE_DIRECTORY_ENTRY_BOUND_IMPORT [general]
└── P10-20: Rich header extraction + BinaryImage field wiring [general]

Wave 4 (Mach-O Loader P0 — 8 tasks, mostly parallel):
├── P10-21: Parse LC_DYSYMTAB indirect symbol table [general]
├── P10-22: LC_DYLD_INFO REBASE opcode interpreter [general]
├── P10-23: LC_DYLD_INFO BIND opcode interpreter (lazy + non-lazy) [general]
├── P10-24: LC_DYLD_INFO EXPORT trie decoder [general]
├── P10-25: Apply relocations: populate BinaryImage.relocations [general]
├── P10-26: Per-page chained fixup walking (DYLD_CHAINED_PTR_64 + ARM64E) [general]
├── P10-27: Stub recognition (__stubs / __la_symbol_ptr / __nl_symbol_ptr) [general]
└── P10-28: LC_LOAD_DYLIB + LC_RPATH dependency tracking [general]

Wave 5 (ARM64 Extension — 6 tasks):
├── P10-29: Capstone instance caching via thread_local! (perf fix per Metis EC6) [general]
├── P10-30: Lift MUL/SDIV/UDIV/MADD/MSUB [general]
├── P10-31: Lift CSEL/CSINC/CSINV/CSNEG conditional select family [general]
├── P10-32: Lift UBFM/SBFM/EXTR bitfield ops [general]
├── P10-33: Lift LDXR/STXR exclusive pairs + DMB/DSB/ISB barriers [general]
└── P10-34: Real iOS Mach-O ARM64 integration fixture (Chase or KCM) [general]

Wave 6 (Polish + Final Scores — 4 tasks):
├── P10-35: Refresh all goldens after type recovery + lifters [general]
├── P10-36: Update reference_metrics.toml for new fixtures [general]
├── P10-37: Final aggregate parity score + delta vs baseline [general]
└── P10-38: Phase 10 quality report (per-fixture + per-wave deltas) [general]

Wave FINAL (Verification — 1 task):
└── P10-F1: Comprehensive quality review + regression check [general]

Critical Path: P10-0 → P10-4 → P10-8 → P10-9 → P10-11 → P10-25 → P10-26 → P10-34 → P10-37 → P10-F1
Parallel Speedup: ~60% faster than sequential
Max Concurrent: 5 (Wave 4)
```

### Agent Dispatch Summary
- **Wave 0**: 4 tasks → all `general`
- **Wave 1**: 5 tasks → all `general`
- **Wave 2**: 5 tasks → all `general`
- **Wave 3**: 7 tasks → all `general`
- **Wave 4**: 8 tasks → all `general`
- **Wave 5**: 6 tasks → all `general`
- **Wave 6**: 4 tasks → all `general`
- **FINAL**: 1 task → `general`

---

## TODOs

### Wave 0 — Foundation + Baseline (4 tasks)

- [x] P10-0. Capture per-fixture goto/if/var baseline metrics

  **What to do**:
  - For each fixture under `tests/golden/expected/*.c`: count `goto`, `\bif\b`, declared variables (`int v\d+`, `_QWORD v\d+`, etc.).
  - Write a stable, machine-comparable record to `.sisyphus/evidence/p10-baseline-metrics.txt` formatted as `<fixture>: gotos=<n> ifs=<n> vars=<n>`.
  - Also run `bash scripts/score_parity.sh` and append `Aggregate Parity (Wave 0): <pct>` to the same file.
  - This file is the regression baseline used by Wave 1 P10-8, Wave 6 P10-37, and P10-F1.

  **Must NOT do**:
  - Modify any pass code or fixture before capturing this baseline.
  - Skip baseline capture (downstream regression checks require it).

  **Recommended Agent Profile**:
  - **Subagent**: `general`
  - **Skills**: none
  - **Reason**: Pure scripting + grep + awk. No domain knowledge needed.

  **Parallelization**:
  - **Can Run In Parallel**: YES (no dependencies)
  - **Wave**: 0 (with P10-1, P10-2, P10-3)
  - **Blocks**: P10-8, P10-13, P10-37, P10-F1
  - **Blocked By**: None

  **References**:
  - `tests/golden/expected/medium.c` — fixture (current state: 30 gotos, 39 ifs, 573 lines)
  - `scripts/score_parity.sh` — aggregate score harness, Phase 9 P9-2
  - `.sisyphus/evidence/p9-7-delta.txt` — Phase 9 reference for the format
  - `.sisyphus/evidence/p9-25-final.txt` — last per-fixture record

  **Acceptance Criteria**:
  - [ ] `.sisyphus/evidence/p10-baseline-metrics.txt` exists with one line per fixture
  - [ ] File contains aggregate parity line
  - [ ] No source files modified

  **QA Scenarios**:
  ```
  Scenario: Baseline file populated
    Tool: Bash
    Steps:
      1. ls -la .sisyphus/evidence/p10-baseline-metrics.txt
      2. wc -l .sisyphus/evidence/p10-baseline-metrics.txt
      3. grep "Aggregate Parity" .sisyphus/evidence/p10-baseline-metrics.txt
    Expected Result: file present with ≥ 9 lines (8 fixtures + aggregate), contains 'Aggregate Parity'
    Evidence: .sisyphus/evidence/p10-baseline-metrics.txt

  Scenario: medium.c baseline matches expected
    Tool: Bash
    Steps:
      1. grep "medium" .sisyphus/evidence/p10-baseline-metrics.txt
    Expected Result: line shows gotos=30 ifs=39
    Evidence: .sisyphus/evidence/p10-baseline-metrics.txt
  ```

  **Commit**: `chore(boulder): P10-0 capture pre-Phase-10 fixture baseline metrics`

- [ ] P10-1. Synthetic PE fixture with .pdata + debug + load_config

  **What to do**:
  - Add a new test in `crates/unlace-loader/src/pe.rs::tests`: `pe64_with_pdata_and_debug()` (matches the convention of `pe64_with_reloc()` from P9-18).
  - Hand-craft byte-level PE32+ binary with: standard headers, .text + .pdata + .xdata + .debug sections, IMAGE_DIRECTORY_ENTRY_EXCEPTION pointing to .pdata, IMAGE_DIRECTORY_ENTRY_DEBUG pointing to a CodeView record, IMAGE_DIRECTORY_ENTRY_LOAD_CONFIG pointing to a minimal IMAGE_LOAD_CONFIG_DIRECTORY64 (with security cookie + GuardCFCheckFunctionPointer).
  - Include 1 RUNTIME_FUNCTION entry pointing into .text and a 4-byte UNWIND_INFO record.
  - This fixture is consumed by Wave 3 (P10-14, P10-15, P10-16, P10-17) tests.

  **Must NOT do**:
  - Use cross-compile toolchains (`x86_64-w64-mingw32-gcc`) — fixture must be hand-crafted bytes (Metis SC4).
  - Build a real-world PE binary (out of scope, breaks CI).

  **Recommended Agent Profile**:
  - **Subagent**: `general`
  - **Skills**: none
  - **Reason**: Mechanical byte-layout work matching PE/COFF spec.

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Wave**: 0 (with P10-0, P10-2, P10-3)
  - **Blocks**: P10-14, P10-15, P10-16, P10-17
  - **Blocked By**: None

  **References**:
  - `crates/unlace-loader/src/pe.rs::tests::pe64_with_reloc` (lines ~430-540) — exact byte-layout convention to follow
  - Microsoft PE/COFF spec § 6.5 (Exception Handling), § 6.1.1 (Debug Directory), § 6.8 (Load Config)
  - `references/ida/loaders/pe/all/` — IDA decompiled reference (LFS pointers, but file inventory available)
  - `object` crate v0.39 (`~/.cargo/registry/src/.../object-0.39.1/src/pe.rs` lines 1729+ for `IMAGE_BASE_RELOCATION`, etc.)

  **Acceptance Criteria**:
  - [ ] `pe64_with_pdata_and_debug()` returns Vec<u8>
  - [ ] `cargo test -p unlace-loader pe64_with_pdata_and_debug_loads` passes (smoke test asserts PeLoader::load succeeds)
  - [ ] Fixture file is < 4 KB

  **QA Scenarios**:
  ```
  Scenario: Fixture loads without panic
    Tool: Bash
    Steps:
      1. cargo test -p unlace-loader --lib pe64_with_pdata_and_debug 2>&1 | tail -5
    Expected Result: test passes
    Evidence: .sisyphus/evidence/p10-1-pe-fixture.txt

  Scenario: Fixture has expected sections
    Tool: Bash
    Steps:
      1. cargo test -p unlace-loader --lib test_pe_pdata_fixture_sections -- --nocapture 2>&1 | grep ".pdata\|.xdata\|.debug"
    Expected Result: all 3 sections enumerated
    Evidence: .sisyphus/evidence/p10-1-pe-fixture.txt
  ```

  **Commit**: `feat(loader): synthetic PE32+ fixture with .pdata/.xdata/.debug/load_config`

- [ ] P10-2. Synthetic Mach-O fixture with LC_DYLD_INFO + LC_DYSYMTAB

  **What to do**:
  - Add a new test in `crates/unlace-loader/src/macho.rs::tests`: `macho64_with_dyld_info()` matching the convention of `macho64_with_function_starts()` from P9-22.
  - Hand-craft byte-level Mach-O 64-bit binary with: __TEXT segment, __DATA segment, LC_SYMTAB, LC_DYSYMTAB (with indirect symbol table + at least 1 stub entry), LC_DYLD_INFO (with bind opcodes + export trie), at least 1 BIND opcode and 1 EXPORT trie node.
  - This fixture is consumed by Wave 4 (P10-21, P10-22, P10-23, P10-24, P10-25, P10-27) tests.

  **Must NOT do**:
  - Use macOS-specific toolchains (`osxcross`, native macOS clang) — hand-crafted bytes only.

  **Recommended Agent Profile**:
  - **Subagent**: `general`
  - **Skills**: none
  - **Reason**: Mechanical byte-layout per Apple's mach-o/loader.h.

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Wave**: 0 (with P10-0, P10-1, P10-3)
  - **Blocks**: P10-21, P10-22, P10-23, P10-24, P10-25, P10-27
  - **Blocked By**: None

  **References**:
  - `crates/unlace-loader/src/macho.rs::tests::macho64_with_function_starts` (lines ~815-870) — fixture convention
  - Apple `mach-o/loader.h` — LC_DYLD_INFO struct
  - Apple `mach-o/nlist.h` — LC_DYSYMTAB indirect table format
  - dyld source `mach-o/fixup-chains.h` — opcode constants (BIND_OPCODE_DONE = 0x00, BIND_OPCODE_SET_DYLIB_ORDINAL_IMM = 0x10, etc.)

  **Acceptance Criteria**:
  - [ ] `macho64_with_dyld_info()` returns Vec<u8>
  - [ ] Fixture parses via existing `MachoLoader::load`
  - [ ] Fixture < 1 KB

  **QA Scenarios**:
  ```
  Scenario: Fixture loads
    Tool: Bash
    Steps:
      1. cargo test -p unlace-loader --lib macho64_with_dyld_info 2>&1 | tail -5
    Expected Result: test passes
    Evidence: .sisyphus/evidence/p10-2-macho-fixture.txt
  ```

  **Commit**: `feat(loader): synthetic Mach-O fixture with LC_DYLD_INFO/LC_DYSYMTAB for Wave 4`

- [ ] P10-3. Hand-crafted ARM64 ELF fixture covering MUL/CSEL/UBFM

  **What to do**:
  - Add `fixtures/src/arm64_features.S` (assembly) covering MUL, SDIV, UDIV, CSEL, CSINC, UBFM, SBFM, EXTR, LDP, STP, B.cond, BL, RET.
  - Compile with `aarch64-linux-gnu-as` if available, OR commit pre-built `fixtures/arm64_features.elf` as a 1KB hand-assembled binary (raw `as` byte sequence). Prefer the pre-built path so CI doesn't need cross-toolchains.
  - Add to fixture inventory in `crates/unlace-test-harness/tests/golden_fixtures.rs`.

  **Must NOT do**:
  - Make CI depend on `aarch64-linux-gnu-gcc` — commit the .elf pre-built.
  - Include NEON/SVE/FP register usage (Metis G1: cap at ARMv8.0 + ARMv8.1 atomics).

  **Recommended Agent Profile**:
  - **Subagent**: `general`
  - **Skills**: none

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Wave**: 0 (with P10-0, P10-1, P10-2)
  - **Blocks**: P10-30, P10-31, P10-32, P10-34
  - **Blocked By**: None

  **References**:
  - `fixtures/src/medium.c` + `fixtures/medium.elf` — fixture pattern
  - `crates/unlace-lift-arm/src/lift.rs` — current 33-mnemonic dispatch (extend via P10-30..33)
  - ARM ARMv8-A reference manual

  **Acceptance Criteria**:
  - [ ] `fixtures/arm64_features.elf` exists and is recognized as `ELF 64-bit aarch64`
  - [ ] `MachHeader64` → N/A (this is an ELF — parsed via `ElfLoader::load`, NOT Mach-O)
  - [ ] Decompiles via `unlace decompile fixtures/arm64_features.elf --arch aarch64 --emit ir` without panic

  **QA Scenarios**:
  ```
  Scenario: ARM64 ELF fixture parses
    Tool: Bash
    Steps:
      1. file fixtures/arm64_features.elf
      2. ./target/debug/unlace decompile fixtures/arm64_features.elf --arch aarch64 --emit ir --timeout 30 -o /tmp/p10-3.ir
      3. grep -c "func " /tmp/p10-3.ir
    Expected Result: file shows aarch64; output has ≥1 function
    Evidence: .sisyphus/evidence/p10-3-arm64-fixture.txt
  ```

  **Commit**: `feat(fixtures): ARM64 ELF fixture covering MUL/CSEL/UBFM/LDP/STP for Wave 5`

### Wave 1 — Output Quality + Goto Fix (5 tasks)

> Per Metis: Wave 1 features (CSE, expression trees, ternary, idiom recognition, tail call, noreturn) ALREADY EXIST. This wave EXTENDS/FIXES, never CREATES. The medium.c goto regression (12→30) is the headline target.

- [ ] P10-4. node_split heuristic retune to fix medium.c goto regression

  **What to do**:
  - Read `crates/unlace-struct/src/node_split.rs::pick_split_target`. Current heuristic: pick entry with most external preds, BlockId tiebreak.
  - Profile medium.elf decompile with `RUST_LOG=unlace_struct=trace` to see which entries get split per round.
  - Replace heuristic with: pick entry whose split produces the smallest resulting region size (post-split SCC size minimization). If tie, fewer external preds wins (opposite of current).
  - DO NOT change MAX_SPLIT_ROUNDS (Metis G4: 16 stays).
  - DO NOT touch `structurer.rs` (Metis core directive).

  **Must NOT do**:
  - Increase MAX_SPLIT_ROUNDS
  - Modify the structurer core
  - Add HashMap (use BTreeMap)

  **Recommended Agent Profile**:
  - **Subagent**: `general`
  - **Skills**: none

  **Parallelization**:
  - **Can Run In Parallel**: YES (with P10-5, P10-6, P10-7)
  - **Wave**: 1
  - **Blocks**: P10-8
  - **Blocked By**: P10-0 (baseline)

  **References**:
  - `crates/unlace-struct/src/node_split.rs` (lines 60-115 — pick_split_target current impl)
  - `crates/unlace-struct/src/irreducible.rs` — IrreducibleRegion + Tarjan SCC source
  - `.sisyphus/evidence/p10-baseline-metrics.txt` (P10-0 output)
  - rustc Lengauer-Tarjan reference (Phase 9 librarian found in `rust-lang/rust compiler/rustc_data_structures/src/graph/dominators/`)

  **Acceptance Criteria**:
  - [ ] `cargo test -p unlace-struct --lib node_split` passes (existing 3 tests still pass)
  - [ ] No new HashMap/HashSet (`cargo xtask lint-determinism` OK)
  - [ ] Phase 10 baseline regression check (delta vs P10-0): no fixture's gotos increase by > 2

  **QA Scenarios**:
  ```
  Scenario: Existing node_split tests still pass
    Tool: Bash
    Steps:
      1. cargo test -p unlace-struct --lib node_split 2>&1 | grep "test result"
    Expected Result: ok. 3+ passed; 0 failed
    Evidence: .sisyphus/evidence/p10-4-nodesplit.txt

  Scenario: Lint-determinism still clean
    Tool: Bash
    Steps:
      1. cargo xtask lint-determinism 2>&1 | tail -3
    Expected Result: lint-determinism: OK
    Evidence: .sisyphus/evidence/p10-4-nodesplit.txt
  ```

  **Commit**: `fix(struct): retune node_split pick_split_target to minimize post-split SCC size`

- [ ] P10-5. Idiom recognition: rotate (ROL/ROR) detection

  **What to do**:
  - Extend `crates/unlace-passes/src/idiom_recognition.rs` (2092 lines, 35+ existing patterns) with two new patterns:
    1. `(x << n) | (x >> (bits - n))` → `Callother("__ROL__", x, n)` (rotate left)
    2. `(x >> n) | (x << (bits - n))` → `Callother("__ROR__", x, n)` (rotate right)
  - Use existing `try_recognize` dispatch + `def_map` lookup pattern.
  - Add Callother tag constants in `crates/unlace-lift-x86/src/intrinsics.rs` if not already present.
  - Wire `__ROL__` / `__ROR__` into the C printer's Callother emission (existing path from Phase 8).

  **Must NOT do**:
  - Match patterns where `n` is non-constant (defer until variable rotation is needed; current x86 ROL/ROR with cl is rare).
  - Modify the IrOp enum (use Callother).

  **Recommended Agent Profile**:
  - **Subagent**: `general`

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Wave**: 1
  - **Blocks**: P10-8
  - **Blocked By**: None

  **References**:
  - `crates/unlace-passes/src/idiom_recognition.rs` — extension target. Look at `try_recognize` (line ~80) and existing patterns lines 90-300
  - `crates/unlace-lift-x86/src/intrinsics.rs` — Callother tag registry
  - `crates/unlace-output/src/c_printer.rs::emit_callother` — Phase 8 Callother emission

  **Acceptance Criteria**:
  - [ ] New unit test: `test_idiom_rotate_left` constructs `(x << 5) | (x >> 27)` IR and asserts rewrite to Callother("__ROL__", x, 5)
  - [ ] Same for rotate right
  - [ ] `cargo test -p unlace-passes idiom` passes (existing tests + 2 new)
  - [ ] No HashMap/HashSet added

  **QA Scenarios**:
  ```
  Scenario: Rotate idiom recognized
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes idiom_rotate 2>&1 | grep "test result"
    Expected Result: ≥2 new tests pass
    Evidence: .sisyphus/evidence/p10-5-rotate.txt
  ```

  **Commit**: `feat(passes): idiom_recognition rotate-left/right (ROL/ROR)`

- [ ] P10-6. Idiom recognition: abs/min/max conditional select patterns

  **What to do**:
  - Extend `idiom_recognition.rs` with three patterns:
    1. `cond ? -x : x` (where cond is `x < 0`) → `Callother("__abs__", x)`
    2. `cond ? a : b` (where cond is `a < b`) → `Callother("__min__", a, b)`
    3. `cond ? a : b` (where cond is `a > b`) → `Callother("__max__", a, b)`
  - Patterns appear in HIR as `If` nodes — but at IR-level (this pass operates pre-HIR), patterns appear as: comparison + conditional move (CMOV-equivalent). Match the IR-level CMOV/select form.
  - For x86, CMOVcc lifts to a sequence: `cmp + flags + select`. For ARM64, CSEL is the direct form. Match both.

  **Must NOT do**:
  - Match floating-point abs/min/max (use FABS/FMIN/FMAX for those — out of scope).
  - Recognize patterns spanning function calls.

  **Recommended Agent Profile**:
  - **Subagent**: `general`

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Wave**: 1
  - **Blocks**: P10-8
  - **Blocked By**: None

  **References**:
  - `crates/unlace-passes/src/idiom_recognition.rs` — extension target
  - `crates/unlace-passes/src/ternary_recovery.rs` (285 lines) — already detects `If`-nodes for ternary; reuse pattern matchers for conditional select
  - x86 CMOVcc reference (intel.com/content/www/us/en/architecture-and-technology/64-ia-32-architectures-software-developer-vol-2a-manual)

  **Acceptance Criteria**:
  - [ ] 3 new unit tests (one per pattern)
  - [ ] `cargo test -p unlace-passes` passes existing + 3 new

  **QA Scenarios**:
  ```
  Scenario: abs/min/max idioms
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes 'idiom_(abs|min|max)' 2>&1 | grep "test result"
    Expected Result: 3 new tests pass
    Evidence: .sisyphus/evidence/p10-6-absminmax.txt
  ```

  **Commit**: `feat(passes): idiom_recognition abs/min/max conditional-select patterns`

- [ ] P10-7. Idiom recognition: memcpy/memset call sequence patterns

  **What to do**:
  - Recognize unrolled memcpy: a sequence of N consecutive `Load(src+i)` + `Store(dst+i)` pairs where i increments by access-size, all with same width — replace with `Callother("__memcpy__", dst, src, N*width)`.
  - Recognize memset: sequence of N consecutive `Store(dst+i, const_byte)` pairs — replace with `Callother("__memset__", dst, const_byte, N*width)`.
  - Pattern lives in `crates/unlace-passes/src/idiom_recognition.rs`. Operate per-block.
  - Cap N at 64 (avoid pathological matching on huge unrolled loops).

  **Must NOT do**:
  - Match across blocks (would require inter-block analysis — Metis SC1).
  - Recognize strlen/strcmp/memmove (Metis SC5: out of scope).
  - Match if any intervening instruction has side effects.

  **Recommended Agent Profile**:
  - **Subagent**: `general`

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Wave**: 1
  - **Blocks**: P10-8
  - **Blocked By**: None

  **References**:
  - `crates/unlace-passes/src/idiom_recognition.rs` — extension target
  - x86 `rep movsb` lifting reference — Phase 9 P9-17 already lifts REP SCASB

  **Acceptance Criteria**:
  - [ ] 2 new unit tests (memcpy + memset)
  - [ ] No false positives in existing fixtures (golden refresh diff < 5 lines)

  **QA Scenarios**:
  ```
  Scenario: memcpy/memset recognized
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes 'idiom_(memcpy|memset)' 2>&1 | grep "test result"
    Expected Result: 2 new tests pass
    Evidence: .sisyphus/evidence/p10-7-mem.txt
  ```

  **Commit**: `feat(passes): idiom_recognition unrolled memcpy/memset detection`

- [ ] P10-8. Refresh medium golden + measure goto/if delta + per-fixture regression check

  **What to do**:
  - Run `UPDATE_GOLDEN=1 cargo test -p unlace-test-harness --test golden_fixtures` to refresh all 8 fixtures.
  - Capture per-fixture goto/if/var counts AFTER Wave 1 changes to `.sisyphus/evidence/p10-8-after-wave1.txt`.
  - Diff against `.sisyphus/evidence/p10-baseline-metrics.txt` (P10-0 output): no fixture's gotos may have increased by > 2 (Metis G5).
  - medium.c specific: gotos must be ≤ 15 AND ifs must be ≥ 35 (Phase 10 Wave 1 acceptance, Metis-mandated).
  - If any guard fails, this task FAILS and Wave 1 must be revisited.

  **Must NOT do**:
  - Skip the regression check.
  - Auto-accept arbitrary golden changes — every change must be intentional and tied to P10-4..7.

  **Recommended Agent Profile**:
  - **Subagent**: `general`

  **Parallelization**:
  - **Can Run In Parallel**: NO (must run after P10-4..7 land)
  - **Wave**: 1
  - **Blocks**: Wave 2
  - **Blocked By**: P10-0, P10-4, P10-5, P10-6, P10-7

  **References**:
  - `crates/unlace-test-harness/tests/golden_fixtures.rs` — UPDATE_GOLDEN env handling
  - `.sisyphus/evidence/p10-baseline-metrics.txt` (P10-0)
  - Phase 9 P9-7 evidence pattern

  **Acceptance Criteria**:
  - [ ] All 8 fixtures' goldens refreshed
  - [ ] medium.c gotos ≤ 15
  - [ ] medium.c ifs ≥ 35
  - [ ] No fixture's gotos increased by > 2 vs baseline
  - [ ] `cargo test -p unlace-test-harness` passes (8/8 golden fixtures)

  **QA Scenarios**:
  ```
  Scenario: medium.c goto/if delta
    Tool: Bash
    Steps:
      1. echo "gotos:$(grep -c goto tests/golden/expected/medium.c)"
      2. echo "ifs:$(grep -c '\bif\b' tests/golden/expected/medium.c)"
    Expected Result: gotos ≤ 15 AND ifs ≥ 35
    Evidence: .sisyphus/evidence/p10-8-delta.txt

  Scenario: Per-fixture regression check
    Tool: Bash
    Steps:
      1. for f in tests/golden/expected/*.c; do echo "$(basename $f .c) gotos=$(grep -c goto $f)"; done > /tmp/p10-8-now.txt
      2. diff <(awk '{print $1, $NF}' .sisyphus/evidence/p10-baseline-metrics.txt) <(awk '{print $1, $NF}' /tmp/p10-8-now.txt)
    Expected Result: no fixture's goto count increased by > 2
    Evidence: .sisyphus/evidence/p10-8-delta.txt
  ```

  **Commit**: `chore(goldens): Wave 1 refresh + medium.c goto fix (target ≤15)`

### Wave 2 — Type Recovery (5 tasks)

> Per Metis: existing `type_infer.rs` (1115 lines), `detect_array_strides()`, `composite_var_types`, `dwarf.rs` struct recovery, `variable_merge.rs` (891 lines) all live. Wave 2 capped at Tier 1+2: struct fields from access patterns, bitfield extraction, 1-level pointer-chain. NO union discrimination, NO function pointer tables, NO interprocedural propagation.

- [ ] P10-9. Struct field detection from base + const_offset Load patterns

  **What to do**:
  - WRITE `crates/unlace-passes/src/struct_field_detect.rs` (new pass).
  - Walk SSA Function. For each varnode V used as Load/Store address, collect all `(base, offset)` access pairs where base is the same SSA varnode and offset is a constant.
  - If a base has ≥ 2 distinct offsets accessed, infer V is a pointer to a struct with fields at those offsets.
  - Populate `SsaFunction.composite_var_types` with `Type::Struct { name: format!("struct_{base_offset:x}"), fields: Vec<StructFieldType> }` where each `StructFieldType { offset, name: format!("field_{offset}"), ty: Type::Primitive(...) }`.
  - Field types come from access size: 1 → u8, 4 → u32, 8 → u64, 16 → _OWORD.
  - Cap analysis at 32 fields per struct (avoid pathological array-as-struct misidentification).

  **Must NOT do**:
  - Cross-function field inference (Metis SC1).
  - Heuristic field name guessing (always emit `field_<offset>`).
  - Touch existing `type_infer.rs` (extend separately).

  **Recommended Agent Profile**:
  - **Subagent**: `general`

  **Parallelization**:
  - **Can Run In Parallel**: NO (Wave 2 sequential — type recovery interactions)
  - **Wave**: 2
  - **Blocks**: P10-12, P10-13
  - **Blocked By**: P10-8

  **References**:
  - `crates/unlace-passes/src/type_infer.rs` (1115 lines) — extension model
  - `crates/unlace-ir/src/ssa.rs::composite_var_types` — target field
  - `crates/unlace-ir/src/types.rs::Type::Struct` — composite type definition (already exists per Metis Discovery #3)
  - `crates/unlace-loader/src/dwarf.rs` — DWARF-based struct recovery as reference for field shape

  **Acceptance Criteria**:
  - [ ] New unit test: synthetic SSA with 3 Loads at offsets 0/8/16 from same base → produces Type::Struct with 3 fields
  - [ ] No HashMap added (BTreeMap)
  - [ ] `cargo xtask lint-determinism` clean

  **QA Scenarios**:
  ```
  Scenario: Struct fields detected from offset patterns
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes struct_field_detect 2>&1 | grep "test result"
    Expected Result: ≥1 new test passes
    Evidence: .sisyphus/evidence/p10-9-struct-fields.txt
  ```

  **Commit**: `feat(passes): struct field detection from base + const_offset Load patterns`

- [ ] P10-10. Bitfield extraction from AND/SHIFT patterns

  **What to do**:
  - Extend `idiom_recognition.rs` (NOT type_infer): patterns
    1. `(x >> shift) & mask` where mask = `(1 << width) - 1` → annotate as bitfield read at offset=shift, width=width
    2. `(x & ~(mask << shift)) | ((y & mask) << shift)` → bitfield write
  - On match, emit a structured annotation in IR via `Callother("__bitfield_get__", x, shift, width)` / `Callother("__bitfield_set__", ...)`.
  - C printer emits these as `x.field_<shift>_<width>` if struct context is known, else `((x >> <shift>) & <mask>)` (existing behavior preserved as fallback).

  **Must NOT do**:
  - Match patterns where shift or mask is non-constant.
  - Cross-instruction bitfield reconstruction (single-statement only).

  **Recommended Agent Profile**:
  - **Subagent**: `general`

  **Parallelization**:
  - **Can Run In Parallel**: NO
  - **Wave**: 2
  - **Blocks**: P10-12
  - **Blocked By**: P10-9

  **References**:
  - `crates/unlace-passes/src/idiom_recognition.rs` — patterns 33+ for context
  - `crates/unlace-output/src/c_printer.rs::emit_callother` — Callother output path

  **Acceptance Criteria**:
  - [ ] 2 new unit tests (bitfield read + write)
  - [ ] No false positives on existing 1359 tests

  **QA Scenarios**:
  ```
  Scenario: Bitfield idioms
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes idiom_bitfield 2>&1 | grep "test result"
    Expected Result: 2 new tests pass
    Evidence: .sisyphus/evidence/p10-10-bitfield.txt
  ```

  **Commit**: `feat(passes): bitfield extraction/insertion idiom recognition`

- [ ] P10-11. Pointer-chain type propagation (1-level Load)

  **What to do**:
  - Extend `type_infer.rs`: when a Load output's TYPE is later used as a Load address, propagate Ptr-of-T type backwards through the chain.
  - Specifically: if `v2 = Load(ram, v1)` and `v1` has type `Ptr(T1)`, and `v3 = Load(ram, v2 + offset)`, then v2 has type `Ptr(T2)` where T2 is the struct type from P10-9 if recognized.
  - Cap depth at 1 (Metis G2 Tier 2: defer multi-level chains).
  - Use existing 100-iteration cap on the type_infer fixedpoint.

  **Must NOT do**:
  - Multi-level chain propagation (Tier 3, Phase 11+).
  - Interprocedural propagation.

  **Recommended Agent Profile**:
  - **Subagent**: `general`

  **Parallelization**:
  - **Can Run In Parallel**: NO
  - **Wave**: 2
  - **Blocks**: P10-12
  - **Blocked By**: P10-9, P10-10

  **References**:
  - `crates/unlace-passes/src/type_infer.rs` — extension target, especially the COPY/Load type propagation logic
  - Metis R2 risk: type recovery may change variable_merge coalescence — track that

  **Acceptance Criteria**:
  - [ ] Synthetic test: `v1 = Load(struct_ptr); v2 = Load(v1 + 8)` produces v1: Ptr(struct), v2: u64
  - [ ] No type_infer oscillation warning fires on existing tests (100-iter cap not hit)

  **QA Scenarios**:
  ```
  Scenario: Pointer chain propagation
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes type_infer_ptr_chain 2>&1 | grep "test result"
    Expected Result: ≥1 new test passes
    Evidence: .sisyphus/evidence/p10-11-ptr-chain.txt

  Scenario: No type_infer oscillation
    Tool: Bash
    Steps:
      1. RUST_LOG=unlace_passes::type_infer=warn cargo test --workspace 2>&1 | grep -c "did not converge"
    Expected Result: 0
    Evidence: .sisyphus/evidence/p10-11-ptr-chain.txt
  ```

  **Commit**: `feat(passes): 1-level pointer-chain type propagation in type_infer`

- [ ] P10-12. Array stride C-output emission (existing detection → field syntax)

  **What to do**:
  - `detect_array_strides()` already exists in `type_infer.rs` (Metis Discovery #3). It detects `idx * stride` and `idx << log2(stride)` for stride ∈ {1,2,4,8,16}.
  - C printer currently emits `*(_QWORD *)(base + idx * 8)` — should emit `base[idx]` for stride-8 access.
  - Modify `crates/unlace-output/src/c_printer.rs::try_array_subscript` to consult the array-stride detection result + emit subscript syntax.
  - For known-element-type arrays (after P10-9), emit `base->field_<n>` chain if base is recognized struct.

  **Must NOT do**:
  - Heuristic guessing of array bounds (we don't know array length without DWARF).
  - Modify the array stride detection itself (it's already correct).

  **Recommended Agent Profile**:
  - **Subagent**: `general`

  **Parallelization**:
  - **Can Run In Parallel**: NO
  - **Wave**: 2
  - **Blocks**: P10-13
  - **Blocked By**: P10-9, P10-10, P10-11

  **References**:
  - `crates/unlace-passes/src/type_infer.rs::detect_array_strides`
  - `crates/unlace-output/src/c_printer.rs::try_array_subscript` (line ~551)

  **Acceptance Criteria**:
  - [ ] Synthetic IR with `*(_QWORD *)(base + idx * 8)` golden output emits `base[idx]`
  - [ ] At least one existing fixture changes from `*(_QWORD *)(...)` to subscript form

  **QA Scenarios**:
  ```
  Scenario: Array subscript emission
    Tool: Bash
    Steps:
      1. cargo test -p unlace-output array_subscript 2>&1 | grep "test result"
    Expected Result: ≥1 new test passes
    Evidence: .sisyphus/evidence/p10-12-array-emit.txt
  ```

  **Commit**: `feat(output): emit array subscript syntax for known-stride accesses`

- [ ] P10-13. Validation pass: at least one golden has ->field_<n> syntax

  **What to do**:
  - Run `UPDATE_GOLDEN=1 cargo test -p unlace-test-harness --test golden_fixtures` to refresh after Wave 2.
  - Verify at least one fixture's golden output contains `->field_` (struct field syntax) — this is the Wave 2 acceptance gate (Metis-mandated).
  - If no fixture exhibits the pattern, Wave 2 implementation is incomplete and must be revisited.
  - Update `.sisyphus/evidence/p10-13-type-recovery.txt` with grep counts of struct/array syntax across all goldens.

  **Recommended Agent Profile**:
  - **Subagent**: `general`

  **Parallelization**:
  - **Can Run In Parallel**: NO
  - **Wave**: 2
  - **Blocks**: Wave 3
  - **Blocked By**: P10-9, P10-10, P10-11, P10-12

  **References**:
  - `tests/golden/expected/debug_structs.c` — most likely fixture to exhibit struct syntax
  - `.sisyphus/evidence/p10-baseline-metrics.txt` for delta comparison

  **Acceptance Criteria**:
  - [ ] At least one fixture's golden contains `->field_<digit>` token
  - [ ] All fixtures still parse (no broken C)
  - [ ] `cargo test --workspace` passes

  **QA Scenarios**:
  ```
  Scenario: Struct field syntax appears
    Tool: Bash
    Steps:
      1. grep -l "->field_" tests/golden/expected/*.c | wc -l
    Expected Result: ≥1
    Evidence: .sisyphus/evidence/p10-13-type-recovery.txt
  ```

  **Commit**: `chore(goldens): Wave 2 type recovery refresh + struct field syntax verification`

### Wave 3 — PE Loader P0 (7 tasks)

> Per Metis: PE loader already handles base relocations (P9-18), exports/imports (Phase 9), delay-load (P9-19), TLS callbacks (P9-19). Wave 3 closes the IDA P0 gaps captured in Phase 9 librarian agent: .pdata/.xdata, debug, load_config, resources, bound imports, Rich header.

- [ ] P10-14. Parse .pdata RUNTIME_FUNCTION array

  **What to do**:
  - Extend `crates/unlace-loader/src/pe.rs` with `parse_pdata<Pe>(file, data) -> Vec<RuntimeFunction>`.
  - `RuntimeFunction { begin_address: u64, end_address: u64, unwind_info_address: u64 }` (3 RVAs absolutized via image_base).
  - Source: `IMAGE_DIRECTORY_ENTRY_EXCEPTION` data directory pointing at the .pdata section.
  - Each RUNTIME_FUNCTION is 12 bytes (3 × u32) on x86-64.
  - Add `runtime_functions: Vec<RuntimeFunction>` field to BinaryImage (with sensible default: empty Vec). Update all 7 BinaryImage construction sites (per Phase 9 P9-19 pattern).

  **Must NOT do**:
  - Decode UNWIND_INFO bodies yet (P10-15).
  - Add field without `#[derive(Default)]` (Metis R4).

  **Recommended Agent Profile**:
  - **Subagent**: `general`

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Wave**: 3
  - **Blocks**: P10-15
  - **Blocked By**: P10-1

  **References**:
  - Microsoft PE/COFF spec § 6.5
  - `crates/unlace-loader/src/pe.rs::load_base_relocations` (P9-18) — exactly the convention to follow
  - `references/ida/loaders/pe/all/` — IDA reference (LFS pointers) — function names contain `runtime_function`

  **Acceptance Criteria**:
  - [ ] `pe64_with_pdata_and_debug` fixture (P10-1) exposes ≥ 1 RuntimeFunction
  - [ ] BinaryImage.runtime_functions field added; 7 construction sites updated
  - [ ] `cargo test -p unlace-loader pe64_pdata` passes

  **QA Scenarios**:
  ```
  Scenario: .pdata parsed
    Tool: Bash
    Steps:
      1. cargo test -p unlace-loader pe_pdata 2>&1 | grep "test result"
    Expected Result: ≥1 new test passes
    Evidence: .sisyphus/evidence/p10-14-pdata.txt
  ```

  **Commit**: `feat(loader): PE .pdata RUNTIME_FUNCTION array parsing`

- [ ] P10-15. Decode .xdata UNWIND_INFO records

  **What to do**:
  - For each RuntimeFunction from P10-14, parse the UNWIND_INFO at `unwind_info_address`.
  - Decode: version (3 bits), flags (5 bits), size_of_prolog (1 byte), count_of_codes (1 byte), frame_register (4 bits), frame_offset (4 bits), N × UnwindCode (each 1 byte op + 1 byte arg).
  - Add `unwind_info: BTreeMap<u64, UnwindInfo>` to BinaryImage (key: function start RVA, value: decoded record).
  - Use BTreeMap (not HashMap) per determinism.

  **Recommended Agent Profile**:
  - **Subagent**: `general`

  **Parallelization**:
  - **Can Run In Parallel**: NO (depends on P10-14)
  - **Wave**: 3
  - **Blocked By**: P10-14

  **References**:
  - Microsoft PE/COFF spec § 6.5 (UNWIND_INFO + UNWIND_CODE table)
  - `crates/unlace-loader/src/pe.rs::load_base_relocations` for byte-offset extraction style

  **Acceptance Criteria**:
  - [ ] `unwind_info` field populated for the synthetic fixture
  - [ ] At least 1 UnwindCode decoded
  - [ ] `cargo xtask lint-determinism` clean

  **QA Scenarios**:
  ```
  Scenario: UNWIND_INFO decoded
    Tool: Bash
    Steps:
      1. cargo test -p unlace-loader pe_xdata 2>&1 | grep "test result"
    Expected Result: ≥1 new test passes
    Evidence: .sisyphus/evidence/p10-15-xdata.txt
  ```

  **Commit**: `feat(loader): PE .xdata UNWIND_INFO decoding`

- [ ] P10-16. Parse IMAGE_DIRECTORY_ENTRY_DEBUG

  **What to do**:
  - Walk the IMAGE_DEBUG_DIRECTORY array.
  - For each entry: extract `(typ, time_date_stamp, size_of_data, address_of_raw_data)`.
  - On `IMAGE_DEBUG_TYPE_CODEVIEW (2)`: parse PDB 7.0 (RSDS) record → extract Guid + age + pdb_path.
  - Add `debug_records: Vec<DebugRecord>` to BinaryImage.
  - Skip unknown debug types (no failure).

  **Recommended Agent Profile**:
  - **Subagent**: `general`

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Wave**: 3
  - **Blocks**: nothing (Wave 6 polish only)
  - **Blocked By**: P10-1

  **References**:
  - Microsoft PE/COFF spec § 6.1.1
  - `object` crate v0.39 — check if it already exposes IMAGE_DEBUG_DIRECTORY (Metis Q1d: validate first)

  **Acceptance Criteria**:
  - [ ] CodeView record parsing succeeds on synthetic fixture
  - [ ] PDB path string extracted

  **QA Scenarios**:
  ```
  Scenario: Debug directory parsed
    Tool: Bash
    Steps:
      1. cargo test -p unlace-loader pe_debug_dir 2>&1 | grep "test result"
    Expected Result: ≥1 new test passes
    Evidence: .sisyphus/evidence/p10-16-debug.txt
  ```

  **Commit**: `feat(loader): PE IMAGE_DIRECTORY_ENTRY_DEBUG parsing (CodeView/PDB references)`

- [ ] P10-17. Parse IMAGE_DIRECTORY_ENTRY_LOAD_CONFIG

  **What to do**:
  - Decode IMAGE_LOAD_CONFIG_DIRECTORY64 (PE32+) or IMAGE_LOAD_CONFIG_DIRECTORY32 (PE32) at the directory's RVA.
  - Extract: security_cookie_address (offset 56 in 64-bit, 28 in 32-bit), guard_cf_check_function_pointer, guard_ff_function_table + count, guard_flags.
  - Add `load_config: Option<LoadConfig>` field to BinaryImage.
  - Walk guard_ff_function_table to populate a separate `cfg_targets: Vec<u64>` set (CFG-protected call targets).

  **Recommended Agent Profile**:
  - **Subagent**: `general`

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Wave**: 3
  - **Blocks**: nothing
  - **Blocked By**: P10-1

  **References**:
  - Microsoft PE/COFF spec § 6.8

  **Acceptance Criteria**:
  - [ ] Security cookie address extracted from synthetic fixture
  - [ ] CFG function table walked (≥0 entries)

  **QA Scenarios**:
  ```
  Scenario: Load config parsed
    Tool: Bash
    Steps:
      1. cargo test -p unlace-loader pe_load_config 2>&1 | grep "test result"
    Expected Result: ≥1 new test passes
    Evidence: .sisyphus/evidence/p10-17-loadcfg.txt
  ```

  **Commit**: `feat(loader): PE load_config + CFG function table parsing`

- [ ] P10-18. Parse IMAGE_DIRECTORY_ENTRY_RESOURCE (tree walk)

  **What to do**:
  - Recursive walk of IMAGE_RESOURCE_DIRECTORY (3-level: type → name → language).
  - Cap recursion depth at 8 (Metis SC3: don't interpret content, just enumerate).
  - Add `resources: Vec<ResourceEntry>` to BinaryImage where ResourceEntry = `{ type_id_or_name, name_id_or_name, language, rva, size }`.
  - Skip extracting resource bodies (no version-string parsing, no manifest parsing).

  **Must NOT do**:
  - Interpret resource contents (Metis SC3).

  **Recommended Agent Profile**:
  - **Subagent**: `general`

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Wave**: 3
  - **Blocks**: nothing
  - **Blocked By**: None (uses minimal_pe64 for tests)

  **References**:
  - Microsoft PE/COFF spec § 6.9
  - `object` crate v0.39 ResourceDirectory in `read/pe/resource.rs`

  **Acceptance Criteria**:
  - [ ] Resource tree walked without infinite recursion (depth cap)
  - [ ] BinaryImage exposes resources Vec

  **QA Scenarios**:
  ```
  Scenario: Resource tree walked
    Tool: Bash
    Steps:
      1. cargo test -p unlace-loader pe_resource 2>&1 | grep "test result"
    Expected Result: ≥1 new test passes
    Evidence: .sisyphus/evidence/p10-18-resource.txt
  ```

  **Commit**: `feat(loader): PE resource tree walk (entries only, contents not interpreted)`

- [ ] P10-19. Parse IMAGE_DIRECTORY_ENTRY_BOUND_IMPORT

  **What to do**:
  - Decode IMAGE_BOUND_IMPORT_DESCRIPTOR array.
  - Each: `time_date_stamp, offset_module_name, number_of_module_forwarder_refs`.
  - Resolve module names from offsets (relative to bound import directory base).
  - Add to BinaryImage as `bound_imports: Vec<BoundImport>`.

  **Recommended Agent Profile**:
  - **Subagent**: `general`

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Wave**: 3
  - **Blocks**: nothing
  - **Blocked By**: None

  **References**:
  - Microsoft PE/COFF spec § 6.7

  **Acceptance Criteria**:
  - [ ] Bound imports parsed without panic on minimal fixture
  - [ ] Empty Vec when directory not present

  **QA Scenarios**:
  ```
  Scenario: Bound imports parsed
    Tool: Bash
    Steps:
      1. cargo test -p unlace-loader pe_bound 2>&1 | grep "test result"
    Expected Result: ≥1 new test passes
    Evidence: .sisyphus/evidence/p10-19-bound.txt
  ```

  **Commit**: `feat(loader): PE bound import directory parsing`

- [ ] P10-20. Rich header extraction + BinaryImage field wiring

  **What to do**:
  - Search bytes between DOS header (0x40) and NT headers offset (e_lfanew) for the "Rich" signature (0x68636952 LE).
  - Walk backwards to find "DanS" sentinel (XOR-encoded with key from after "Rich").
  - Decode each 8-byte record: `(comp_id, count)` where comp_id encodes (build_tool_id, file_type, version).
  - Add `rich_header: Option<RichHeader>` to BinaryImage with `Vec<RichRecord>` records.

  **Must NOT do**:
  - Authoritative compiler version translation (just expose raw record IDs).

  **Recommended Agent Profile**:
  - **Subagent**: `general`

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Wave**: 3
  - **Blocks**: nothing
  - **Blocked By**: None

  **References**:
  - https://www.ntcore.com/files/richsign.htm

  **Acceptance Criteria**:
  - [ ] Rich header extraction returns None when absent
  - [ ] When present (synthetic fixture), records Vec is populated

  **QA Scenarios**:
  ```
  Scenario: Rich header
    Tool: Bash
    Steps:
      1. cargo test -p unlace-loader pe_rich 2>&1 | grep "test result"
    Expected Result: ≥1 new test passes
    Evidence: .sisyphus/evidence/p10-20-rich.txt
  ```

  **Commit**: `feat(loader): PE Rich header extraction`

### Wave 4 — Mach-O Loader P0 (8 tasks)

> Per Metis Discovery #6: Mach-O loader has chained-fixup imports (P9-21) but `relocations: Vec::new()` still empty + LC_DYLD_INFO unparsed. Wave 4 closes the IDA P0 gaps.

- [ ] P10-21. Parse LC_DYSYMTAB indirect symbol table

  **What to do**:
  - Walk LC_DYSYMTAB load command. Read the indirect symbol table at `indirectsymoff` for `nindirectsyms` u32 entries.
  - Each entry is an index into the LC_SYMTAB nlist array (or `INDIRECT_SYMBOL_LOCAL`/`INDIRECT_SYMBOL_ABS` sentinels).
  - Used by sections of type S_NON_LAZY_SYMBOL_POINTERS, S_LAZY_SYMBOL_POINTERS, S_SYMBOL_STUBS — each section's `reserved1` is the start index into the indirect table.
  - Add `indirect_symbols: Vec<u32>` to BinaryImage.

  **Recommended Agent Profile**:
  - **Subagent**: `general`

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Wave**: 4
  - **Blocks**: P10-27
  - **Blocked By**: P10-2

  **References**:
  - `object` crate `read/macho/load_command.rs::LoadCommandData::dysymtab` (already exposes Dysymtab)
  - Apple `mach-o/nlist.h` for INDIRECT_SYMBOL_* constants

  **Acceptance Criteria**:
  - [ ] indirect_symbols populated from synthetic fixture
  - [ ] BinaryImage updated with new field

  **QA Scenarios**:
  ```
  Scenario: Indirect symbols parsed
    Tool: Bash
    Steps:
      1. cargo test -p unlace-loader macho_dysymtab 2>&1 | grep "test result"
    Expected Result: ≥1 new test passes
    Evidence: .sisyphus/evidence/p10-21-dysymtab.txt
  ```

  **Commit**: `feat(loader): Mach-O LC_DYSYMTAB indirect symbol table parsing`

- [ ] P10-22. LC_DYLD_INFO REBASE opcode interpreter

  **What to do**:
  - Parse the REBASE bytecode stream from LC_DYLD_INFO::rebase_off/rebase_size.
  - Implement opcode VM: REBASE_OPCODE_DONE (0x00), REBASE_OPCODE_SET_TYPE_IMM (0x10), REBASE_OPCODE_SET_SEGMENT_AND_OFFSET_ULEB (0x20), REBASE_OPCODE_ADD_ADDR_ULEB (0x30), REBASE_OPCODE_DO_REBASE_IMM_TIMES (0x60), REBASE_OPCODE_DO_REBASE_ULEB_TIMES (0x70), etc.
  - Each REBASE instruction patches a specific address with `addr += slide` (ASLR adjustment).
  - Populate BinaryImage.relocations as RelocKind::Relative entries (matches PE base reloc convention).

  **Must NOT do**:
  - Apply the actual rebase to BinaryImage section data (we record metadata, not executed slide).
  - Cap opcode count beyond a sanity limit (10000).

  **Recommended Agent Profile**:
  - **Subagent**: `general`

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Wave**: 4
  - **Blocks**: P10-25
  - **Blocked By**: P10-2

  **References**:
  - `references/ida/loaders/macho/process_rebase_opcodes_1575.c` — IDA reference (LFS)
  - dyld `mach-o/loader.h` for REBASE_OPCODE_* constants

  **Acceptance Criteria**:
  - [ ] At least 1 rebase entry produced from synthetic fixture
  - [ ] BinaryImage.relocations populated (no longer empty for legacy Mach-O)

  **QA Scenarios**:
  ```
  Scenario: REBASE opcodes interpreted
    Tool: Bash
    Steps:
      1. cargo test -p unlace-loader macho_rebase 2>&1 | grep "test result"
    Expected Result: ≥1 new test passes
    Evidence: .sisyphus/evidence/p10-22-rebase.txt
  ```

  **Commit**: `feat(loader): Mach-O LC_DYLD_INFO REBASE opcode interpreter`

- [ ] P10-23. LC_DYLD_INFO BIND opcode interpreter (lazy + non-lazy)

  **What to do**:
  - Parse BIND bytecode from LC_DYLD_INFO::bind_off/bind_size AND lazy_bind_off/lazy_bind_size.
  - Opcodes: BIND_OPCODE_DONE (0x00), BIND_OPCODE_SET_DYLIB_ORDINAL_IMM (0x10), BIND_OPCODE_SET_SYMBOL_TRAILING_FLAGS_IMM (0x40), BIND_OPCODE_DO_BIND (0x90), BIND_OPCODE_DO_BIND_ADD_ADDR_ULEB (0xA0), etc.
  - Each BIND records `(addr, dylib_ordinal, symbol_name, addend)`.
  - Add bound symbols to BinaryImage.symbols as `dylib!symbol_name` at the resolved addr (matching PE convention).

  **Recommended Agent Profile**:
  - **Subagent**: `general`

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Wave**: 4
  - **Blocks**: P10-25, P10-27
  - **Blocked By**: P10-2

  **References**:
  - `references/ida/loaders/macho/process_bind_opcodes_2961.c` — IDA reference
  - dyld `mach-o/loader.h` BIND_OPCODE_* constants

  **Acceptance Criteria**:
  - [ ] Bind symbols extracted from synthetic fixture
  - [ ] Lazy + non-lazy paths both exercised

  **QA Scenarios**:
  ```
  Scenario: BIND opcodes interpreted
    Tool: Bash
    Steps:
      1. cargo test -p unlace-loader macho_bind 2>&1 | grep "test result"
    Expected Result: ≥1 new test passes; symbols include 'dylib!' prefix
    Evidence: .sisyphus/evidence/p10-23-bind.txt
  ```

  **Commit**: `feat(loader): Mach-O LC_DYLD_INFO BIND opcode interpreter (lazy + non-lazy)`

- [ ] P10-24. LC_DYLD_INFO EXPORT trie decoder

  **What to do**:
  - Parse EXPORT trie from LC_DYLD_INFO::export_off/export_size.
  - Trie format: each node has terminal_size (ULEB128), then optional terminal data, then child_count (u8), then child entries (NUL-terminated string + ULEB128 offset to child node).
  - Recursively walk producing `Vec<Export { name: String, addr: u64, flags: u32 }>`.
  - Add to BinaryImage.symbols with SymbolKind::Function.

  **Recommended Agent Profile**:
  - **Subagent**: `general`

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Wave**: 4
  - **Blocks**: nothing
  - **Blocked By**: P10-2

  **References**:
  - `object` crate `read/macho/load_command.rs::exports_trie` already exists for LC_DYLD_EXPORTS_TRIE — verify whether it works for LC_DYLD_INFO export_off too
  - `references/ida/loaders/macho/handle_exports_trie_2084.c` — IDA reference

  **Acceptance Criteria**:
  - [ ] Synthetic fixture's exports decoded
  - [ ] Recursion bounded (depth cap 32)

  **QA Scenarios**:
  ```
  Scenario: Export trie decoded
    Tool: Bash
    Steps:
      1. cargo test -p unlace-loader macho_export_trie 2>&1 | grep "test result"
    Expected Result: ≥1 new test passes
    Evidence: .sisyphus/evidence/p10-24-export.txt
  ```

  **Commit**: `feat(loader): Mach-O LC_DYLD_INFO EXPORT trie decoder`

- [ ] P10-25. Apply relocations: populate BinaryImage.relocations

  **What to do**:
  - Consolidate output of P10-22 (REBASE) + P10-23 (BIND) into BinaryImage.relocations.
  - Each REBASE → `Relocation { addr, sym_name: "", kind: RelocKind::Relative }`.
  - Each BIND → `Relocation { addr, sym_name: format!("dylib!{name}"), kind: RelocKind::GlobDat }`.
  - Verify `relocations` is no longer `Vec::new()` after this task on the synthetic fixture.

  **Recommended Agent Profile**:
  - **Subagent**: `general`

  **Parallelization**:
  - **Can Run In Parallel**: NO (depends on P10-22, P10-23)
  - **Wave**: 4
  - **Blocks**: P10-34, Wave 6
  - **Blocked By**: P10-22, P10-23

  **References**:
  - `crates/unlace-loader/src/pe.rs::load_base_relocations` (P9-18) — convention for `RelocKind` mapping

  **Acceptance Criteria**:
  - [ ] BinaryImage.relocations.len() > 0 on synthetic Mach-O fixture
  - [ ] Both REBASE and BIND entries appear

  **QA Scenarios**:
  ```
  Scenario: Relocations populated
    Tool: Bash
    Steps:
      1. cargo test -p unlace-loader macho_relocations_populated 2>&1 | grep "test result"
    Expected Result: ≥1 new test passes
    Evidence: .sisyphus/evidence/p10-25-reloc.txt
  ```

  **Commit**: `feat(loader): Mach-O relocation table population from REBASE+BIND streams`

- [ ] P10-26. Per-page chained fixup walking (DYLD_CHAINED_PTR_64 + ARM64E)

  **What to do**:
  - Extend P9-21's chained-fixup imports parser. Walk the per-segment `dyld_chained_starts_in_image` and per-page `dyld_chained_starts_in_segment`.
  - For each page-start, walk the chain following the next-pointer-delta in each entry until end-of-page (next == 0).
  - Decode entry pointer formats:
    - `DYLD_CHAINED_PTR_64` (2): 51-bit target VA, 12-bit next, 1 bit for is-bind
    - `DYLD_CHAINED_PTR_ARM64E` (1): 43-bit target, 11-bit next, 13 bits for auth/diversity
  - Each chain entry → BinaryImage.relocations push (RelocKind::Relative or GlobDat depending on is-bind).

  **Must NOT do**:
  - Decode all 14+ chained-pointer formats (cap at the 2 most common for ARM64 iOS).
  - Apply the actual relocation to section data.

  **Recommended Agent Profile**:
  - **Subagent**: `general`

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Wave**: 4
  - **Blocks**: P10-34
  - **Blocked By**: None (extends P9-21 codepath)

  **References**:
  - dyld `mach-o/fixup-chains.h` — full format spec
  - `crates/unlace-loader/src/macho.rs::merge_chained_imports` (P9-21) — extension point

  **Acceptance Criteria**:
  - [ ] Real iOS Mach-O fixture (P10-34) shows ≥ 1 chained-fixup relocation
  - [ ] Chain walking bounded (max 1024 entries per page, prevents pathological loops)

  **QA Scenarios**:
  ```
  Scenario: Chained fixups walked
    Tool: Bash
    Steps:
      1. cargo test -p unlace-loader macho_chain_walk 2>&1 | grep "test result"
    Expected Result: ≥1 new test passes
    Evidence: .sisyphus/evidence/p10-26-chain.txt
  ```

  **Commit**: `feat(loader): Mach-O per-page chained-fixup chain walking (PTR_64 + ARM64E)`

- [ ] P10-27. Stub recognition (__stubs / __la_symbol_ptr / __nl_symbol_ptr)

  **What to do**:
  - Identify Mach-O sections by name + flags:
    - `__TEXT.__stubs` (S_SYMBOL_STUBS): each stub is N bytes (`reserved2`), maps to indirect_symbols[reserved1 + i]
    - `__DATA.__la_symbol_ptr` (S_LAZY_SYMBOL_POINTERS): each pointer maps to indirect_symbols[reserved1 + i]
    - `__DATA.__nl_symbol_ptr` (S_NON_LAZY_SYMBOL_POINTERS): same
  - For each stub, look up the LC_SYMTAB nlist entry via the indirect index → get the function name.
  - Add to BinaryImage.symbols with the stub's address + the resolved name.

  **Recommended Agent Profile**:
  - **Subagent**: `general`

  **Parallelization**:
  - **Can Run In Parallel**: NO (depends on P10-21)
  - **Wave**: 4
  - **Blocks**: P10-34
  - **Blocked By**: P10-21

  **References**:
  - `references/ida/loaders/macho/process_stubs_3236.c` (3.2 KB) — IDA reference
  - Apple `mach-o/loader.h` S_SYMBOL_STUBS, S_LAZY_SYMBOL_POINTERS, S_NON_LAZY_SYMBOL_POINTERS constants

  **Acceptance Criteria**:
  - [ ] Stubs in synthetic fixture are named
  - [ ] BinaryImage.symbols includes resolved stub addresses

  **QA Scenarios**:
  ```
  Scenario: Stubs recognized
    Tool: Bash
    Steps:
      1. cargo test -p unlace-loader macho_stubs 2>&1 | grep "test result"
    Expected Result: ≥1 new test passes
    Evidence: .sisyphus/evidence/p10-27-stubs.txt
  ```

  **Commit**: `feat(loader): Mach-O stub recognition (__stubs / __la_symbol_ptr / __nl_symbol_ptr)`

- [ ] P10-28. LC_LOAD_DYLIB + LC_RPATH dependency tracking

  **What to do**:
  - Walk load commands, capture LC_LOAD_DYLIB / LC_LOAD_WEAK_DYLIB / LC_REEXPORT_DYLIB / LC_LAZY_LOAD_DYLIB / LC_LOAD_UPWARD_DYLIB:
    - `path: String` (from LcStr offset), `current_version: u32`, `compatibility_version: u32`, `kind: DylibKind` (Load/Weak/Reexport/...)
  - Walk LC_RPATH commands → `Vec<String>` of search paths.
  - Add `dylibs: Vec<DylibDep>` and `rpaths: Vec<String>` to BinaryImage.

  **Recommended Agent Profile**:
  - **Subagent**: `general`

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Wave**: 4
  - **Blocks**: nothing
  - **Blocked By**: None

  **References**:
  - `object` crate `LoadCommandData::dylib` and `Rpath` already expose these — verify (Metis Q1d)

  **Acceptance Criteria**:
  - [ ] Real iOS fixture (P10-34) shows ≥ 5 dylibs (e.g., libSystem, Foundation, UIKit)
  - [ ] BinaryImage exposes dylibs + rpaths

  **QA Scenarios**:
  ```
  Scenario: Dylibs + rpaths captured
    Tool: Bash
    Steps:
      1. cargo test -p unlace-loader macho_dylibs 2>&1 | grep "test result"
    Expected Result: ≥1 new test passes
    Evidence: .sisyphus/evidence/p10-28-dylibs.txt
  ```

  **Commit**: `feat(loader): Mach-O LC_LOAD_DYLIB + LC_RPATH dependency tracking`

### Wave 5 — ARM64 Lifter Extension (6 tasks)

> Per Metis Discovery #1: lifter has 33 mnemonics already (NOT a stub). Wave 5 EXTENDS to ~48. Per Metis G1: cap at ARMv8.0 + ARMv8.1 atomics. NO NEON/SVE/Thumb/PACIA. Real iOS Mach-O ARM64 binary (Chase or KCM) is the integration fixture.

- [ ] P10-29. Capstone instance caching via thread_local! (perf fix)

  **What to do**:
  - Refactor `crates/unlace-lift-arm/src/lift.rs::lift_insn` to use a `thread_local!` Capstone instance instead of constructing one per instruction.
  - Pattern: `thread_local! { static ARM64_CS: RefCell<Option<Capstone>> = const { RefCell::new(None) }; }`. Lazy-init on first use.
  - Per Metis R5 risk: Capstone is `!Sync`; thread_local! avoids Mutex contention under rayon parallelism.
  - Verify the existing 25+ ARM64 lifter tests still pass after refactor.

  **Must NOT do**:
  - Use `Mutex<Capstone>` (contention under rayon).
  - Make Capstone instance a struct field (`Lifter: Send + Sync` would break since Capstone is !Sync).

  **Recommended Agent Profile**:
  - **Subagent**: `general`

  **Parallelization**:
  - **Can Run In Parallel**: YES (no dependencies)
  - **Wave**: 5
  - **Blocks**: P10-30..33 (faster iteration)
  - **Blocked By**: None

  **References**:
  - `crates/unlace-lift-x86/src/lift.rs` — iced-x86 doesn't have this issue, but x86 lifter pattern is reference for caching style
  - `crates/unlace-lift-arm/src/lift.rs::Self::make_capstone` — current per-call construction

  **Acceptance Criteria**:
  - [ ] All existing ARM64 tests pass
  - [ ] No `Capstone::new` on hot path

  **QA Scenarios**:
  ```
  Scenario: ARM64 tests still pass after caching refactor
    Tool: Bash
    Steps:
      1. cargo test -p unlace-lift-arm 2>&1 | grep "test result"
    Expected Result: existing 25+ tests still pass
    Evidence: .sisyphus/evidence/p10-29-cs-cache.txt
  ```

  **Commit**: `perf(lift-arm): cache Capstone instance via thread_local for ARM64 lifter`

- [ ] P10-30. Lift MUL / SDIV / UDIV / MADD / MSUB

  **What to do**:
  - Add match arms in `crates/unlace-lift-arm/src/lift.rs` for `Arm64Insn::ARM64_INS_MUL`, `ARM64_INS_SDIV`, `ARM64_INS_UDIV`, `ARM64_INS_MADD`, `ARM64_INS_MSUB`.
  - MUL = IntMult; SDIV = IntSdiv; UDIV = IntDiv; MADD = (a*b)+c; MSUB = c-(a*b).
  - Match the pattern from existing arithmetic.rs (ADD/SUB).
  - Each lift produces appropriate IR ops with proper Varnode size handling.

  **Recommended Agent Profile**:
  - **Subagent**: `general`

  **Parallelization**:
  - **Can Run In Parallel**: YES (with P10-31, P10-32, P10-33)
  - **Wave**: 5
  - **Blocks**: P10-34
  - **Blocked By**: P10-29

  **References**:
  - `crates/unlace-lift-arm/src/ops/arithmetic.rs` — extension target
  - `crates/unlace-lift-x86/src/ops/arithmetic.rs` — for IntMult/IntSdiv/IntDiv emission patterns

  **Acceptance Criteria**:
  - [ ] 5 new unit tests (one per mnemonic)
  - [ ] No `Unimplemented` emitted for these mnemonics

  **QA Scenarios**:
  ```
  Scenario: MUL/SDIV/UDIV/MADD/MSUB
    Tool: Bash
    Steps:
      1. cargo test -p unlace-lift-arm 'arm64_(mul|sdiv|udiv|madd|msub)' 2>&1 | grep "test result"
    Expected Result: 5 new tests pass
    Evidence: .sisyphus/evidence/p10-30-mul-div.txt
  ```

  **Commit**: `feat(lift-arm): lift MUL/SDIV/UDIV/MADD/MSUB`

- [ ] P10-31. Lift CSEL / CSINC / CSINV / CSNEG conditional select family

  **What to do**:
  - Add match arms for ARM64_INS_CSEL, CSINC, CSINV, CSNEG.
  - CSEL = `cond ? rn : rm`. CSINC = `cond ? rn : rm+1`. CSINV = `cond ? rn : ~rm`. CSNEG = `cond ? rn : -rm`.
  - Use `BoolNegate` + `IntCondSelect`-style lowering to build the conditional value.
  - Read condition code from capstone's `arch_detail().arm64().cc()`.

  **Must NOT do**:
  - Implement CCMP/CCMN (Metis SC2: out of scope).

  **Recommended Agent Profile**:
  - **Subagent**: `general`

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Wave**: 5
  - **Blocks**: P10-34
  - **Blocked By**: P10-29

  **References**:
  - ARM ARMv8-A reference manual § C6 (CSEL family)
  - `crates/unlace-lift-arm/src/ops/control_flow.rs` — for cc decoding pattern

  **Acceptance Criteria**:
  - [ ] 4 new unit tests (one per mnemonic)
  - [ ] Condition codes properly decoded

  **QA Scenarios**:
  ```
  Scenario: CSEL family
    Tool: Bash
    Steps:
      1. cargo test -p unlace-lift-arm 'arm64_cs(el|inc|inv|neg)' 2>&1 | grep "test result"
    Expected Result: 4 new tests pass
    Evidence: .sisyphus/evidence/p10-31-csel.txt
  ```

  **Commit**: `feat(lift-arm): lift CSEL/CSINC/CSINV/CSNEG conditional-select family`

- [ ] P10-32. Lift UBFM / SBFM / EXTR bitfield ops

  **What to do**:
  - Add match arms for ARM64_INS_UBFM, SBFM, EXTR.
  - UBFM = unsigned bitfield move (LSL/LSR/UBFX/UBFIZ aliases). Lift as `(rn >> immr) & mask` for shift forms.
  - SBFM = signed variant (LSL/ASR/SBFX/SBFIZ aliases). Lift as IntSright + mask, with sign extension.
  - EXTR = extract bit field across two registers: `(rm:rn) >> lsb` for 64-bit.
  - Capstone may already alias these to LSL/LSR/UBFX etc. — handle BOTH the alias form and the raw UBFM/SBFM mnemonic.

  **Recommended Agent Profile**:
  - **Subagent**: `general`

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Wave**: 5
  - **Blocks**: P10-34
  - **Blocked By**: P10-29

  **References**:
  - ARM ARMv8-A reference manual § C6 (UBFM/SBFM/EXTR)
  - `crates/unlace-lift-arm/src/ops/bitwise.rs` — extension target

  **Acceptance Criteria**:
  - [ ] 3 new unit tests (UBFM/SBFM/EXTR)
  - [ ] Handles both alias and raw forms

  **QA Scenarios**:
  ```
  Scenario: Bitfield ops
    Tool: Bash
    Steps:
      1. cargo test -p unlace-lift-arm 'arm64_(ubfm|sbfm|extr)' 2>&1 | grep "test result"
    Expected Result: 3 new tests pass
    Evidence: .sisyphus/evidence/p10-32-bitfield.txt
  ```

  **Commit**: `feat(lift-arm): lift UBFM/SBFM/EXTR bitfield operations`

- [ ] P10-33. Lift LDXR/STXR exclusive pairs + DMB/DSB/ISB barriers

  **What to do**:
  - Add match arms for ARM64_INS_LDXR/LDAXR/STXR/STLXR (exclusive load/store) and DMB/DSB/ISB (memory barriers).
  - LDXR = atomic load with exclusivity reservation: emit `Callother("__ldrex__", addr)`.
  - STXR = atomic store with success flag: emit `Callother("__strex__", val, addr)` returning success indicator.
  - DMB/DSB/ISB = full memory/instruction barrier: emit `Callother("__dmb__")` / `__dsb__` / `__isb__`.
  - Match Phase 9 P9-14 (CMPXCHG) Callother convention.

  **Recommended Agent Profile**:
  - **Subagent**: `general`

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Wave**: 5
  - **Blocks**: P10-34
  - **Blocked By**: P10-29

  **References**:
  - ARM ARMv8-A reference manual § C6 atomics + barriers
  - `crates/unlace-lift-x86/src/ops/atomics.rs` (P9-14) — Callother convention

  **Acceptance Criteria**:
  - [ ] 6 new unit tests (LDXR/LDAXR/STXR/STLXR/DMB/DSB/ISB)
  - [ ] All emit Callother (not Unimplemented)

  **QA Scenarios**:
  ```
  Scenario: Atomics + barriers
    Tool: Bash
    Steps:
      1. cargo test -p unlace-lift-arm 'arm64_(ldxr|stxr|dmb|dsb|isb)' 2>&1 | grep "test result"
    Expected Result: ≥6 new tests pass
    Evidence: .sisyphus/evidence/p10-33-atomics.txt
  ```

  **Commit**: `feat(lift-arm): lift LDXR/STXR exclusive pairs + DMB/DSB/ISB barriers`

- [ ] P10-34. Real iOS Mach-O ARM64 integration fixture (Chase or KCM)

  **What to do**:
  - Copy `~/RustProjects/active/iphonern/decrypted/kcm/KCM` (~smaller of the two) to `fixtures/ios_kcm.arm64.macho`.
  - Add `tests/golden/expected/ios_kcm.c` initially via `UPDATE_GOLDEN=1`.
  - Add `golden_ios_kcm` test to `crates/unlace-test-harness/tests/golden_fixtures.rs`.
  - Acceptance: decompile succeeds (exit 0), output contains ≥3 distinct function signatures.
  - This fixture exercises Wave 4 (Mach-O loader: REBASE/BIND/EXPORT/stubs) AND Wave 5 (ARM64 lifter: MUL/CSEL/UBFM/atomics) end-to-end on a real iOS executable.

  **Must NOT do**:
  - Use Chase if it's >5MB (too large for golden); pick the smaller binary.
  - Strip the fixture (we want symbols + LC_DYLD_INFO data intact).

  **Recommended Agent Profile**:
  - **Subagent**: `general`

  **Parallelization**:
  - **Can Run In Parallel**: NO (depends on P10-25, P10-26, P10-27, P10-30..33)
  - **Wave**: 5
  - **Blocks**: Wave 6
  - **Blocked By**: P10-25, P10-26, P10-27, P10-30, P10-31, P10-32, P10-33

  **References**:
  - `~/VulnerabilityResearch/chase/Chase` (Mach-O 64-bit arm64 — banking app)
  - `~/RustProjects/active/iphonern/decrypted/kcm/KCM` (Mach-O 64-bit arm64 — preferred if smaller)

  **Acceptance Criteria**:
  - [ ] `fixtures/ios_kcm.arm64.macho` exists
  - [ ] `unlace decompile` exits 0 within 60s timeout
  - [ ] Output contains ≥3 function signatures (`<type> <name>(...)` regex)
  - [ ] BinaryImage.relocations.len() > 100 (real-world binary has many relocs)
  - [ ] BinaryImage.dylibs.len() > 0 (e.g., libSystem)

  **QA Scenarios**:
  ```
  Scenario: iOS binary decompiles
    Tool: Bash
    Steps:
      1. cp ~/RustProjects/active/iphonern/decrypted/kcm/KCM fixtures/ios_kcm.arm64.macho || cp ~/VulnerabilityResearch/chase/Chase fixtures/ios_kcm.arm64.macho
      2. file fixtures/ios_kcm.arm64.macho | grep "Mach-O 64-bit arm64"
      3. timeout 60 ./target/debug/unlace decompile fixtures/ios_kcm.arm64.macho --emit c -o /tmp/p10-34.c
      4. grep -cE "^[a-z_].*\(.*\) \{" /tmp/p10-34.c
    Expected Result: file recognized, exit 0, ≥3 functions emitted
    Evidence: .sisyphus/evidence/p10-34-ios.txt
  ```

  **Commit**: `feat(fixtures): real iOS Mach-O ARM64 integration fixture (KCM)`

### Wave 6 — Polish + Final Scores (4 tasks)

- [ ] P10-35. Refresh all goldens after type recovery + lifters

  **What to do**:
  - `UPDATE_GOLDEN=1 cargo test -p unlace-test-harness --test golden_fixtures`.
  - This produces a final golden snapshot reflecting Wave 1 (output quality) + Wave 2 (type recovery) + Wave 5 (real iOS fixture) changes.
  - Per-fixture regression check vs `.sisyphus/evidence/p10-baseline-metrics.txt`: no fixture's gotos may have increased by > 2 (Metis G5 — re-verify).
  - Capture new metrics to `.sisyphus/evidence/p10-35-final-metrics.txt`.

  **Recommended Agent Profile**:
  - **Subagent**: `general`

  **Parallelization**:
  - **Can Run In Parallel**: NO
  - **Wave**: 6
  - **Blocks**: P10-36, P10-37, P10-F1
  - **Blocked By**: All Waves 1-5

  **Acceptance Criteria**:
  - [ ] All 9+ fixtures' goldens refreshed (8 + ios_kcm + arm64_features)
  - [ ] No fixture's gotos increased by > 2

  **QA Scenarios**:
  ```
  Scenario: Final golden refresh
    Tool: Bash
    Steps:
      1. UPDATE_GOLDEN=1 cargo test -p unlace-test-harness --test golden_fixtures 2>&1 | grep "test result"
      2. for f in tests/golden/expected/*.c; do echo "$(basename $f .c) gotos=$(grep -c goto $f)"; done > /tmp/p10-35.txt
      3. diff <(awk '{print $1, $NF}' .sisyphus/evidence/p10-baseline-metrics.txt) <(awk '{print $1, $NF}' /tmp/p10-35.txt)
    Expected Result: all goldens refreshed, no fixture +>2 gotos
    Evidence: .sisyphus/evidence/p10-35-final-metrics.txt
  ```

  **Commit**: `chore(goldens): Phase 10 final golden refresh after Waves 1-5`

- [ ] P10-36. Update reference_metrics.toml for new fixtures

  **What to do**:
  - Add IDA-equivalent reference metrics to `tests/golden/reference_metrics.toml` for the new fixtures: `[arm64_features]` and `[ios_kcm]`.
  - Counts are best-effort (no real IDA reference for these — set conservative targets that the Phase 10 score scales naturally toward).
  - Suggested: arm64_features `if_count=2 for_count=0 while_count=0 return_count=4 goto_count=0 var_count=8 line_count=80`. ios_kcm needs a sample-based estimate (run IDA Hex-Rays on the file if available, else mark as `# TODO IDA reference` and skip from aggregate).

  **Recommended Agent Profile**:
  - **Subagent**: `general`

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Wave**: 6
  - **Blocks**: P10-37
  - **Blocked By**: P10-3, P10-34

  **References**:
  - `tests/golden/reference_metrics.toml` (Phase 9 P9-1 added the format)

  **Acceptance Criteria**:
  - [ ] reference_metrics.toml has entries for arm64_features and ios_kcm
  - [ ] `cargo test -p unlace-test-harness reference_metrics_file_loads_for_all_fixtures` passes

  **QA Scenarios**:
  ```
  Scenario: Reference metrics complete
    Tool: Bash
    Steps:
      1. grep -c "^\[" tests/golden/reference_metrics.toml
    Expected Result: ≥10 fixture sections
    Evidence: .sisyphus/evidence/p10-36-refmetrics.txt
  ```

  **Commit**: `chore(tests): reference metrics entries for new arm64 + ios fixtures`

- [ ] P10-37. Final aggregate parity score + delta vs baseline

  **What to do**:
  - Run `bash scripts/score_parity.sh` and capture aggregate.
  - Compute delta vs `.sisyphus/evidence/p10-baseline-metrics.txt` aggregate (was 59.6%).
  - Acceptance: aggregate ≥ 62% (Metis-mandated 3-point improvement target).
  - If aggregate is below target, investigate which fixture regressed and document.
  - Save to `.sisyphus/evidence/p10-37-final-score.txt`.

  **Recommended Agent Profile**:
  - **Subagent**: `general`

  **Parallelization**:
  - **Can Run In Parallel**: NO
  - **Wave**: 6
  - **Blocks**: P10-38, P10-F1
  - **Blocked By**: P10-35, P10-36

  **Acceptance Criteria**:
  - [ ] Aggregate parity ≥ 62%
  - [ ] Per-fixture deltas captured

  **QA Scenarios**:
  ```
  Scenario: Final parity score
    Tool: Bash
    Steps:
      1. bash scripts/score_parity.sh > /tmp/p10-37.txt 2>&1
      2. grep "Aggregate" /tmp/p10-37.txt
    Expected Result: percentage ≥ 62.0
    Evidence: .sisyphus/evidence/p10-37-final-score.txt
  ```

  **Commit**: `chore(boulder): Phase 10 final parity score + delta`

- [ ] P10-38. Phase 10 quality report (per-fixture + per-wave deltas)

  **What to do**:
  - Write `.sisyphus/evidence/p10-38-quality-report.txt` containing:
    - Test count: before (1359) vs after
    - Aggregate parity: 59.6% → final
    - Per-fixture goto/if/var deltas (from P10-0 vs P10-35)
    - Per-wave bullet summary of what landed
    - Known follow-up work (carry forward to Phase 11 plan)
  - This is the human-readable Phase 10 retrospective.

  **Recommended Agent Profile**:
  - **Subagent**: `writing` (human-readable narrative)

  **Parallelization**:
  - **Can Run In Parallel**: NO
  - **Wave**: 6
  - **Blocks**: P10-F1
  - **Blocked By**: P10-37

  **Acceptance Criteria**:
  - [ ] Report file exists
  - [ ] All 7 waves summarized
  - [ ] Per-fixture deltas tabulated

  **QA Scenarios**:
  ```
  Scenario: Quality report generated
    Tool: Bash
    Steps:
      1. wc -l .sisyphus/evidence/p10-38-quality-report.txt
      2. grep -c "Wave " .sisyphus/evidence/p10-38-quality-report.txt
    Expected Result: ≥80 lines, 7 wave entries
    Evidence: .sisyphus/evidence/p10-38-quality-report.txt
  ```

  **Commit**: `chore(boulder): Phase 10 quality report + Phase 11 follow-up notes`

---

## Final Verification Wave (MANDATORY — after ALL implementation tasks)

> 4 review agents run in PARALLEL. ALL must APPROVE. Present consolidated results to user and get explicit "okay" before completing.
>
> **Do NOT auto-proceed after verification. Wait for user's explicit approval before marking work complete.**

- [ ] P10-F1. **Comprehensive Quality Review** — `general` + parallel oracle / general / general / general

  **What to do**:
  - Run `cargo test --workspace 2>&1 | grep -E "^test result:"` and aggregate pass/fail counts
  - Run `cargo xtask lint-determinism`
  - Run `bash scripts/score_parity.sh` and capture aggregate
  - Compare per-fixture goto/if counts vs Wave 0 baseline (must show no regression > 2 gotos per fixture)
  - Verify medium.c gotos ≤ 15 AND ifs ≥ 35
  - Verify aggregate parity ≥ 62%
  - Verify ARM64 lifter mnemonic count ≥ 48 via `grep -c "M::" crates/unlace-lift-arm/src/lift.rs`
  - Verify Mach-O loader populates `relocations` (not `Vec::new()`) for at least one fixture
  - Verify PE loader exposes RuntimeFunction array on the .pdata fixture
  - Verify real iOS Mach-O ARM64 binary decompiles ≥3 functions

  **Acceptance Criteria**:
  - [ ] cargo test --workspace: ≥ 1400 tests, 0 failures
  - [ ] cargo xtask lint-determinism: OK
  - [ ] medium.c gotos ≤ 15
  - [ ] medium.c ifs ≥ 35
  - [ ] aggregate parity ≥ 62%
  - [ ] no fixture's goto count increased by > 2 vs Wave 0 baseline
  - [ ] real iOS Mach-O ARM64 fixture decompiles without panic, ≥3 functions

  **QA Scenarios**:
  ```
  Scenario: Final verification
    Tool: Bash
    Steps:
      1. cargo test --workspace 2>&1 | grep "^test result:" | awk '{p+=$4; f+=$6} END {print "PASS:"p" FAIL:"f}'
      2. cargo xtask lint-determinism 2>&1 | grep -E "(OK|FAIL)"
      3. grep -c "goto" tests/golden/expected/medium.c
      4. grep -c "\bif\b" tests/golden/expected/medium.c
      5. bash scripts/score_parity.sh 2>&1 | grep "Aggregate"
      6. ./target/debug/unlace decompile fixtures/ios_kcm.arm64.macho --emit c --timeout 60 2>&1 | grep -c "^[a-z_].*("
    Expected Result: All gates green
    Evidence: .sisyphus/evidence/p10-f1-quality.txt

  Scenario: Per-fixture goto regression check
    Tool: Bash
    Steps:
      1. for f in $(ls tests/golden/expected/*.c); do echo "$(basename $f .c): gotos=$(grep -c goto $f)"; done > .sisyphus/evidence/p10-f1-per-fixture.txt
      2. diff .sisyphus/evidence/p10-baseline-metrics.txt .sisyphus/evidence/p10-f1-per-fixture.txt
    Expected Result: No fixture's goto count increased by > 2
    Evidence: .sisyphus/evidence/p10-f1-per-fixture.txt
  ```

  **Commit**: NO (verification only)

---

## Commit Strategy

One commit per task following Phase 9 convention:
- `feat(loader): ...` for PE/Mach-O additions
- `feat(passes): ...` for new idiom recognition / type recovery
- `feat(lift-arm): ...` for new ARM64 mnemonics
- `fix(struct): ...` for node_split retune
- `chore(goldens): ...` for golden refreshes
- `chore: Phase 10 P10-N evidence + plan tracking` for boulder/evidence updates

Pre-push hook (`cargo check`) must pass on every push.

---

## Success Criteria

### Verification Commands
```bash
cargo test --workspace 2>&1 | grep "^test result:" | awk '{p+=$4} END {print "Total:"p}'  # ≥ 1400
cargo xtask lint-determinism                                                              # OK
grep -c "goto" tests/golden/expected/medium.c                                              # ≤ 15
grep -c "\bif\b" tests/golden/expected/medium.c                                           # ≥ 35
bash scripts/score_parity.sh | grep Aggregate                                              # ≥ 62%
grep -c "^M::" crates/unlace-lift-arm/src/lift.rs                                          # ≥ 48
```

### Final Checklist
- [ ] All "Must Have" present
- [ ] All "Must NOT Have" absent (lint-determinism + grep audit)
- [ ] All 42 implementation tasks complete
- [ ] All evidence files in `.sisyphus/evidence/p10-*.txt`
- [ ] Pushed to GitHub
- [ ] Wave 0 baseline metrics captured BEFORE Wave 1 changes
- [ ] Per-task golden refresh (no batched refresh)
