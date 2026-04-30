# unlace Phase 6 — Path to 90%+ IDA Parity

## TL;DR

> **Quick Summary**: Push unlace from 53.1% to 90%+ IDA parity by (1) fixing the macro-as-call parity measurement bug — Metis confirmed this artificially deflates `calls` score (weight 3.0) by ~10-15%, (2) investigating why complex functions produce 0 if-branches in unlace vs 30-66 in IDA, (3) adding 30+ expression simplification rules, (4) building libc/IDA SDK signature databases for symbol resolution, (5) creating recursive Type enum wrapper for composite types, and (6) IDA-style output polish.
>
> **Critical Finding**: The parity script counts BYTE1, LOBYTE, HIWORD, LODWORD, HIDWORD, __OFADD__, __OFSUB__, __builtin_trap, _mm_* as "calls" — but IDA does NOT emit these macros for the measured functions. This destroys Jaccard similarity on the highest-weighted feature.
>
> **Estimated Effort**: Large (6 waves, ~35 tasks)
> **Parallel Execution**: YES — 4-5 concurrent tasks per wave
> **Critical Path**: Fix parity bug → rebaseline → structurer fixes → signature DB → type system

---

## Context

### Phase 5 Results
- 1080 tests passing across 16 crates
- 53.1% IDA parity (28 overlapping functions vs hexx64.so)
- Phase 5 added: 8 disabled passes enabled, inferred_params wired, SETcc family, sign extension, SSE moves, ADC/SBB, ROL/ROR, bit ops, UD2, identity rules, De Morgan, sign-bit extraction, prologue suppression, post-dom tree, short-circuit booleans, recursive function discovery, internal symbols

### Per-Feature Parity Breakdown (from baseline JSON)
| Feature | Avg Score | Weight | Weighted Gap | Root Cause |
|---------|-----------|--------|--------------|------------|
| **calls** | 0.024 | 3.0 | **2.93** | **MACRO-AS-CALL BUG** (BYTE1/LOBYTE/HIWORD counted as calls) |
| **if-branches** | 0.15 | 3.0 | **2.55** | Structurer fails on complex CFGs |
| **while-loops** | 0.35 | 3.0 | **1.95** | IDA detects 2-7 while loops; unlace 0-1 |
| **else-branches** | 0.33 | 2.0 | **1.34** | Structurer over-generates else |
| **returns** | 0.39 | 2.0 | **1.22** | IDA emits multiple returns; unlace 0-1 |
| **shift-ops** | 0.0 | 1.0 | **1.00** | SUBPIECE expansion → spurious shifts |
| **gotos** | 0.0 | 1.0 | **1.00** | IDA emits gotos; unlace doesn't |
| **ptr-derefs** | 0.37 | 1.5 | **0.95** | IDA generates more via type system |
| **type-casts** | 0.40 | 1.5 | **0.90** | IDA generates more via composite types |
| **bitwise-ops** | 0.22 | 1.0 | **0.78** | SUBPIECE expansion → spurious bitwise |

### Intelligence Sources (8 exploration agents)
- **bg_2df0d43a**: IDA microcode pipeline — 10 maturity levels, 30 patterns missing
- **bg_59db7dec**: Type system — 15 features missing, recursive Type enum needed
- **bg_7c848f0b**: Expression simplification — 93 of 121 rules missing (77% gap)
- **bg_3043c869**: Control flow — 13 algorithms missing, switch recovery + goto elimination critical
- **bg_9c4d7305**: C output — most macros already done in Phase 4-5, calling conv polish needed
- **bg_3963b1d4**: Missing features — libc signatures (35% impact), C++ demangling (25%), RTTI (25%)
- **bg_4d4c9f41**: Architecture audit — Phase 5 work confirmed; PrimitiveType wrapper approach safer than IR v1.1

### Metis Review (Critical Findings)
1. **#1 priority**: Fix macro-as-call parity bug FIRST — could yield +10-15% instantly
2. **Type system**: Use wrapper approach (Type enum wrapping PrimitiveType + composites), NOT IR v1.1 rewrite
3. **Structurer mystery**: sub_1e2580 (IDA 59 if-branches, unlace 0) — investigate root cause before adding new algorithms
4. **Realistic Phase 6 target**: 75-85% (defer C++ exception handling, RTTI, full type system to Phase 7)
5. **Hard cap**: 35 tasks max, no scope creep

## Work Objectives

### Core Objective
Reach 75-85% IDA parity by fixing measurement bugs, addressing structurer failures on complex functions, building signature databases, and adding expression simplification rules.

### Definition of Done
- [ ] `python3 scripts/measure_parity.py --json | jq .overall_parity` reports ≥ 75.0%
- [ ] `cargo test --workspace` passes with ≥ 1100 tests
- [ ] `cargo xtask lint-determinism` passes
- [ ] All 4 fixtures decompile successfully
- [ ] No per-feature regression > 0.05 from wave to wave

### Must NOT Have (Guardrails)
- No non-x86 lifter changes (defer ARM, RISC-V, MIPS, PPC, V850, ARC)
- No IR spec v1.1 rewrite (use Type enum wrapper)
- No C++ exception handling (defer to Phase 7)
- No RTTI/vtable analysis (defer to Phase 7)
- No structurer rewrite (only targeted fixes)
- No parity formula weight changes (only fix extraction bugs)
- No more than 50 expression simplification rules (diminishing returns)
- No HashMap/HashSet (BTreeMap only, lint enforced)
- No more than 35 tasks total

---

## Verification Strategy

> **ZERO HUMAN INTERVENTION** — ALL verification is agent-executed.

### Per-Wave Gate
```bash
python3 scripts/measure_parity.py --json > .sisyphus/evidence/p6-wave-{N}.json
python3 -c "import json; d=json.load(open('.sisyphus/evidence/p6-wave-{N}.json')); assert d['overall_parity'] >= THRESHOLD"
cargo test --workspace  # ≥ 1080
cargo xtask lint-determinism  # OK
```

---

## Execution Strategy

### Wave Overview
```
Wave 0 (Measurement Fix — PREREQUISITE):
├── P6-0: Fix macro-as-call extraction in measure_parity.py
├── P6-1: Investigate why complex functions (sub_1e2580) produce 0 if-branches
└── P6-2: Rebaseline parity with fixed measurement (expected jump 53→63%+)

Wave 1 (Structurer Fixes — highest real-gap impact):
├── P6-3: Fix root cause of 0-if-branch on complex functions (from P6-1)
├── P6-4: Block merging pass (single-pred-single-succ elimination)
├── P6-5: IDA-matching goto emission (when control flow can't be fully structured)
├── P6-6: Multiple return recovery (IDA emits 2-17 returns per function)
└── P6-7: Switch table recovery improvements (jump table validation)

Wave 2 (Expression Quality — reduce spurious ops):
├── P6-8: Eliminate spurious shift-ops from SUBPIECE expansion
├── P6-9: Eliminate spurious bitwise-ops from SUBPIECE expansion
├── P6-10: Add 25 algebraic simplification rules (offset cancellation, distributive)
├── P6-11: Add 15 comparison simplification rules ((x-y)==0 → x==y)
└── P6-12: Add conversion composition rules (zext(sext(x)) → sext(x))

Wave 3 (Signature Resolution):
├── P6-13: libc signature database (memcpy, strlen, malloc, free, etc.)
├── P6-14: IDA SDK signature overlay (qfree, qalloc, qvector_reserve)
├── P6-15: __readfsqword stack canary intrinsic
└── P6-16: _mm_* SSE intrinsic catalog expansion

Wave 4 (Type System Foundation):
├── P6-17: Create Type enum wrapper (Type::Primitive + Type::Struct + Type::Array + Type::FuncPtr)
├── P6-18: Cast opcode type inference rules (currently no rules for IrOp::Cast)
├── P6-19: Integrate DWARF parameter names with ParamInferPass
├── P6-20: Integrate DWARF struct types into type inference lattice
└── P6-21: __noreturn annotation for non-returning functions

Wave 5 (Output Polish):
├── P6-22: __cdecl/__stdcall calling convention annotations (currently only __fastcall, __aapcs)
├── P6-23: Negative stack offset comments [rbp-Xh]
├── P6-24: BYREF annotation infrastructure for stack vars passed by reference
├── P6-25: Loop counter naming heuristics (rename i++/j-- to i/j/k)
└── P6-26: Variable name from DWARF integration

Wave FINAL (Verification):
├── P6-F1: Plan compliance audit (oracle)
├── P6-F2: Code quality review (general)
├── P6-F3: Parity measurement — must be ≥ 75% (general)
└── P6-F4: Regression check (general)
```

---

## TODOs

- [ ] P6-0. Fix macro-as-call extraction in measure_parity.py

  **What to do**:
  - In `scripts/measure_parity.py` line 70, the keywords set is too small: `{'if', 'for', 'while', 'switch', 'return', 'sizeof', 'typeof'}`
  - Expand exclusion set to include all IDA-style macros and intrinsics that look like function calls in C output:
    ```python
    keywords = {
        # C keywords with parens
        'if', 'for', 'while', 'switch', 'return', 'sizeof', 'typeof',
        # IDA byte/word/dword extraction macros
        'LOBYTE', 'HIBYTE', 'BYTE0', 'BYTE1', 'BYTE2', 'BYTE3', 'BYTE4', 'BYTE5', 'BYTE6', 'BYTE7',
        'LOWORD', 'HIWORD', 'WORD0', 'WORD1', 'WORD2', 'WORD3',
        'LODWORD', 'HIDWORD', 'DWORD0', 'DWORD1',
        'SLOBYTE', 'SHIBYTE', 'SBYTE0', 'SBYTE1', 'SBYTE2', 'SBYTE3',
        'SLOWORD', 'SHIWORD', 'SWORD0', 'SWORD1',
        'SLODWORD', 'SHIDWORD',
        # IDA overflow/carry macros
        '__OFADD__', '__OFSUB__', '__SETP__', '__SETO__', '__SETS__', '__SETZ__',
        '__CFADD__', '__CFSUB__', '__SCFADD__', '__SCFSUB__',
        # Compiler builtins
        '__builtin_trap', '__builtin_unreachable', '__builtin_expect',
        '__builtin_clz', '__builtin_ctz', '__builtin_popcount',
        '__readfsqword', '__readfsdword', '__readgsqword', '__rdtsc',
        # SSE/AVX intrinsics (start with _mm_ or _mm256_)
        # These are wildcards — handled separately below
    }
    # Also exclude any identifier starting with _mm_ or _mm256_ or __builtin_
    call_matches = re.findall(r'\b([a-zA-Z_]\w*)\s*\(', code)
    feats.calls = sorted(set(c for c in call_matches
                              if c not in keywords
                              and not c.startswith('_mm_')
                              and not c.startswith('_mm256_')
                              and not c.startswith('__builtin_')))
    ```
  - Test the fix on debug_calls.elf and a few hexx64.so functions to verify macros are excluded
  - This is the **#1 priority fix** — Metis-confirmed bug deflating `calls` score (weight 3.0) by ~10-15%

  **Recommended Agent Profile**: `general`
  **Parallelization**: Wave 0, blocks rebaseline
  **Blocks**: P6-2 (rebaseline)
  **References**:
  - `scripts/measure_parity.py:70` — current keyword set
  - Notepad: `.sisyphus/notepads/unlace-phase6-100-parity/findings.md` — root cause analysis

  **Acceptance Criteria**:
  - [ ] Keyword exclusion set includes 50+ macros/intrinsics
  - [ ] Wildcards exclude _mm_*, _mm256_*, __builtin_*
  - [ ] Verify: macros no longer appear in extracted calls

  **QA Scenarios**:
  ```
  Scenario: Macros excluded from calls
    Tool: Bash
    Steps:
      1. python3 -c "
import re
code = 'BYTE1(v) = LOBYTE(x) | _mm_add_epi8(a, b);'
keywords = {'BYTE1', 'LOBYTE'}
call_matches = re.findall(r'\b([a-zA-Z_]\w*)\s*\(', code)
calls = [c for c in call_matches if c not in keywords and not c.startswith('_mm_')]
print('Calls:', calls)
assert 'BYTE1' not in calls
assert 'LOBYTE' not in calls
assert '_mm_add_epi8' not in calls
print('PASS')
"
    Expected Result: 'PASS' — no macros in extracted calls
    Evidence: .sisyphus/evidence/p6-0-parity-fix.txt
  ```

  **Commit**: `fix(scripts): exclude IDA-style macros and intrinsics from parity calls extraction`

- [ ] P6-1. Investigate why complex functions produce 0 if-branches

  **What to do**:
  - Critical investigation task. Functions sub_1e2580 (IDA: 59 if-branches, unlace: 0) and sub_2436e0 (IDA: 35 if-branches, unlace: 0) are the dominant `if-branches` parity drag.
  - Steps:
    1. Decompile sub_1e2580 with verbose tracing: `RUST_LOG=debug ./target/release/unlace decompile --function sub_1e2580 hexrays/ida-9.1/hexx64.so 2>&1 | head -100`
    2. Check if function is being lifted at all — count IR instructions
    3. Check if SSA construction completes
    4. Check if structuring produces structured AST or bails out to flat statement list
    5. Compare against IDA reference at references/hexrays/ida_dump/hexx64/all/sub_1E2580.c
    6. Identify: is this a lifting failure, structurer bailout, or instruction coverage gap?
  - Document findings in `.sisyphus/evidence/p6-1-investigation.txt`:
    - Root cause category: lifting / SSA / structurer / output
    - Specific file/function responsible
    - Estimated fix effort
    - Whether fix is in-scope for Wave 1

  **Recommended Agent Profile**: `general`
  **Parallelization**: Wave 0, parallel with P6-0
  **Blocks**: P6-3 (root cause fix)
  **References**:
  - `references/hexrays/ida_dump/hexx64/all/sub_1E2580.c` — IDA reference (625 lines, 59 if-branches)
  - `crates/unlace-struct/src/structurer.rs` — main structurer
  - `crates/unlace-cli/src/pipeline.rs` — decompilation pipeline

  **QA Scenarios**:
  ```
  Scenario: Investigation report written
    Tool: Bash
    Steps:
      1. ls .sisyphus/evidence/p6-1-investigation.txt
      2. grep -E "Root cause|Fix effort|In-scope" .sisyphus/evidence/p6-1-investigation.txt
    Expected Result: Investigation report exists with root cause classification
    Evidence: .sisyphus/evidence/p6-1-investigation.txt
  ```

  **Commit**: `chore: investigation report for 0-if-branch on complex functions`

- [ ] P6-2. Rebaseline parity with fixed measurement

  **What to do**:
  - After P6-0 lands, run parity measurement and store as new baseline:
    ```bash
    cargo build --release -p unlace-cli
    python3 scripts/measure_parity.py --json > .sisyphus/evidence/p6-wave0.json
    ```
  - Compare per-feature scores: previous baseline (.sisyphus/evidence/p4-0-baseline.json or p5-wave0.json) vs new
  - Document the parity jump from macro fix in `.sisyphus/evidence/p6-2-rebaseline.txt`
  - This becomes the new baseline for Phase 6 — all subsequent waves measured against this

  **Recommended Agent Profile**: `general`
  **Parallelization**: Wave 0, after P6-0
  **Blocked By**: P6-0
  **References**:
  - `.sisyphus/evidence/p4-0-baseline.json` — Phase 4 baseline (53.1%)
  - `scripts/measure_parity.py` — fixed in P6-0

  **QA Scenarios**:
  ```
  Scenario: Rebaseline shows parity jump
    Tool: Bash
    Steps:
      1. cargo build --release -p unlace-cli
      2. python3 scripts/measure_parity.py --json > .sisyphus/evidence/p6-wave0.json
      3. python3 -c "import json; d=json.load(open('.sisyphus/evidence/p6-wave0.json')); print(f'Parity: {d[\"overall_parity\"]:.1f}%')"
    Expected Result: Parity jumps to 60-70% (from 53.1%) after macro fix
    Evidence: .sisyphus/evidence/p6-wave0.json
  ```

  **Commit**: NO (measurement only)

- [ ] P6-3. Fix root cause of 0-if-branch on complex functions

  **What to do**:
  - Based on P6-1's investigation report, fix the root cause of complex functions producing 0 if-branches
  - Possible root causes (depends on P6-1 findings):
    - Lifting failure: instruction not handled, function exits early — fix lifter dispatch
    - SSA construction failure: phi placement breaks — fix SSA construction
    - Structurer bailout: complex CFG triggers early return — relax structurer constraints
    - Output bailout: output emitter falls back to flat statement list — fix structured emission
  - Apply targeted fix per the diagnosis
  - Add regression test using sub_1e2580 or similar complex function
  - Verify: parity script's `if-branches` feature improves significantly

  **Recommended Agent Profile**: `general`
  **Parallelization**: Wave 1, blocks dependent tasks
  **Blocked By**: P6-1 (investigation)

  **QA Scenarios**:
  ```
  Scenario: Complex functions produce non-zero if-branches
    Tool: Bash
    Steps:
      1. ./target/debug/unlace decompile --function sub_1e2580 hexrays/ida-9.1/hexx64.so 2>/dev/null | grep -cE "if\s*\("
      2. Assert count > 5 (was 0)
    Expected Result: sub_1e2580 produces 5+ if-branches (was 0)
    Evidence: .sisyphus/evidence/p6-3-complex-funcs.txt
  ```

  **Commit**: `fix(struct): root cause of 0-if-branch on complex functions`

- [ ] P6-4. Block merging pass (single-pred-single-succ elimination)

  **What to do**:
  - WRITE `crates/unlace-struct/src/block_merge.rs` (new pre-structuring pass)
  - Add `pub mod block_merge;` to `crates/unlace-struct/src/lib.rs`
  - Algorithm:
    1. Find all blocks with exactly 1 predecessor AND 1 successor
    2. If predecessor's only successor is this block, merge them
    3. Eliminates trivial sequence blocks that confuse structuring
    4. Iterate until no more merges possible
  - Run BEFORE structurer (CFG normalization)
  - This reduces irreducibility and helps structurer detect higher-level patterns

  **QA Scenarios**:
  ```
  Scenario: Single-pred-single-succ blocks merged
    Tool: Bash
    Steps:
      1. cargo test -p unlace-struct -- block_merge
      2. Assert tests pass
    Expected Result: Trivial sequence blocks merged, CFG simplified
    Evidence: .sisyphus/evidence/p6-4-merge.txt
  ```

  **Commit**: `feat(struct): block merging pass for single-pred-single-succ elimination`

- [ ] P6-5. IDA-matching goto emission

  **What to do**:
  - In `crates/unlace-struct/src/structurer.rs`:
    - When the structurer encounters a CFG pattern that can't be cleanly structured (irreducible loop, multi-entry region), emit a `goto LABEL_N;` and a `LABEL_N:` rather than complex nested structures
    - IDA emits 6-23 gotos per function in the parity reference set; unlace currently emits 0
    - Add: when a back-edge target has 2+ predecessors and isn't a clean loop header, emit goto
    - Add: when an exit block has 2+ predecessors with non-equivalent paths, emit goto
  - Update C printer to emit `LABEL_N:` and `goto LABEL_N;` markers correctly
  - Verify: gotos parity feature improves from 0.0 toward IDA's average

  **QA Scenarios**:
  ```
  Scenario: Gotos emitted for irreducible regions
    Tool: Bash
    Steps:
      1. cargo test -p unlace-struct -- goto_emission
      2. ./target/debug/unlace decompile --function sub_1f72c0 hexrays/ida-9.1/hexx64.so 2>/dev/null | grep -c "goto"
      3. Assert count > 0 (sub_1f72c0 has 16 gotos in IDA)
    Expected Result: Gotos emitted for irreducible CFGs
    Evidence: .sisyphus/evidence/p6-5-gotos.txt
  ```

  **Commit**: `feat(struct): IDA-matching goto emission for irreducible CFG regions`

- [ ] P6-6. Multiple return recovery

  **What to do**:
  - Investigation: IDA emits 2-17 returns per function; unlace emits 0-1
  - Currently unlace likely consolidates multiple RETURN basic blocks into a single exit
  - Modify structurer to preserve multiple return points where they exist in IR
  - Don't merge return blocks if they have distinct return values
  - When a function has multiple RETURN instructions in IR, each should produce a `return X;` statement in output
  - Verify: `returns` parity feature improves

  **QA Scenarios**:
  ```
  Scenario: Multiple returns preserved
    Tool: Bash
    Steps:
      1. cargo test -p unlace-struct -- multi_return
      2. ./target/debug/unlace decompile --function sub_2436e0 hexrays/ida-9.1/hexx64.so 2>/dev/null | grep -c "return "
      3. Assert count > 1 (IDA has 4+ returns)
    Expected Result: Functions with multiple IR returns emit multiple return statements
    Evidence: .sisyphus/evidence/p6-6-returns.txt
  ```

  **Commit**: `feat(struct): preserve multiple return points in structured output`

- [ ] P6-7. Switch table recovery improvements

  **What to do**:
  - Currently unlace handles BRANCHIND but doesn't validate jump table structure
  - In `crates/unlace-struct/src/switch_recovery.rs`:
    - Improve detection: when BRANCHIND is preceded by `LOAD(table_base + index * 8)` pattern, treat as switch
    - Validate: case count, default target, jump table base address
    - Emit: `switch (cond) { case N: ...; default: ... }` properly
    - Detect dense vs sparse switches
  - Reference: `references/hexrays/ida_dump/hexx64/all/sub_1BF0C0.c` shows IDA's switch recovery (1140 lines)

  **QA Scenarios**:
  ```
  Scenario: Switch tables recovered correctly
    Tool: Bash
    Steps:
      1. cargo test -p unlace-struct -- switch_recovery
      2. Assert tests pass with at least 5 switch detection cases
    Expected Result: Switch statements recovered from jump tables
    Evidence: .sisyphus/evidence/p6-7-switch.txt
  ```

  **Commit**: `feat(struct): switch table recovery with jump table validation`

- [ ] P6-8. Eliminate spurious shift-ops from SUBPIECE expansion

  **What to do**:
  - Per parity data: `shift-ops` scores 0.0 avg — unlace emits 5-11 shift ops per function while IDA emits 0-1
  - Root cause: SUBPIECE-related operations expand to shifts when emitted in C
  - In `crates/unlace-output/src/c_printer.rs`:
    - When a SUBPIECE pattern would emit `(x >> N)` and the use site is a SUBPIECE macro (LOBYTE/BYTE1/HIWORD), prefer the macro form
    - Detect when shifts are part of bit extraction patterns and route them through macros
  - Add tests verifying shift count in output matches IDA reference for sample functions

  **QA Scenarios**:
  ```
  Scenario: Spurious shift ops eliminated
    Tool: Bash
    Steps:
      1. ./target/release/unlace decompile hexrays/ida-9.1/hexx64.so 2>/dev/null > /tmp/p6-8-after.txt
      2. AFTER=$(grep -cE '>>|<<' /tmp/p6-8-after.txt)
      3. python3 scripts/measure_parity.py --json > /tmp/p6-8-parity.json
      4. SCORE=$(python3 -c "import json; d=json.load(open('/tmp/p6-8-parity.json')); s=[f for fn in d['functions'] for f in fn['feature_scores'] if f['name']=='shift-ops']; print(sum(x['score'] for x in s)/len(s))")
      5. Assert SCORE >= 0.20 (was 0.0 baseline)
    Expected Result: shift-ops feature score >= 0.20 (significant improvement from 0.0)
    Evidence: .sisyphus/evidence/p6-8-shifts.txt
  ```

  **Commit**: `fix(output): eliminate spurious shift-ops from SUBPIECE expansion`

- [ ] P6-9. Eliminate spurious bitwise-ops from SUBPIECE expansion

  **What to do**:
  - Same root cause as P6-8: SUBPIECE emits `& 0xFF` masks that IDA hides via macros
  - In `crates/unlace-output/src/c_printer.rs`:
    - When LOBYTE/BYTE1 macros are used, the mask `& 0xFF` is implicit in the macro
    - Don't emit the mask separately when wrapping in macro
    - Detect mask-and-shift patterns that should be just macro calls
  - Verify: bitwise-ops parity feature improves

  **QA Scenarios**:
  ```
  Scenario: Spurious bitwise ops eliminated
    Tool: Bash
    Steps:
      1. cargo test -p unlace-output -- mask_elimination
      2. Assert tests pass
    Expected Result: AND-with-mask patterns absorbed into macros
    Evidence: .sisyphus/evidence/p6-9-bitwise.txt
  ```

  **Commit**: `fix(output): eliminate spurious bitwise-ops from SUBPIECE expansion`

- [ ] P6-10. Add 25 algebraic simplification rules

  **What to do**:
  - In `crates/unlace-passes/src/idiom_recognition.rs` (extend existing):
    - Offset cancellation: `(x + a) - a → x`, `(x - a) + a → x`
    - Inverse operations: `-(-x) → x`, `~(~x) → x`, `~(x - 1) → -x`
    - Distributive: `(x * a) + (x * b) → x * (a + b)` (when both constants)
    - Associativity with constants: `(x + a) + b → x + (a + b)`, `(x * a) * b → x * (a * b)`
    - Subtraction patterns: `x + (-y) → x - y`, `x - (-y) → x + y`
    - Multiplication patterns: `x * 2 → x << 1`, `x * 4 → x << 2`, `x * 8 → x << 3`
    - Division patterns: `x / 2 → x >> 1` (unsigned only), `x / 4 → x >> 2`
    - Modulo patterns: `x % 2^n → x & (2^n - 1)` (unsigned)
  - Add 25+ new rules total. Each rule:
    - Pattern match in IR
    - Replacement IR pattern
    - Guards (e.g., constant on right, no overflow)
    - Test case

  **QA Scenarios**:
  ```
  Scenario: Algebraic rules apply
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes -- algebraic
      2. Assert ≥ 25 new tests pass
    Expected Result: Algebraic simplification rules applied to IR
    Evidence: .sisyphus/evidence/p6-10-algebra.txt
  ```

  **Commit**: `feat(passes): 25 algebraic simplification rules (offset cancellation, distributive)`

- [ ] P6-11. Add 15 comparison simplification rules

  **What to do**:
  - In `crates/unlace-passes/src/condition_simplify.rs` (extend existing):
    - `(x - y) == 0 → x == y`
    - `(x - y) != 0 → x != y`
    - `x < 0 ? -x : x → ABS(x)` (signed)
    - `x > 0 ? x : -x → ABS(x)`
    - `a < b ? a : b → MIN(a, b)`
    - `a > b ? a : b → MAX(a, b)`
    - `(x ^ y) == 0 → x == y`
    - Comparison with self: `x == x → true`, `x != x → false`, `x < x → false`
    - Comparison with literal bounds: `(unsigned)x < 0 → false`, `(unsigned)x >= 0 → true`
    - Sign comparisons: `(x >> 31) & 1 → x < 0` (signed)
  - Add 15+ rules with tests

  **QA Scenarios**:
  ```
  Scenario: Comparison rules apply
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes -- comparison_simplify
      2. Assert ≥ 15 new tests pass
    Expected Result: Comparison patterns simplified
    Evidence: .sisyphus/evidence/p6-11-compare.txt
  ```

  **Commit**: `feat(passes): 15 comparison simplification rules`

- [ ] P6-12. Add conversion composition rules

  **What to do**:
  - In `crates/unlace-passes/src/idiom_recognition.rs`:
    - `SEXT(SEXT(x, 4), 8) → SEXT(x, 8)` — extension composition
    - `ZEXT(ZEXT(x, 4), 8) → ZEXT(x, 8)`
    - `ZEXT(SEXT(x, 4), 8)` → keep as is (sign-extend then zero-extend has different semantics)
    - `SUBPIECE(ZEXT(x, N), 0)` for size ≤ original → `x`
    - `SUBPIECE(SEXT(x, N), 0)` for size ≤ original → `x`
    - `INT_AND(ZEXT(x, N), MASK)` where MASK fits in original size → `INT_AND(x, MASK)` then zext
  - Add tests for each rule

  **QA Scenarios**:
  ```
  Scenario: Conversion composition rules apply
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes -- conversion_composition
      2. Assert tests pass
    Expected Result: Chained ZEXT/SEXT collapse to single op
    Evidence: .sisyphus/evidence/p6-12-conversion.txt
  ```

  **Commit**: `feat(passes): conversion composition rules (zext/sext composition, subpiece elimination)`

- [ ] P6-13. libc signature database

  **What to do**:
  - WRITE `crates/unlace-loader/src/libc_signatures.rs` (new file) or `crates/unlace-passes/src/libc_signatures.rs`
  - Hardcode signatures for common libc functions:
    - String: strlen, strcpy, strncpy, strcat, strncat, strcmp, strncmp, strchr, strrchr, strstr, memcpy, memmove, memset, memcmp
    - Memory: malloc, free, calloc, realloc
    - I/O: printf, fprintf, sprintf, snprintf, fopen, fclose, fread, fwrite, fseek, ftell
    - System: exit, abort, atoi, atol, getenv
  - Each signature: `name`, `params: Vec<Type>`, `return_type: Type`, `attrs: {noreturn, variadic}`
  - Match against discovered functions (PLT entries, exported symbols) by name
  - Apply signature to function table for use in C output

  **QA Scenarios**:
  ```
  Scenario: libc signatures applied
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes -- libc_sig
      2. ./target/debug/unlace decompile fixtures/debug_hello.elf 2>/dev/null | grep -E "puts|printf"
      3. Assert function signature shows proper params (not void)
    Expected Result: libc functions show typed signatures
    Evidence: .sisyphus/evidence/p6-13-libc.txt
  ```

  **Commit**: `feat(passes): libc signature database for symbol resolution`

- [ ] P6-14. IDA SDK signature overlay

  **What to do**:
  - Specifically for hexx64.so (the parity target binary), the IDA SDK functions appear in IDA references:
    - qfree, qalloc, qalloc_or_throw, qvector_reserve, qvector_clear
    - get_func, get_func_chunk, getseg, get_inf_structure, get_segm_by_name
    - dwarf_*, msig_*, krn_* (IDA internal)
  - These don't have publicly known signatures but appear in the parity reference
  - Strategy: scan IDA reference files (references/hexrays/ida_dump/hexx64/all/*.c) and extract function signatures from extern declarations
  - Build a signature database keyed by name
  - Apply when matching name found in our binary's symbol table

  **QA Scenarios**:
  ```
  Scenario: IDA SDK signatures applied
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes -- ida_sdk_sig
      2. Assert tests pass
    Expected Result: IDA SDK functions properly signatured
    Evidence: .sisyphus/evidence/p6-14-ida-sdk.txt
  ```

  **Commit**: `feat(passes): IDA SDK signature overlay extracted from reference dumps`

- [ ] P6-15. __readfsqword stack canary intrinsic

  **What to do**:
  - In `crates/unlace-output/src/c_printer.rs`:
    - When emitting LOAD from FS:0x28 (Linux x86-64 stack canary location), emit `__readfsqword(0x28u)` not raw load
    - Pattern: LOAD with address that decomposes to `INT_ADD(GS_BASE_REG, 0x28)` or similar
    - Already partially handled in prologue suppression — extend to use the intrinsic name where it survives
  - Same for FS:0x14 (32-bit canary): `__readfsdword(0x14u)`
  - Add to IDA_TYPEDEFS prelude:
    ```c
    #define __readfsqword(off) (*(unsigned long long*)((__seg_fs char*)0 + off))
    #define __readfsdword(off) (*(unsigned int*)((__seg_fs char*)0 + off))
    ```

  **QA Scenarios**:
  ```
  Scenario: Stack canary intrinsic emitted
    Tool: Bash
    Steps:
      1. cargo test -p unlace-output -- readfsqword
      2. Assert test passes
    Expected Result: FS:0x28 LOAD emits __readfsqword(0x28u)
    Evidence: .sisyphus/evidence/p6-15-canary.txt
  ```

  **Commit**: `feat(output): __readfsqword/__readfsdword stack canary intrinsics`

- [ ] P6-16. _mm_* SSE intrinsic catalog expansion

  **What to do**:
  - Already have CALLOTHER → intrinsic mapping for SSE2 in P3-13
  - Expand the IntrinsicRegistry (crates/unlace-lift-x86/src/intrinsics.rs) to cover more SSE/AVX:
    - SSE: _mm_load_ps, _mm_loadu_ps, _mm_store_ps, _mm_storeu_ps, _mm_add_ps, _mm_mul_ps, _mm_div_ps, _mm_sub_ps
    - SSE2 expansion: _mm_packs_epi16, _mm_unpacklo_epi8, _mm_shuffle_epi32, _mm_movemask_epi8
    - SSE3: _mm_addsub_ps, _mm_hadd_ps
    - SSE4.1: _mm_blend_ps, _mm_blendv_epi8
    - AVX: _mm256_*
  - Update lift.rs to dispatch SSE/AVX mnemonics to CALLOTHER with intrinsic tags
  - Update c_printer to render CALLOTHER tags as proper intrinsic names

  **QA Scenarios**:
  ```
  Scenario: SSE intrinsics emitted
    Tool: Bash
    Steps:
      1. cargo test -p unlace-lift-x86 -- intrinsic
      2. Assert ≥ 20 intrinsics in registry
    Expected Result: SSE/AVX instructions emit proper intrinsic names
    Evidence: .sisyphus/evidence/p6-16-sse.txt
  ```

  **Commit**: `feat(lift-x86): expand SSE/AVX intrinsic catalog`

- [ ] P6-17. Create Type enum wrapper

  **What to do**:
  - WRITE `crates/unlace-ir/src/types.rs` (new file)
  - Define recursive Type enum:
    ```rust
    #[derive(Clone, Debug, PartialEq, Eq, Hash)]
    pub enum Type {
        Primitive(PrimitiveType),
        Ptr(Box<Type>),
        Array { element: Box<Type>, size: Option<u64> },
        Struct { name: String, fields: Vec<(String, Type, u64)> },  // (name, type, offset)
        Union { name: String, members: Vec<(String, Type)> },
        Enum { name: String, underlying: PrimitiveType, variants: Vec<(String, i64)> },
        FuncPtr { params: Vec<Type>, return_type: Box<Type>, variadic: bool, calling_conv: CallingConvention },
    }
    ```
  - Implement: `Type::primitive()`, `Type::ptr_to()`, `Type::is_pointer()`, `Type::pointee()`, `Type::size()`, `Type::is_composite()`
  - Implement Display for C type formatting: `__int64`, `__int64 *`, `Foo *`, `void (__fastcall *)(int)`
  - Implement lattice join for type merging
  - DO NOT replace PrimitiveType uses in this task — that's P6-18 onwards
  - This is foundation only; subsequent tasks integrate it

  **QA Scenarios**:
  ```
  Scenario: Type enum compiles and basic operations work
    Tool: Bash
    Steps:
      1. cargo test -p unlace-ir -- types
      2. Assert tests pass
    Expected Result: Type enum with composite variants, lattice operations work
    Evidence: .sisyphus/evidence/p6-17-types.txt
  ```

  **Commit**: `feat(ir): Type enum wrapper for composite types (struct, union, enum, array, ptr<T>, funcptr)`

- [ ] P6-18. Cast opcode type inference rules

  **What to do**:
  - In `crates/unlace-passes/src/type_infer.rs`:
    - Currently `IrOp::Cast` (opcode 68) has NO type inference rules — it produces Unknown
    - Add: when input type is known, output type matches the cast target
    - For typed casts: input → output type from instruction metadata
    - For implicit casts: input type → output type based on size/signedness
    - Update lattice join to handle Cast nodes properly
  - Add tests covering common cast patterns

  **QA Scenarios**:
  ```
  Scenario: Cast type inference works
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes -- cast_infer
      2. Assert tests pass
    Expected Result: Cast operations produce typed outputs
    Evidence: .sisyphus/evidence/p6-18-cast.txt
  ```

  **Commit**: `feat(passes): Cast opcode type inference rules`

- [ ] P6-19. Integrate DWARF parameter names with ParamInferPass

  **What to do**:
  - Currently DWARF extracts function info (params, names, types) but not all is integrated with ParamInferPass
  - In `crates/unlace-passes/src/calling_convention.rs` (or related):
    - When DWARF info is available for a function, prefer DWARF parameter names over inferred `a1, a2, ...`
    - When DWARF parameter types are present, prefer them over inferred Int(8) defaults
    - Fall back to inference when DWARF unavailable
  - Update SsaFunction to track DWARF source: `dwarf_params: Option<Vec<(String, Type)>>`
  - Update c_printer.rs to use DWARF names when present

  **QA Scenarios**:
  ```
  Scenario: DWARF parameter names used in output
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes -- dwarf_params
      2. ./target/debug/unlace decompile fixtures/debug_calls.elf 2>/dev/null | grep -E "int [a-z_]+,"
      3. Assert real parameter names visible (not just a1, a2)
    Expected Result: DWARF-informed parameter names in signatures
    Evidence: .sisyphus/evidence/p6-19-dwarf.txt
  ```

  **Commit**: `feat(passes): integrate DWARF parameter names with ParamInferPass`

- [ ] P6-20. Integrate DWARF struct types into type inference

  **What to do**:
  - Currently DWARF extracts struct types but they're not wired into type inference
  - In `crates/unlace-passes/src/type_infer.rs`:
    - When LOAD/STORE pattern matches a known DWARF struct field offset, propagate struct type
    - Track variable → DWARF type mapping
    - Use Type::Struct from P6-17 to represent
  - In `crates/unlace-output/src/c_printer.rs`:
    - When emitting field access, use DWARF field name: `obj->size` instead of `*(obj + 8)`

  **QA Scenarios**:
  ```
  Scenario: DWARF struct types used
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes -- dwarf_struct
      2. ./target/debug/unlace decompile fixtures/debug_structs.elf 2>/dev/null | grep -E "->[a-z_]+"
      3. Assert struct field access syntax used
    Expected Result: Struct field access via -> notation
    Evidence: .sisyphus/evidence/p6-20-dwarf-struct.txt
  ```

  **Commit**: `feat(passes): integrate DWARF struct types into type inference`

- [ ] P6-21. __noreturn annotation for non-returning functions

  **What to do**:
  - Currently NoreturnPass detects but unlace doesn't emit `__noreturn` annotation
  - In `crates/unlace-output/src/c_printer.rs`:
    - When emitting function signature, check `ssa.noreturn` field
    - If true, emit `__noreturn` attribute: `void __noreturn sub_X(...)`
  - Update libc signatures (P6-13) to mark abort, exit, longjmp as noreturn

  **QA Scenarios**:
  ```
  Scenario: __noreturn annotation emitted
    Tool: Bash
    Steps:
      1. cargo test -p unlace-output -- noreturn
      2. Assert test passes
    Expected Result: noreturn functions show __noreturn in signature
    Evidence: .sisyphus/evidence/p6-21-noreturn.txt
  ```

  **Commit**: `feat(output): __noreturn annotation for non-returning functions`

- [ ] P6-22. __cdecl/__stdcall calling convention annotations

  **What to do**:
  - Currently c_printer only emits `__fastcall` for MS x64 and `__aapcs` for ARM
  - Extend to emit:
    - `__cdecl` for x86-32 cdecl
    - `__stdcall` for x86-32 stdcall
    - `__thiscall` for C++ this-pointer convention
    - `__regcall` for Intel register calling
  - Detect from CallingConvention enum value
  - Update tests

  **QA Scenarios**:
  ```
  Scenario: All calling conventions annotated
    Tool: Bash
    Steps:
      1. cargo test -p unlace-output -- calling_conv_anno
      2. Assert tests pass for cdecl, stdcall, thiscall
    Expected Result: All convention types properly annotated
    Evidence: .sisyphus/evidence/p6-22-callconv.txt
  ```

  **Commit**: `feat(output): __cdecl/__stdcall/__thiscall calling convention annotations`

- [ ] P6-23. Negative stack offset comments [rbp-Xh]

  **What to do**:
  - Currently variable comments show `// [rsp+Xh]` but not `[rbp-Xh]`
  - In `crates/unlace-output/src/c_printer.rs`:
    - When emitting variable declarations, if variable is at negative offset from RBP (or positive from RSP), show both forms
    - IDA format: `__int64 v3; // [rsp+10h] [rbp-50h]`
    - This requires knowing both RSP and RBP relative offsets
    - Compute from stack frame metadata after prologue analysis

  **QA Scenarios**:
  ```
  Scenario: Both RSP and RBP offsets shown
    Tool: Bash
    Steps:
      1. cargo test -p unlace-output -- rbp_offset
      2. Assert test passes
    Expected Result: Variable comments show both [rsp+Xh] and [rbp-Yh]
    Evidence: .sisyphus/evidence/p6-23-rbp.txt
  ```

  **Commit**: `feat(output): negative stack offset comments [rbp-Xh] in addition to [rsp+Xh]`

- [ ] P6-24. BYREF annotation infrastructure

  **What to do**:
  - When a stack variable is passed to a function by reference (its address taken), IDA annotates with BYREF
  - In `crates/unlace-output/src/c_printer.rs`:
    - Detect: stack variable whose address (`&var`) is passed to a CALL
    - When declaring such variables, append `BYREF` comment: `_QWORD v70[2]; // [rsp+58h] [rbp-98h] BYREF`
  - Track address-taken stack vars during analysis

  **QA Scenarios**:
  ```
  Scenario: BYREF annotation for address-taken stack vars
    Tool: Bash
    Steps:
      1. cargo test -p unlace-output -- byref
      2. Assert test passes
    Expected Result: Stack vars passed by address show BYREF
    Evidence: .sisyphus/evidence/p6-24-byref.txt
  ```

  **Commit**: `feat(output): BYREF annotation for address-taken stack variables`

- [ ] P6-25. Loop counter naming heuristics

  **What to do**:
  - When ForLoopPass detects a for-loop with a counter variable that's:
    - Initialized to a constant
    - Incremented/decremented by a constant
    - Used as comparison RHS for loop termination
  - Rename that variable to `i`, `j`, `k`, `l` (in nesting depth order)
  - Apply at C output time: when emitting variable declarations, replace `vN` with `i`/`j`/`k` for detected counters
  - Track counter detection in SsaFunction.merged_names or similar

  **QA Scenarios**:
  ```
  Scenario: Loop counters renamed to i/j/k
    Tool: Bash
    Steps:
      1. cargo test -p unlace-output -- loop_counter_name
      2. ./target/debug/unlace decompile fixtures/medium.elf 2>/dev/null | grep -E "for.*\bi\b"
      3. Assert at least one for-loop uses 'i' as counter
    Expected Result: For-loop counters use semantic names i/j/k
    Evidence: .sisyphus/evidence/p6-25-counters.txt
  ```

  **Commit**: `feat(output): loop counter naming heuristics (i/j/k for for-loop counters)`

- [ ] P6-26. Variable name from DWARF integration

  **What to do**:
  - When DWARF variable info is available, prefer DWARF names over generated names
  - In `crates/unlace-output/src/c_printer.rs`:
    - For each local variable, check if DWARF has a name for that stack slot
    - If yes, use DWARF name (e.g., `count`, `buffer`, `result`)
    - If no, fall back to `vN`
  - Also use DWARF names for parameters when available (P6-19 partially covers)
  - Test on debug_structs.elf which has DWARF info

  **QA Scenarios**:
  ```
  Scenario: DWARF variable names in output
    Tool: Bash
    Steps:
      1. cargo test -p unlace-output -- dwarf_var_name
      2. ./target/debug/unlace decompile fixtures/debug_structs.elf 2>/dev/null | grep -vE "v[0-9]+\b" | head -20
      3. Assert DWARF names visible (not just vN)
    Expected Result: Local variables use DWARF names where available
    Evidence: .sisyphus/evidence/p6-26-dwarf-vars.txt
  ```

  **Commit**: `feat(output): DWARF local variable name integration`

---

## Final Verification Wave

- [ ] P6-F1. **Plan Compliance Audit** — `oracle`
  Read plan end-to-end. For each "Must Have": verify implementation exists. For each "Must NOT Have": search codebase for forbidden patterns. Compare deliverables against plan.
  Output: `Must Have [N/N] | Must NOT Have [N/N] | Tasks [N/N] | VERDICT: APPROVE/REJECT`

  **QA Scenarios**:
  ```
  Scenario: All features verified
    Tool: Bash
    Steps:
      1. python3 scripts/measure_parity.py --json | python3 -c "import json,sys; d=json.load(sys.stdin); print(d['overall_parity'])"
      2. Assert parity ≥ 75%
    Expected Result: All Phase 6 features functional
    Evidence: .sisyphus/evidence/p6-f1-compliance.txt
  ```

- [ ] P6-F2. **Code Quality Review** — `general`
  Run `cargo test --workspace` + `cargo xtask lint-determinism`. Review changed files for semantic correctness.
  Output: `Build [PASS/FAIL] | Lint [PASS/FAIL] | Tests [N pass/N fail] | VERDICT`

  **QA Scenarios**:
  ```
  Scenario: Build + test + lint clean
    Tool: Bash
    Steps:
      1. cargo test --workspace 2>&1 | grep -E "^test result:" | awk '{p+=$4; f+=$6} END {print "PASS: "p}'
      2. cargo xtask lint-determinism 2>&1 | tail -1
      3. Assert 0 failures and lint OK
    Expected Result: ≥ 1100 tests pass, determinism maintained
    Evidence: .sisyphus/evidence/p6-f2-quality.txt
  ```

- [ ] P6-F3. **Parity Measurement** — `general`
  Run parity script and verify overall_parity ≥ 75.0%. Compare per-feature scores against Wave 0 rebaseline.
  Output: `Parity [X%] | vs Baseline [+Y%] | Regressions [NONE/list] | VERDICT`

  **QA Scenarios**:
  ```
  Scenario: Parity target met
    Tool: Bash
    Steps:
      1. cargo build --release
      2. python3 scripts/measure_parity.py --json > .sisyphus/evidence/p6-f3-parity.json
      3. Assert overall_parity ≥ 75.0%
    Expected Result: Parity ≥ 75% (up from 53.1%)
    Evidence: .sisyphus/evidence/p6-f3-parity.json
  ```

- [ ] P6-F4. **Regression Check** — `general`
  Run all 4 fixtures, verify each decompiles. Verify test count ≥ 1080. Verify 0 FAILED tests.
  Output: `Fixtures [N/N] | Tests [N pass] | VERDICT`

  **QA Scenarios**:
  ```
  Scenario: No regressions
    Tool: Bash
    Steps:
      1. for f in medium debug_structs debug_calls debug_hello; do ./target/debug/unlace decompile fixtures/$f.elf 2>/dev/null | wc -l; done
      2. cargo test --workspace 2>&1 | grep -c FAILED
      3. Assert all fixtures produce output and 0 failures
    Expected Result: All 4 fixtures decompile, 0 test failures
    Evidence: .sisyphus/evidence/p6-f4-regression.txt
  ```

---

## Commit Strategy
- Wave 0: 2 commits (parity script fix + investigation report) + 1 measurement
- Wave 1: 5 commits (structurer fixes) + 1 measurement
- Wave 2: 5 commits (expression rules) + 1 measurement
- Wave 3: 4 commits (signature databases) + 1 measurement
- Wave 4: 5 commits (type system) + 1 measurement
- Wave 5: 5 commits (output polish) + 1 measurement
- Final: `chore: Phase 6 complete — N/N tasks, X tests, Y% IDA parity`

## Success Criteria

### Verification Commands
```bash
cargo test --workspace                                    # ≥ 1100 tests, 0 failures
cargo xtask lint-determinism                             # OK
python3 scripts/measure_parity.py --json | jq .overall_parity  # ≥ 75.0
```

### Final Checklist
- [ ] All "Must Have" present
- [ ] All "Must NOT Have" absent
- [ ] Parity ≥ 75%
- [ ] All tests pass
- [ ] All fixtures decompile
- [ ] Pushed to GitHub
