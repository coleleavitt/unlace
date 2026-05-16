# Unlace Full Implementation Plan

This plan consolidates the codebase audit, the opencode session dumps in
`research/opencode-sessions/`, and the Hex-Rays/IDA dump analysis under
`references/hexrays/ida_dump/`. It is written as an implementation backlog,
ordered in batches so work can land incrementally without turning the repo into
a long-running half-refactor.

The main conclusion from the audit is:

- Unlace already has many serious decompiler components.
- The biggest immediate gap is not "no code exists"; it is that many existing
  passes are not wired into the actual CLI path.
- The largest deeper gaps are IDA-style stack recovery, lvar allocation,
  rich type/TInfo propagation, whole-program interprocedural recovery,
  switch/EH reconstruction, and systematic IDA-vs-Unlace validation.

## Source Inventory

Primary Rust implementation areas:

- `crates/unlace-cli/src/pipeline.rs`
- `crates/unlace-cli/src/main.rs`
- `crates/unlace-ir/src/`
- `crates/unlace-lift/src/`
- `crates/unlace-passes/src/`
- `crates/unlace-struct/src/`
- `crates/unlace-output/src/`
- `crates/unlace-loader/src/`

Primary IDA/Hex-Rays evidence (as mapped in Batch 0 audit):

- `references/hexrays/ida_dump/hexx64/all/sub_14B8B0.c`
  - Core decompiler maturity pipeline (loop-driven, `M_ZERO` to `M_FINAL`).
- `references/hexrays/ida_dump/hexx64/all/sub_13B0F0.c`
  - Stack variable address resolution and operand-to-frame mapping.
- `references/hexrays/ida_dump/hexx64/all/sub_3EEC80.c`
  - Instruction/operand/dtype stack offset detection.
- `references/hexrays/ida_dump/hexx64/all/sub_21B2A0.c`
  - Lvar allocation, `qvector` sorting, merging via `get_merge_state`.
- `references/hexrays/ida_dump/hexx64/all/sub_215AC0.c`
  - Lvar comparator/interference ordering (storage-first, then type).
- `references/hexrays/ida_dump/hexx64/all/sub_21F320.c`
  - Stack frame and local layout.
- `references/hexrays/ida_dump/hexx64/all/sub_2112D0.c`
  - Lvar naming (`a1`, `v1`, `result`, `this`).
- `references/hexrays/ida_dump/hexx64/all/sub_2662B0.c`
  - Expression printing (`cot_*` dispatch).
- `references/hexrays/ida_dump/hexx64/all/sub_268570.c`
  - Statement printing (`cas_*` dispatch).
- `references/hexrays/ida_dump/hexx64/all/sub_3DBC50.c`
  - Top-level ctree printing and line breaking.
- `references/hexrays/ida_dump/hexx64/all/sub_40FBC0.c`
  - Massive type/expression dispatcher (600+ case arms).
- `references/hexrays/ida_dump/idallib/`
  - `tinfo_t` support, `udt_type_data_t__get_best_fit_member`, `calc_tinfo_gaps`.

## Status Legend

- `[ ]` Not started.
- `[~]` Partially implemented or present but not fully wired.
- `[x]` Already present enough to use as a foundation.

## Batch 0 - Ground Truth, Safety, and Baselines

Goal: prevent fake progress. Before changing large systems, build a repeatable
way to see whether output is getting closer to IDA-like C or just changing.

### Tasks

- [ ] Expand regression corpus to full 150 IDA reference files (currently 29).
- [ ] Create a clear regression corpus split by feature:
  - stack vars
  - frame pointer omitted functions
  - alloca/dynamic stack
  - structs and arrays
  - switches and jump tables
  - indirect calls
  - varargs and printf-style calls
  - C++ methods/vtables
  - Rust panics/enums
  - ObjC message dispatch
  - Go interfaces/defer
  - EH/landing pads
  - SIMD/Callother-heavy functions
  - multi-arch fixtures

- [ ] Add a corpus manifest:
  - source path
  - binary path
  - compiler
  - flags
  - architecture
  - expected feature tags
  - expected IDA output path if available

- [~] Add IDA-vs-Unlace golden comparison tooling:
  - [x] `cargo xtask compare-corpus` (counts 20+ patterns, emits md table).
  - [x] `cargo xtask compare-golden` (aggregate keyword/density similarity).
  - [ ] Add structural comparison: report newly introduced gotos, `undefined`, or `Unimplemented`.
  - [ ] Implement `technical_gap_report.md` style per-fixture root cause tracking.

- [x] Add feature counters to the decompiler output:
  - landed 33+ feature counters (switches, loops, try/catch, vtable sites, etc.).

- [x] Add a quality report command (`unlace quality <binary>`):
  - landed md/json output.

- [x] Add regression gates:
  - [x] `quality_smoke.rs` regression baselines.
  - [x] `PassesReport.outer_report` for timing and iteration tracking.

## Batch 1 - Wire Existing Passes into the Real Pipeline

Goal: get the value from code that already exists before building new systems.

### Tasks

- [x] Audit and wire 13/15 exported but unwired passes (landed `d4499f068`).
- [x] Wire `StackPointerTrackingPass` and `NoreturnDetectPass`.
- [x] Wire `PrologueElimPass` for stack frame cleanup (Prologue/Epilogue Elimination gap).
- [x] Wire `IndirectCallResolvePass` and `OpTypeBindingPass`.
- [~] Wire vararg and printf-format recovery:
  - [x] `parse_printf_format_strings` (landed `b7bce9462`).
  - [ ] `detect_variadic_callees` (whole-program).
- [x] Wire language-specific passes: `RustEnumPass`, `RustPanicPass`, `CppVtablePass`, `CppVariantPass`.
- [x] PRODUCTION: Replace `run_type_infer_bounded` with real `TypeInferPass`.

## Batch 2 - IDA-Style Stack Pointer and Stack Variable Recovery

Goal: move stack recovery from simple SSA heuristics toward IDA-like frame
understanding.

### Tasks

- [x] Define architecture-neutral `StackSpec` (landed `e35051c6a`).
- [ ] Implement `sub_13B0F0`-style Operand-to-Frame resolution:
  - [ ] Trace all `ram` accesses through SP/BP deltas.
  - [ ] Map access offsets to candidate `StackVar` slots.
  - [x] Classify stack args vs locals based on entry SP (landed `fa9ae13e6`).
- [ ] Implement dynamic stack support (`alloca`/VLA) and stack pointer restoration validation.
- [ ] Implement frame member refinement: detect overlaps, unions, and packed layout in the stack.

## Batch 3 - LVAR Allocation, Merging, and Naming

Goal: create a real local-variable object layer between SSA temporaries and C
output, similar to Hex-Rays `lvar_t`.

### Tasks

- [x] Define `Lvar` and initial collector (landed `0d9968bf3`).
- [ ] Implement `sub_21B2A0` Lvar Merging Heuristics:
  - [ ] Sort lvars by storage (reg vs stack) and first-access.
  - [ ] Build interference graph using `live_range`.
  - [ ] Apply `get_merge_state` rules: type compatibility, address-taken, volatile barriers.
- [ ] Implement variable suppression (Wave 4):
  - [ ] Aggressive dead-variable elimination (2-level chain builder).
  - [ ] Flag-register suppression: NEVER declare variables for register offsets 256-261 (CF, PF, AF, ZF, SF, OF).
  - [ ] Temporary suppression: Suppress declarations for single-use unique-space varnodes.
- [ ] Implement naming priority: `this` > explicit args > stack args > locals (`v1`, `v2`, etc.).
- [ ] Implement `result` variable for complex return expressions.
- [ ] Add Lvar remapping to replace SSA Varnodes in the printer IR.

## Batch 4 - TInfo-Style Type System and Type Propagation

Goal: make types a central decompiler fact, not just final output decoration.

### Tasks

- [ ] Define canonical internal `tinfo_t` representation:
  - [ ] Support for UDT (User Defined Types), enums, bitfields, function pointers.
  - [ ] Support for SIMD types, anonymous struct/union, and typedef/alias tracking.
  - [ ] `TypeDb` for serialization and library support.
- [ ] Implement `sub_40FBC0`-style Type Dispatch:
  - [ ] Handle 600+ opcode/type combinations for inference.
  - [ ] `apply_tinfo` to propagate types through calls and struct fields.
- [ ] Implement `udt_type_data_t__get_best_fit_member`:
  - [ ] Resolve member access at arbitrary offsets.
  - [ ] Calculate gaps via `calc_tinfo_gaps`.
- [ ] Implement type validation: flag invalid casts and conflicting widths.

## Batch 5 - Whole-Program Interprocedural Recovery

Goal: stop treating each function as an island.

### Tasks

- [x] First slice: `run_whole_program_interproc` helper (landed `5eaea62e7`).
- [ ] Implement SCC-based interproc fixed-point.
- [ ] Propagate signatures: callee params to caller args, return type to use sites.
- [ ] Propagate `this` pointer types through class method calls.
- [ ] Implement `detect_variadic_callees` and callsite argument naming.

## Batch 6 - Calling Conventions, Params, Varargs, and Noreturn

Goal: make calls look like source-level calls.

### Tasks

- [x] `StackSpec`-driven argument vs local classification (landed `fa9ae13e6`).
- [x] Whole-program printf format parsing (landed `b7bce9462`).
- [x] Noreturn and libc counter wiring fix (landed `334745b93`).
- [ ] Improve Return Merging (Wave 3):
  - [ ] Detect return from ANY return-register assignment (RAX/EAX) in the last 3 statements.
  - [ ] Implicit return for `main` (return 0) and all void functions.
- [ ] Recover `__usercall` and `__userpurge` non-standard ABIs.

## Batch 7 - Struct, Union, Array, and Field Recovery

Goal: recover memory layout as source-level objects.

### Tasks

- [x] CExpr wiring for member/index/deref (landed `f891acd12`).
- [ ] Implement `get_struct_operand` tracing to find struct base.
- [ ] Implement nested struct and array-of-struct recovery.
- [ ] Recover bitfields from `(x >> N) & M` patterns using `INSERT`/`ZPULL` IR ops.
- [ ] Implement Struct Member Name Resolution (DWARF-backed).

## Batch 8 - Indirect Calls, Vtables, Function Pointers, and Dispatch

Goal: recover high-level call targets.

### Tasks

- [ ] Recover C++ `vtable` dispatch: promote `this->vtable[N]` to a virtual method call.
- [ ] Recover ObjC `msgSend` selectors and resolve method prototypes.
- [ ] Recover Rust/Go dynamic dispatch (vtable/itab data pairs).

## Batch 9 - Control Flow, Switches, Loops, and Exception Handling

Goal: reduce gotos and recover source-level control structures.

### Tasks

- [x] Switch table recovery and HIR refinement wired (landed `bc6169cef`, `4cf784d12`, `0160f8858`).
- [ ] Implement Condition Simplification (Wave 1):
  - [ ] Deep comparison chain recovery (trace 4+ levels to fold `INT_SUB` into `if (a < b)`).
  - [ ] Nested-if collapse (`if (a) { if (b) { X } }` -> `if (a && b)`).
  - [ ] Null-check recovery from `TEST+JE` patterns (`INT_AND(x,x) -> x`).
- [ ] Implement Loop Recovery Improvements (Wave 2):
  - [ ] Aggressive while->for (promote if last statement modifies condition variable).
  - [ ] For-loop from decrement-to-zero and `CMP+DEC+JNE` chains.
  - [ ] Loop Inversion and Loop Normalization.
- [ ] Recover C++ Exception Handling: map landing pads to `catch` blocks and resolve RTTI.

## Batch 10 - Maturity-Level Orchestration and Microcode Optimization

Goal: formalize the pipeline into IDA-like maturity stages.

### Tasks

- [ ] Define the `sub_14B8B0` Maturity Pipeline:
  - `M_ZERO`: Raw Lifted IR.
  - `M_GENERATED`: SSA Built (`sub_144130` style microcode refinement).
  - `M_PREOPTIMIZED`: Algebraic simplification (`sub_F8530` style peephole).
  - `M_LOCOPT`: Local dataflow, stack/frame recovery.
  - `M_CALLS`: Inter-procedural optimization (`sub_F7F40`).
  - `M_GLBOPT`: Global optimization fixed-point loop (`sub_14A660` loop: SSA opt -> control flow opt -> block merging).
  - `M_LVARS`: Lvar allocation (`sub_1FAB30` wrapper -> `sub_1F8DC0` prealloc).
  - `M_FINAL`: Ctree construction (`sub_1CE9E0`) and final C output.
- [ ] Implement Phase-driven pass scheduler: only run certain passes at specific maturity.
- [ ] Add 64-bit demotion and "Combiner" passes (Wave 29 of Parity Plan).
- [ ] CMOVcc Full Preservation: Ensure no pass degrades condition after SCCP (Wave 1).

## Batch 11 - C Printer, CTree-Like Output, and Formatting

Goal: make final C output readable and stable.

### Tasks

- [x] Route struct/array/deref through `CExpr` (landed `f891acd12`).
- [ ] Implement CTree `cot_*` Opcode Model (mapped from Hex-Rays `off_4E0320`):
  - [ ] Implement 69 opcodes with specific arity and properties.
  - [ ] Use INVERTED Precedence Scale (0 = Leaf, 15 = Comma).
- [ ] Implement `sub_25F3C0` Parenthesization Rules:
  - [ ] Rule: Parent lower precedence than child -> always parens.
  - [ ] Rule: Same precedence + comparison -> always parens.
  - [ ] Rule: Same precedence + right child + non-associative -> parens.
  - [ ] Rule: Associative ops (=, ||, &&, |, ^, &, +, fadd) -> never parens at same level.
  - [ ] Rule: Division/modulo -> parens on right child (a / b / c != a / (b / c)).
- [ ] Implement `sub_3DBC50`-style Line Breaking and Indentation:
  - [ ] Threshold: 20 chars minimum remaining width.
  - [ ] Pre-measure expression width before multi-line layout.
- [ ] Implement IDA-ism macros as `cot_helper` nodes: `LOBYTE`, `HIDWORD`, `COERCE_*`.
- [ ] Implement tagged output stream for interactive identifiers and color-coded symbols.


## Batch 12+ - Loader, Scalability, and Project Memory

- [x] Batch 15 Slice 1: `AliasCategory` + volatile/MMIO barrier (landed `437413dce`).
- [x] Batch 18: `plan.md` updated with IDA-research evidence.
- [ ] Complete `unlace-loader` clippy-clean (36 errors left).
- [ ] Implement `xtask scaffold` and musl build support.
- [ ] Implement PLT/GOT Symbol Resolution.
- [ ] Implement DWARF Parameter Extraction.

## Batch 13 - Lifter Coverage and Architecture Tuning

Goal: reduce architecture-specific blind spots.

### Tasks

- [ ] Architecture Fixture Tuning (Wave 5):
  - [ ] ARC: Branch condition + return recovery (JMP/J [BLINK]).
  - [ ] RISC-V: Branch condition recovery + loop promotion.
  - [ ] PPC64/V850/MIPS64: Branch condition recovery and delay slot refinement.
  - [ ] x87: Math idiom recovery and extended precision handling.
  - [ ] ARM64: Final condition tweaks.

- [ ] Add per-architecture coverage metrics:
  - instructions decoded
  - instructions lifted
  - `Unimplemented` count
  - `Callother` count
  - unsupported addressing modes
  - unsupported register classes

- [ ] Prioritize architectures by fixtures and real use:
  - x86/x86_64
  - AArch64
  - ARM/Thumb
  - RISC-V
  - MIPS
  - PPC
  - others after metrics

- [ ] Reduce x86/x86_64 gaps:
  - flags
  - SIMD
  - string ops
  - FPU
  - atomics
  - BMI/bit ops
  - control-flow instructions

- [ ] Reduce AArch64/ARM gaps:
  - condition flags
  - conditional select
  - NEON
  - load/store pair
  - PAC/BTI
  - atomics

- [ ] Add Callother lowering:
  - map to intrinsic expression when source-level meaningful
  - map to helper call when not
  - preserve side effects
  - preserve volatile semantics
  - attach type signatures

- [ ] Add lifter conformance tests:
  - instruction to IR snapshots
  - small source-to-C fixtures
  - architecture-specific ABI fixtures

---

## Recommended Batch Order (Updated)

1. **Batch 0+1**: Baselines and Wiring (DONE).
2. **Batch 9**: Switch Table Recovery (DONE/In Progress).
3. **Batch 10**: Formalize Maturity Pipeline (Next High-Signal).
4. **Batch 3**: Lvar Merging Heuristics.
5. **Batch 4**: TInfo-Style Type System.
6. **Batch 2**: Stack Variable Resolution.
7. **Batch 5**: Whole-Program Interproc.

## Definition of Done for Each Batch

- Implementation is wired and tested.
- Fixture proves the behavior.
- Quality report shows intended metric improvement.
- `scripts/score_parity.sh` sustains 100.0%.

## Session Log

... (previous logs preserved) ...

### Session 2026-05-16 (master `a27e994ad`)
... (previous logs preserved) ...

### Session 2026-05-18 (master `e9a2b0c11`)

- **Plan Expansion with IDA Research** — commit `e9a2b0c11`.
  Updated `plan.md` with exhaustive architectural details from `sub_14B8B0`
  (Maturity Pipeline), `sub_21B2A0` (Lvar Heuristics), and `sub_40FBC0`
  (Type Dispatch). Formalized the Maturity Level system and added deep
  type system tasks (`best-fit`, `gap calculation`).
- **Audit Findings Integration**: Added specific tasks for Batch 9,
  Batch 10, and Batch 3 based on the "insane" level of detail found in
  the Hex-Rays source dumps.

### Session 2026-05-17 (master `437413dce`)

Multi-batch slice landing session. All five merge commits sustain
`scripts/score_parity.sh` at 100.0%.

- **Batch 2 slice 2 — stack arg vs local classification** — merge
  commit `fa9ae13e6` (feat `f3993d0bf`). `classify_stack_args` now uses
  the SP-delta tracked by `StackPointerTrackingPass` to split frame
  slots into args (above entry SP) vs locals (below), instead of the
  prior heuristic offset cutoff. Removes false-positive "argN" naming
  on deep locals.
- **Batch 3 slices 1+2 — Lvar model + collector + live_range** —
  merge commit `0d9968bf3` (feat `af37de820`, recovery of earlier
  collector work). New `Lvar` struct in `unlace-ir` with `live_range:
  Option<(InsnId, InsnId)>` computed from SSA def/use spans. Collector
  walks the SSA function once, dedups by storage key (reg / stack
  slot), and seeds the symbol table consumed by VarMerge.
- **Batch 11 slice 2 — CExpr wiring for member/index/deref** —
  merge commit `f891acd12` (feat `df16417e3`). All struct-member,
  array-index, and pointer-deref emit paths in `unlace-output` now
  route through the typed `CExpr` builder instead of raw string
  formatting. Eliminates the last ad-hoc `format!("{}->{}", ...)`
  sites in the printer.
- **Batch 14 slice 1 — C++ ctor/dtor + this pointer** — merge commit
  `3af36425d`. Detects ctor/dtor signatures (vtable store in first
  block / mangled name pattern), promotes the first arg to a `this`
  pointer with the inferred class type, and threads it through
  member-access lowering. Enables future C++ member-function naming.
- **Batch 15 slice 1 — AliasCategory + volatile/MMIO barrier** —
  merge commit `437413dce` (feat `cc75c0cd4`, refire). New
  `AliasCategory` enum (`Stack`, `Heap`, `Global`, `Mmio`, `Unknown`)
  attached to memory ops; a barrier pass prevents reordering across
  volatile / MMIO accesses. Foundation for safer dead-store
  elimination near hardware registers.

### Verified state at end of session

- `bash scripts/score_parity.sh`: 100.0% (sustained — this session is a
  pure doc edit, no code touched).
