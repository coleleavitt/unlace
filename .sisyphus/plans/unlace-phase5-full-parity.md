# unlace Phase 5 — Full Parity Push (52% → 90%+ Target)

## TL;DR

> **Quick Summary**: Push unlace from 52.3% to 90%+ IDA parity by (1) enabling 7 already-implemented but disabled passes, (2) lifting 10,766 missing x86-64 instructions (SETcc, SSE moves, sign extension, carry arithmetic), (3) replacing the depth-16 BFS join heuristic with post-dominator tree, (4) recovering short-circuit booleans, (5) wiring inferred_params/return_type to C printer, and (6) adding prologue/epilogue suppression.
>
> **Key Insight**: 7 optimization passes (SCCP, CSE, DeadStoreElim, DeadFlagElim, IdiomRecognition, DivisionIdiom, ModuloIdiom, ConditionSimplify) are IMPLEMENTED but not in the active pipeline. Enabling them is potentially a zero-effort parity win.
>
> **Key Insight #2**: `inferred_params` field exists on SsaFunction and ParamInferPass populates it, but c_printer.rs never reads it. Wiring this through is a 1-line fix worth potentially +8% parity (has-params weight=2.0, currently 96% zero).
>
> **Estimated Effort**: Large (6 waves, ~35 tasks)
> **Parallel Execution**: YES — 5 concurrent tasks per wave
> **Critical Path**: Enable passes → SETcc lifting → Post-dom structurer → Parity measurement

---

## Context

### Phase 4 Results
- 995 tests passing across 16 crates
- 52.3% IDA parity (28 overlapping functions measured against hexx64.so)
- Phase 4 added: operator bug fixes, precedence table, SUBPIECE macros, PLT resolution, string recovery, global naming, break/fall-through, if→switch, array subscript, CALLOTHER resolution, nullptr, compound assignment, negation folding, EagerReturns, CrossJumpRevert, param/return type inference, register comments

### Per-Feature Parity Breakdown (from baseline JSON)
| Feature | Avg Score | Zero% | Weight | ROI (w×gap) |
|---------|-----------|-------|--------|-------------|
| calls | 0.012 | 96% | 3.0 | 2.964 |
| has-params | 0.036 | 96% | 2.0 | 1.929 |
| if-branches | 0.297 | 32% | 3.0 | 2.108 |
| shift-ops | 0.330 | 64% | 1.0 | 0.670 |
| bitwise-ops | 0.344 | 39% | 1.0 | 0.656 |
| ptr-derefs | 0.401 | 7% | 1.5 | 0.898 |
| type-casts | 0.417 | 7% | 1.5 | 0.875 |
| else-branches | 0.418 | 39% | 2.0 | 1.164 |
| while-loops | 0.588 | 36% | 3.0 | 1.235 |
| gotos | 0.679 | 32% | 1.0 | 0.321 |
| returns | 0.680 | 21% | 2.0 | 0.640 |
| do-while | 0.893 | 11% | 2.0 | 0.214 |
| neg-consts | 0.964 | 4% | 1.0 | 0.036 |
| for-loops | 1.000 | 0% | 3.0 | 0.000 |

### Root Cause Analysis (9 exploration agents)
1. **7 passes implemented but NOT in pipeline** — SCCP, CSE, DeadStoreElim, DeadFlagElim, IdiomRecognition, DivisionIdiom, ModuloIdiom, ConditionSimplify
2. **10,766 unlifted instructions** — SETcc (3,746), MOVAPS/MOVUPS (1,931), CLTQ/CLTD/CQTO (619), ADC/SBB (339), BT/BSR (94), UD2 (988)
3. **inferred_params populated but c_printer doesn't read it** — 1-line fix for has-params
4. **Depth-16 BFS join heuristic** — incorrect if/else structuring
5. **No short-circuit boolean recovery** — `a && b` / `a || b` from CFG diamonds
6. **No prologue/epilogue suppression** — frame setup code appears in output

### Intelligence Sources
- bg_8e8bd34c: Instruction coverage audit — 10,766 unlifted, 21 families
- bg_b3c3f4a8: Per-function parity gap analysis — root causes per function
- bg_84bca27f: Side-by-side IDA vs unlace comparison — 4 gap categories
- bg_9b5fc03d: High-parity decompiler techniques — Ghidra/RetDec algorithms
- bg_3d641d9d: IDA structurer implementation — 6-phase algorithm from decompiled source
- bg_11d4bbc7: IDA optimization passes — 6-pass pipeline, 136 rules
- bg_97df64a8: IDA type inference — type lattice, pointer disambiguation
- bg_2f1c5a0e: IDA C output — ctree generation, precedence, compound assignment
- bg_ac55fa25: IDA function discovery — state machine, prologue patterns, xrefs

### Metis Review
- Validate that disabled passes are safe before enabling
- Post-dom change behind feature flag first
- Per-wave parity threshold gates
- Don't touch non-x86 lifters
- Cap algebraic rules at 40

---

## Work Objectives

### Core Objective
Achieve 90%+ IDA parity by fixing the root causes: disabled passes, unlifted instructions, broken param emission, and structurer limitations.

### Definition of Done
- [ ] `python3 scripts/measure_parity.py --json | jq .overall_parity` reports ≥ 85.0
- [ ] `cargo test --workspace` passes with ≥ 1020 tests
- [ ] `cargo xtask lint-determinism` passes
- [ ] All 4 fixtures decompile successfully
- [ ] No per-feature regression > 0.03 from wave to wave

### Must NOT Have (Guardrails)
- No non-x86 lifter changes
- No composite type system additions
- No structurer rewrite (only post-dom addition + short-circuit)
- No parity formula changes
- No golden test corpus changes
- No more than 40 algebraic simplification rules
- No indirect call analysis (needs points-to, out of scope)

---

## Verification Strategy

> **ZERO HUMAN INTERVENTION** — ALL verification is agent-executed.

### Per-Wave Gate
```bash
python3 scripts/measure_parity.py --json > .sisyphus/evidence/p5-wave-{N}.json
python3 -c "import json; d=json.load(open('.sisyphus/evidence/p5-wave-{N}.json')); print(f'Parity: {d[\"overall_parity\"]:.1f}%'); assert d['overall_parity'] >= THRESHOLD"
cargo test --workspace  # 0 failures
cargo xtask lint-determinism  # OK
```

---

## Execution Strategy

### Wave Overview
```
Wave 0 (Free Wins — enable disabled passes + wire params):
├── P5-1: Enable SCCP in pipeline (test individually first)
├── P5-2: Enable CSE in pipeline
├── P5-3: Enable DeadStoreElim + DeadFlagElim in pipeline
├── P5-4: Enable IdiomRecognition + DivisionIdiom + ModuloIdiom + ConditionSimplify
├── P5-5: Wire inferred_params + inferred_return_type to c_printer signature emission
└── P5-6: Measure parity after enables, store as new baseline

Wave 1 (Instruction Coverage — SETcc + Sign Extension):
├── P5-7: Lift SETcc family (16 variants: SETE, SETNE, SETB, SETA, SETBE, SETG, SETL, SETGE, SETLE, SETS, SETNS, SETO, SETNO, SETP, SETNP, SETAE)
├── P5-8: Lift CLTQ/CLTD/CQTO (CDQ/CQO sign extension family)
├── P5-9: Lift LEAVE instruction (epilogue: mov rsp, rbp; pop rbp)
└── P5-10: Measure parity, store checkpoint

Wave 2 (Instruction Coverage — SSE + Carry + Bit):
├── P5-11: Lift MOVAPS/MOVUPS/MOVSD (SSE aligned/unaligned moves)
├── P5-12: Lift ADC/SBB (add/subtract with carry)
├── P5-13: Lift ROL/ROR (rotation instructions)
├── P5-14: Lift BT/BSF/BSR/TZCNT/LZCNT/POPCNT (bit operations)
├── P5-15: Lift UD2 as unreachable/trap annotation
└── P5-16: Measure parity, store checkpoint

Wave 3 (Algebraic Simplification):
├── P5-17: Add identity elimination rules to IdiomRecognition (x+0, x*1, x&-1, x|0, x^0, x/1, x%1, x<<0, x>>0, x&0→0, x|all_ones→all_ones)
├── P5-18: Add De Morgan's law rules (!(a||b)→!a&&!b, !(a&&b)→!a||!b)
├── P5-19: Add sign-bit extraction rule (x>>31 → x<0, (x>>31)^1 → x>=0)
├── P5-20: Add carry elimination rules (CARRY(x,-x)→x!=0)
├── P5-21: Prologue/epilogue detection and suppression pass
└── P5-22: Measure parity, store checkpoint

Wave 4 (Structurer — Post-Dominator + Short-Circuit):
├── P5-23: Implement post-dominator tree (reverse CFG + petgraph simple_fast)
├── P5-24: Replace BFS depth-16 join detection with post-dom join (behind feature flag)
├── P5-25: Short-circuit boolean recovery (a && b, a || b from CFG diamond patterns)
├── P5-26: Validate: compare fixture outputs with flag on vs off, switch default if better
└── P5-27: Measure parity, store checkpoint

Wave 5 (Expression Quality + Function Discovery):
├── P5-28: Expression folding: suppress single-use temporaries from variable declarations
├── P5-29: Recursive descent function discovery (CALL targets as function entries)
├── P5-30: Enhanced prologue scanning (push r15, push r14, push rbx as prologues)
├── P5-31: Internal symbol resolution (sub_XXXX cross-references between discovered functions)
└── P5-32: Measure parity, store checkpoint

Wave FINAL (Verification):
├── P5-F1: Plan compliance audit (oracle)
├── P5-F2: Code quality review (general)
├── P5-F3: Parity measurement — must be ≥ 85% (general)
└── P5-F4: Regression check (general)
```

---

## TODOs

- [ ] P5-1. Enable SCCP in pipeline

  **What to do**:
  - In `crates/unlace-cli/src/pipeline.rs`:
    - Add `use unlace_passes::SccpPass;` to imports
    - Add `SccpPass` to the fixedpoint pass list: `let passes: &[&dyn Pass] = &[&fold, &prop, &dce, &SccpPass];`
  - Run `cargo test --workspace` — if tests fail, document which and fix or revert
  - If tests pass, measure parity delta

  **QA Scenarios**:
  ```
  Scenario: SCCP enabled without regression
    Tool: Bash
    Steps:
      1. cargo test --workspace
      2. Assert 0 failures
    Expected Result: All 995+ tests pass with SCCP enabled
    Evidence: .sisyphus/evidence/p5-1-sccp.txt
  ```

  **Commit**: `feat(pipeline): enable SCCP in optimization pipeline`

- [ ] P5-2. Enable CSE in pipeline

  **What to do**:
  - Add `CsePass` to the fixedpoint pass list in pipeline.rs
  - Run tests, measure parity

  **QA Scenarios**:
  ```
  Scenario: CSE enabled without regression
    Tool: Bash
    Steps:
      1. cargo test --workspace
      2. Assert 0 failures
    Expected Result: All tests pass with CSE enabled
    Evidence: .sisyphus/evidence/p5-2-cse.txt
  ```

  **Commit**: `feat(pipeline): enable CSE in optimization pipeline`

- [ ] P5-3. Enable DeadStoreElim + DeadFlagElim in pipeline

  **What to do**:
  - Add `DeadStoreElimPass` and `DeadFlagElimPass` to pipeline.rs
  - These run AFTER the fixedpoint loop (they're cleanup passes)
  - Run tests, measure parity

  **QA Scenarios**:
  ```
  Scenario: DSE + DFE enabled without regression
    Tool: Bash
    Steps:
      1. cargo test --workspace
      2. Assert 0 failures
    Expected Result: All tests pass
    Evidence: .sisyphus/evidence/p5-3-dse-dfe.txt
  ```

  **Commit**: `feat(pipeline): enable DeadStoreElim + DeadFlagElim`

- [ ] P5-4. Enable IdiomRecognition + DivisionIdiom + ModuloIdiom + ConditionSimplify

  **What to do**:
  - Add `IdiomRecognitionPass`, `DivisionIdiomPass`, `ModuloIdiomPass`, `ConditionSimplifyPass` to pipeline.rs
  - IdiomRecognition and ConditionSimplify go in the fixedpoint loop
  - DivisionIdiom and ModuloIdiom run after fixedpoint (they're pattern matchers)
  - Run tests, measure parity

  **QA Scenarios**:
  ```
  Scenario: Idiom passes enabled without regression
    Tool: Bash
    Steps:
      1. cargo test --workspace
      2. Assert 0 failures
    Expected Result: All tests pass with idiom passes enabled
    Evidence: .sisyphus/evidence/p5-4-idioms.txt
  ```

  **Commit**: `feat(pipeline): enable IdiomRecognition, DivisionIdiom, ModuloIdiom, ConditionSimplify`

- [ ] P5-5. Wire inferred_params + inferred_return_type to C printer

  **What to do**:
  - In `crates/unlace-output/src/c_printer.rs`:
    - Find function signature emission (where it currently emits `void func_name(void)`)
    - Read `ssa.inferred_params: Vec<(String, PrimitiveType)>` — emit param types and names
    - Read `ssa.inferred_return_type` (or equivalent field) — emit return type
    - Format: `__int64 __fastcall sub_XXXX(__int64 a1, __int64 a2)` matching IDA style
  - This is potentially the highest-ROI single change: has-params scores 3.6% avg with weight 2.0

  **QA Scenarios**:
  ```
  Scenario: Parameters appear in function signatures
    Tool: Bash
    Steps:
      1. cargo test --workspace
      2. cargo build && ./target/debug/unlace decompile fixtures/debug_calls.elf 2>/dev/null | grep -c "a1\|a2"
      3. Assert count > 0
    Expected Result: Function signatures show inferred parameters
    Evidence: .sisyphus/evidence/p5-5-params.txt
  ```

  **Commit**: `feat(output): wire inferred_params and return type to C printer signatures`

- [ ] P5-6. Measure parity after Wave 0 enables

  **What to do**:
  - Run full parity measurement: `python3 scripts/measure_parity.py --json > .sisyphus/evidence/p5-wave0.json`
  - Compare against p4-0-baseline.json per-feature
  - Document which features improved and by how much
  - This becomes the new baseline for Wave 1

  **QA Scenarios**:
  ```
  Scenario: Parity improved from enables
    Tool: Bash
    Steps:
      1. cargo build --release
      2. python3 scripts/measure_parity.py --json > .sisyphus/evidence/p5-wave0.json
      3. python3 -c "import json; d=json.load(open('.sisyphus/evidence/p5-wave0.json')); print(f'Parity: {d[\"overall_parity\"]:.1f}%')"
    Expected Result: Parity > 52.3% (baseline)
    Evidence: .sisyphus/evidence/p5-wave0.json
  ```

  **Commit**: NO (measurement only)

- [ ] P5-7. Lift SETcc family (16 variants)

  **What to do**:
  - In `crates/unlace-lift-x86/src/lift.rs`:
    - Add match arms for all 16 SETcc mnemonics: Sete, Setne, Setb, Setae, Seta, Setbe, Setl, Setge, Setg, Setle, Sets, Setns, Seto, Setno, Setp, Setnp
    - Route to new handler in `crates/unlace-lift-x86/src/ops/data_move.rs` (or new `setcc.rs`)
  - Handler logic: SETcc sets a byte register to 0 or 1 based on CPU flags
    - Read the relevant flag(s) from the flag register varnodes
    - Write 0 or 1 to the destination byte operand
    - IR: `dst = INT_ZEXT(flag_condition, 1)` where flag_condition is the relevant flag test
    - For SETE: `dst = ZF`; SETNE: `dst = !ZF`; SETB: `dst = CF`; SETA: `dst = !CF & !ZF`; etc.
  - Add tests: at least 1 per variant (16 tests minimum)

  **QA Scenarios**:
  ```
  Scenario: SETcc instructions lifted correctly
    Tool: Bash
    Steps:
      1. cargo test -p unlace-lift-x86 -- setcc
      2. Assert 16+ tests pass
    Expected Result: All SETcc variants produce correct IR
    Evidence: .sisyphus/evidence/p5-7-setcc.txt
  ```

  **Commit**: `feat(lift-x86): lift SETcc family (16 conditional byte-set variants)`

- [ ] P5-8. Lift CLTQ/CLTD/CQTO (sign extension family)

  **What to do**:
  - In `crates/unlace-lift-x86/src/lift.rs` and `ops/arithmetic.rs`:
    - CLTQ (CDQE): sign-extend EAX to RAX → `RAX = INT_SEXT(EAX, 8)`
    - CLTD (CDQ): sign-extend EAX to EDX:EAX → `EDX = INT_SRIGHT(EAX, 31)`
    - CQTO (CQO): sign-extend RAX to RDX:RAX → `RDX = INT_SRIGHT(RAX, 63)`
    - CBW: sign-extend AL to AX
    - CWDE: sign-extend AX to EAX
  - Add at least 3 tests

  **QA Scenarios**:
  ```
  Scenario: Sign extension instructions lifted
    Tool: Bash
    Steps:
      1. cargo test -p unlace-lift-x86 -- sign_ext
      2. Assert 3+ tests pass
    Expected Result: CLTQ/CLTD/CQTO produce correct IR
    Evidence: .sisyphus/evidence/p5-8-signext.txt
  ```

  **Commit**: `feat(lift-x86): lift CLTQ/CLTD/CQTO sign extension instructions`

- [ ] P5-9. Lift LEAVE instruction

  **What to do**:
  - LEAVE = `mov rsp, rbp; pop rbp` — two operations in one instruction
  - In `crates/unlace-lift-x86/src/lift.rs`: add match arm for `Mnemonic::Leave`
  - Handler: emit `RSP = RBP` then `RBP = LOAD(RSP); RSP = RSP + 8`
  - Add 1 test

  **QA Scenarios**:
  ```
  Scenario: LEAVE instruction lifted
    Tool: Bash
    Steps:
      1. cargo test -p unlace-lift-x86 -- leave
      2. Assert test passes
    Expected Result: LEAVE produces correct RSP/RBP restoration
    Evidence: .sisyphus/evidence/p5-9-leave.txt
  ```

  **Commit**: `feat(lift-x86): lift LEAVE instruction`

- [ ] P5-10. Measure parity after Wave 1

  **QA Scenarios**:
  ```
  Scenario: Parity improved from instruction lifts
    Tool: Bash
    Steps:
      1. cargo build --release
      2. python3 scripts/measure_parity.py --json > .sisyphus/evidence/p5-wave1.json
      3. Compare against p5-wave0.json
    Expected Result: Parity > Wave 0 result
    Evidence: .sisyphus/evidence/p5-wave1.json
  ```

  **Commit**: NO (measurement only)

- [ ] P5-11. Lift MOVAPS/MOVUPS/MOVSD

  **What to do**:
  - In `crates/unlace-lift-x86/src/ops/sse.rs`:
    - MOVAPS: aligned 128-bit SSE move (same as MOVDQA but for float type)
    - MOVUPS: unaligned 128-bit SSE move (same as MOVDQU but for float type)
    - MOVSD: scalar double-precision move (8 bytes in XMM register)
  - Dispatch in lift.rs: route to sse.rs handlers
  - Add 3+ tests

  **QA Scenarios**:
  ```
  Scenario: SSE move instructions lifted
    Tool: Bash
    Steps:
      1. cargo test -p unlace-lift-x86 -- movaps
      2. Assert 3+ tests pass
    Expected Result: MOVAPS/MOVUPS/MOVSD produce correct IR
    Evidence: .sisyphus/evidence/p5-11-ssemov.txt
  ```

  **Commit**: `feat(lift-x86): lift MOVAPS/MOVUPS/MOVSD SSE move instructions`

- [ ] P5-12. Lift ADC/SBB

  **What to do**:
  - ADC: `dst = src1 + src2 + CF` (add with carry)
  - SBB: `dst = src1 - src2 - CF` (subtract with borrow)
  - In `crates/unlace-lift-x86/src/ops/arithmetic.rs`: add handlers
  - Must read CF flag from flag register, add/subtract it
  - Also update flags (ZF, SF, OF, CF) from result
  - Add 2+ tests

  **QA Scenarios**:
  ```
  Scenario: Carry arithmetic lifted
    Tool: Bash
    Steps:
      1. cargo test -p unlace-lift-x86 -- adc_sbb
      2. Assert 2+ tests pass
    Expected Result: ADC/SBB produce correct IR with carry
    Evidence: .sisyphus/evidence/p5-12-carry.txt
  ```

  **Commit**: `feat(lift-x86): lift ADC/SBB carry arithmetic instructions`

- [ ] P5-13. Lift ROL/ROR

  **What to do**:
  - ROL: `dst = (src << count) | (src >> (bits - count))`
  - ROR: `dst = (src >> count) | (src << (bits - count))`
  - In `crates/unlace-lift-x86/src/ops/bitwise.rs`: add handlers
  - Add 2+ tests

  **QA Scenarios**:
  ```
  Scenario: Rotation instructions lifted
    Tool: Bash
    Steps:
      1. cargo test -p unlace-lift-x86 -- rotate
      2. Assert 2+ tests pass
    Expected Result: ROL/ROR produce correct IR
    Evidence: .sisyphus/evidence/p5-13-rotate.txt
  ```

  **Commit**: `feat(lift-x86): lift ROL/ROR rotation instructions`

- [ ] P5-14. Lift BT/BSF/BSR/TZCNT/LZCNT/POPCNT

  **What to do**:
  - BT: `CF = (src >> bit_index) & 1` (bit test, sets CF)
  - BSF: `dst = trailing_zeros(src)` (bit scan forward)
  - BSR: `dst = (bits-1) - leading_zeros(src)` (bit scan reverse)
  - TZCNT: same as BSF but defined for input=0
  - LZCNT: `dst = leading_zeros(src)`
  - POPCNT: `dst = popcount(src)`
  - In `crates/unlace-lift-x86/src/ops/bitwise.rs`: add handlers
  - Add 6+ tests

  **QA Scenarios**:
  ```
  Scenario: Bit operation instructions lifted
    Tool: Bash
    Steps:
      1. cargo test -p unlace-lift-x86 -- bit_ops
      2. Assert 6+ tests pass
    Expected Result: BT/BSF/BSR/TZCNT/LZCNT/POPCNT produce correct IR
    Evidence: .sisyphus/evidence/p5-14-bitops.txt
  ```

  **Commit**: `feat(lift-x86): lift BT/BSF/BSR/TZCNT/LZCNT/POPCNT bit operations`

- [ ] P5-15. Lift UD2 as unreachable/trap

  **What to do**:
  - UD2 is an intentional undefined instruction used as a trap/breakpoint
  - Emit as `CALLOTHER("__builtin_trap", [])` or mark block as unreachable
  - In lift.rs: add match arm, emit trap annotation
  - Add 1 test

  **QA Scenarios**:
  ```
  Scenario: UD2 lifted as trap
    Tool: Bash
    Steps:
      1. cargo test -p unlace-lift-x86 -- ud2
      2. Assert test passes
    Expected Result: UD2 produces trap annotation in IR
    Evidence: .sisyphus/evidence/p5-15-ud2.txt
  ```

  **Commit**: `feat(lift-x86): lift UD2 as __builtin_trap`

- [ ] P5-16. Measure parity after Wave 2

  **QA Scenarios**:
  ```
  Scenario: Parity improved from instruction coverage
    Tool: Bash
    Steps:
      1. cargo build --release
      2. python3 scripts/measure_parity.py --json > .sisyphus/evidence/p5-wave2.json
    Expected Result: Parity > Wave 1 result
    Evidence: .sisyphus/evidence/p5-wave2.json
  ```

  **Commit**: NO (measurement only)

- [ ] P5-17. Add identity elimination rules to IdiomRecognition

  **What to do**:
  - In `crates/unlace-passes/src/idiom_recognition.rs`:
    - Add rules: x+0→x, x-0→x, x*1→x, x/1→x, x%1→0, x&-1→x, x|0→x, x^0→x, x<<0→x, x>>0→x, x&0→0, x|all_ones→all_ones
    - These complement existing x^x→0, x-x→0, x&x→x, x|x→x rules
  - Add tests for each new rule

  **QA Scenarios**:
  ```
  Scenario: Identity rules simplify expressions
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes -- identity
      2. Assert tests pass
    Expected Result: x+0→x, x*1→x etc. are simplified
    Evidence: .sisyphus/evidence/p5-17-identity.txt
  ```

  **Commit**: `feat(passes): add identity elimination rules (x+0→x, x*1→x, x&0→0, etc.)`

- [ ] P5-18. Add De Morgan's law rules

  **What to do**:
  - In `crates/unlace-passes/src/condition_simplify.rs`:
    - Add: `BoolNegate(BoolOr(a, b))` → `BoolAnd(BoolNegate(a), BoolNegate(b))`
    - Add: `BoolNegate(BoolAnd(a, b))` → `BoolOr(BoolNegate(a), BoolNegate(b))`
  - Add 2+ tests

  **QA Scenarios**:
  ```
  Scenario: De Morgan's laws applied
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes -- demorgan
      2. Assert tests pass
    Expected Result: !(a||b) → !a&&!b in IR
    Evidence: .sisyphus/evidence/p5-18-demorgan.txt
  ```

  **Commit**: `feat(passes): De Morgan's law simplification`

- [ ] P5-19. Add sign-bit extraction rule

  **What to do**:
  - In `crates/unlace-passes/src/idiom_recognition.rs`:
    - `INT_RIGHT(x, 31)` for 32-bit → `INT_SLESS(x, 0)` (x >> 31 means x < 0)
    - `INT_RIGHT(x, 63)` for 64-bit → `INT_SLESS(x, 0)`
    - `INT_XOR(INT_RIGHT(x, 31), 1)` → `INT_SLESSEQUAL(0, x)` (x >= 0)
  - Add 2+ tests

  **QA Scenarios**:
  ```
  Scenario: Sign bit extraction simplified
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes -- sign_bit
      2. Assert tests pass
    Expected Result: x>>31 → x<0 in IR
    Evidence: .sisyphus/evidence/p5-19-signbit.txt
  ```

  **Commit**: `feat(passes): sign-bit extraction idiom (x>>31 → x<0)`

- [ ] P5-20. Add carry elimination rules

  **What to do**:
  - In `crates/unlace-passes/src/idiom_recognition.rs`:
    - `INT_CARRY(x, INT_2COMP(x))` → `INT_NOTEQUAL(x, 0)` (CARRY(x, -x) → x != 0)
    - `INT_CARRY(x, 0)` → constant 0
  - Add 2+ tests

  **QA Scenarios**:
  ```
  Scenario: Carry operations simplified
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes -- carry_elim
      2. Assert tests pass
    Expected Result: CARRY(x,-x) → x!=0
    Evidence: .sisyphus/evidence/p5-20-carry.txt
  ```

  **Commit**: `feat(passes): carry elimination rules`

- [ ] P5-21. Prologue/epilogue detection and suppression

  **What to do**:
  - WRITE `crates/unlace-passes/src/prologue_elim.rs` (new pass)
  - Detect in entry block: `PUSH RBP; MOV RBP, RSP; SUB RSP, N` → mark as frame setup
  - Detect callee-saved pushes: `PUSH R15; PUSH R14; PUSH R13; PUSH R12; PUSH RBX` → mark as frame setup
  - Detect stack canary: `LOAD [FS:0x28]; STORE [RBP-8]` → mark as canary setup
  - Detect epilogue: `MOV RSP, RBP; POP RBP; RET` or `LEAVE; RET` → mark as frame teardown
  - Mark instructions in `SsaFunction.frame_insns: BTreeSet<(BlockId, usize)>`
  - In c_printer: skip frame_insns when emitting statements
  - Add to pipeline after pass fixedpoint loop

  **QA Scenarios**:
  ```
  Scenario: Prologue/epilogue suppressed
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes -- prologue
      2. cargo build && ./target/debug/unlace decompile fixtures/debug_calls.elf 2>/dev/null | grep -c "push rbp"
      3. Assert count == 0 (no prologue in output)
    Expected Result: Frame setup/teardown not in C output
    Evidence: .sisyphus/evidence/p5-21-prologue.txt
  ```

  **Commit**: `feat(passes): prologue/epilogue detection and suppression`

- [ ] P5-22. Measure parity after Wave 3

  **QA Scenarios**:
  ```
  Scenario: Parity improved from optimizations
    Tool: Bash
    Steps:
      1. cargo build --release
      2. python3 scripts/measure_parity.py --json > .sisyphus/evidence/p5-wave3.json
    Expected Result: Parity > Wave 2 result
    Evidence: .sisyphus/evidence/p5-wave3.json
  ```

  **Commit**: NO (measurement only)

- [ ] P5-23. Implement post-dominator tree

  **What to do**:
  - In `crates/unlace-ir/src/cfg.rs` or `ssa.rs`:
    - Build post-dominator tree by: (1) reverse all CFG edges, (2) run petgraph's `simple_fast` dominator algorithm on reversed CFG
    - Store as `post_dom_tree: DominatorTree` on SsaFunction
    - The immediate post-dominator of block B is the first block that ALL paths from B must pass through — this is the join point for if/else
  - Add to SsaFunction construction (build_ssa or a separate pass)

  **QA Scenarios**:
  ```
  Scenario: Post-dominator tree computed correctly
    Tool: Bash
    Steps:
      1. cargo test -p unlace-ir -- post_dom
      2. Assert tests pass
    Expected Result: Post-dom tree matches expected for known CFGs
    Evidence: .sisyphus/evidence/p5-23-postdom.txt
  ```

  **Commit**: `feat(ir): post-dominator tree computation`

- [ ] P5-24. Replace BFS join detection with post-dom (feature flag)

  **What to do**:
  - In `crates/unlace-struct/src/structurer.rs`:
    - Find `find_join_point` (uses depth-16 BFS heuristic)
    - Add alternative: `find_join_point_postdom` that uses `post_dom_tree.idom(block)`
    - Use feature flag or runtime check to select which implementation
    - The post-dom join point is the immediate post-dominator of the condition block
  - Do NOT replace the old implementation yet — keep both, compare outputs

  **QA Scenarios**:
  ```
  Scenario: Post-dom join detection works
    Tool: Bash
    Steps:
      1. cargo test -p unlace-struct -- join_point
      2. Assert tests pass
    Expected Result: Post-dom finds correct join points
    Evidence: .sisyphus/evidence/p5-24-join.txt
  ```

  **Commit**: `feat(struct): post-dominator join detection (behind feature flag)`

- [ ] P5-25. Short-circuit boolean recovery

  **What to do**:
  - WRITE `crates/unlace-struct/src/short_circuit.rs` (new post-structuring pass)
  - Detect CFG diamond pattern for `a && b`:
    ```
    BB0: if (!a) goto false_target
    BB1: if (!b) goto false_target
    BB2: <true body>
    false_target: <false body>
    ```
    → Replace with: `if (a && b) { true_body } else { false_body }`
  - Detect `a || b` pattern similarly (shared true target instead of false)
  - Add to HIR: `HirNode::ShortCircuit { op: And|Or, conditions: Vec<HirNode> }`
  - Or: fold into existing If node's condition as `BoolAnd(a, b)` / `BoolOr(a, b)`

  **QA Scenarios**:
  ```
  Scenario: Short-circuit booleans recovered
    Tool: Bash
    Steps:
      1. cargo test -p unlace-struct -- short_circuit
      2. Assert tests pass
    Expected Result: if(a) if(b) → if(a && b) in HIR
    Evidence: .sisyphus/evidence/p5-25-shortcircuit.txt
  ```

  **Commit**: `feat(struct): short-circuit boolean recovery (a && b, a || b)`

- [ ] P5-26. Validate structurer changes on fixtures

  **What to do**:
  - Decompile all 4 fixtures with post-dom enabled vs disabled
  - Compare outputs: count gotos, if-branches, loops
  - If post-dom produces strictly better output (fewer gotos, more structured), switch default
  - If mixed results, keep BFS as default, post-dom as opt-in

  **QA Scenarios**:
  ```
  Scenario: Structurer changes validated
    Tool: Bash
    Steps:
      1. Decompile all fixtures with both modes
      2. Compare goto counts, if-branch counts
    Expected Result: Post-dom mode produces ≥ same quality output
    Evidence: .sisyphus/evidence/p5-26-validate.txt
  ```

  **Commit**: `chore: validate post-dom structurer against fixtures`

- [ ] P5-27. Measure parity after Wave 4

  **QA Scenarios**:
  ```
  Scenario: Parity improved from structurer
    Tool: Bash
    Steps:
      1. cargo build --release
      2. python3 scripts/measure_parity.py --json > .sisyphus/evidence/p5-wave4.json
    Expected Result: Parity > Wave 3 result
    Evidence: .sisyphus/evidence/p5-wave4.json
  ```

  **Commit**: NO (measurement only)

- [ ] P5-28. Expression folding: suppress single-use temporaries

  **What to do**:
  - In `crates/unlace-output/src/c_printer.rs`:
    - When emitting variable declarations, skip variables that are in `foldable_exprs`
    - These are single-use temporaries that should be inlined into their use site
    - The ExpressionTreePass already marks these — just need the printer to respect it

  **QA Scenarios**:
  ```
  Scenario: Single-use temps suppressed
    Tool: Bash
    Steps:
      1. cargo test -p unlace-output -- expr_fold
      2. Assert tests pass
    Expected Result: Fewer variable declarations in output
    Evidence: .sisyphus/evidence/p5-28-exprfold.txt
  ```

  **Commit**: `feat(output): suppress single-use temporaries from variable declarations`

- [ ] P5-29. Recursive descent function discovery

  **What to do**:
  - In `crates/unlace-cli/src/pipeline.rs` or `crates/unlace-loader/src/`:
    - After initial function discovery (symbols + .eh_frame), scan discovered functions for CALL targets
    - Every CALL to an address not already in the function set → new function entry
    - Iterate until no new functions discovered (fixed-point)
  - This discovers internal functions that hexx64.so calls but doesn't export

  **QA Scenarios**:
  ```
  Scenario: More functions discovered via CALL targets
    Tool: Bash
    Steps:
      1. cargo test -- recursive_discovery
      2. Assert tests pass
    Expected Result: Function count increases for fixtures with internal calls
    Evidence: .sisyphus/evidence/p5-29-discovery.txt
  ```

  **Commit**: `feat(loader): recursive descent function discovery from CALL targets`

- [ ] P5-30. Enhanced prologue scanning

  **What to do**:
  - In `crates/unlace-cli/src/pipeline.rs` (or loader):
    - Currently only scans for `push rbp; mov rbp, rsp` pattern
    - Add: `push r15` (41 57), `push r14` (41 56), `push r13` (41 55), `push r12` (41 54), `push rbx` (53) at aligned addresses
    - Add: `sub rsp, imm` (48 83 EC XX or 48 81 EC XXXXXXXX) as standalone prologue
    - Add: `endbr64` (F3 0F 1E FA) as function start marker (CET)
  - This discovers more functions in stripped binaries

  **QA Scenarios**:
  ```
  Scenario: More prologues recognized
    Tool: Bash
    Steps:
      1. cargo test -- prologue_scan
      2. Assert tests pass
    Expected Result: More functions discovered with expanded patterns
    Evidence: .sisyphus/evidence/p5-30-prologues.txt
  ```

  **Commit**: `feat(loader): enhanced prologue scanning (push r15/r14/r13/r12/rbx patterns)`

- [ ] P5-31. Internal symbol resolution

  **What to do**:
  - After function discovery, build internal symbol table: `BTreeMap<u64, String>` mapping function entry address → `sub_XXXX` name
  - Pass this to the C printer alongside PLT symbols
  - When a CALL targets an internal function, emit `sub_XXXX(...)` with the correct name
  - This improves `calls` Jaccard similarity (IDA's reference uses `sub_XXXX` names)

  **QA Scenarios**:
  ```
  Scenario: Internal calls resolved to sub_XXXX names
    Tool: Bash
    Steps:
      1. cargo test -p unlace-output -- internal_symbol
      2. Assert tests pass
    Expected Result: Internal calls show sub_XXXX names matching IDA
    Evidence: .sisyphus/evidence/p5-31-internal.txt
  ```

  **Commit**: `feat(output): internal symbol resolution for cross-function calls`

- [ ] P5-32. Measure parity after Wave 5

  **QA Scenarios**:
  ```
  Scenario: Parity after all waves
    Tool: Bash
    Steps:
      1. cargo build --release
      2. python3 scripts/measure_parity.py --json > .sisyphus/evidence/p5-wave5.json
      3. python3 -c "import json; d=json.load(open('.sisyphus/evidence/p5-wave5.json')); print(f'Parity: {d[\"overall_parity\"]:.1f}%'); assert d['overall_parity'] >= 85.0"
    Expected Result: Parity ≥ 85%
    Evidence: .sisyphus/evidence/p5-wave5.json
  ```

  **Commit**: NO (measurement only)

---

## Final Verification Wave

- [ ] P5-F1. **Plan Compliance Audit** — `oracle`

  **QA Scenarios**:
  ```
  Scenario: All features verified
    Tool: Bash
    Steps:
      1. cargo test --workspace
      2. python3 scripts/measure_parity.py --json | python3 -c "import json,sys; d=json.load(sys.stdin); print(f'Parity: {d[\"overall_parity\"]:.1f}%')"
      3. Assert parity ≥ 85%
    Expected Result: Plan compliance confirmed
    Evidence: .sisyphus/evidence/p5-f1-compliance.txt
  ```

- [ ] P5-F2. **Code Quality Review** — `general`

  **QA Scenarios**:
  ```
  Scenario: Build + test + lint clean
    Tool: Bash
    Steps:
      1. cargo test --workspace
      2. cargo xtask lint-determinism
      3. Assert 0 failures and lint OK
    Expected Result: 1020+ tests pass, determinism maintained
    Evidence: .sisyphus/evidence/p5-f2-quality.txt
  ```

- [ ] P5-F3. **Parity Measurement** — `general`

  **QA Scenarios**:
  ```
  Scenario: Parity target met
    Tool: Bash
    Steps:
      1. cargo build --release
      2. python3 scripts/measure_parity.py --json > .sisyphus/evidence/p5-f3-parity.json
      3. Assert overall_parity ≥ 85.0%
    Expected Result: Parity ≥ 85%
    Evidence: .sisyphus/evidence/p5-f3-parity.json
  ```

- [ ] P5-F4. **Regression Check** — `general`

  **QA Scenarios**:
  ```
  Scenario: No regressions
    Tool: Bash
    Steps:
      1. for f in medium debug_structs debug_calls debug_hello; do ./target/debug/unlace decompile fixtures/$f.elf 2>/dev/null | wc -l; done
      2. cargo test --workspace 2>&1 | grep -c FAILED
      3. Assert all fixtures produce output and 0 failures
    Expected Result: All fixtures decompile, 0 test failures
    Evidence: .sisyphus/evidence/p5-f4-regression.txt
  ```

---

## Commit Strategy

- Wave 0: 5 commits (enable passes) + 1 measurement
- Wave 1: 3 commits (SETcc, sign ext, LEAVE) + 1 measurement
- Wave 2: 5 commits (SSE moves, ADC/SBB, ROL/ROR, bit ops, UD2) + 1 measurement
- Wave 3: 5 commits (identity rules, De Morgan, sign-bit, carry elim, prologue) + 1 measurement
- Wave 4: 4 commits (post-dom, join detection, short-circuit, validation) + 1 measurement
- Wave 5: 4 commits (expr fold, recursive discovery, prologue scan, internal symbols) + 1 measurement
- Final: `chore: Phase 5 complete — N/N tasks, X tests, Y% IDA parity`

---

## Success Criteria

### Verification Commands
```bash
cargo test --workspace                                    # ≥ 1020 tests, 0 failures
cargo xtask lint-determinism                             # OK
python3 scripts/measure_parity.py --json | jq .overall   # ≥ 85.0
```

### Final Checklist
- [ ] All "Must Have" present
- [ ] All "Must NOT Have" absent
- [ ] Parity ≥ 85%
- [ ] All tests pass
- [ ] All fixtures decompile
- [ ] Pushed to GitHub
