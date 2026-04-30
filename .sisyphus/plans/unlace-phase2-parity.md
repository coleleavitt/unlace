# unlace Phase 2 — IDA Parity (70% Target)

## TL;DR

> **Quick Summary**: Take unlace from working-but-basic (~15% parity) to production-quality (~70% parity) by implementing expression trees, variable merging, struct recovery, relocations, DWARF types, cross-references, and output polish.
> 
> **Deliverables**:
> - Expression tree pass: multi-op C expressions (a + b * c) instead of one-statement-per-op
> - SSA→C variable merging: 200 vars → 20 vars per function
> - Struct field recovery from DWARF: `ptr->field` instead of `*(ptr + 48)`
> - Relocation processing: resolve PLT/GOT → symbol names
> - Cross-reference database: call graph construction
> - Output polish: ternary ops, condition simplification, dead flag elimination, idiom recognition
> 
> **Estimated Effort**: Large (multi-week, 4 waves, 20 tasks)
> **Critical Path**: SSA version fix → relocations → xrefs → DWARF structs → expression trees → variable merging → struct field access

---

## Context

### Phase 1 Results
- 650 tests passing across 14 crates
- All 7 architecture lifters functional (x86, ARM, RISC-V, MIPS, PPC, V850, ARC)
- CLI works end-to-end: `unlace decompile fixtures/hello_world.elf` produces C output
- Deterministic output verified
- 113K IDA reference functions available for comparison

### Gap Analysis (from 6 explore agents)
- Expression quality: one statement per IR op (vs IDA's natural nested expressions)
- Variable count: every SSA version = separate C variable (200+ vs IDA's 20)
- Type recovery: primitives only (vs IDA's full struct/class/union from DWARF)
- Relocations: zero processing (can't resolve PLT/GOT → symbol names)
- Cross-references: no xref database (can't build call graphs)
- Instruction coverage: x86 has 56/350+ mnemonics, missing SSE/AVX entirely

### Phase 2 Scope
**IN**: Expression trees, variable merging, struct recovery, relocations, DWARF types, xrefs, basic idioms, condition simplification, dead flag elim, tail call/noreturn, ternary generation
**OUT**: SSE/AVX lifting, type library system, exception handling, VTable recognition, PDB types, full data xrefs, heuristic struct recovery

---

## Verification Strategy

> Every task MUST: read IDA reference dumps, create unit tests from IDA patterns, verify parity against IDA output.

### IDA-Driven Testing Protocol
For each task:
1. **FIND**: Grep `references/ida/` or `references/hexrays/` for target patterns
2. **EXTRACT**: Pull specific functions demonstrating the capability
3. **FIXTURE**: Create/reuse test fixture binary that produces similar patterns
4. **TEST**: Write tests asserting unlace output matches IDA structural patterns
5. **IMPLEMENT**: Code until tests pass

### Test Fixtures Needed
- `fixtures/debug_calls.elf` — compiled with `-g` (DWARF debug info) for struct/type tests
- `fixtures/structs.elf` — C program with struct access patterns, compiled with `-g`
- Existing: `fixtures/{hello_world,branches,loops,calls,medium,stripped,empty}.elf`

---

## Execution Strategy

```
Wave 1 (Foundation — unblocks everything):
├── Task P2-1:  Fix SSA version bug in C printer [general]
├── Task P2-2:  Debug fixture binaries (compile with -g for DWARF tests) [general]
├── Task P2-3:  ELF relocation processing (PLT/GOT resolution) [general]
├── Task P2-4:  Cross-reference database (call graph) [general]
├── Task P2-5:  Dead flag elimination pass [general]
├── Task P2-6:  Condition simplification pass [general]

Wave 2 (Expression + Type streams):
├── Task P2-7:  Expression tree building pass (depends: P2-1, P2-5, P2-6) [general]
├── Task P2-8:  DWARF struct/enum/union recovery (depends: P2-2) [general]
├── Task P2-9:  SSA→C variable merging (depends: P2-7) [general]
├── Task P2-10: Struct field access recovery (depends: P2-3, P2-4, P2-8) [general]
├── Task P2-11: Ternary operator generation (depends: P2-7) [general]

Wave 3 (Polish):
├── Task P2-12: Idiom recognition — basic subset (depends: P2-7) [general]
├── Task P2-13: String operation recognition (REP MOVSB→memcpy) (depends: P2-12) [general]
├── Task P2-14: Tail call detection (depends: P2-4) [general]
├── Task P2-15: Noreturn function marking (depends: P2-4) [general]
├── Task P2-16: Wire DWARF types into C printer (depends: P2-8, P2-10) [general]

Wave 4 (Integration + golden re-baseline):
├── Task P2-17: Re-baseline golden tests with new output quality [general]
├── Task P2-18: Parity measurement — compare against IDA reference [general]
├── Task P2-19: Performance regression check [general]
├── Task P2-20: Push to GitHub [general]

Wave FINAL:
├── F1: Plan compliance audit [oracle]
├── F2: Code quality review [general]
├── F3: Parity QA — side-by-side IDA comparison [general]
└── F4: Regression check [general]

Critical Path: P2-1 → P2-7 → P2-9 → P2-10 → P2-16 → P2-17
```

---

## TODOs

### Wave 1 — Foundation

- [x] P2-1. Fix SSA version bug in C printer
  **What to do**: The C printer currently hardcodes `version: 0` for all SSA varnodes. Fix it to use actual SSA versions when generating variable names. This is a PREREQUISITE for variable merging and expression trees.
  **Must do**: Read `crates/unlace-output/src/c_printer.rs`, find where SSA versions are ignored, fix to produce `v1_0`, `v1_1` etc. for different versions of the same base varnode. Write tests comparing output before/after.
  **IDA reference**: Read 5 functions from `references/hexrays/ida_dump/hexx64/all/` — note how IDA reuses variable names across assignments (`v1 = ...; v1 = ...;` not `v1_0 = ...; v1_1 = ...;`).
  **Tests**: Unit test that SSA function with 3 versions of same varnode produces 3 distinct variable names. Regression test that all existing tests still pass.
  **QA Scenarios**:
  ```
  Scenario: SSA versions produce distinct names
    Tool: Bash
    Steps:
      1. cargo test -p unlace-output -- test_ssa_version_names
      2. Assert exit code == 0
    Expected Result: Different SSA versions get different variable names
    Evidence: .sisyphus/evidence/p2-1-ssa-version.txt
  ```
  **Commit**: `fix(output): use actual SSA versions in C printer variable naming`

- [x] P2-2. Debug fixture binaries (with DWARF)
  **What to do**: Compile new fixtures WITH debug info (`-g`) for DWARF type testing. Create:
  - `fixtures/debug_hello.elf` — same as hello_world but with `-g`
  - `fixtures/debug_structs.elf` — C program with struct definitions, field accesses, nested structs
  - `fixtures/debug_calls.elf` — same as calls.elf but with `-g`
  **Source for structs fixture**:
  ```c
  struct Point { int x; int y; };
  struct Rect { struct Point origin; struct Point size; };
  int area(struct Rect *r) { return r->size.x * r->size.y; }
  struct Point offset(struct Point p, int dx, int dy) { p.x += dx; p.y += dy; return p; }
  int main() { struct Rect r = {{0,0},{10,20}}; return area(&r); }
  ```
  **Tests**: `readelf --debug-dump=info fixtures/debug_structs.elf | grep DW_TAG_structure_type` should find Point and Rect.
  **QA Scenarios**:
  ```
  Scenario: Debug fixtures have DWARF
    Tool: Bash
    Steps:
      1. readelf --debug-dump=info fixtures/debug_structs.elf | grep -c DW_TAG_structure_type
      2. Assert count >= 2 (Point and Rect)
    Expected Result: DWARF contains struct definitions
    Evidence: .sisyphus/evidence/p2-2-debug-fixtures.txt
  ```
  **Commit**: `test: debug fixture binaries with DWARF struct info`

- [x] P2-3. ELF relocation processing
  **What to do**: Extend `unlace-loader/src/elf.rs` to process relocations. Resolve PLT/GOT entries to symbol names. When a `call [rip+offset]` targets a PLT entry, resolve to the dynamic symbol name (e.g., `printf`, `malloc`).
  **IDA reference**: Read `references/loaders/elf/all/` — sample 5 files showing relocation handling. Look for `sub_21430.c` (reloc processing), `sub_280C0.c` (segment loading with fixups).
  **Implementation**:
  - Parse `.rela.plt` and `.rela.dyn` sections from ELF
  - Build `BTreeMap<u64, String>` of resolved PLT addresses → symbol names
  - Add `relocations: BTreeMap<u64, Relocation>` to `BinaryImage`
  - Add `plt_symbols: BTreeMap<u64, String>` to `BinaryImage`
  **Tests**: Load `fixtures/hello_world.elf`, assert PLT entry for `puts` is resolved. Load `fixtures/calls.elf`, assert all inter-function calls resolve.
  **QA Scenarios**:
  ```
  Scenario: PLT symbols resolved
    Tool: Bash
    Steps:
      1. cargo test -p unlace-loader -- test_plt_resolution
      2. Assert exit code == 0
    Expected Result: PLT entries map to dynamic symbol names
    Evidence: .sisyphus/evidence/p2-3-relocations.txt
  ```
  **Commit**: `feat(loader): ELF relocation processing — PLT/GOT → symbol names`

- [x] P2-4. Cross-reference database
  **What to do**: Create new crate `unlace-xref` (or module in `unlace-ir`) with a call graph builder. Scan lifted IR for CALL/CALLIND ops, build bidirectional caller↔callee map. Integrate with PLT resolution from P2-3.
  **IDA reference**: Read `references/ida/metadata/hexx64_function_list.txt` — note xrefblk_t functions. Read 3 files from `references/ida/binary/dump-9.3sp1/all/` showing xref usage.
  **Implementation**:
  - `CallGraph { callers: BTreeMap<u64, BTreeSet<u64>>, callees: BTreeMap<u64, BTreeSet<u64>> }`
  - `fn build_call_graph(image: &BinaryImage, functions: &[Function]) -> CallGraph`
  - Walk each function's IR, extract CALL targets (const = direct, varnode = indirect)
  - Resolve PLT targets using P2-3's plt_symbols
  **Tests**: Build call graph from `fixtures/calls.elf` (9 helper functions), verify caller→callee edges match `objdump -d` call targets.
  **QA Scenarios**:
  ```
  Scenario: Call graph matches objdump
    Tool: Bash
    Steps:
      1. cargo test -p unlace-ir -- test_call_graph_calls_elf
      2. Assert exit code == 0
    Expected Result: All direct call edges present in graph
    Evidence: .sisyphus/evidence/p2-4-xrefs.txt
  ```
  **Commit**: `feat(ir): cross-reference database — call graph builder`

- [x] P2-5. Dead flag elimination pass
  **What to do**: Add `DeadFlagElimPass` to `unlace-passes`. After lifting, many flag-setting operations are unused (e.g., ADD sets CF/ZF/SF/OF but only ZF is read by subsequent JE). Eliminate unused flag computations.
  **IDA reference**: Read 5 functions from `references/hexrays/ida_dump/hexx64/all/` — note that IDA output has NO flag variables. All flags are folded into conditions.
  **Implementation**: Walk SSA function, for each flag-setting IrInsn (INT_CARRY, INT_SCARRY, INT_SBORROW, POPCOUNT on flags), check if the output varnode has any uses. If not, mark for removal. Run after existing DCE.
  **Tests**: Synthetic IR: `ADD r0, r1 → sets ZF, CF, SF, OF`. Only ZF used by subsequent CBRANCH. Assert CF/SF/OF computations removed.
  **QA Scenarios**:
  ```
  Scenario: Unused flags removed
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes -- test_dead_flag_elim
      2. Assert exit code == 0
    Expected Result: Unused flag computations eliminated
    Evidence: .sisyphus/evidence/p2-5-dead-flags.txt
  ```
  **Commit**: `feat(passes): dead flag elimination`

- [x] P2-6. Condition simplification pass
  **What to do**: Add `ConditionSimplifyPass` that simplifies boolean expressions. `(x < 5) && (x < 10)` → `x < 5`. `!(x == 0)` → `x != 0`. Double negation elimination.
  **IDA reference**: Read 5 branchy functions from `references/hexrays/ida_dump/hexx64/all/` — note IDA's simplified conditions.
  **Tests**: Synthetic IR with redundant conditions → simplified output.
  **QA Scenarios**:
  ```
  Scenario: Conditions simplified
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes -- test_condition_simplify
      2. Assert exit code == 0
    Expected Result: Redundant conditions removed
    Evidence: .sisyphus/evidence/p2-6-cond-simplify.txt
  ```
  **Commit**: `feat(passes): condition simplification`

### Wave 2 — Expression + Type Streams

- [ ] P2-7. Expression tree building pass
  **What to do**: Create `ExpressionTreePass` in `unlace-passes` (or new `unlace-expr` crate). Transform flat SSA IR into expression trees. An IR instruction whose output is used exactly once becomes a sub-expression of its consumer, not a separate statement.
  **IDA reference**: Read `references/hexrays/ida_dump/hexx64/all/sub_1DB100.c` — note `memcpy(v179, src, 16 * v10)` where `16 * v10` is a sub-expression, not a separate statement.
  **Implementation**:
  - New type: `ExprNode { op: IrOp, children: Vec<ExprNode>, varnode: Option<Varnode> }`
  - Or: annotate `IrInsn` with `is_subexpression: bool`
  - Walk SSA in reverse dominator order. For each instruction whose output has exactly 1 use: fold into the consumer.
  - Multiple uses or side effects → stays as statement
  **Tests**: Synthetic IR: `v1 = LOAD addr; v2 = INT_ADD v1, c5; v3 = INT_MUL v2, c3; RETURN v3` → single expression `return (LOAD(addr) + 5) * 3`. Measure statement count reduction on `fixtures/medium.elf` — target ≥40% reduction.
  **QA Scenarios**:
  ```
  Scenario: Expression folding reduces statements
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes -- test_expr_tree_fold
      2. Assert exit code == 0
    Expected Result: Single-use intermediates folded into expressions
    Evidence: .sisyphus/evidence/p2-7-expr-tree.txt
  Scenario: Statement count drops on medium.elf
    Tool: Bash
    Steps:
      1. ./target/debug/unlace decompile fixtures/medium.elf > /tmp/before.c 2>&1
      2. BEFORE=$(grep -c ";" /tmp/before.c)
      3. (after implementing) compare statement counts
    Expected Result: ≥40% fewer statements
    Evidence: .sisyphus/evidence/p2-7-stmt-reduction.txt
  ```
  **Commit**: `feat(passes): expression tree building — fold single-use intermediates`

- [ ] P2-8. DWARF struct/enum/union recovery
  **What to do**: Extend `unlace-loader/src/dwarf.rs` to parse `DW_TAG_structure_type`, `DW_TAG_enumeration_type`, `DW_TAG_union_type` with their members. Build a type database.
  **IDA reference**: Read `references/plugins/dwarf/all/` — sample 5 files showing struct type creation (sub_69230.c for location evaluation, files calling `create_tinfo`).
  **Implementation**:
  - New types in `unlace-ir`: `StructType { name, fields: Vec<StructField> }`, `StructField { name, offset, size, ty }`, `EnumType { name, variants }`, `UnionType { name, members }`
  - Extend `DwarfInfo` with `structs: BTreeMap<String, StructType>`, `enums`, `unions`
  - Parse DIE children of `DW_TAG_structure_type` → extract `DW_TAG_member` with `DW_AT_data_member_location` for offsets
  **Tests**: Load `fixtures/debug_structs.elf`, assert `Point` and `Rect` structs recovered with correct field names and offsets. Compare struct count against `readelf --debug-dump=info`.
  **QA Scenarios**:
  ```
  Scenario: DWARF structs recovered
    Tool: Bash
    Steps:
      1. cargo test -p unlace-loader -- test_dwarf_struct_recovery
      2. Assert exit code == 0
    Expected Result: Point(x:int, y:int) and Rect(origin:Point, size:Point) extracted
    Evidence: .sisyphus/evidence/p2-8-dwarf-structs.txt
  ```
  **Commit**: `feat(loader): DWARF struct/enum/union recovery from debug info`

- [ ] P2-9. SSA→C variable merging
  **What to do**: Create `VariableMergePass` that combines multiple SSA versions of the same base varnode into a single C variable when safe. `v1_0 = 5; v1_1 = v1_0 + 1; return v1_1;` → `v1 = 5; v1 = v1 + 1; return v1;`
  **IDA reference**: Read 5 functions from `references/hexrays/ida_dump/hexx64/all/` — note IDA declares ~20 local variables per function, not 200.
  **Implementation**: After expression tree folding (P2-7), many SSA intermediates are gone. For remaining variables: merge versions that don't interfere (live ranges don't overlap). Use liveness analysis on the structured HIR.
  **Tests**: Count unique variable declarations in C output for `fixtures/medium.elf`. Target: ≤40 variables (vs current ~200).
  **QA Scenarios**:
  ```
  Scenario: Variable count reduced
    Tool: Bash
    Steps:
      1. ./target/debug/unlace decompile fixtures/medium.elf > /tmp/merged.c
      2. VARS=$(grep -cE "^\s+(int|long|void|char|unsigned|float|double|_Bool)" /tmp/merged.c)
      3. echo "Variables: $VARS"
      4. test $VARS -le 60
    Expected Result: ≤60 variable declarations (down from ~200)
    Evidence: .sisyphus/evidence/p2-9-var-merge.txt
  ```
  **Commit**: `feat(passes): SSA→C variable merging via liveness analysis`

- [ ] P2-10. Struct field access recovery
  **What to do**: When DWARF types are available (P2-8), detect memory accesses that match struct field offsets. Replace `*(ptr + 48)` with `ptr->field_name`. Integrate DWARF struct definitions with pointer arithmetic in the C printer.
  **IDA reference**: Read `references/hexrays/ida_dump/hexx64/all/sub_1DB100.c` — note patterns like `*(_QWORD *)(a1 + 64)` which IDA converts to field accesses when types are known.
  **Implementation**: In C printer, when emitting a LOAD/STORE with address = `INT_ADD(base, const_offset)`, check if `base` has a known pointer-to-struct type (from DWARF). If offset matches a field, emit `base->field` instead.
  **Tests**: Decompile `fixtures/debug_structs.elf` with `--emit c`. Assert output contains `->x`, `->y`, `->origin`, `->size`.
  **QA Scenarios**:
  ```
  Scenario: Struct fields appear in output
    Tool: Bash
    Steps:
      1. ./target/debug/unlace decompile fixtures/debug_structs.elf > /tmp/structs.c
      2. grep -c "\->" /tmp/structs.c
      3. Assert count >= 4 (x, y, origin, size)
    Expected Result: Field access syntax in C output
    Evidence: .sisyphus/evidence/p2-10-struct-fields.txt
  ```
  **Commit**: `feat(output): struct field access recovery from DWARF types`

- [ ] P2-11. Ternary operator generation
  **What to do**: In the structurer or C printer, detect `if (cond) { x = a; } else { x = b; }` patterns and emit `x = cond ? a : b;`.
  **IDA reference**: Read branchy functions from `references/hexrays/ida_dump/hexx64/all/` — note IDA uses ternary operators extensively.
  **Tests**: Fixture with simple if/else assignment → assert ternary in output.
  **QA Scenarios**:
  ```
  Scenario: Ternary generated
    Tool: Bash
    Steps:
      1. cargo test -p unlace-struct -- test_ternary_generation
      2. Assert exit code == 0
    Expected Result: if/else assignment → ternary operator
    Evidence: .sisyphus/evidence/p2-11-ternary.txt
  ```
  **Commit**: `feat(struct): ternary operator generation for simple if/else assignments`

### Wave 3 — Polish

- [ ] P2-12. Idiom recognition — basic subset
  **What to do**: Create `IdiomRecognitionPass` detecting common instruction patterns:
  - `XOR reg, reg` → constant 0
  - `TEST reg, reg; JZ/JNZ` → comparison with zero
  - `LEA reg, [reg + reg*scale + disp]` → arithmetic expression
  - `SUB reg, reg` → constant 0
  - `MOV reg, 0` → constant 0 (redundant but common)
  **IDA reference**: Read `references/hexrays/ida_dump/hexx64/all/` — note IDA never shows `xor eax, eax` as `v1 = v1 ^ v1`.
  **Tests**: Lift `xor eax, eax` sequence, assert it becomes `v1 = 0` not `v1 = v1 ^ v1`.
  **Commit**: `feat(passes): basic idiom recognition (xor-zero, test-cmp, lea-arith)`
  **QA Scenarios**:
  ```
  Scenario: XOR reg,reg becomes zero
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes -- test_idiom_xor_zero
      2. Assert exit code == 0
    Expected Result: xor eax,eax lifted as constant 0
    Evidence: .sisyphus/evidence/p2-12-idioms.txt
  ```

- [ ] P2-13. String operation recognition
  **What to do**: In x86 lifter, handle REP MOVSB/STOSB/CMPSB. Lift REP MOVSB as `Callother("memcpy", dst, src, count)` or equivalent.
  **IDA reference**: Read `references/ida/processors/pc/all/` — find string operation handling.
  **Tests**: Assemble `rep movsb` bytes, lift, assert IR contains memcpy-equivalent.
  **Commit**: `feat(lift-x86): REP string operations → memcpy/memset/memcmp`
  **QA Scenarios**:
  ```
  Scenario: REP MOVSB lifted as memcpy
    Tool: Bash
    Steps:
      1. cargo test -p unlace-lift-x86 -- test_rep_movsb
      2. Assert exit code == 0
    Expected Result: REP MOVSB → Callother memcpy equivalent
    Evidence: .sisyphus/evidence/p2-13-string-ops.txt
  ```

- [ ] P2-14. Tail call detection
  **What to do**: Detect `JMP` at function end (after function epilogue) as a tail call, not a branch. Emit as `return func()` instead of `goto`.
  **IDA reference**: Read `references/hexrays/ida_dump/hexx64/all/` — note IDA detects tail calls and emits `return callee(args)`.
  **Tests**: Create fixture with tail-call-optimized function. Assert C output shows `return callee()` not `goto`.
  **Commit**: `feat(passes): tail call detection`
  **QA Scenarios**:
  ```
  Scenario: Tail call detected
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes -- test_tail_call
      2. Assert exit code == 0
    Expected Result: JMP at function end → return callee()
    Evidence: .sisyphus/evidence/p2-14-tailcall.txt
  ```

- [ ] P2-15. Noreturn function marking
  **What to do**: Detect functions that never return (call to `exit`, `abort`, `__stack_chk_fail`, `__assert_fail`, `panic`, etc.). Mark them so downstream analysis doesn't expect a return.
  **IDA reference**: Read functions from `references/hexrays/ida_dump/hexx64/all/` — note `__noreturn` attribute annotations.
  **Implementation**: Maintain a list of known noreturn function names. When a CALL targets one, mark the function. Propagate: if ALL paths through a function end in noreturn calls, the function itself is noreturn.
  **Tests**: Decompile a function calling `exit()`. Assert no phantom `return` statement after the exit call.
  **Commit**: `feat(passes): noreturn function detection and marking`
  **QA Scenarios**:
  ```
  Scenario: Noreturn detected
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes -- test_noreturn
      2. Assert exit code == 0
    Expected Result: Functions calling exit()/abort() marked noreturn, no phantom return
    Evidence: .sisyphus/evidence/p2-15-noreturn.txt
  ```

- [ ] P2-16. Wire DWARF types into C printer
  **What to do**: When DWARF types are available, use them in the C printer: function parameter names and types from DWARF, local variable names from DWARF, struct type definitions in output header.
  **Tests**: Decompile `fixtures/debug_calls.elf`, assert parameter names match source code names.
  **Commit**: `feat(output): use DWARF function signatures and variable names in C output`
  **QA Scenarios**:
  ```
  Scenario: DWARF names in output
    Tool: Bash
    Steps:
      1. ./target/debug/unlace decompile fixtures/debug_calls.elf > /tmp/dwarf_out.c
      2. grep -c "add\|sub\|mul\|square\|clamp" /tmp/dwarf_out.c
      3. Assert count >= 3
    Expected Result: Function names from DWARF appear in C output
    Evidence: .sisyphus/evidence/p2-16-dwarf-names.txt
  ```

### Wave 4 — Integration

- [ ] P2-17. Re-baseline golden tests
  **What to do**: Expression trees and variable merging will change output structure. Re-run golden tests, update expected outputs, document pass rate changes.
  **QA Scenarios**:
  ```
  Scenario: Golden tests re-baselined
    Tool: Bash
    Steps:
      1. cargo test --test golden_x86_64 2>&1 | tail -5
      2. Assert exit code == 0
    Expected Result: Updated goldens pass
    Evidence: .sisyphus/evidence/p2-17-rebaseline.txt
  ```
  **Commit**: `test: re-baseline golden tests after Phase 2 expression/variable improvements`

- [ ] P2-18. Parity measurement
  **What to do**: For 10 representative functions from `fixtures/medium.elf`, manually compare unlace output vs IDA reference output. Document parity score per function. Target: ≥70% structural similarity.
  **QA Scenarios**:
  ```
  Scenario: Parity documented
    Tool: Bash
    Steps:
      1. ./target/debug/unlace decompile fixtures/medium.elf > /tmp/unlace_out.c
      2. wc -l /tmp/unlace_out.c
      3. test -f .sisyphus/evidence/p2-18-parity.txt
    Expected Result: Parity measurement documented
    Evidence: .sisyphus/evidence/p2-18-parity.txt
  ```
  **Commit**: `docs: Phase 2 parity measurement — N% structural match vs IDA`

- [ ] P2-19. Performance regression check
  **What to do**: Run benchmarks on medium.elf. Ensure performance hasn't regressed >2x from Phase 1 baseline.
  **QA Scenarios**:
  ```
  Scenario: No perf regression
    Tool: Bash
    Steps:
      1. /usr/bin/time -v ./target/release/unlace decompile fixtures/medium.elf > /dev/null 2> /tmp/p2_time.txt
      2. grep "Maximum resident" /tmp/p2_time.txt
      3. Assert RSS < 2097152 KB
    Expected Result: Performance within 2x of Phase 1 baseline
    Evidence: .sisyphus/evidence/p2-19-perf.txt
  ```
  **Commit**: `perf: Phase 2 performance validation`

- [ ] P2-20. Push to GitHub
  **What to do**: `git push origin master` with all Phase 2 changes.
  **QA Scenarios**:
  ```
  Scenario: Push succeeds
    Tool: Bash
    Steps:
      1. git push origin master 2>&1 | tail -3
      2. Assert exit code == 0
    Expected Result: All commits pushed
    Evidence: .sisyphus/evidence/p2-20-push.txt
  ```

---

## Final Verification Wave

- [ ] F1. **Plan Compliance Audit** — oracle
  **QA Scenarios**:
  ```
  Scenario: All Phase 2 features work
    Tool: Bash
    Steps:
      1. ./target/debug/unlace decompile fixtures/debug_structs.elf | grep -c "\->"
      2. Assert count >= 4
      3. ./target/debug/unlace decompile fixtures/medium.elf > /tmp/p2.c
      4. VARS=$(grep -cE "^\s+(int|long|void|char)" /tmp/p2.c)
      5. Assert VARS <= 60
    Expected Result: Struct fields + variable merging working
    Evidence: .sisyphus/evidence/p2-f1-compliance.txt
  ```

- [ ] F2. **Code Quality Review** — general
  **QA Scenarios**:
  ```
  Scenario: Build + test + lint
    Tool: Bash
    Steps:
      1. cargo test --workspace 2>&1 | tail -5
      2. cargo xtask lint-determinism
      3. Assert both pass
    Expected Result: All tests pass, determinism maintained
    Evidence: .sisyphus/evidence/p2-f2-quality.txt
  ```

- [ ] F3. **Parity QA** — general
  Decompile each fixture, compare output quality vs IDA reference patterns.
  **QA Scenarios**:
  ```
  Scenario: Output quality check
    Tool: Bash
    Steps:
      1. for f in hello_world branches loops calls medium debug_structs; do ./target/debug/unlace decompile fixtures/$f.elf > /tmp/p2_$f.c 2>&1; echo "$f: $(wc -l < /tmp/p2_$f.c) lines, exit $?"; done
      2. Assert all exit 0
      3. grep -c "\->" /tmp/p2_debug_structs.c
      4. Assert count >= 4
      5. grep -c "puts\|printf\|exit\|malloc" /tmp/p2_hello_world.c
      6. Assert count >= 1 (PLT resolved)
    Expected Result: All fixtures decompile with improved quality
    Evidence: .sisyphus/evidence/p2-f3-parity.txt
  ```

- [ ] F4. **Regression Check** — general
  Verify Phase 1 functionality hasn't regressed.
  **QA Scenarios**:
  ```
  Scenario: Phase 1 regression check
    Tool: Bash
    Steps:
      1. cargo test --workspace 2>&1 | grep "^test result:" | awk '{f+=$6} END {print "FAIL: "f}'
      2. Assert FAIL == 0
      3. ./target/debug/unlace --version
      4. Assert output contains "unlace"
      5. ./target/debug/unlace decompile /dev/null 2>&1; echo $?
      6. Assert exit code != 0 (graceful error)
      7. cargo xtask lint-determinism
      8. Assert exit code == 0
    Expected Result: All Phase 1 features still work
    Evidence: .sisyphus/evidence/p2-f4-regression.txt
  ```

---

## Commit Strategy

| Wave | Commit | Key Change |
|------|--------|-----------|
| 1 | `fix(output): SSA version naming` | C printer bugfix |
| 1 | `test: debug fixtures with DWARF` | New test binaries |
| 1 | `feat(loader): ELF relocations` | PLT/GOT resolution |
| 1 | `feat(ir): call graph builder` | Xref database |
| 1 | `feat(passes): dead flag elim` | Flag cleanup |
| 1 | `feat(passes): condition simplify` | Boolean reduction |
| 2 | `feat(passes): expression trees` | Multi-op expressions |
| 2 | `feat(loader): DWARF structs` | Type recovery |
| 2 | `feat(passes): variable merging` | SSA→C vars |
| 2 | `feat(output): struct field access` | ptr->field syntax |
| 2 | `feat(struct): ternary generation` | ?: operator |
| 3 | `feat(passes): idiom recognition` | Pattern matching |
| 3 | `feat(lift-x86): REP string ops` | memcpy/memset |
| 3 | `feat(passes): tail call detection` | return callee() |
| 3 | `feat(passes): noreturn marking` | __noreturn |
| 3 | `feat(output): DWARF types in C` | Named params |

---

## Success Criteria

### Verification Commands
```bash
cargo test --workspace  # All tests pass (650+ existing + new)
cargo xtask lint-determinism  # No HashMap violations
./target/debug/unlace decompile fixtures/debug_structs.elf | grep -c "\->"  # >= 4 field accesses
./target/debug/unlace decompile fixtures/medium.elf | grep -cE "^\s+(int|long)" # <= 60 vars
./target/debug/unlace decompile fixtures/hello_world.elf | grep "puts\|printf"  # PLT resolved
```

### Final Checklist
- [ ] Expression trees fold single-use intermediates
- [ ] Variable count reduced by ≥50%
- [ ] Struct field access syntax (`->`) in DWARF-annotated output
- [ ] PLT symbols resolved to names
- [ ] Call graph built correctly
- [ ] Dead flags eliminated
- [ ] Conditions simplified
- [ ] Ternary operators generated
- [ ] All existing tests pass (regression-free)
- [ ] Determinism maintained
