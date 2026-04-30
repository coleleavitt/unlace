# unlace Phase 9 — Structurer Quality + x87 FPU + Loader Improvements

## TL;DR

> **Quick Summary**: Improve decompilation quality by (1) creating a fixture-based parity scoring system, (2) adding node splitting + if-else flattening to reduce gotos from 12 to <5 in medium.elf, (3) lifting x87 FPU instructions via Callother pattern, (4) lifting remaining x86 atomics/string ops, (5) improving PE/Mach-O loaders with relocations, and (6) adding _OWORD type + output annotations.
>
> **Key Insight (Metis)**: Structurer improvements must be PRE-passes (node splitting) and POST-passes (if-else flattening), NOT modifications to the core `structure()` function. x87 FPU uses Callother stubs for MVP (full stack model deferred).
>
> **Scope**: 27 tasks across 6 waves. FLIRT deferred (code exists in references/plugins/makesig/ but needs external .sig database files).
>
> **Estimated Effort**: Large (6 waves, 27 tasks)
> **Parallel Execution**: YES — 3-4 concurrent tasks per wave
> **Critical Path**: Parity scoring → Structurer → x87 → Loaders

---

## Context

### Phase 8 Results
- 1005 tests passing, 58K LOC across 16 crates
- 122 x86 instruction patterns, 28 optimization passes
- C++ support: LSDA parser, RTTI scanner, vtable dispatch, demangling, exception annotation
- 8 test fixtures (including 3 C++ fixtures)
- medium.elf: 482 lines, 24 ifs, **12 gotos** (target: reduce gotos, increase ifs)

### Remaining Gaps (from all intelligence)
- **Structurer quality**: medium.elf 24 ifs vs IDA's 60+ — 12 gotos from irreducible fallback
- **x87 FPU**: Zero support (FLD, FST, FADD, FSUB, FMUL, FDIV, etc.)
- **x86 atomics**: No CMPXCHG, XADD, LOCK prefix, BSWAP, MOVBE
- **PE/Mach-O loaders**: Both hardcode `relocations: Vec::new()` — no relocation parsing
- **Output types**: No _OWORD (128-bit), no JUMPOUT(), no MEMORY[addr]
- **Parity metric**: hexx64.so metric broken, need fixture-based scoring

### Metis Review Key Points
1. Structurer: use pre-passes (node splitting) + post-passes (if-else flattening), NOT core rewrite
2. x87: use Callother stubs for MVP, cap at 8 mnemonics
3. Parity: extend golden test Metrics to produce scores, not just diffs
4. PE/Mach-O: prioritize relocations (both hardcode Vec::new())
5. FLIRT stays out (needs external .sig database)

### FLIRT Status
- Full implementation found in `references/plugins/makesig/` (360 decompiled functions)
- .sig file format: magic 0x53414449, hex byte patterns with wildcards, CRC verification
- Deferred — needs external signature database files (.sig/.pat) to be useful

---

## Work Objectives

### Definition of Done
- [ ] Parity scoring system produces stable fixture-based scores
- [ ] medium.elf gotos reduced from 12 to ≤ 6
- [ ] medium.elf ifs increased from 24 to ≥ 35
- [ ] x87 FPU instructions (FLD/FSTP/FADD/FSUB/FMUL/FDIV) don't crash
- [ ] CMPXCHG/XADD/BSWAP lifted
- [ ] PE relocations parsed (not Vec::new())
- [ ] `cargo test --workspace` passes with ≥ 1020 tests
- [ ] `cargo xtask lint-determinism` passes

### Must NOT Have
- No FLIRT implementation (needs external .sig files — defer)
- No multi-architecture work (ARM, MIPS — separate campaign)
- No LICM or alias analysis (research-grade — defer)
- No core structurer rewrite (pre/post passes only)
- No more than 8 x87 mnemonics
- No HashMap/HashSet

---

## Execution Strategy

```
Wave 0 (Parity Scoring — 3 tasks):
├── P9-0: Extend golden test Metrics to compute quality scores
├── P9-1: Add IDA reference metrics for fixtures (hand-annotated TOML)
└── P9-2: Create aggregate parity score script + capture baseline

Wave 1 (Structurer Quality — 5 tasks):
├── P9-3: Irreducible region detection (identify SCCs that aren't natural loops)
├── P9-4: Controlled node splitting pre-pass (duplicate entries to break irreducibility)
├── P9-5: If-else chain flattening post-pass (nested if → flat else-if)
├── P9-6: Condition simplification in flattened chains
└── P9-7: Update goldens + measure goto/if delta

Wave 2 (x87 FPU — 6 tasks):
├── P9-8: x87 FPU Callother tag registry (tag constants for FPU ops)
├── P9-9: Lift FLD/FSTP (load/store floating point)
├── P9-10: Lift FADD/FSUB (FP addition/subtraction)
├── P9-11: Lift FMUL/FDIV (FP multiplication/division)
├── P9-12: Lift FCOM/FXCH (FP compare/exchange)
└── P9-13: x87 integration test fixture + golden update

Wave 3 (x86 Misc — 4 tasks):
├── P9-14: Lift CMPXCHG + LOCK prefix (atomic compare-and-swap)
├── P9-15: Lift XADD (atomic exchange-and-add)
├── P9-16: Lift BSWAP/MOVBE (byte swap)
└── P9-17: Lift REP SCASB (string scan)

Wave 4 (PE/Mach-O Loaders — 5 tasks):
├── P9-18: PE relocation parsing (.reloc section)
├── P9-19: PE delay-load imports + TLS directory
├── P9-20: Mach-O LC_FUNCTION_STARTS parsing
├── P9-21: Mach-O chained fixups (modern dyld)
└── P9-22: Loader test fixtures (PE + Mach-O)

Wave 5 (Output Polish — 4 tasks):
├── P9-23: _OWORD type for 128-bit SSE values
├── P9-24: JUMPOUT() + MEMORY[addr] annotations
├── P9-25: Final golden file updates + score comparison
└── P9-26: Parity score report (baseline vs final)

Wave FINAL (Verification — 1 task):
└── P9-F1: Comprehensive quality review + regression check
```

---

## TODOs

- [ ] P9-0. Extend golden test Metrics to compute quality scores

  **What to do**:
  - In `crates/unlace-test-harness/tests/golden_fixtures.rs`:
    - Extend the existing `Metrics` struct to compute a quality score per fixture
    - Score formula: weighted sum of feature matches against reference values
    - Features: if_count (weight 3), for_count (weight 3), while_count (weight 3), return_count (weight 2), goto_count (weight -2, penalty), var_count (weight -1, penalty for excess)
    - Score = Σ(weight × min(actual/reference, 1.0)) for positive features, minus penalties
    - Print score to stderr with `--nocapture`

  **QA Scenarios**:
  ```
  Scenario: Quality scores printed
    Tool: Bash
    Steps:
      1. cargo test -p unlace-test-harness --test golden_fixtures -- --nocapture 2>&1 | grep "score"
      2. Assert score lines present for each fixture
    Expected Result: Per-fixture quality scores printed
    Evidence: .sisyphus/evidence/p9-0-scoring.txt
  ```

  **Commit**: `feat(tests): fixture-based quality scoring in golden tests`

- [ ] P9-1. Add IDA reference metrics for fixtures

  **What to do**:
  - Create `tests/golden/reference_metrics.toml` with hand-annotated IDA-equivalent metrics:
    ```toml
    [medium]
    if_count = 60
    for_count = 5
    while_count = 3
    return_count = 8
    goto_count = 0
    var_count = 30

    [debug_calls]
    if_count = 5
    ...
    ```
  - Load these in golden_fixtures.rs and use for scoring

  **QA Scenarios**:
  ```
  Scenario: Reference metrics loaded
    Tool: Bash
    Steps:
      1. cat tests/golden/reference_metrics.toml
      2. Assert file exists with metrics for all fixtures
    Expected Result: TOML file with IDA-equivalent metrics
    Evidence: .sisyphus/evidence/p9-1-reference.txt
  ```

  **Commit**: `feat(tests): IDA reference metrics for fixture-based scoring`

- [ ] P9-2. Create aggregate parity score + capture baseline

  **What to do**:
  - Write `scripts/score_parity.sh` that runs golden tests and extracts scores
  - Compute aggregate: average of per-fixture scores
  - Save baseline to `.sisyphus/evidence/p9-2-baseline.txt`

  **QA Scenarios**:
  ```
  Scenario: Aggregate score computed
    Tool: Bash
    Steps:
      1. bash scripts/score_parity.sh
      2. Assert produces a single percentage number
    Expected Result: Aggregate parity score (e.g., 45%)
    Evidence: .sisyphus/evidence/p9-2-baseline.txt
  ```

  **Commit**: `feat(scripts): aggregate parity score from fixture golden tests`

- [ ] P9-3. Irreducible region detection

  **What to do**:
  - WRITE `crates/unlace-struct/src/irreducible.rs` (new pre-pass)
  - Detect irreducible regions: SCCs (strongly connected components) that aren't natural loops
  - A natural loop has a single entry (loop header). An irreducible region has multiple entries.
  - Algorithm: Tarjan's SCC + check if SCC has single dominator-tree entry
  - Output: list of irreducible region block sets

  **QA Scenarios**:
  ```
  Scenario: Irreducible regions detected
    Tool: Bash
    Steps:
      1. cargo test -p unlace-struct -- irreducible
      2. Assert tests pass
    Expected Result: SCCs with multiple entries identified
    Evidence: .sisyphus/evidence/p9-3-irreducible.txt
  ```

  **Commit**: `feat(struct): irreducible region detection via Tarjan SCC`

- [ ] P9-4. Controlled node splitting pre-pass

  **What to do**:
  - WRITE `crates/unlace-struct/src/node_split.rs` (new pre-pass)
  - For each irreducible region: duplicate entry nodes to create single-entry regions
  - Algorithm: for each entry node E in an irreducible SCC, split E into E_1, E_2, ... where each copy has edges only from predecessors outside the SCC
  - This makes the region reducible → structurer can handle it without gotos
  - Run BEFORE the main structurer

  **QA Scenarios**:
  ```
  Scenario: Node splitting reduces gotos
    Tool: Bash
    Steps:
      1. cargo test -p unlace-struct -- node_split
      2. Assert tests pass
    Expected Result: Irreducible regions become reducible after splitting
    Evidence: .sisyphus/evidence/p9-4-nodesplit.txt
  ```

  **Commit**: `feat(struct): controlled node splitting to break irreducible regions`

- [ ] P9-5. If-else chain flattening post-pass

  **What to do**:
  - WRITE `crates/unlace-struct/src/flatten_if_else.rs` (new post-pass)
  - Detect deeply nested if-else chains and flatten to else-if:
    ```
    if (a) { X } else { if (b) { Y } else { if (c) { Z } } }
    → if (a) { X } else if (b) { Y } else if (c) { Z }
    ```
  - Walk HIR looking for If nodes where the else_body is a single If node
  - Flatten recursively
  - Run after structuring, before C emission

  **QA Scenarios**:
  ```
  Scenario: Nested ifs flattened
    Tool: Bash
    Steps:
      1. cargo test -p unlace-struct -- flatten
      2. Assert tests pass
    Expected Result: Nested if-else chains flattened to else-if
    Evidence: .sisyphus/evidence/p9-5-flatten.txt
  ```

  **Commit**: `feat(struct): if-else chain flattening post-pass`

- [ ] P9-6. Condition simplification in flattened chains

  **What to do**:
  - Extend condition_simplify.rs or create new pass:
  - After flattening, simplify conditions in if-else-if chains:
    - Merge identical conditions: `if (a) X; else if (a) Y` → `if (a) { X; Y; }`
    - Simplify complementary: `if (a > 0) X; else if (a <= 0) Y` → `if (a > 0) X; else Y;`

  **QA Scenarios**:
  ```
  Scenario: Conditions simplified
    Tool: Bash
    Steps:
      1. cargo test -p unlace-struct -- cond_simplify_chain
      2. Assert tests pass
    Expected Result: Redundant conditions in chains simplified
    Evidence: .sisyphus/evidence/p9-6-condsimplify.txt
  ```

  **Commit**: `feat(struct): condition simplification in flattened if-else chains`

- [ ] P9-7. Update goldens + measure goto/if delta

  **What to do**:
  - Run `UPDATE_GOLDEN=1 cargo test -p unlace-test-harness --test golden_fixtures`
  - Compare medium.elf: goto count (target: 12 → ≤ 6), if count (target: 24 → ≥ 35)
  - Run parity score and compare against baseline

  **QA Scenarios**:
  ```
  Scenario: Structurer improvements measured
    Tool: Bash
    Steps:
      1. grep -c "goto" tests/golden/expected/medium.c
      2. grep -c "if" tests/golden/expected/medium.c
      3. Assert gotos ≤ 6 and ifs ≥ 30
    Expected Result: Fewer gotos, more ifs in medium.elf
    Evidence: .sisyphus/evidence/p9-7-delta.txt
  ```

  **Commit**: `chore: update goldens after structurer improvements`

- [ ] P9-8. x87 FPU Callother tag registry

  **What to do**:
  - In `crates/unlace-lift-x86/src/ops/` (new file `fpu.rs` or extend `sse.rs`):
  - Define Callother tags for x87 operations:
    ```rust
    pub mod fpu_tag {
        pub const FLD: u64 = 0x300;
        pub const FSTP: u64 = 0x301;
        pub const FADD: u64 = 0x302;
        pub const FSUB: u64 = 0x303;
        pub const FMUL: u64 = 0x304;
        pub const FDIV: u64 = 0x305;
        pub const FCOM: u64 = 0x306;
        pub const FXCH: u64 = 0x307;
    }
    ```
  - Add to IntrinsicRegistry with C-style names

  **QA Scenarios**:
  ```
  Scenario: FPU tags defined
    Tool: Bash
    Steps:
      1. cargo build -p unlace-lift-x86
      2. Assert builds
    Expected Result: FPU Callother tags defined
    Evidence: .sisyphus/evidence/p9-8-fpu-tags.txt
  ```

  **Commit**: `feat(lift-x86): x87 FPU Callother tag registry`

- [ ] P9-9. Lift FLD/FSTP

  **What to do**:
  - In lift.rs: add match arms for Mnemonic::Fld, Mnemonic::Fstp
  - FLD: load float from memory → emit Callother(FLD, [mem_addr])
  - FSTP: store float to memory + pop → emit Callother(FSTP, [mem_addr])

  **QA Scenarios**:
  ```
  Scenario: FLD/FSTP lifted
    Tool: Bash
    Steps:
      1. cargo test -p unlace-lift-x86 -- fld_fstp
      2. Assert tests pass
    Expected Result: FLD/FSTP produce Callother IR
    Evidence: .sisyphus/evidence/p9-9-fld.txt
  ```

  **Commit**: `feat(lift-x86): lift FLD/FSTP x87 floating-point load/store`

- [ ] P9-10. Lift FADD/FSUB

  **QA Scenarios**:
  ```
  Scenario: FADD/FSUB lifted
    Tool: Bash
    Steps:
      1. cargo test -p unlace-lift-x86 -- fadd_fsub
      2. Assert tests pass
    Expected Result: FADD/FSUB produce Callother IR
    Evidence: .sisyphus/evidence/p9-10-fadd.txt
  ```

  **Commit**: `feat(lift-x86): lift FADD/FSUB x87 floating-point arithmetic`

- [ ] P9-11. Lift FMUL/FDIV

  **QA Scenarios**:
  ```
  Scenario: FMUL/FDIV lifted
    Tool: Bash
    Steps:
      1. cargo test -p unlace-lift-x86 -- fmul_fdiv
      2. Assert tests pass
    Expected Result: FMUL/FDIV produce Callother IR
    Evidence: .sisyphus/evidence/p9-11-fmul.txt
  ```

  **Commit**: `feat(lift-x86): lift FMUL/FDIV x87 floating-point multiply/divide`

- [ ] P9-12. Lift FCOM/FXCH

  **QA Scenarios**:
  ```
  Scenario: FCOM/FXCH lifted
    Tool: Bash
    Steps:
      1. cargo test -p unlace-lift-x86 -- fcom_fxch
      2. Assert tests pass
    Expected Result: FCOM/FXCH produce Callother IR
    Evidence: .sisyphus/evidence/p9-12-fcom.txt
  ```

  **Commit**: `feat(lift-x86): lift FCOM/FXCH x87 floating-point compare/exchange`

- [ ] P9-13. x87 integration test + golden update

  **QA Scenarios**:
  ```
  Scenario: x87 code decompiles without crash
    Tool: Bash
    Steps:
      1. cargo test -p unlace-lift-x86
      2. Assert all pass
    Expected Result: x87 instructions handled gracefully
    Evidence: .sisyphus/evidence/p9-13-x87.txt
  ```

  **Commit**: `chore: x87 FPU integration test and golden update`

- [ ] P9-14. Lift CMPXCHG + LOCK prefix

  **What to do**:
  - CMPXCHG: compare RAX with dst; if equal, set dst=src; else set RAX=dst
  - LOCK prefix: emit Callother("_InterlockedCompareExchange", [dst, src, RAX])
  - In lift.rs: add match arm for Mnemonic::Cmpxchg

  **QA Scenarios**:
  ```
  Scenario: CMPXCHG lifted
    Tool: Bash
    Steps:
      1. cargo test -p unlace-lift-x86 -- cmpxchg
      2. Assert tests pass
    Expected Result: CMPXCHG produces atomic compare-and-swap IR
    Evidence: .sisyphus/evidence/p9-14-cmpxchg.txt
  ```

  **Commit**: `feat(lift-x86): lift CMPXCHG + LOCK prefix (atomic compare-and-swap)`

- [ ] P9-15. Lift XADD

  **QA Scenarios**:
  ```
  Scenario: XADD lifted
    Tool: Bash
    Steps:
      1. cargo test -p unlace-lift-x86 -- xadd
      2. Assert test passes
    Expected Result: XADD produces exchange-and-add IR
    Evidence: .sisyphus/evidence/p9-15-xadd.txt
  ```

  **Commit**: `feat(lift-x86): lift XADD (atomic exchange-and-add)`

- [ ] P9-16. Lift BSWAP/MOVBE

  **QA Scenarios**:
  ```
  Scenario: BSWAP lifted
    Tool: Bash
    Steps:
      1. cargo test -p unlace-lift-x86 -- bswap
      2. Assert test passes
    Expected Result: BSWAP produces byte-swap IR
    Evidence: .sisyphus/evidence/p9-16-bswap.txt
  ```

  **Commit**: `feat(lift-x86): lift BSWAP/MOVBE (byte swap)`

- [ ] P9-17. Lift REP SCASB

  **QA Scenarios**:
  ```
  Scenario: REP SCASB lifted
    Tool: Bash
    Steps:
      1. cargo test -p unlace-lift-x86 -- scasb
      2. Assert test passes
    Expected Result: REP SCASB produces string scan IR
    Evidence: .sisyphus/evidence/p9-17-scasb.txt
  ```

  **Commit**: `feat(lift-x86): lift REP SCASB (string scan)`

- [ ] P9-18. PE relocation parsing

  **What to do**:
  - In `crates/unlace-loader/src/pe.rs`:
  - Parse .reloc section (IMAGE_BASE_RELOCATION blocks)
  - Populate `relocations: Vec<Relocation>` instead of `Vec::new()`
  - Each relocation: type (HIGHLOW, DIR64, etc.) + target address

  **QA Scenarios**:
  ```
  Scenario: PE relocations parsed
    Tool: Bash
    Steps:
      1. cargo test -p unlace-loader -- pe_reloc
      2. Assert tests pass
    Expected Result: PE .reloc section parsed, relocations populated
    Evidence: .sisyphus/evidence/p9-18-pe-reloc.txt
  ```

  **Commit**: `feat(loader): PE relocation parsing (.reloc section)`

- [ ] P9-19. PE delay-load + TLS

  **QA Scenarios**:
  ```
  Scenario: PE delay-load parsed
    Tool: Bash
    Steps:
      1. cargo test -p unlace-loader -- pe_delay
      2. Assert tests pass
    Expected Result: Delay-load imports and TLS directory parsed
    Evidence: .sisyphus/evidence/p9-19-pe-delay.txt
  ```

  **Commit**: `feat(loader): PE delay-load imports + TLS directory`

- [ ] P9-20. Mach-O LC_FUNCTION_STARTS

  **What to do**:
  - Parse LC_FUNCTION_STARTS load command (ULEB128-encoded delta list)
  - Populate function entry list from the deltas

  **QA Scenarios**:
  ```
  Scenario: LC_FUNCTION_STARTS parsed
    Tool: Bash
    Steps:
      1. cargo test -p unlace-loader -- macho_func_starts
      2. Assert tests pass
    Expected Result: Function boundaries from LC_FUNCTION_STARTS
    Evidence: .sisyphus/evidence/p9-20-macho-func.txt
  ```

  **Commit**: `feat(loader): Mach-O LC_FUNCTION_STARTS parsing`

- [ ] P9-21. Mach-O chained fixups

  **QA Scenarios**:
  ```
  Scenario: Chained fixups parsed
    Tool: Bash
    Steps:
      1. cargo test -p unlace-loader -- macho_chained
      2. Assert tests pass
    Expected Result: Modern dyld chained fixup relocations parsed
    Evidence: .sisyphus/evidence/p9-21-macho-chain.txt
  ```

  **Commit**: `feat(loader): Mach-O chained fixups (modern dyld format)`

- [ ] P9-22. Loader test fixtures

  **QA Scenarios**:
  ```
  Scenario: PE and Mach-O fixtures exist
    Tool: Bash
    Steps:
      1. file fixtures/test.dll fixtures/test.dylib 2>/dev/null || echo "Create fixtures"
    Expected Result: Test fixtures for PE and Mach-O loaders
    Evidence: .sisyphus/evidence/p9-22-fixtures.txt
  ```

  **Commit**: `feat(fixtures): PE and Mach-O test binaries`

- [ ] P9-23. _OWORD type for 128-bit values

  **What to do**:
  - Add `_OWORD` typedef to IDA_TYPEDEFS prelude
  - When a 16-byte value is encountered (XMM register), use `_OWORD` type

  **QA Scenarios**:
  ```
  Scenario: _OWORD in output
    Tool: Bash
    Steps:
      1. cargo test -p unlace-output -- oword
      2. Assert test passes
    Expected Result: 128-bit values use _OWORD type
    Evidence: .sisyphus/evidence/p9-23-oword.txt
  ```

  **Commit**: `feat(output): _OWORD type for 128-bit SSE values`

- [ ] P9-24. JUMPOUT() + MEMORY[addr] annotations

  **What to do**:
  - When BRANCHIND target can't be resolved, emit `JUMPOUT(addr)` instead of raw goto
  - When LOAD from absolute address not in any section, emit `MEMORY[addr]`

  **QA Scenarios**:
  ```
  Scenario: JUMPOUT annotation
    Tool: Bash
    Steps:
      1. cargo test -p unlace-output -- jumpout
      2. Assert test passes
    Expected Result: Unresolvable jumps show JUMPOUT()
    Evidence: .sisyphus/evidence/p9-24-jumpout.txt
  ```

  **Commit**: `feat(output): JUMPOUT() and MEMORY[addr] annotations`

- [ ] P9-25. Final golden updates + score comparison

  **QA Scenarios**:
  ```
  Scenario: Final scores improved
    Tool: Bash
    Steps:
      1. UPDATE_GOLDEN=1 cargo test -p unlace-test-harness --test golden_fixtures
      2. bash scripts/score_parity.sh
    Expected Result: Aggregate score improved from baseline
    Evidence: .sisyphus/evidence/p9-25-final.txt
  ```

  **Commit**: `chore: final golden updates and parity score for Phase 9`

- [ ] P9-26. Parity score report

  **QA Scenarios**:
  ```
  Scenario: Score report generated
    Tool: Bash
    Steps:
      1. bash scripts/score_parity.sh > .sisyphus/evidence/p9-26-report.txt
    Expected Result: Full parity report with baseline vs final scores
    Evidence: .sisyphus/evidence/p9-26-report.txt
  ```

  **Commit**: NO (measurement only)

---

## Final Verification

- [ ] P9-F1. **Comprehensive Quality Review** — `general`

  **QA Scenarios**:
  ```
  Scenario: All tests pass + quality improved
    Tool: Bash
    Steps:
      1. cargo test --workspace 2>&1 | grep -E "^test result:" | awk '{p+=$4; f+=$6} END {print "PASS: "p", FAIL: "f}'
      2. cargo xtask lint-determinism
      3. grep -c "goto" tests/golden/expected/medium.c
      4. grep -c "if" tests/golden/expected/medium.c
      5. Assert ≥ 1020 tests, 0 failures, lint OK, gotos ≤ 6, ifs ≥ 30
    Expected Result: Quality improved across all metrics
    Evidence: .sisyphus/evidence/p9-f1-quality.txt
  ```

---

## Success Criteria

### Final Checklist
- [ ] Parity scoring system works (stable, reproducible scores)
- [ ] medium.elf gotos ≤ 6 (was 12)
- [ ] medium.elf ifs ≥ 35 (was 24)
- [ ] x87 FPU instructions don't crash (FLD/FSTP/FADD/FSUB/FMUL/FDIV)
- [ ] CMPXCHG/XADD/BSWAP lifted
- [ ] PE relocations parsed
- [ ] Mach-O LC_FUNCTION_STARTS parsed
- [ ] _OWORD type in output
- [ ] All tests pass (≥ 1020)
- [ ] Pushed to GitHub
