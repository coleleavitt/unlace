# unlace — Hex-Rays Decompiler Rewrite in Rust

## TL;DR

> **Quick Summary**: Build `unlace`, a standalone CLI decompiler in Rust that replaces Hex-Rays. Takes a binary (ELF/PE/Mach-O), produces C pseudocode + IR dump + CFG dot graphs for every function. Custom lifters for 8 architectures, TDD against 113K golden reference functions.
> 
> **Deliverables**:
> - `unlace` CLI binary (`unlace decompile <binary>`)
> - Multi-crate Rust workspace (ir, lifters, loaders, passes, output, cli)
> - Test harness with stratified golden corpus from hex-rays reference dumps
> - IR spec document defining ~70 opcodes
> - Determinism charter enforced by CI
> 
> **Estimated Effort**: XL (multi-month, phased milestones)
> **Parallel Execution**: YES — 7 waves, max 6 concurrent tasks per wave
> **Critical Path**: IR spec → x86-64 lifter → SSA → optimization → structuring → C output → golden tests

---

## Context

### Original Request
Build a Rust CLI decompiler ("unlace") that rewrites Hex-Rays' decompiler with full parity across 8 architectures: x86-64, ARM/AArch64, RISC-V, MIPS, PowerPC, V850, ARC, plus the hex_loader entry dispatch.

### Interview Summary
**Key Discussions**:
- All 8 architectures from day 1 (stubs + trait interface; x86-64 fully working first, others incrementally)
- Output: C pseudocode + IR dump + CFG dot graphs
- TDD with hex-rays golden output comparison
- Custom lifters per architecture (no SLEIGH) — maximum control over IR

**Research Findings**:
- 113,099 decompiled reference functions across 70 dumps (all hex-rays engines, loaders, plugins, processors)
- Existing Rust projects: falcon (584 stars), radeco (389 stars), fugue-core (182 stars), r2sleigh (most complete pipeline)
- Recommended crates: object, iced-x86, capstone, gimli, pdb2, symbolic-demangle, petgraph, z3, clap
- hexx64 imports ~340 IDA SDK functions — ~80-120 semantic functions define the API surface to replicate
- Shared decompiler core is ~70% of each hex* plugin; arch-specific frontend is ~30%
- Pipeline: binary → loader → disassembly → lifter → LIR → SSA → optimization → type recovery → structuring → HIR → C output

### Metis Review
**Identified Gaps** (addressed):
- MVP scope was unbounded → defined as: x86-64 ELF, single-function pseudocode + IR + CFG, no type recovery beyond primitives, no debug info
- Golden-file comparison undefined → AST-equivalent comparison (parse C, compare structure, ignore names/whitespace)
- Determinism not enforced → Determinism charter: no HashMap in output, sorted iteration, deterministic IDs, canonical IR form
- Legal/licensing: not a concern — open-source decompiler
- "All 8 arches day 1" risks scope creep → Reframed: all 8 stubbed, x86-64 fully working, others gated on conformance
- No failure tolerance defined → graceful degradation: emit `__unknown()` and continue, per-function timeout
- 113K corpus too large for CI → stratified sample of 200-500 golden functions for CI, full corpus for nightly

---

## Work Objectives

### Core Objective
Build a working CLI decompiler that takes an x86-64 ELF binary and produces correct, deterministic C pseudocode matching hex-rays quality, with an architecture-agnostic IR and trait-based lifter interface supporting all 8 hex-rays architectures.

### Concrete Deliverables
- `unlace` binary: `cargo install --path crates/unlace-cli`
- `unlace decompile <binary>` → stdout C pseudocode
- `unlace decompile --emit ir <binary>` → stdout IR dump
- `unlace decompile --emit cfg-dot <binary>` → stdout dot graph
- `unlace decompile --function <name|addr> <binary>` → single function
- Crate workspace: `unlace-ir`, `unlace-loader`, `unlace-lift-*`, `unlace-passes`, `unlace-output`, `unlace-cli`
- Golden test suite: 200+ functions stratified by complexity
- IR specification document
- Determinism charter

### Definition of Done
- [ ] `unlace decompile fixtures/hello_world.elf` outputs valid C
- [ ] Output is deterministic (two runs produce byte-identical output)
- [ ] Golden test suite passes: `cargo test --test golden_x86_64`
- [ ] IR dump is parseable and round-trips
- [ ] CFG dot output renders via `dot -Tpng`
- [ ] All 7 arch lifter traits compile (stubs OK for non-x86)
- [ ] CI passes in <15 minutes

### Must Have
- x86-64 ELF decompilation end-to-end
- Deterministic output (canonical IR form, no HashMap in output paths)
- Per-function decompilation (address or symbol name)
- IR dump and CFG dot graph outputs
- Architecture trait boundary that all 7 lifters implement (x86, ARM, RISC-V, MIPS, PPC, V850, ARC)
- Golden test harness with AST-equivalent comparison

### Must NOT Have (Guardrails)
- GUI or TUI (CLI only)
- Debugger integration
- IDA plugin mode or IDB file reading
- Netnode B-tree replication (use idiomatic Rust data structures)
- IDA event system replication (no hook_event_listener/invoke_callbacks)
- 360-byte insn_t layout (use Rust enums)
- ~340 IDA SDK function signatures literally (use traits)
- IDC or IDAPython compatibility
- FLIRT signature loading (defer to v0.5+)
- DWARF/PDB debug info import (defer to v0.3+)
- Full type recovery (struct/union/class) — MVP does primitive inference only
- Packed/obfuscated binary support (UPX, VMProtect)
- HashMap in any code path producing output (BTreeMap/IndexMap only)
- Premature optimization before correctness

### Scope by Milestone
- **M1 (MVP)**: x86-64 ELF → C pseudocode + IR + CFG. Primitive types only. No debug info. 200+ golden tests passing.
- **M2**: ARM/AArch64 lifter working. PE loader added. Demangling (C++/Rust).
- **M3**: RISC-V + MIPS lifters. Mach-O loader. Basic struct recovery from DWARF.
- **M4**: PPC + V850 + ARC lifters. PDB import. Switch table recovery.
- **M5**: Language-specific recovery (Go/ObjC/Swift). RTTI. Advanced optimization passes.

---

## Verification Strategy

> **ZERO HUMAN INTERVENTION** — ALL verification is agent-executed. No exceptions.

### Test Decision
- **Infrastructure exists**: NO (new project)
- **Automated tests**: YES (TDD with golden outputs)
- **Framework**: `cargo test` + `insta` for snapshot testing + custom golden harness

### QA Policy
Every task MUST include agent-executed QA scenarios.
Evidence saved to `.sisyphus/evidence/task-{N}-{scenario-slug}.{ext}`.

### Golden File Comparison Strategy
- **Method**: AST-equivalent comparison (parse output C with tree-sitter-c, compare structure, ignore variable names and whitespace)
- **Corpus**: Stratified sample of 250 functions from 113,099 reference dumps
- **Buckets**: trivial (1-3 blocks), simple (4-10 blocks), branchy (10-30 blocks), loopy (loops), complex (30+ blocks)
- **Regeneration**: `cargo xtask regen-goldens` as first-class command
- **CI**: golden tests run in <10 min; full corpus in nightly

---

## Execution Strategy

### Parallel Execution Waves

```
Wave 1 (Foundation):
├── Task 1:  Project workspace + CI scaffolding [general]
├── Task 2:  IR specification document (~70 opcodes) [oracle]
├── Task 3:  Determinism charter + lint rules [general]
├── Task 5:  Stratified golden corpus extraction [general]
├── Task 6:  Test fixture binaries [general]

Wave 2 (Core types + x86-64 frontend):
├── Task 7:  unlace-ir crate (depends: 2) [general]
├── Task 8:  unlace-loader crate + ELF (depends: 1) [general]
├── Task 9:  unlace-lift-x86 crate (depends: 2, 7) [general]
├── Task 10: Golden comparison harness (depends: 5, 6) [general]
├── Task 11: 7 stub lifters (depends: 7) [general]

Wave 3 (SSA + analysis):
├── Task 12: CFG construction (depends: 7) [general]
├── Task 13: SSA construction (depends: 12) [general]
├── Task 14: Constant fold + copy prop (depends: 13) [general]
├── Task 15: Dead code elimination (depends: 13) [general]
├── Task 16: Primitive type inference (depends: 13) [general]

Wave 4 (Output + structuring):
├── Task 17: Control flow structuring (depends: 12, 14, 15) [general]
├── Task 18: C pretty-printer (depends: 17) [general]
├── Task 19: IR dump formatter (depends: 7) [general]
├── Task 20: CFG dot graph output (depends: 12) [general]
├── Task 21: CLI via clap (depends: 8, 18, 19, 20) [general]

Wave 5 (End-to-end):
├── Task 22: Pipeline wiring (depends: 21) [general]
├── Task 23: Golden tests x86-64 (depends: 10, 22) [general]
├── Task 24: Performance benchmarks (depends: 22) [general]
├── Task 25: Error handling (depends: 22) [general]

Wave 6 (Additional arches — gated on x86-64):
├── Task 26: ARM lifter (depends: 11, 23) [general]
├── Task 27: ARM golden tests (depends: 26) [general]
├── Task 28: RISC-V lifter (depends: 11, 23) [general]
├── Task 29: MIPS lifter (depends: 11, 23) [general]
├── Task 30: PPC lifter (depends: 11, 23) [general]
├── Task 31: V850 lifter (depends: 11, 23) [general]
├── Task 32: ARC lifter (depends: 11, 23) [general]

Wave 7 (Post-MVP):
├── Task 33-40: PE/Mach-O loaders, demangling, switch recovery, DWARF, PDB, CC detection, stack vars

Wave FINAL:
├── F1: Plan compliance audit [oracle]
├── F2: Code quality review [general]
├── F3: Real manual QA [general]
└── F4: Scope fidelity check [general]

Critical Path: 1 → 7 → 9 → 12 → 13 → 14 → 17 → 18 → 21 → 22 → 23
```

---

## TODOs

### Wave 1 — Foundation

- [x] 1. Project workspace + CI scaffolding
  **What to do**: Create Cargo workspace with 14 crates: unlace-ir, unlace-loader, unlace-lift (facade), unlace-lift-x86, unlace-lift-arm, unlace-lift-riscv, unlace-lift-mips, unlace-lift-ppc, unlace-lift-v850, unlace-lift-arc, unlace-passes, unlace-struct, unlace-output, unlace-cli. (7 architecture lifters: x86, ARM, RISC-V, MIPS, PPC, V850, ARC. hex_loader is a file-format dispatcher, not an architecture — it doesn't need its own lifter.) Add workspace deps: object, iced-x86, capstone, gimli, petgraph, clap, symbolic-demangle, insta, tracing. GitHub Actions CI. rustfmt.toml, clippy.toml. cargo xtask scaffold.
  **Must NOT do**: Any decompiler logic. Pure scaffolding.
  **Parallelization**: Wave 1, start immediately. Blocks: 7, 8, 11.
  **References**: `Cargo.toml`, `src/main.rs`
  **Acceptance Criteria**:
  - [ ] `cargo check --workspace` exits 0
  - [ ] All 14 crate dirs exist with lib.rs or main.rs
  - [ ] `.github/workflows/ci.yml` exists
  **QA Scenarios**:
  ```
  Scenario: Workspace builds
    Tool: Bash
    Steps:
      1. cargo check --workspace
      2. Assert exit code == 0
      3. cargo clippy --workspace -- -D warnings
      4. Assert exit code == 0
    Expected Result: All crates compile, zero warnings
    Evidence: .sisyphus/evidence/task-1-build.txt
  ```
  **Commit**: `chore: project workspace + CI scaffolding`

- [x] 2. IR specification document (~70 opcodes)
  **What to do**: Write `docs/ir-spec.md` — complete LIR opcode set modeled after Ghidra P-code. ~70 opcodes (COPY, LOAD, STORE, INT_ADD/SUB/MULT/DIV, BOOL_*, FLOAT_*, BRANCH, CBRANCH, CALL, RETURN, MULTIEQUAL/phi, UNIMPLEMENTED, etc.). Define Varnode (space, offset, size) with 5 address spaces (register, ram, const, unique, stack). Define canonical text form. Each opcode: name, arity, semantics, example.
  **Must NOT do**: Implement in Rust (Task 7).
  **Parallelization**: Wave 1, start immediately. Blocks: 7, 9.
  **References**: Ghidra P-code spec, `references/hexrays/ida_dump/hexx64/all/`, `references/ida/metadata/RESEARCH.md`
  **Acceptance Criteria**:
  - [ ] `docs/ir-spec.md` exists with >= 65 opcode definitions
  - [ ] Each opcode has name, arity, semantics, example
  - [ ] Canonical text form grammar defined
  **QA Scenarios**:
  ```
  Scenario: Spec completeness
    Tool: Bash
    Steps:
      1. grep -c "^### " docs/ir-spec.md
      2. Assert count >= 65
    Expected Result: >= 65 opcodes defined
    Evidence: .sisyphus/evidence/task-2-completeness.txt
  ```
  **Commit**: `docs: IR specification v1.0`

- [x] 3. Determinism charter + lint rules
  **What to do**: Write `docs/determinism.md` — no HashMap/HashSet in output-affecting crates, BTreeMap/IndexMap only, monotonic counters for naming, canonical IR form (blocks by address, insns by index), platform-identical output. Create `xtask lint-determinism` that greps for HashMap in unlace-output/struct/passes/ir. Add to CI.
  **Must NOT do**: Implement IR or output code.
  **Parallelization**: Wave 1, start immediately. Blocks: 7.
  **Acceptance Criteria**:
  - [ ] `docs/determinism.md` exists
  - [ ] `cargo xtask lint-determinism` runs
  **QA Scenarios**:
  ```
  Scenario: Lint catches HashMap
    Tool: Bash
    Steps:
      1. echo 'use std::collections::HashMap;' >> crates/unlace-output/src/lib.rs
      2. cargo xtask lint-determinism
      3. Assert exit code != 0
      4. git checkout crates/unlace-output/src/lib.rs
    Expected Result: Violation detected
    Evidence: .sisyphus/evidence/task-3-lint.txt
  ```
  **Commit**: `docs: determinism charter + lint enforcement`

- [x] 5. Stratified golden corpus extraction
  **What to do**: Select 250 functions from 113K reference files. 150 from hexx64, 25 from hexarm, 15 each from hexrv/hexmips/hexppc/hexv850/hexarc. Complexity: ~30% trivial, ~30% simple, ~20% branchy, ~20% complex. Copy to `tests/golden/{arch}/`. Create `tests/golden/manifest.json`. Create `cargo xtask regen-goldens`.
  **Must NOT do**: Write comparison harness (Task 10).
  **Parallelization**: Wave 1. Blocks: 10, 23.
  **References**: `references/hexrays/ida_dump/hexx64/all/`, `references/hexrays/ida_dump/hexarm/all/`, etc.
  **Acceptance Criteria**:
  - [ ] `tests/golden/x86_64/` has 150 .c files
  - [ ] `tests/golden/manifest.json` has 250 entries
  **QA Scenarios**:
  ```
  Scenario: Corpus size
    Tool: Bash
    Steps:
      1. ls tests/golden/x86_64/*.c | wc -l
      2. Assert count == 150
      3. python3 -c "import json; print(len(json.load(open('tests/golden/manifest.json'))))"
      4. Assert count == 250
    Expected Result: Correct corpus size
    Evidence: .sisyphus/evidence/task-5-corpus.txt
  ```
  **Commit**: `test: stratified golden corpus — 250 functions`

- [x] 6. Test fixture binaries
  **What to do**: Compile C programs to ELF fixtures: hello_world, branches (if/else/switch), loops (for/while/do-while), calls, medium (~50 funcs), stripped (strip -s), empty. `gcc -O2 -o fixtures/X.elf X.c`. Write `fixtures/README.md`.
  **Must NOT do**: Non-x86 fixtures.
  **Parallelization**: Wave 1. Blocks: 10, 23.
  **Acceptance Criteria**:
  - [ ] 7 fixture .elf files exist
  - [ ] `file fixtures/hello_world.elf` reports ELF 64-bit x86-64
  **QA Scenarios**:
  ```
  Scenario: Valid ELF
    Tool: Bash
    Steps:
      1. for f in fixtures/*.elf; do file "$f" | grep -q "ELF 64-bit" || echo "FAIL: $f"; done
      2. Assert no FAIL lines
    Expected Result: All fixtures valid
    Evidence: .sisyphus/evidence/task-6-fixtures.txt
  ```
  **Commit**: `test: fixture binaries for golden testing`

### Wave 2 — Core Types + x86-64 Frontend

- [x] 7. unlace-ir crate: IR types
  **What to do**: Implement IR spec as Rust types. `SpaceId` enum (Register/Ram/Const/Unique/Stack). `Varnode { space, offset: u64, size: u8 }`. `IrOp` enum ~70 variants `#[non_exhaustive]`. `IrInsn { op, output: Option<Varnode>, inputs: SmallVec<[Varnode; 3]>, addr: u64 }`. `BasicBlock { id, insns, successors }`. `Function { name, entry, blocks: BTreeMap<BlockId, BasicBlock>, addr }`. All BTreeMap. Display impls matching canonical form. Clone + Debug + PartialEq + Eq.
  **Must NOT do**: SSA, CFG graph, petgraph.
  **Parallelization**: Wave 2. Depends: 2, 3. Blocks: 9, 11, 12, 19.
  **References**: `docs/ir-spec.md` (Task 2), `docs/determinism.md` (Task 3)
  **QA Scenarios**:
  ```
  Scenario: IR types compile and pass tests
    Tool: Bash
    Steps:
      1. cargo test -p unlace-ir
      2. Assert exit code == 0
      3. grep -c "^    [A-Z]" crates/unlace-ir/src/op.rs
      4. Assert count >= 65
    Expected Result: All IR types work, >= 65 opcodes
    Evidence: .sisyphus/evidence/task-7-ir.txt
  ```
  **Commit**: `feat(ir): core IR types — Varnode, IROp, Function, BasicBlock`

- [x] 8. unlace-loader crate: ELF loader
  **What to do**: `trait Loader { fn can_load(data) -> bool; fn load(data) -> Result<BinaryImage>; }`. `BinaryImage` with sections, entry point, arch, endianness, symbols. `ElfLoader` via `object` crate. Handle ELF32/64, little/big endian, .symtab + .dynsym. Return `ArchId` from e_machine.
  **Must NOT do**: PE, Mach-O (Tasks 33-34).
  **Parallelization**: Wave 2. Depends: 1. Blocks: 21, 33, 34.
  **References**: `references/loaders/elf/all/sub_280C0.c` (ELF load_file, 998 lines)
  **QA Scenarios**:
  ```
  Scenario: Load ELF
    Tool: Bash
    Steps:
      1. cargo test -p unlace-loader -- test_load_hello_world
      2. Assert exit code == 0
    Expected Result: ELF loaded with .text section and entry point
    Evidence: .sisyphus/evidence/task-8-elf.txt
  Scenario: Reject invalid
    Tool: Bash
    Steps:
      1. cargo test -p unlace-loader -- test_reject_non_elf
      2. Assert exit code == 0
    Expected Result: Non-ELF rejected
    Evidence: .sisyphus/evidence/task-8-reject.txt
  ```
  **Commit**: `feat(loader): ELF loader via object crate`

- [x] 9. unlace-lift-x86 crate: x86-64 lifter
  **What to do**: Define `trait Lifter` in unlace-ir: `fn lift_insn(&self, bytes, addr) -> Result<LiftedInsn>`, `fn register_file()`, `fn arch() -> ArchId`. Implement `X86Lifter` via iced-x86. Lift: MOV, ADD, SUB, MUL, DIV, AND, OR, XOR, SHL, SHR, CMP, TEST, JMP, Jcc, CALL, RET, PUSH, POP, LEA. Model x86 regs as Varnodes (RAX=0, RCX=8, ..., RSP=32, RBP=40). RFLAGS as separate bits. LOAD/STORE for memory. UNIMPLEMENTED for SSE/AVX. Per-instruction unit tests.
  **Must NOT do**: SSE/AVX/AMX, function-level analysis, CFG.
  **Parallelization**: Wave 2. Depends: 2, 7. Blocks: 22.
  **References**: `references/hexrays/ida_dump/hexx64/all/`, `references/ida/processors/pc/all/`, iced-x86 docs
  **QA Scenarios**:
  ```
  Scenario: Lift MOV
    Tool: Bash
    Steps:
      1. cargo test -p unlace-lift-x86 -- test_mov_reg_reg
      2. Assert exit code == 0
    Expected Result: MOV produces COPY IrOp
    Evidence: .sisyphus/evidence/task-9-mov.txt
  Scenario: Unknown opcode
    Tool: Bash
    Steps:
      1. cargo test -p unlace-lift-x86 -- test_unknown_insn
      2. Assert exit code == 0
    Expected Result: Returns Unimplemented, no panic
    Evidence: .sisyphus/evidence/task-9-unknown.txt
  ```
  **Commit**: `feat(lift-x86): x86-64 lifter via iced-x86`

- [x] 10. Golden comparison harness
  **What to do**: Rust binary in `tests/golden-harness/` using tree-sitter-c. Parse expected + actual C, compare ASTs ignoring names/whitespace/comments. Report divergence location. `#[test] fn golden_x86_64()` initially `#[ignore]`. insta snapshots as alternative.
  **Must NOT do**: Decompiler logic.
  **Parallelization**: Wave 2. Depends: 5, 6. Blocks: 23.
  **References**: `tests/golden/x86_64/`, `fixtures/*.elf`
  **QA Scenarios**:
  ```
  Scenario: Identical match
    Tool: Bash
    Steps:
      1. cargo test --test golden_harness -- test_identical_match
      2. Assert exit code == 0
    Expected Result: Same C files match
    Evidence: .sisyphus/evidence/task-10-match.txt
  Scenario: Divergence detected
    Tool: Bash
    Steps:
      1. cargo test --test golden_harness -- test_structural_divergence
      2. Assert exit code == 0
    Expected Result: Different C files report divergence
    Evidence: .sisyphus/evidence/task-10-diverge.txt
  ```
  **Commit**: `test: golden comparison harness via tree-sitter-c`

- [x] 11. Architecture trait + 7 stub lifters
  **What to do**: In each of unlace-lift-{arm,riscv,mips,ppc,v850,arc}: implement Lifter trait returning `Err(UnsupportedArch)`. Define register file per arch from public ISA docs. Create `unlace-lift` facade crate with `fn get_lifter(arch) -> Box<dyn Lifter>`. One test per stub.
  **Must NOT do**: Actual lifting for non-x86.
  **Parallelization**: Wave 2. Depends: 7. Blocks: 26-32.
  **References**: ARM/RISC-V/MIPS ISA specs, `references/ida/processors/arm/all/`, `references/procs/*/all_funcs.txt`
  **QA Scenarios**:
  ```
  Scenario: All stubs compile
    Tool: Bash
    Steps:
      1. cargo test --workspace -- test_stub_lifter
      2. Assert exit code == 0
    Expected Result: 7 stubs compile, return graceful errors
    Evidence: .sisyphus/evidence/task-11-stubs.txt
  ```
  **Commit**: `feat(lift): arch trait + 7 stub lifters`

### Wave 3 — SSA + Analysis Pipeline

- [x] 12. CFG construction from LIR
  **What to do**: Add petgraph to unlace-ir. `fn build_cfg(func) -> ControlFlowGraph` using `StableDiGraph<BlockId, EdgeKind>`. Identify edges from BRANCH/CBRANCH/CALL/RETURN ops. Entry/exit block detection. Indirect jumps → unknown sink. `EdgeKind` enum. `fn dot_export(cfg) -> String`.
  **Must NOT do**: SSA, optimization, dominator tree.
  **Parallelization**: Wave 3. Depends: 7. Blocks: 13, 17, 20.
  **References**: petgraph StableDiGraph docs, `references/hexrays/ida_dump/hexx64/all/`
  **QA Scenarios**:
  ```
  Scenario: Diamond CFG
    Tool: Bash
    Steps:
      1. cargo test -p unlace-ir -- test_diamond_cfg
      2. Assert exit code == 0
    Expected Result: 4-block diamond with correct edges
    Evidence: .sisyphus/evidence/task-12-diamond.txt
  Scenario: Dot renders
    Tool: Bash
    Steps:
      1. cargo test -p unlace-ir -- test_dot_export
      2. Assert exit code == 0
    Expected Result: Valid graphviz output
    Evidence: .sisyphus/evidence/task-12-dot.txt
  ```
  **Commit**: `feat(ir): CFG construction via petgraph + dot export`

- [x] 13. SSA construction
  **What to do**: Dominator tree via `petgraph::algo::dominators::simple_fast`. Dominance frontier computation (Cytron et al. 1991). Phi-function placement. Variable renaming (SSA numbering). `SsaFunction` wrapping Function + CFG + dom tree. `SsaVarnode { base, version: u32 }`. MULTIEQUAL ops at block entries. Tests: straight-line (no phis), diamond (phis at merge), loop (phis at header).
  **Must NOT do**: SSA destruction, optimization.
  **Parallelization**: Wave 3. Depends: 12. Blocks: 14, 15, 16.
  **References**: Cytron et al. 1991, petgraph dominators docs
  **QA Scenarios**:
  ```
  Scenario: Diamond phi
    Tool: Bash
    Steps:
      1. cargo test -p unlace-ir -- test_ssa_diamond_phi
      2. Assert exit code == 0
    Expected Result: Phi at merge block
    Evidence: .sisyphus/evidence/task-13-phi.txt
  Scenario: Loop phi
    Tool: Bash
    Steps:
      1. cargo test -p unlace-ir -- test_ssa_loop_phi
      2. Assert exit code == 0
    Expected Result: Phi at loop header
    Evidence: .sisyphus/evidence/task-13-loop.txt
  ```
  **Commit**: `feat(ir): SSA — dominator tree, dominance frontiers, phi insertion`

- [x] 14. Constant folding + copy propagation
  **What to do**: `trait Pass { fn name() -> &str; fn run(&self, func: &mut SsaFunction) -> Result<bool>; }`. `ConstantFoldPass`: constant inputs → computed result. `CopyPropagationPass`: `v2 = COPY v1` → replace v2 uses with v1. Both iterate to fixed point.
  **Must NOT do**: DCE (Task 15), type inference.
  **Parallelization**: Wave 3. Depends: 13. Blocks: 17.
  **References**: Cooper & Torczon Ch. 8, `references/hexrays/ida_dump/hexx64/all/`
  **QA Scenarios**:
  ```
  Scenario: Constant fold
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes -- test_const_fold
      2. Assert exit code == 0
    Expected Result: 3+5 folded to 8
    Evidence: .sisyphus/evidence/task-14-fold.txt
  ```
  **Commit**: `feat(passes): constant folding + copy propagation`

- [x] 15. Dead code elimination
  **What to do**: `DeadCodeElimPass`: remove insns whose output has no uses. Preserve side effects (STORE, CALL). Iterate to fixed point. Cascading removal.
  **Parallelization**: Wave 3. Depends: 13. Blocks: 17.
  **QA Scenarios**:
  ```
  Scenario: DCE
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes -- test_dce
      2. Assert exit code == 0
    Expected Result: Dead stores removed, CALL preserved
    Evidence: .sisyphus/evidence/task-15-dce.txt
  ```
  **Commit**: `feat(passes): dead code elimination`

- [x] 16. Primitive type inference
  **What to do**: `TypeInferPass`: INT_ADD/SUB operands → int, FLOAT_* → float/double, LOAD/STORE addr → void*, CBRANCH cond → bool, CALL target → func ptr. Type lattice: Unknown → {int, float, ptr, bool}. Store on SsaVarnode.
  **Must NOT do**: Struct recovery, RTTI, DWARF/PDB.
  **Parallelization**: Wave 3. Depends: 13. Blocks: 37, 38, 39.
  **QA Scenarios**:
  ```
  Scenario: Type inference
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes -- test_type_infer
      2. Assert exit code == 0
    Expected Result: ADD typed int, LOAD addr typed pointer, CBRANCH typed bool
    Evidence: .sisyphus/evidence/task-16-types.txt
  ```
  **Commit**: `feat(passes): primitive type inference`

### Wave 4 — Output Pipeline + Structuring

- [x] 17. Control flow structuring
  **What to do**: unlace-struct crate. Interval analysis for loops. If/else via dominator pairing. While/do-while via back-edge detection. Switch via jump table pattern. Irreducible CFG → goto. `HirNode` enum: Block, If, While, DoWhile, Switch, Return, Goto, Label. `HirFunction { name, params, return_type, body }`. "No More Gotos" (Yakdan 2015) as baseline.
  **Must NOT do**: Perfect structuring. Goto is OK for irreducible.
  **Parallelization**: Wave 4. Depends: 12, 14, 15. Blocks: 18.
  **References**: Yakdan et al. "No More Gotos" (NDSS 2015), radeco structuring, `references/hexrays/ida_dump/hexx64/all/`
  **QA Scenarios**:
  ```
  Scenario: If/else + loop
    Tool: Bash
    Steps:
      1. cargo test -p unlace-struct
      2. Assert exit code == 0
    Expected Result: Simple if/else and while recognized, irreducible → goto
    Evidence: .sisyphus/evidence/task-17-struct.txt
  ```
  **Commit**: `feat(struct): control flow structuring — if/while/switch/goto`

- [x] 18. C pretty-printer
  **What to do**: unlace-output crate. `fn print_c(func: &HirFunction) -> String`. Valid C syntax (gcc -fsyntax-only). 4-space indent. Variables: v1, v2, ... (monotonic, deterministic). Types: int, unsigned int, char, void *, etc. Expressions + statements.
  **Must NOT do**: Semantic correctness. Just syntax.
  **Parallelization**: Wave 4. Depends: 17. Blocks: 21.
  **References**: `references/hexrays/ida_dump/hexx64/all/`, `tests/golden/x86_64/`
  **QA Scenarios**:
  ```
  Scenario: Valid C syntax
    Tool: Bash
    Steps:
      1. cargo test -p unlace-output -- test_c_printer
      2. Assert exit code == 0
    Expected Result: Output compiles with gcc -fsyntax-only
    Evidence: .sisyphus/evidence/task-18-cprinter.txt
  Scenario: Determinism
    Tool: Bash
    Steps:
      1. cargo test -p unlace-output -- test_c_deterministic
      2. Assert exit code == 0
    Expected Result: Same input → identical output
    Evidence: .sisyphus/evidence/task-18-determinism.txt
  ```
  **Commit**: `feat(output): C pretty-printer from HIR`

- [x] 19. IR dump formatter
  **What to do**: `fn dump_ir(func: &SsaFunction) -> String` in unlace-output. Canonical text form from spec. One insn/line: `v3:i32 = INT_ADD v1:i32, v2:i32`. Block headers: `BB_0 [entry]:`. Phi: `v5:i32 = MULTIEQUAL v3:i32(BB_1), v4:i32(BB_2)`.
  **Parallelization**: Wave 4. Depends: 7. Blocks: 21.
  **QA Scenarios**:
  ```
  Scenario: Canonical form
    Tool: Bash
    Steps:
      1. cargo test -p unlace-output -- test_ir_dump
      2. Assert exit code == 0
    Expected Result: IR dump matches canonical form
    Evidence: .sisyphus/evidence/task-19-irdump.txt
  ```
  **Commit**: `feat(output): IR dump formatter`

- [x] 20. CFG dot graph output
  **What to do**: `fn emit_cfg_dot(func: &SsaFunction) -> String`. Block labels with IR, edge labels T/F/fallthrough. Entry=green, exit=red, loop headers=blue. Renders with `dot -Tpng`.
  **Parallelization**: Wave 4. Depends: 12. Blocks: 21.
  **QA Scenarios**:
  ```
  Scenario: Dot renders
    Tool: Bash
    Steps:
      1. cargo test -p unlace-output -- test_cfg_dot_renders
      2. Assert exit code == 0
    Expected Result: dot -Tpng succeeds on output
    Evidence: .sisyphus/evidence/task-20-dot.txt
  ```
  **Commit**: `feat(output): CFG dot graph`

- [x] 21. CLI integration via clap
  **What to do**: unlace-cli binary. `unlace decompile [--function NAME|ADDR] [--emit c|ir|cfg-dot] [--arch ARCH] [--output FILE] [--all] [-v] BINARY`. `unlace --version`. Wire loader → lift → SSA → passes → struct → output. x86-64 ELF only for now. tracing for diagnostics.
  **Parallelization**: Wave 4. Depends: 8, 18, 19, 20. Blocks: 22.
  **QA Scenarios**:
  ```
  Scenario: CLI works
    Tool: Bash
    Steps:
      1. cargo build -p unlace-cli
      2. Assert exit code == 0
      3. ./target/debug/unlace --version
      4. Assert output contains "unlace"
    Expected Result: CLI builds and runs
    Evidence: .sisyphus/evidence/task-21-cli.txt
  ```
  **Commit**: `feat(cli): unlace CLI via clap`

### Wave 5 — End-to-End + Golden Tests

- [ ] 22. End-to-end pipeline wiring
  **What to do**: Wire complete pipeline: load → discover functions (symbol-based for non-stripped, linear sweep fallback for stripped — identify function prologues like `push rbp; mov rbp, rsp` and `endbr64` patterns) → lift → CFG → SSA → passes (fold, copyprop, DCE, types) → structuring → output. Graceful per-function failure: emit `/* decompilation failed */` and continue. 30s per-function timeout. Warn on >100K IR nodes. Function discovery: for stripped binaries, scan .text for prologue patterns; for non-stripped, use symbol table.
  **Parallelization**: Wave 5. Depends: 21. Blocks: 23, 24, 25.
  **QA Scenarios**:
  ```
  Scenario: Hello world decompiles
    Tool: Bash
    Steps:
      1. ./target/debug/unlace decompile fixtures/hello_world.elf > out.c
      2. Assert exit code == 0
      3. grep "main" out.c
      4. Assert match found
    Expected Result: End-to-end produces C output
    Evidence: .sisyphus/evidence/task-22-e2e.txt
  Scenario: Stripped binary discovers functions
    Tool: Bash
    Steps:
      1. ./target/debug/unlace decompile --all fixtures/stripped.elf > out.c
      2. Assert exit code == 0
      3. grep -c "^.*(" out.c
      4. Assert count >= 1 (at least one function discovered)
    Expected Result: Stripped binary produces output via prologue scanning
    Evidence: .sisyphus/evidence/task-22-stripped.txt
  ```
  **Commit**: `feat: end-to-end decompilation pipeline`

- [ ] 23. Golden test suite: x86-64
  **What to do**: Enable ignored golden tests. Run unlace on fixtures, compare via harness. Fix pipeline until 80%+ pass. Mark known failures with TODO.
  **Parallelization**: Wave 5. Depends: 10, 22. Blocks: 26-32.
  **QA Scenarios**:
  ```
  Scenario: Golden pass rate
    Tool: Bash
    Steps:
      1. cargo test --test golden_x86_64 -- --format json 2>&1 | tee golden.log
      2. PASSED=$(grep -c '"event":"ok"' golden.log)
      3. TOTAL=$(grep -c '"event"' golden.log | head -1)
      4. RATE=$((PASSED * 100 / TOTAL))
      5. echo "Pass rate: $RATE% ($PASSED/$TOTAL)"
      6. test $RATE -ge 80
      7. Assert exit code == 0
    Expected Result: Pass rate >= 80%
    Evidence: .sisyphus/evidence/task-23-golden.txt
  ```
  **Commit**: `test: x86-64 golden suite — N/150 passing`

- [ ] 24. Performance benchmarks
  **What to do**: criterion/divan benches. medium.elf end-to-end. Assert <60s, <2GB RSS. Per-stage breakdown. CI optional check.
  **Parallelization**: Wave 5. Depends: 22.
  **QA Scenarios**:
  ```
  Scenario: Performance budget
    Tool: Bash
    Steps:
      1. /usr/bin/time -v ./target/release/unlace decompile fixtures/medium.elf > /dev/null 2>time.txt
      2. grep "Maximum resident" time.txt
      3. Assert RSS < 2097152 KB (2GB)
    Expected Result: Within budget
    Evidence: .sisyphus/evidence/task-24-perf.txt
  ```
  **Commit**: `perf: benchmarks + memory budget`

- [ ] 25. Error handling + graceful degradation
  **What to do**: Replace all unwrap() in lib crates with proper errors. `unlace_ir::Error` enum. Unknown opcodes → `__unknown_insn_0xNN()`. Malformed input → exit 1. Timeout → skip + comment. thiserror in libs, anyhow in CLI.
  **Parallelization**: Wave 5. Depends: 22.
  **QA Scenarios**:
  ```
  Scenario: /dev/null rejected
    Tool: Bash
    Steps:
      1. ./target/debug/unlace decompile /dev/null 2>err.txt; echo $?
      2. Assert exit code != 0
      3. grep -i "error\|invalid" err.txt
      4. Assert match found
    Expected Result: Clean error on invalid input
    Evidence: .sisyphus/evidence/task-25-error.txt
  Scenario: No unwrap in libs
    Tool: Bash
    Steps:
      1. grep -rn "\.unwrap()" crates/unlace-ir/src/ crates/unlace-loader/src/ crates/unlace-passes/src/ crates/unlace-struct/src/ crates/unlace-output/src/ | grep -v "test" | wc -l
      2. Assert count == 0
    Expected Result: No unwrap in library code
    Evidence: .sisyphus/evidence/task-25-no-unwrap.txt
  ```
  **Commit**: `fix: error handling + graceful degradation`

### Wave 6 — Additional Architectures

- [ ] 26. ARM/AArch64 lifter via capstone
  **What to do**: Replace ARM stub with working lifter. capstone for ARM64 decoding. Lift: ADD, SUB, AND, ORR, EOR, MOV, LDR, STR, B, BL, BR, BLR, CBZ, CBNZ, Bcc, RET, CMP, TST. Registers: X0-X30, SP, LR, PC, NZCV. ARM64 only (no AArch32/Thumb for MVP).
  **Parallelization**: Wave 6. Depends: 11, 23 passing.
  **References**: `references/hexrays/ida_dump/hexarm/all/` (7,793 funcs), `references/ida/processors/arm/all/` (1,094 funcs)
  **QA Scenarios**:
  ```
  Scenario: ARM lifts
    Tool: Bash
    Steps:
      1. cargo test -p unlace-lift-arm
      2. Assert exit code == 0
    Expected Result: Basic ARM64 instructions lift correctly
    Evidence: .sisyphus/evidence/task-26-arm.txt
  ```
  **Commit**: `feat(lift-arm): ARM/AArch64 lifter via capstone`

- [ ] 27. ARM golden tests
  **What to do**: Run golden comparison on 25 ARM functions. Target 70%+ pass.
  **Parallelization**: Wave 6. Depends: 26.
  **QA Scenarios**:
  ```
  Scenario: ARM golden rate
    Tool: Bash
    Steps:
      1. cargo test --test golden_arm -- --format json 2>&1 | tee golden_arm.log
      2. PASSED=$(grep -c '"event":"ok"' golden_arm.log)
      3. TOTAL=$(grep -c '"event"' golden_arm.log | head -1)
      4. RATE=$((PASSED * 100 / TOTAL))
      5. echo "Pass rate: $RATE% ($PASSED/$TOTAL)"
      6. test $RATE -ge 70
      7. Assert exit code == 0
    Expected Result: Pass rate >= 70%
    Evidence: .sisyphus/evidence/task-27-arm-golden.txt
  ```
  **Commit**: `test: ARM golden suite`

- [ ] 28. RISC-V lifter via capstone
  **What to do**: RV64I base integer ISA. Registers: x0-x31, pc. Same lifter pattern as ARM.
  **References**: `references/hexrays/ida_dump/hexrv/all/` (7,635 funcs), `references/procs/riscv/` (443 funcs)
  **Parallelization**: Wave 6. Depends: 11, 23.
  **QA Scenarios**:
  ```
  Scenario: RISC-V lifts
    Tool: Bash
    Steps:
      1. cargo test -p unlace-lift-riscv
      2. Assert exit code == 0
    Expected Result: Basic RV64I instructions lift
    Evidence: .sisyphus/evidence/task-28-riscv.txt
  ```
  **Commit**: `feat(lift-riscv): RISC-V lifter via capstone`

- [ ] 29. MIPS lifter via capstone
  **What to do**: MIPS64. Registers: $0-$31, HI, LO, PC. Handle delay slots.
  **References**: `references/hexrays/ida_dump/hexmips/all/` (7,674 funcs), `references/procs/mips/all/sub_1F3B0.c` (3,298-line ana)
  **Parallelization**: Wave 6. Depends: 11, 23.
  **QA Scenarios**:
  ```
  Scenario: MIPS lifts
    Tool: Bash
    Steps:
      1. cargo test -p unlace-lift-mips
      2. Assert exit code == 0
    Expected Result: Basic MIPS instructions lift, delay slots handled
    Evidence: .sisyphus/evidence/task-29-mips.txt
  ```
  **Commit**: `feat(lift-mips): MIPS lifter via capstone`

- [ ] 30. PowerPC lifter via capstone
  **What to do**: PPC64. Registers: r0-r31, CR, LR, CTR, XER.
  **References**: `references/hexrays/ida_dump/hexppc/all/` (7,735 funcs), `references/procs/ppc/` (736 funcs)
  **Parallelization**: Wave 6. Depends: 11, 23.
  **QA Scenarios**:
  ```
  Scenario: PPC lifts
    Tool: Bash
    Steps:
      1. cargo test -p unlace-lift-ppc
      2. Assert exit code == 0
    Expected Result: Basic PPC instructions lift
    Evidence: .sisyphus/evidence/task-30-ppc.txt
  ```
  **Commit**: `feat(lift-ppc): PowerPC lifter via capstone`

- [ ] 31. V850 lifter (custom decoder)
  **What to do**: Custom V850 instruction decoder (no crate exists). V850E2M ISA manual. Registers: r0-r31, PC, PSW.
  **References**: `references/hexrays/ida_dump/hexv850/all/` (7,647 funcs), `references/procs/nec850/` (419 funcs)
  **Parallelization**: Wave 6. Depends: 11, 23.
  **QA Scenarios**:
  ```
  Scenario: V850 lifts
    Tool: Bash
    Steps:
      1. cargo test -p unlace-lift-v850
      2. Assert exit code == 0
    Expected Result: Basic V850 instructions lift
    Evidence: .sisyphus/evidence/task-31-v850.txt
  ```
  **Commit**: `feat(lift-v850): V850 lifter (custom decoder)`

- [ ] 32. ARC lifter (custom decoder)
  **What to do**: Custom ARC instruction decoder. ARCv2 ISA manual. Registers: r0-r63, STATUS32, BTA, LP_START/END.
  **References**: `references/hexrays/ida_dump/hexarc/all/` (7,617 funcs), `references/procs/arc/` (315 funcs)
  **Parallelization**: Wave 6. Depends: 11, 23.
  **QA Scenarios**:
  ```
  Scenario: ARC lifts
    Tool: Bash
    Steps:
      1. cargo test -p unlace-lift-arc
      2. Assert exit code == 0
    Expected Result: Basic ARC instructions lift
    Evidence: .sisyphus/evidence/task-32-arc.txt
  ```
  **Commit**: `feat(lift-arc): ARC lifter (custom decoder)`

### Wave 7 — Post-MVP Features

- [ ] 33. PE loader via `object`
  **What to do**: Add PE32/PE64 to unlace-loader. Sections, imports (IAT), exports, relocations. RVA → VA.
  **References**: `references/ida/loaders/pe/` (404 funcs), `references/loaders/coff/` (308 funcs)
  **Parallelization**: Wave 7. Depends: 8.
  **QA Scenarios**:
  ```
  Scenario: PE loads
    Tool: Bash
    Steps:
      1. cargo test -p unlace-loader -- test_load_pe
      2. Assert exit code == 0
    Expected Result: PE file loaded
    Evidence: .sisyphus/evidence/task-33-pe.txt
  ```
  **Commit**: `feat(loader): PE loader`

- [ ] 34. Mach-O loader via `object`
  **What to do**: Add Mach-O. Segments, sections, symtab, dysymtab, fat/universal.
  **References**: `references/ida/loaders/dyld/` (2,415 funcs), `references/ida/loaders/macho/` (40 files)
  **Parallelization**: Wave 7. Depends: 8.
  **QA Scenarios**:
  ```
  Scenario: Mach-O loads
    Tool: Bash
    Steps:
      1. cargo test -p unlace-loader -- test_load_macho
      2. Assert exit code == 0
    Expected Result: Mach-O file loaded
    Evidence: .sisyphus/evidence/task-34-macho.txt
  ```
  **Commit**: `feat(loader): Mach-O loader`

- [ ] 35. C++/Rust/Swift demangling
  **What to do**: Integrate symbolic-demangle. Mangled symbol → short name. Full signature as comment.
  **References**: `references/plugins/rust/` (137 funcs), `references/demangle/librustdemangle/` (39 funcs), `references/demangle/libswiftdemangle/` (556 funcs)
  **Parallelization**: Wave 7. Depends: 18.
  **QA Scenarios**:
  ```
  Scenario: C++ demangle
    Tool: Bash
    Steps:
      1. cargo test -p unlace-output -- test_demangle
      2. Assert exit code == 0
    Expected Result: _ZN3foo3barEv → foo::bar()
    Evidence: .sisyphus/evidence/task-35-demangle.txt
  ```
  **Commit**: `feat(output): C++/Rust/Swift demangling`

- [ ] 36. Switch table recovery
  **What to do**: Detect BRANCHIND + table LOAD pattern → switch. `target = LOAD(base + index * entry_size)`.
  **References**: `references/hexrays/ida_dump/hexx64/all/`
  **Parallelization**: Wave 7. Depends: 17.
  **QA Scenarios**:
  ```
  Scenario: Switch recovery
    Tool: Bash
    Steps:
      1. cargo test -p unlace-struct -- test_switch_recovery
      2. Assert exit code == 0
    Expected Result: Jump table → switch statement
    Evidence: .sisyphus/evidence/task-36-switch.txt
  ```
  **Commit**: `feat(struct): switch table recovery`

- [ ] 37. DWARF debug info import via gimli
  **What to do**: Parse .debug_info via gimli + addr2line. Import function names, param names/types, locals, source file/line. Apply to type inference.
  **References**: `references/plugins/dwarf/` (1,465 funcs)
  **Parallelization**: Wave 7. Depends: 16.
  **QA Scenarios**:
  ```
  Scenario: DWARF types applied
    Tool: Bash
    Steps:
      1. cargo test -p unlace-loader -- test_dwarf_import
      2. Assert exit code == 0
    Expected Result: Function signatures imported from DWARF
    Evidence: .sisyphus/evidence/task-37-dwarf.txt
  ```
  **Commit**: `feat(loader): DWARF import via gimli`

- [ ] 38. PDB debug info import via pdb2
  **What to do**: Parse PDB via pdb2 crate. Import function sigs, types, line numbers. Apply to PE binaries.
  **References**: `references/plugins/pdb/` (1,427 funcs)
  **Parallelization**: Wave 7. Depends: 16.
  **QA Scenarios**:
  ```
  Scenario: PDB types applied
    Tool: Bash
    Steps:
      1. cargo test -p unlace-loader -- test_pdb_import
      2. Assert exit code == 0
    Expected Result: PDB types imported
    Evidence: .sisyphus/evidence/task-38-pdb.txt
  ```
  **Commit**: `feat(loader): PDB import via pdb2`

- [ ] 39. Calling convention detection
  **What to do**: Detect System V AMD64 vs Microsoft x64 from argument register usage. Annotate function signatures.
  **References**: `references/hexrays/ida_dump/hexx64/all/`
  **Parallelization**: Wave 7. Depends: 16.
  **QA Scenarios**:
  ```
  Scenario: CC detection
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes -- test_cc_detection
      2. Assert exit code == 0
    Expected Result: System V vs Microsoft correctly detected
    Evidence: .sisyphus/evidence/task-39-cc.txt
  ```
  **Commit**: `feat(passes): calling convention detection`

- [ ] 40. Stack variable recovery
  **What to do**: Analyze RSP/RBP offsets → local variables. Name as local_N. Assign types.
  **References**: `references/hexrays/ida_dump/hexx64/all/`
  **Parallelization**: Wave 7. Depends: 16, 39.
  **QA Scenarios**:
  ```
  Scenario: Stack vars recovered
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes -- test_stack_vars
      2. Assert exit code == 0
    Expected Result: RSP-relative accesses → local_N variables
    Evidence: .sisyphus/evidence/task-40-stackvars.txt
  ```
  **Commit**: `feat(passes): stack variable recovery`

<!-- FINAL_WAVE_BELOW -->

---

## Final Verification Wave

- [ ] F1. **Plan Compliance Audit** — `oracle`
  Read the plan end-to-end. For each "Must Have": verify implementation exists. For each "Must NOT Have": search codebase for forbidden patterns. Check evidence files exist.
  **QA Scenarios**:
  ```
  Scenario: Must Have coverage
    Tool: Bash
    Steps:
      1. cargo build -p unlace-cli && ./target/debug/unlace decompile fixtures/hello_world.elf > /dev/null
      2. Assert exit code == 0
      3. grep -r "HashMap" crates/unlace-output/src/ crates/unlace-struct/src/
      4. Assert count == 0 (no HashMap in output paths)
    Expected Result: All Must Have present, no Must NOT Have violations
    Evidence: .sisyphus/evidence/F1-compliance.txt
  ```
  Output: `Must Have [N/N] | Must NOT Have [N/N] | VERDICT: APPROVE/REJECT`

- [ ] F2. **Code Quality Review** — `general`
  Run `cargo check --workspace` + `cargo clippy --workspace` + `cargo test --workspace`. Check determinism: run `unlace` twice, diff output.
  **QA Scenarios**:
  ```
  Scenario: Build + test + determinism
    Tool: Bash
    Steps:
      1. cargo clippy --workspace -- -D warnings
      2. Assert exit code == 0
      3. cargo test --workspace
      4. Assert exit code == 0
      5. ./target/debug/unlace decompile fixtures/hello_world.elf > a.c
      6. ./target/debug/unlace decompile fixtures/hello_world.elf > b.c
      7. diff a.c b.c
      8. Assert diff produces no output
    Expected Result: Clean build, all tests pass, deterministic output
    Evidence: .sisyphus/evidence/F2-quality.txt
  ```
  Output: `Build [PASS/FAIL] | Tests [N pass/N fail] | Determinism [PASS/FAIL] | VERDICT`

- [ ] F3. **Real Manual QA** — `general`
  Execute EVERY QA scenario from EVERY task. Test edge cases: empty binary, /dev/null, stripped binary.
  **QA Scenarios**:
  ```
  Scenario: Edge case — /dev/null
    Tool: Bash
    Steps:
      1. ./target/debug/unlace decompile /dev/null 2>err.txt; echo $?
      2. Assert exit code != 0
      3. grep -i "error\|invalid\|not.*recognized" err.txt
      4. Assert match found
    Expected Result: Graceful error on invalid input
    Evidence: .sisyphus/evidence/F3-edge-devnull.txt
  ```
  Output: `Scenarios [N/N pass] | Edge Cases [N tested] | VERDICT`

- [ ] F4. **Scope Fidelity Check** — `general`
  For each task: read spec, read actual impl. Verify 1:1. Flag unaccounted changes.
  **QA Scenarios**:
  ```
  Scenario: No scope creep
    Tool: Bash
    Steps:
      1. git diff --stat HEAD~1..HEAD | wc -l
      2. Compare changed files against task spec file list
      3. Flag any file not mentioned in any task spec
    Expected Result: All changes accounted for in task specs
    Evidence: .sisyphus/evidence/F4-scope.txt
  ```
  Output: `Tasks [N/N compliant] | Unaccounted [CLEAN/N files] | VERDICT`

---

## Commit Strategy

| Wave | Commit | Files |
|------|--------|-------|
| 1 | `chore: project workspace + CI scaffolding` | Cargo.toml, crates/*, .github/* |
| 1 | `docs: IR specification v1.0` | docs/ir-spec.md |
| 1 | `docs: determinism charter` | docs/determinism.md |
| 1 | `test: golden corpus + fixtures` | tests/golden/*, fixtures/* |
| 2 | `feat(ir): core IR types` | crates/unlace-ir/src/* |
| 2 | `feat(loader): ELF loader` | crates/unlace-loader/src/* |
| 2 | `feat(lift-x86): x86-64 lifter` | crates/unlace-lift-x86/src/* |
| 3 | `feat(ir): CFG + SSA` | crates/unlace-ir/src/cfg.rs, ssa.rs |
| 3 | `feat(passes): const fold + DCE + copy prop` | crates/unlace-passes/src/* |
| 4 | `feat(struct): control flow structuring` | crates/unlace-struct/src/* |
| 4 | `feat(output): C printer + IR dump + CFG dot` | crates/unlace-output/src/* |
| 4 | `feat(cli): unlace CLI` | crates/unlace-cli/src/* |
| 5 | `feat: end-to-end pipeline + golden tests` | tests/* |
| 6+ | `feat(lift-arm): ARM lifter` (etc.) | crates/unlace-lift-arm/src/* |

---

## Success Criteria

### Verification Commands
```bash
cargo build --workspace --release
cargo test --workspace
unlace decompile fixtures/hello_world.elf > a.c && unlace decompile fixtures/hello_world.elf > b.c && diff a.c b.c
cargo test --test golden_x86_64
/usr/bin/time -v target/release/unlace decompile fixtures/medium.elf > /dev/null
```

### Final Checklist
- [ ] All "Must Have" present
- [ ] All "Must NOT Have" absent
- [ ] All golden tests pass
- [ ] Determinism verified
- [ ] CI passes in <15 min
- [ ] All 8 arch lifter traits compile
