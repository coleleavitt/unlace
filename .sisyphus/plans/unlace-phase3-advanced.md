# unlace Phase 3 — Advanced Parity + Differentiation (85% Target)

## TL;DR

> **Quick Summary**: Take unlace from ~70% IDA parity to 85%+ by implementing compiler idiom recovery, improved variable coalescence, SSE/AVX lifting (MVP), exception handling basics, Rust-specific analysis, and output polish. Also add unique differentiators: batch mode, plugin API, and deterministic diff-friendly output.
> 
> **Deliverables**:
> - Compiler division/modulo idiom recovery (every binary has these)
> - Dead store elimination + SCCP (sparse conditional constant propagation)
> - For-loop / do-while / continue recovery in structurer
> - SSE/AVX MVP lifting (MOVDQA, PADDB family via CALLOTHER + intrinsics)
> - .eh_frame parsing + basic exception flow edges
> - Rust panic path annotation + enum discriminant detection
> - Batch decompilation mode (`--batch --jobs N`)
> - Plugin API (load custom passes as .so/.dll)
> - Negative constant normalization (`0xfffffffffffffff8` → `-8`)
> - IDA-style type casts (`_QWORD *`, `_DWORD *` instead of `void **`)
> 
> **Estimated Effort**: XL (multi-month, 6 waves, ~30 tasks)
> **Parallel Execution**: YES — 4-6 concurrent tasks per wave
> **Critical Path**: Idiom recovery → SCCP → for-loop recovery → batch mode

---

## Context

### Phase 2 Results
- 730 tests passing across 15 crates
- 15 optimization/analysis passes implemented
- Expression tree folding, variable merging, struct field access, DWARF types working
- 17ms decompile time on medium.elf

### Phase 3 Sources (from 6 explore agents)
1. **Remaining gaps**: SSE/AVX (200+ instructions), exception handling, VTable, type library
2. **Output quality**: Expression folding improved but still 2.5x more variables than IDA
3. **Ghidra features**: 20+ passes unlace lacks (division idioms, SCCP, value set analysis)
4. **BinaryNinja features**: For-loop recovery, dead store elimination, region-based structuring
5. **Research**: SAILR compiler-aware structuring, dewolf out-of-SSA improvements
6. **Unique to unlace**: Rust async recovery, batch mode, plugin API, deterministic output

### Phase 3 Scope
**IN**: Compiler idioms, SCCP, dead stores, for-loop/continue recovery, SSE/AVX MVP, .eh_frame basics, Rust panic/enum detection, batch mode, plugin API, output polish (type casts, negative constants, variable naming)
**OUT**: Full VTable reconstruction, full type library (TIL), full data xrefs, alias analysis, value set analysis, neural type recovery, full SAILR implementation

---

## Execution Strategy

```
Wave 1 (Pass Quality — immediate output improvement):
├── Task P3-1:  Compiler division idiom recovery [general]
├── Task P3-2:  Compiler modulo idiom recovery [general]
├── Task P3-3:  Dead store elimination [general]
├── Task P3-4:  Sparse conditional constant propagation (SCCP) [general]
├── Task P3-5:  Negative constant normalization (-8 not 0xfffffffffffffff8) [general]
├── Task P3-6:  IDA-style type casts (_QWORD *, _DWORD *) [general]

Wave 2 (Structuring Quality):
├── Task P3-7:  For-loop recovery (init; while; increment → for) [general]
├── Task P3-8:  Do-while recovery improvement [general]
├── Task P3-9:  Continue statement recovery [general]
├── Task P3-10: Improved variable coalescence [general]
├── Task P3-11: Common subexpression elimination (CSE) [general]

Wave 3 (SSE/AVX + Exception Handling):
├── Task P3-12: XMM register file expansion [general]
├── Task P3-13: SSE/AVX intrinsic registry via CALLOTHER [general]
├── Task P3-14: MOVDQA/MOVDQU + PADDB-PADDQ lifting [general]
├── Task P3-15: .eh_frame parsing + exception edges in CFG [general]
├── Task P3-16: Basic try/catch structuring [general]

Wave 4 (Rust-Specific):
├── Task P3-17: Rust panic path annotation [general]
├── Task P3-18: Rust enum discriminant detection [general]
├── Task P3-19: Rust trait object vtable detection [general]

Wave 5 (Infrastructure):
├── Task P3-20: Batch decompilation mode (--batch --jobs N) [general]
├── Task P3-21: Plugin API (load custom Pass as .so) [general]
├── Task P3-22: Function header comments (address, size, name) [general]

Wave 6 (Integration):
├── Task P3-23: Re-baseline golden tests [general]
├── Task P3-24: Parity measurement vs IDA [general]
├── Task P3-25: Performance regression check [general]
├── Task P3-26: Push to GitHub [general]

Wave FINAL:
├── F1: Plan compliance audit [oracle]
├── F2: Code quality review [general]
├── F3: Parity QA [general]
└── F4: Regression check [general]

Critical Path: P3-1 → P3-4 → P3-7 → P3-10 → P3-23
```

---

## TODOs

### Wave 1 — Pass Quality

- [x] P3-1. Compiler division idiom recovery
  **What to do**: Recognize `(x * magic_constant) >> shift` as `x / N`. GCC and Clang generate these for ALL integer divisions by constants. Add `DivisionIdiomPass` to unlace-passes. Read references/hexrays/ida_dump/hexx64/all/ for examples — IDA always shows `x / N` not the multiply-shift pattern.
  **IDA reference**: Search for division patterns in hexx64 decompiled output. IDA's Ghidra equivalent is `RuleDivTermAdd`.
  **Tests**: Lift `imul rax, rcx, 0x2AAAAAAB; shr rax, 33` → assert output shows `/ 3`.
  **QA Scenarios**:
  ```
  Scenario: Division idiom detected
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes -- test_div_idiom
      2. Assert exit code == 0
    Expected Result: Multiply-shift recognized as division
    Evidence: .sisyphus/evidence/p3-1-div-idiom.txt
  ```
  **Commit**: `feat(passes): compiler division idiom recovery`

- [x] P3-2. Compiler modulo idiom recovery
  **What to do**: Recognize modulo patterns: `x - (x / N) * N` → `x % N`. Also: `x & (2^n - 1)` → `x % 2^n` for unsigned. Add to the DivisionIdiomPass or create `ModuloIdiomPass`.
  **Tests**: `x & 0x7` → `x % 8` for unsigned; `x - (x / 3) * 3` → `x % 3`.
  **QA Scenarios**:
  ```
  Scenario: Modulo idiom detected
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes -- test_mod_idiom
      2. Assert exit code == 0
    Expected Result: Power-of-2 AND recognized as modulo
    Evidence: .sisyphus/evidence/p3-2-mod-idiom.txt
  ```
  **Commit**: `feat(passes): compiler modulo idiom recovery`

- [x] P3-3. Dead store elimination
  **What to do**: Separate from DCE. Remove writes to variables that are never subsequently read. DCE removes dead computations; DSE removes dead STORES. E.g., `v1 = 5; v1 = 10; return v1;` → remove `v1 = 5`.
  **Tests**: Synthetic IR with redundant stores → assert first store removed.
  **QA Scenarios**:
  ```
  Scenario: Dead stores removed
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes -- test_dead_store_elim
      2. Assert exit code == 0
    Expected Result: Overwritten stores eliminated
    Evidence: .sisyphus/evidence/p3-3-dse.txt
  ```
  **Commit**: `feat(passes): dead store elimination`

- [x] P3-4. Sparse conditional constant propagation (SCCP)
  **What to do**: Replace basic constant folding with SCCP. Propagate constants only along feasible paths. `if (x == 5) { y = x + 1; }` → `if (x == 5) { y = 6; }`. This is Ghidra's `ActionConditionalConst`.
  **Tests**: Synthetic IR with conditional paths → assert constants propagated correctly through branches.
  **QA Scenarios**:
  ```
  Scenario: SCCP propagates through branches
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes -- test_sccp
      2. Assert exit code == 0
    Expected Result: Constants propagated along feasible paths
    Evidence: .sisyphus/evidence/p3-4-sccp.txt
  ```
  **Commit**: `feat(passes): sparse conditional constant propagation (SCCP)`

- [x] P3-5. Negative constant normalization
  **What to do**: In C printer, detect two's complement constants and emit as negative numbers. `0xfffffffffffffff8ULL` → `-8`. `0xfffffffc` (32-bit) → `-4`. Apply when: constant has MSB set AND is used in subtraction/comparison context.
  **IDA reference**: IDA always normalizes to negative form when the context implies signed arithmetic.
  **Tests**: C output for `INT_ADD(v1, 0xfffffffffffffff8)` → `v1 + (-8)` or `v1 - 8`.
  **QA Scenarios**:
  ```
  Scenario: Negative constants normalized
    Tool: Bash
    Steps:
      1. cargo test -p unlace-output -- test_negative_const
      2. Assert exit code == 0
    Expected Result: Two's complement → negative number in output
    Evidence: .sisyphus/evidence/p3-5-neg-const.txt
  ```
  **Commit**: `feat(output): negative constant normalization`

- [x] P3-6. IDA-style type casts
  **What to do**: In C printer, use IDA-style type annotations. 8-byte pointer → `(_QWORD *)`, 4-byte → `(_DWORD *)`, 2-byte → `(_WORD *)`, 1-byte → `(_BYTE *)`. Also add `(__int64)`, `(unsigned __int64)` for explicit integer casts. Define these as typedefs at the top of output.
  **Tests**: Load/Store of 8-byte value → `*(_QWORD *)addr` in output.
  **QA Scenarios**:
  ```
  Scenario: Type casts in output
    Tool: Bash
    Steps:
      1. cargo test -p unlace-output -- test_ida_type_casts
      2. Assert exit code == 0
    Expected Result: _QWORD/_DWORD type casts in C output
    Evidence: .sisyphus/evidence/p3-6-type-casts.txt
  ```
  **Commit**: `feat(output): IDA-style type casts (_QWORD *, _DWORD *)`

### Wave 2 — Structuring Quality

- [x] P3-7. For-loop recovery
  **What to do**: In structurer, detect `init; while (cond) { body; increment }` → `for (init; cond; increment)`. Add `HirNode::For { init, cond, increment, body }` to HIR. Detect: last statement before While is an assignment (init), last statement in While body modifies the induction variable (increment).
  **Tests**: Synthetic HIR with while pattern → for-loop in output.
  **QA Scenarios**:
  ```
  Scenario: For-loop recovered
    Tool: Bash
    Steps:
      1. cargo test -p unlace-struct -- test_for_loop_recovery
      2. Assert exit code == 0
    Expected Result: while with init+increment → for loop
    Evidence: .sisyphus/evidence/p3-7-for-loop.txt
  ```
  **Commit**: `feat(struct): for-loop recovery from while + init + increment pattern`

- [x] P3-8. Do-while recovery improvement
  **What to do**: Improve the existing do-while detection. Currently basic back-edge detection. Add proper loop-condition-at-bottom detection where the CBRANCH is at the end of the loop body, not the header.
  **Commit**: `feat(struct): improved do-while recovery`
  **QA Scenarios**:
  ```
  Scenario: Do-while improved
    Tool: Bash
    Steps:
      1. cargo test -p unlace-struct -- test_do_while_improved
      2. Assert exit code == 0
    Expected Result: Correct do-while when condition at loop bottom
    Evidence: .sisyphus/evidence/p3-8-do-while.txt
  ```

- [x] P3-9. Continue statement recovery
  **What to do**: In structured loops, detect `if (!cond) { rest_of_body }` at the END of a loop body → emit `if (cond) continue; rest_of_body`. This reduces nesting depth.
  **Commit**: `feat(struct): continue statement recovery in loops`
  **QA Scenarios**:
  ```
  Scenario: Continue detected
    Tool: Bash
    Steps:
      1. cargo test -p unlace-struct -- test_continue_recovery
      2. Assert exit code == 0
    Expected Result: Negated condition at loop end → continue
    Evidence: .sisyphus/evidence/p3-9-continue.txt
  ```

- [x] P3-10. Improved variable coalescence
  **What to do**: After out-of-SSA (variable merge), additionally merge variables that have non-overlapping live ranges AND compatible types, even if they have different base Varnodes. E.g., two distinct temp registers used in sequence can share a name.
  **Commit**: `feat(passes): improved variable coalescence across base varnodes`
  **QA Scenarios**:
  ```
  Scenario: Cross-varnode coalescence
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes -- test_cross_varnode_merge
      2. Assert exit code == 0
    Expected Result: Non-overlapping temps share names
    Evidence: .sisyphus/evidence/p3-10-coalescence.txt
  ```

- [x] P3-11. Common subexpression elimination (CSE)
  **What to do**: Detect identical expressions computed multiple times across blocks. Replace second+ computation with reference to first. `v1 = a + b; ...; v5 = a + b;` → `v5 = v1;`
  **Commit**: `feat(passes): common subexpression elimination`
  **QA Scenarios**:
  ```
  Scenario: CSE reduces redundancy
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes -- test_cse
      2. Assert exit code == 0
    Expected Result: Duplicate expressions eliminated
    Evidence: .sisyphus/evidence/p3-11-cse.txt
  ```

### Wave 3 — SSE/AVX + Exception Handling

- [x] P3-12. XMM register file expansion
  **What to do**: Add XMM0-XMM15 (128-bit, 16 bytes each) to x86 register file at offsets 384-639 (16 regs × 16 bytes). Update iced-x86 register mapping.
  **Commit**: `feat(lift-x86): XMM0-XMM15 register file expansion`
  **QA Scenarios**:
  ```
  Scenario: XMM registers defined
    Tool: Bash
    Steps:
      1. cargo test -p unlace-lift-x86 -- test_xmm_registers
      2. Assert exit code == 0
    Expected Result: XMM0-XMM15 accessible as Varnodes
    Evidence: .sisyphus/evidence/p3-12-xmm.txt
  ```

- [x] P3-13. SSE/AVX intrinsic registry
  **What to do**: Create `crates/unlace-lift-x86/src/intrinsics.rs` with a registry mapping SSE/AVX mnemonics to intrinsic IDs. Use CALLOTHER to emit them. Define 50 most common intrinsic IDs. Update C printer to render CALLOTHER with intrinsic names.
  **Commit**: `feat(lift-x86): SSE/AVX intrinsic registry for CALLOTHER`
  **QA Scenarios**:
  ```
  Scenario: Intrinsic registry works
    Tool: Bash
    Steps:
      1. cargo test -p unlace-lift-x86 -- test_intrinsic_registry
      2. Assert exit code == 0
    Expected Result: SIMD mnemonics map to intrinsic IDs
    Evidence: .sisyphus/evidence/p3-13-intrinsics.txt
  ```

- [x] P3-14. MOVDQA/MOVDQU + PADDB-PADDQ lifting
  **What to do**: Lift the 6 most common SSE instructions via CALLOTHER + intrinsic registry: MOVDQA, MOVDQU, PADDB, PADDW, PADDD, PADDQ. Read/write XMM registers. Test with real SSE byte sequences.
  **Commit**: `feat(lift-x86): SSE MVP — MOVDQA, MOVDQU, PADDB-PADDQ`
  **QA Scenarios**:
  ```
  Scenario: SSE instructions lift
    Tool: Bash
    Steps:
      1. cargo test -p unlace-lift-x86 -- test_sse_movdqa
      2. cargo test -p unlace-lift-x86 -- test_sse_paddb
      3. Assert both exit code == 0
    Expected Result: SSE instructions produce CALLOTHER with intrinsic names
    Evidence: .sisyphus/evidence/p3-14-sse.txt
  ```

- [x] P3-15. .eh_frame parsing + exception edges
  **What to do**: Extend DWARF loader to parse .eh_frame section. Extract landing pad addresses. Add `EdgeKind::Exception` to CFG. Mark blocks with landing pads.
  **Commit**: `feat(loader): .eh_frame parsing + exception edges in CFG`
  **QA Scenarios**:
  ```
  Scenario: Exception edges in CFG
    Tool: Bash
    Steps:
      1. cargo test -p unlace-loader -- test_eh_frame
      2. Assert exit code == 0
    Expected Result: Landing pads extracted from .eh_frame
    Evidence: .sisyphus/evidence/p3-15-ehframe.txt
  ```

- [x] P3-16. Basic try/catch structuring
  **What to do**: In structurer, detect exception handler patterns: blocks preceded by calls to `__cxa_begin_catch` are catch blocks; preceding code is try block. Emit `HirNode::TryCatch { try_body, catches }`.
  **Commit**: `feat(struct): basic try/catch structuring from exception metadata`
  **QA Scenarios**:
  ```
  Scenario: Try/catch structured
    Tool: Bash
    Steps:
      1. cargo test -p unlace-struct -- test_try_catch
      2. Assert exit code == 0
    Expected Result: Exception handler blocks → try/catch HIR nodes
    Evidence: .sisyphus/evidence/p3-16-trycatch.txt
  ```

### Wave 4 — Rust-Specific

- [x] P3-17. Rust panic path annotation
  **What to do**: Detect calls to `core::panicking::panic`, `core::panicking::panic_fmt`, `rust_begin_unwind` etc. in decompiled output. Add `/* panic: ... */` comment before the call. Mark the path as unlikely/cold in the structurer.
  **Commit**: `feat(passes): Rust panic path annotation`
  **QA Scenarios**:
  ```
  Scenario: Panic paths annotated
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes -- test_rust_panic_annotation
      2. Assert exit code == 0
    Expected Result: Calls to panic functions annotated with comments
    Evidence: .sisyphus/evidence/p3-17-panic.txt
  ```

- [x] P3-18. Rust enum discriminant detection
  **What to do**: Detect patterns where a small integer field at a struct offset is used as a switch discriminant. Annotate with `/* enum discriminant */` comment. Works for Option, Result, and user-defined enums.
  **Commit**: `feat(passes): Rust enum discriminant detection`
  **QA Scenarios**:
  ```
  Scenario: Enum discriminant detected
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes -- test_rust_enum_discriminant
      2. Assert exit code == 0
    Expected Result: Switch on struct field annotated as enum discriminant
    Evidence: .sisyphus/evidence/p3-18-enum.txt
  ```

- [x] P3-19. Rust trait object vtable detection
  **What to do**: Detect `(data_ptr, vtable_ptr)` fat pointer patterns. Verify vtable points to read-only section. First vtable entry is destructor. Annotate indirect calls through vtable as `/* dyn Trait::method */`.
  **Commit**: `feat(passes): Rust trait object vtable detection`
  **QA Scenarios**:
  ```
  Scenario: Trait vtable detected
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes -- test_rust_trait_vtable
      2. Assert exit code == 0
    Expected Result: Fat pointer + vtable pattern annotated
    Evidence: .sisyphus/evidence/p3-19-vtable.txt
  ```

### Wave 5 — Infrastructure

- [x] P3-20. Batch decompilation mode
  **What to do**: Add `unlace decompile --batch BINARY --output-dir DIR --jobs N` that decompiles ALL functions in a binary, writes one `.c` file per function, parallelized across N threads using rayon.
  **Commit**: `feat(cli): batch decompilation mode (--batch --jobs N)`
  **QA Scenarios**:
  ```
  Scenario: Batch mode works
    Tool: Bash
    Steps:
      1. mkdir -p /tmp/batch_test
      2. ./target/debug/unlace decompile --batch fixtures/medium.elf --output-dir /tmp/batch_test
      3. ls /tmp/batch_test/*.c | wc -l
      4. Assert count >= 5
    Expected Result: Multiple .c files generated
    Evidence: .sisyphus/evidence/p3-20-batch.txt
  ```

- [x] P3-21. Plugin API
  **What to do**: Create `unlace-plugin-api` crate exposing the Pass trait as a stable C ABI. Allow `unlace decompile --plugin ./libmy_pass.so BINARY` to load and run custom passes. Use `libloading` crate for dynamic library loading.
  **Commit**: `feat(cli): plugin API for custom analysis passes`
  **QA Scenarios**:
  ```
  Scenario: Plugin loads
    Tool: Bash
    Steps:
      1. cargo test -p unlace-cli -- test_plugin_api
      2. Assert exit code == 0
    Expected Result: Plugin trait compiles and can be loaded
    Evidence: .sisyphus/evidence/p3-21-plugin.txt
  ```

- [x] P3-22. Function header comments
  **What to do**: Add IDA-style header comments to C output: function address, size, name, calling convention, stack frame size.
  **Commit**: `feat(output): function header comments (address, size, name)`
  **QA Scenarios**:
  ```
  Scenario: Headers in output
    Tool: Bash
    Steps:
      1. ./target/debug/unlace decompile fixtures/hello_world.elf > /tmp/p322.c
      2. grep -c "// Address:" /tmp/p322.c
      3. Assert count >= 1
    Expected Result: Address/size comments in function headers
    Evidence: .sisyphus/evidence/p3-22-headers.txt
  ```

### Wave 6 — Integration

- [x] P3-23. Re-baseline golden tests
  **QA Scenarios**:
  ```
  Scenario: Goldens re-baselined
    Tool: Bash
    Steps:
      1. cargo test --test golden_x86_64 2>&1 | tail -5
      2. Assert exit code == 0
    Expected Result: Updated goldens pass
    Evidence: .sisyphus/evidence/p3-23-rebaseline.txt
  ```
  **Commit**: `test: re-baseline golden tests after Phase 3`

- [x] P3-24. Parity measurement
  **QA Scenarios**:
  ```
  Scenario: Parity measured
    Tool: Bash
    Steps:
      1. ./target/debug/unlace decompile fixtures/medium.elf > /tmp/p3_parity.c
      2. wc -l /tmp/p3_parity.c
    Expected Result: Parity improvement documented
    Evidence: .sisyphus/evidence/p3-24-parity.txt
  ```
  **Commit**: `docs: Phase 3 parity measurement`

- [x] P3-25. Performance regression check
  **QA Scenarios**:
  ```
  Scenario: No perf regression
    Tool: Bash
    Steps:
      1. cargo build --release -p unlace-cli
      2. START=$(date +%s%N); ./target/release/unlace decompile fixtures/medium.elf > /dev/null; END=$(date +%s%N); echo "$(( (END-START)/1000000 ))ms"
      3. Assert < 100ms
    Expected Result: Decompile time under 100ms
    Evidence: .sisyphus/evidence/p3-25-perf.txt
  ```
  **Commit**: `perf: Phase 3 performance validation`

- [x] P3-26. Push to GitHub
  **QA Scenarios**:
  ```
  Scenario: Push succeeds
    Tool: Bash
    Steps:
      1. git push origin master 2>&1 | tail -3
      2. Assert exit code == 0
    Expected Result: All commits pushed
    Evidence: .sisyphus/evidence/p3-26-push.txt
  ```

---

## Final Verification Wave

- [x] F1. **Plan Compliance Audit** — oracle
  **QA Scenarios**:
  ```
  Scenario: All features work
    Tool: Bash
    Steps:
      1. cargo test --workspace 2>&1 | tail -5
      2. ./target/debug/unlace decompile fixtures/medium.elf | grep -c "/ [0-9]"
      3. Assert count >= 1 (division idioms recovered)
    Expected Result: Phase 3 features functional
    Evidence: .sisyphus/evidence/p3-f1-compliance.txt
  ```

- [x] F2. **Code Quality Review** — general
  **QA Scenarios**:
  ```
  Scenario: Build + test + lint
    Tool: Bash
    Steps:
      1. cargo test --workspace
      2. cargo xtask lint-determinism
      3. Assert both pass
    Expected Result: Clean build, determinism maintained
    Evidence: .sisyphus/evidence/p3-f2-quality.txt
  ```

- [x] F3. **Parity QA** — general
  **QA Scenarios**:
  ```
  Scenario: Output quality improved
    Tool: Bash
    Steps:
      1. for f in hello_world branches loops calls medium debug_structs debug_calls; do echo "$f: $(./target/debug/unlace decompile fixtures/$f.elf 2>/dev/null | wc -l) lines"; done
      2. Assert all decompile successfully
    Expected Result: All fixtures produce improved output
    Evidence: .sisyphus/evidence/p3-f3-parity.txt
  ```

- [x] F4. **Regression Check** — general
  **QA Scenarios**:
  ```
  Scenario: No regressions
    Tool: Bash
    Steps:
      1. cargo test --workspace 2>&1 | grep "FAIL" | wc -l
      2. Assert count == 0
      3. ./target/debug/unlace decompile /dev/null 2>&1; echo $?
      4. Assert exit != 0
    Expected Result: Phase 1+2 features intact
    Evidence: .sisyphus/evidence/p3-f4-regression.txt
  ```

---

## Success Criteria

### Verification Commands
```bash
cargo test --workspace
cargo xtask lint-determinism
./target/debug/unlace decompile fixtures/medium.elf | grep -c "/ [0-9]"  # Division idioms
./target/debug/unlace decompile fixtures/medium.elf | grep -c "for ("    # For-loops
./target/debug/unlace decompile fixtures/medium.elf | grep -c "_QWORD"   # Type casts
./target/debug/unlace decompile --batch fixtures/medium.elf --output-dir /tmp/batch
```

### Final Checklist
- [ ] Division/modulo idioms recovered
- [ ] Dead stores eliminated
- [ ] SCCP propagates through branches
- [ ] For-loops detected from while+init+increment
- [ ] Continue statements detected
- [ ] XMM registers defined, SSE MVP lifts (6+ instructions)
- [ ] .eh_frame parsed, exception edges in CFG
- [ ] Rust panic paths annotated
- [ ] Batch mode produces per-function .c files
- [ ] Negative constants normalized
- [ ] IDA-style type casts in output
- [ ] All existing tests pass
- [ ] Determinism maintained
