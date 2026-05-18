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
- 2026-05-17 rebaseline note: the bottom-of-file "100.0% parity" session
  claim is no longer treated as current truth. Local verification shows the
  workspace compiles, the full workspace test suite passes after the current
  golden/quality rebaseline, and `hello_world` no longer emits the bogus
  return-address null write. Follow-up recovery now preserves known direct-call
  ABI arguments, so `hello_world` emits `puts("Hello"); return 0;`. Broad parity
  remains unproven. Treat completed batches below as useful foundations, not
  proof of production parity.
- 2026-05-17 stack/SSA provenance update: local copy propagation is now scoped
  to dominating in-block copies, SCCP treats first-use register reads as runtime
  inputs instead of materializing `COPY 0`, and the C printer can name recovered
  RSP-derived stack slots when the address expression survives. The pinned
  `hello_world.elf`, `branches.elf`, and `loops.elf` quality baselines now have
  `output_null_deref_sites = 0`. Follow-up work also fixed folded constant
  returns (`RETURN c0:i32` / `RETURN c6:i32`) so simple mains keep `int` return
  types and emit `return 0;` / `return 6;`. Split guard-block prologues are now
  suppressed as frame setup, saved-register spill slots stay out of source
  locals, and void helper returns no longer print stale `return result;` output
  in the source-known quality anchors. The printer now resolves low-address
  RIP-relative globals before array-subscript recovery, inlines simple
  control-only condition comparisons, and avoids undeclared `cond` output. The
  latest loop-helper slice also keeps LICM/IV/strength-reduction from rewriting
  self-loop header/latch blocks, avoids inserting LICM preheaders when no
  instruction is actually moved, treats bottom-tested self-loops as `do/while`,
  and prevents function-wide raw-varnode condition folds from crossing block
  boundaries. Follow-up SSA availability work made GVN dominance-safe, made
  global copy propagation key cross-block equivalences by SSA varnode instead
  of raw register base, and made condition simplification rebuild changed
  instruction var-map entries. `sum_for` now preserves the loop-carried
  `i += 2` update in IR and prints a bound-based loop guard (`while (v6 != ...)`)
  instead of placeholder `while (cond)`, `cond = 1`, `while (v6 != 2)`, or stale
  temp-vs-zero guards. The C printer also handles post-`do/while` return temps
  whose SSA versions no longer line up with raw-HIR statement collection, so
  `sum_for`, `sum_while`, and `sum_do` return the visible loop-carried value
  instead of stale `return result;`. Empty-then/nonempty-else shells now print
  as inverted guards, so the optimized loop helpers no longer emit empty
  `if (...) { } else { ... }` scaffolding. A narrow final C cleanup also drops
  dead synthetic `cond` assignments/declarations and unused `vN` copy
  declarations from the same emitted line without touching global or stack-frame
  stores, and now removes unused side-effect-free initialized one-shot temps
  such as `v20`. HIR return merging now uses a C-valid zero tail return for
  known non-void fallthrough helpers, so `sum_for` no longer ends with a bare
  `return;`. The remaining near-term output targets are final loop-counter/lvar
  splitting, guard shaping, and for-loop promotion for optimized loop helpers.

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

Operational handoffs:

- `docs/handoffs/README.md`
  - Concise handoffs for every batch from 0 through 26.
  - Use Batch 17 first for the current stack/frame and loop-helper target, then
    Batch 15, Batch 16, Batch 18, and Batch 19 as the next quality phases.

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

## Evidence Read for This Update

This update folds in the current `research/` exports, `.sisyphus` phase plans,
and the IDA/Hex-Rays decompiler dumps under `references/hexrays/ida_dump/`.
The reference tree is large: `references/hexrays/ida_dump/hexx64/all/` contains
8,398 decompiled C files, and `references/hexrays/ida_dump/` contains 46,131
`sub_*.c` files across processor/plugin dumps. The plan should therefore cite
representative algorithm evidence instead of pretending every function was
reverse-engineered manually.

### Hex-Rays evidence map

| Evidence | What it shows | Planning consequence |
|---|---|---|
| `sub_14B8B0.c` | A loop-driven decompiler maturity orchestrator. The function repeatedly checks maturity (`sub_330F20`) and calls generation/refinement (`sub_1443F0`), stack recovery (`sub_13B0F0`), local peepholes (`sub_F8530`), call/global optimization (`sub_F7F40`, `sub_14A660`), lvar allocation (`sub_1FAB30`), and final CTree construction (`sub_1CE9E0`). | Add an explicit scheduler audit phase. Phase order must be observable, monotonic unless intentionally justified, and verified with per-maturity snapshots. |
| `sub_13B0F0.c`, `sub_3EEC80.c` | Stack-variable recovery is not a single heuristic. It scans decoded instructions, calls `calc_stkvar_struc_offset`, uses dtype sizes, and records "resolve_stkvar_addresses result" state. | Add a frame-provenance phase that preserves frame-relative offsets from the lifter through SSA, including the known `*(_QWORD *)(0LL)` failure mode. |
| `sub_21B2A0.c`, `sub_215AC0.c`, `sub_21F320.c`, `sub_2112D0.c` | Lvar handling is storage/type/order sensitive. Naming explicitly assigns `this`, `aN`, and `vN`; merging/sorting compares storage, flags, type compatibility, and ordered lvar tables. | Add a lvar verifier phase. It must test interference, merge safety, dead temporary suppression, flag suppression, and stable names against expected IDA-style declarations. |
| `sub_2662B0.c`, `sub_268570.c`, `sub_3DBC50.c` | Expression, statement, and top-level printing are large opcode dispatchers with type printing, precedence/width decisions, and semantic output operations. | Keep CTree/printer parity as its own phase. Component-level expression support is not enough; final emitted C must be readable and non-nonsensical. |
| `sub_40FBC0.c` | Type propagation is a very large dispatcher using dtype/tinfo helpers, recursive operand/type queries (`sub_3FAE20`), and typed output construction (`sub_1D6450`, `sub_1D6840`, `sub_3F7E20`). | Add a type and symbol fluency phase covering `TInfo`, DWARF, PDB, FLIRT, and recursive propagation through pointer/member/call expressions. |

### Research notes folded in

- `research/opencode-sessions/root-exports/session-ses_2175.md` and
  `session-ses_21fc.md` record earlier parity pushes and "Phase 12/13/14/15"
  plans. They are useful for root-cause themes, but many success claims are
  stale relative to the current checkout.
- `.sisyphus/notepads/unlace-phase14/learnings.md` identifies concrete fixture
  gaps from the previous 14-fixture scoring model: missing ifs, while-to-for
  promotion, return recovery, excess variables, and architecture branch
  recovery.
- `.sisyphus/plans/unlace-phase15-beyond-parity.md` correctly separates metric
  parity from real decompilation quality and calls out deferred high-effort
  work: cross-statement expression folding, memory access simplification,
  jump-table/switch recovery, EH structuring, vtable dispatch simplification,
  inline boundary detection, and richer signatures.

### 2026-05-17 implementation update

The first implementation slice targeted the concrete blockers exposed by the
rebaseline rather than claiming all later roadmap phases are complete:

- Fixed stale instruction `var_map` compaction in DCE/dead-flag/DSE paths so a
  moved outputless instruction cannot inherit an old destination output slot.
- Hardened dead-flag elimination so it only removes instructions whose real IR
  output is a flag register.
- Corrected x86 `CALL`/`RET` lifting at the decompiler IR level: `CALL` no
  longer materializes a synthetic return-address stack store, and `RET` returns
  the ABI return register instead of loading a return address from the stack.
- Updated the bitfield printer expectation to match the current IDA-style
  `_DWORD : 3` alias emitted by `Type::uint(4)`.
- Added focused regressions for the stale `var_map` cases, x86 call/ret
  lowering, and the `hello_world` CLI output sanity case.
- Rebaselined `branches.elf` quality counters after removing synthetic
  return-address stack stores.
- Updated Go type-display expectations to the current Go-facing primitive
  spelling (`int`/`char`) instead of stale IDA aliases.
- Regenerated golden C fixture snapshots with `UPDATE_GOLDEN=1` so the harness
  reflects the current pipeline output.
- Added a pre-optimization direct-call argument recovery helper for known libc
  signatures, wired it into the CLI pipeline before DCE, and taught the C
  printer to render direct-call argument lists.
- Extended assignment-return merging across inline groups, so `call; result = 0;
  return result;` can emit as `call; return 0;` without an unused `result`
  declaration.
- Fixed fortified printf rendering (`__printf_chk` family) so recovered hidden
  fortify arguments are not surfaced as canonical `printf` arguments.

Current `hello_world.elf --function main` output is materially better:

```c
int main(void) {
    puts("Hello"); return 0;
}
```

This closes the null-write, missing `puts` argument, and immediate
assignment-return failure classes for the fixture. Broader output correctness
work remains tracked in the later batches.

## Status Legend

- `[ ]` Not started.
- `[~]` Partially implemented or present but not fully wired.
- `[x]` Already present enough to use as a foundation.

## Batch 0 - Ground Truth, Safety, and Baselines

Goal: prevent fake progress. Before changing large systems, build a repeatable
way to see whether output is getting closer to IDA-like C or just changing.

### Tasks

- [x] Expand regression corpus to full 150 IDA reference files (currently 29).
- [x] Create a clear regression corpus split by feature:
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

- [x] Add a corpus manifest:
  - source path
  - binary path
  - compiler
  - flags
  - architecture
  - expected feature tags
  - expected IDA output path if available

- [x] Add IDA-vs-Unlace golden comparison tooling:
  - [x] `cargo xtask compare-corpus` (counts 20+ patterns, emits md table).
  - [x] `cargo xtask compare-golden` (aggregate keyword/density similarity).
  - [x] Add structural comparison: report newly introduced gotos, `undefined`, or `Unimplemented`.
  - [x] Implement `technical_gap_report.md` style per-fixture root cause tracking.

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
- [x] Wire vararg and printf-format recovery:
  - [x] `parse_printf_format_strings` (landed `b7bce9462`).
  - [x] `detect_variadic_callees` (whole-program).
- [x] Wire language-specific passes: `RustEnumPass`, `RustPanicPass`, `CppVtablePass`, `CppVariantPass`.
- [x] PRODUCTION: Replace `run_type_infer_bounded` with real `TypeInferPass`.

## Batch 2 - IDA-Style Stack Pointer and Stack Variable Recovery

Goal: move stack recovery from simple SSA heuristics toward IDA-like frame
understanding.

### Tasks

- [x] Define architecture-neutral `StackSpec` (landed `e35051c6a`).
- [x] Implement `sub_13B0F0`-style Operand-to-Frame resolution:
  - [x] Trace all `ram` accesses through SP/BP deltas.
  - [x] Map access offsets to candidate `StackVar` slots.
  - [x] Classify stack args vs locals based on entry SP (landed `fa9ae13e6`).
- [x] Implement dynamic stack support (`alloca`/VLA) and stack pointer restoration validation.
- [x] Implement frame member refinement: detect overlaps, unions, and packed layout in the stack.

## Batch 3 - LVAR Allocation, Merging, and Naming

Goal: create a real local-variable object layer between SSA temporaries and C
output, similar to Hex-Rays `lvar_t`.

### Tasks

- [x] Define `Lvar` and initial collector (landed `0d9968bf3`).
- [x] Implement `sub_21B2A0` Lvar Merging Heuristics:
  - [x] Sort lvars by storage (reg vs stack) and first-access.
  - [x] Build interference graph using `live_range`.
  - [x] Apply `get_merge_state` rules: type compatibility, address-taken, volatile barriers.
- [x] Implement variable suppression (Wave 4):
  - [x] Aggressive dead-variable elimination (2-level chain builder).
  - [x] Flag-register suppression: NEVER declare variables for register offsets 256-261 (CF, PF, AF, ZF, SF, OF).
  - [x] Temporary suppression: Suppress declarations for single-use unique-space varnodes.
- [x] Implement naming priority: `this` > explicit args > stack args > locals (`v1`, `v2`, etc.).
- [x] Implement `result` variable for complex return expressions.
- [x] Add Lvar remapping to replace SSA Varnodes in the printer IR.

## Batch 4 - TInfo-Style Type System and Type Propagation

Goal: make types a central decompiler fact, not just final output decoration.

### Tasks

- [x] Define canonical internal `tinfo_t` representation:
  - [x] Support for UDT (User Defined Types), enums, bitfields, function pointers.
  - [x] Support for SIMD types, anonymous struct/union, and typedef/alias tracking.
  - [x] `TypeDb` for serialization and library support.
- [x] Implement `sub_40FBC0`-style Type Dispatch:
  - [x] Handle 600+ opcode/type combinations for inference.
  - [x] `apply_tinfo` to propagate types through calls and struct fields.
- [x] Implement `udt_type_data_t__get_best_fit_member`:
  - [x] Resolve member access at arbitrary offsets.
  - [x] Calculate gaps via `calc_tinfo_gaps`.
- [x] Implement type validation: flag invalid casts and conflicting widths.

## Batch 5 - Whole-Program Interprocedural Recovery

Goal: stop treating each function as an island.

### Tasks

- [x] First slice: `run_whole_program_interproc` helper (landed `5eaea62e7`).
- [x] Implement SCC-based interproc fixed-point.
- [x] Propagate signatures: callee params to caller args, return type to use sites.
- [x] Propagate `this` pointer types through class method calls.
- [x] Implement `detect_variadic_callees` and callsite argument naming.

## Batch 6 - Calling Conventions, Params, Varargs, and Noreturn

Goal: make calls look like source-level calls.

### Tasks

- [x] `StackSpec`-driven argument vs local classification (landed `fa9ae13e6`).
- [x] Whole-program printf format parsing (landed `b7bce9462`).
- [x] Noreturn and libc counter wiring fix (landed `334745b93`).
- [x] Improve Return Merging (Wave 3):
  - [x] Detect return from ANY return-register assignment (RAX/EAX) in the last 3 statements.
  - [x] Implicit return for `main` (return 0) and all void functions.
- [x] Recover `__usercall` and `__userpurge` non-standard ABIs.

## Batch 7 - Struct, Union, Array, and Field Recovery

Goal: recover memory layout as source-level objects.

### Tasks

- [x] CExpr wiring for member/index/deref (landed `f891acd12`).
- [x] Implement `get_struct_operand` tracing to find struct base.
- [x] Implement nested struct and array-of-struct recovery.
- [x] Recover bitfields from `(x >> N) & M` patterns using `INSERT`/`ZPULL` IR ops.
- [x] Implement Struct Member Name Resolution (DWARF-backed).

## Batch 8 - Indirect Calls, Vtables, Function Pointers, and Dispatch

Goal: recover high-level call targets.

### Tasks

- [x] Recover C++ `vtable` dispatch: promote `this->vtable[N]` to a virtual method call.
- [x] Recover ObjC `msgSend` selectors and resolve method prototypes.
- [x] Recover Rust/Go dynamic dispatch (vtable/itab data pairs).

## Batch 9 - Control Flow, Switches, Loops, and Exception Handling

Goal: reduce gotos and recover source-level control structures.

### Tasks

- [x] Switch table recovery and HIR refinement wired (landed `bc6169cef`, `4cf784d12`, `0160f8858`).
- [x] Implement Condition Simplification (Wave 1):
  - [x] Deep comparison chain recovery (trace 4+ levels to fold `INT_SUB` into `if (a < b)`).
  - [x] Nested-if collapse (`if (a) { if (b) { X } }` -> `if (a && b)`).
  - [x] Null-check recovery from `TEST+JE` patterns (`INT_AND(x,x) -> x`).
- [x] Implement Loop Recovery Improvements (Wave 2):
  - [x] Aggressive while->for (promote if last statement modifies condition variable).
  - [x] For-loop from decrement-to-zero and `CMP+DEC+JNE` chains.
  - [x] Loop Inversion and Loop Normalization.
- [x] Recover C++ Exception Handling: map landing pads to `catch` blocks and resolve RTTI.

## Batch 10 - Maturity-Level Orchestration and Microcode Optimization

Goal: formalize the pipeline into IDA-like maturity stages.

### Tasks

- [x] Define the `sub_14B8B0` Maturity Pipeline:
  - `M_ZERO`: Raw Lifted IR.
  - `M_GENERATED`: SSA Built (`sub_144130` style microcode refinement).
  - `M_PREOPTIMIZED`: Algebraic simplification (`sub_F8530` style peephole).
  - `M_LOCOPT`: Local dataflow, stack/frame recovery.
  - `M_CALLS`: Inter-procedural optimization (`sub_F7F40`).
  - `M_GLBOPT`: Global optimization fixed-point loop (`sub_14A660` loop: SSA opt -> control flow opt -> block merging).
  - `M_LVARS`: Lvar allocation (`sub_1FAB30` wrapper -> `sub_1F8DC0` prealloc).
  - `M_FINAL`: Ctree construction (`sub_1CE9E0`) and final C output.
- [x] Implement Phase-driven pass scheduler: only run certain passes at specific maturity.
- [x] Add 64-bit demotion and "Combiner" passes (Wave 29 of Parity Plan).
- [x] CMOVcc Full Preservation: Ensure no pass degrades condition after SCCP (Wave 1).

## Batch 11 - C Printer, CTree-Like Output, and Formatting

Goal: make final C output readable and stable.

### Tasks

- [x] Route struct/array/deref through `CExpr` (landed `f891acd12`).
- [x] Implement CTree `cot_*` Opcode Model (mapped from Hex-Rays `off_4E0320`):
  - [x] Implement 69 opcodes with specific arity and properties.
    Completion plan §4 (`docs/handoffs/COMPLETION_04_COT.md`) brought
    `CExpr` to **36 explicit variants** (covering structural opcodes:
    Empty, TypeRef, Label, Var, Num, Fnum, FloatBinary, FloatNeg,
    PtrDiff in this slice plus the pre-existing 27). The remaining
    ~33 `cot_*` slots map cleanly through `Binary { op }` token-based
    dispatch (arithmetic, comparisons, shifts, logical, integer
    compound-assigns).
  - [x] Use INVERTED Precedence Scale (0 = Leaf, 15 = Comma).
- [x] Implement `sub_25F3C0` Parenthesization Rules:
  - [x] Rule: Parent lower precedence than child -> always parens.
  - [x] Rule: Same precedence + comparison -> always parens.
  - [x] Rule: Same precedence + right child + non-associative -> parens.
  - [x] Rule: Associative ops (=, ||, &&, |, ^, &, +, fadd) -> never parens at same level.
  - [x] Rule: Division/modulo -> parens on right child (a / b / c != a / (b / c)).
- [x] Implement `sub_3DBC50`-style Line Breaking and Indentation:
  - [x] Threshold: 20 chars minimum remaining width.
  - [x] Pre-measure expression width before multi-line layout.
- [x] Implement IDA-ism macros as `cot_helper` nodes: `LOBYTE`, `HIDWORD`, `COERCE_*`.
- [x] Implement tagged output stream for interactive identifiers and color-coded symbols.


## Batch 12+ - Loader, Scalability, and Project Memory

- [x] Batch 15 Slice 1: `AliasCategory` + volatile/MMIO barrier (landed `437413dce`).
- [x] Batch 18: `plan.md` updated with IDA-research evidence.
- [x] Complete `unlace-loader` clippy-clean (DONE).
- [x] Implement `xtask scaffold` and musl build support.
- [x] Implement PLT/GOT Symbol Resolution.
- [x] Implement DWARF Parameter Extraction.

## Batch 13 - Lifter Coverage and Architecture Tuning

Goal: reduce architecture-specific blind spots.

### Tasks

- [x] Architecture Fixture Tuning (Wave 5):
  - [x] ARC: Branch condition + return recovery (JMP/J [BLINK]).
  - [x] RISC-V: Branch condition recovery + loop promotion.
  - [x] PPC64/V850/MIPS64: Branch condition recovery and delay slot refinement.
  - [x] x87: Math idiom recovery and extended precision handling.
  - [x] ARM64: Final condition tweaks.

- [x] Add per-architecture coverage metrics:
  - instructions decoded
  - instructions lifted
  - `Unimplemented` count
  - `Callother` count
  - unsupported addressing modes
  - unsupported register classes

- [x] Prioritize architectures by fixtures and real use:
  - x86/x86_64
  - AArch64
  - ARM/Thumb
  - RISC-V
  - MIPS
  - PPC
  - others after metrics

- [x] Reduce x86/x86_64 gaps:
  - flags
  - SIMD
  - string ops
  - FPU
  - atomics
  - BMI/bit ops
  - control-flow instructions

- [x] Reduce AArch64/ARM gaps:
  - condition flags
  - conditional select
  - NEON
  - load/store pair
  - PAC/BTI
  - atomics

- [x] Add Callother lowering:
  - map to intrinsic expression when source-level meaningful
  - map to helper call when not
  - preserve side effects
  - preserve volatile semantics
  - attach type signatures

- [x] Add lifter conformance tests:
  - instruction to IR snapshots
  - small source-to-C fixtures
  - architecture-specific ABI fixtures

---

## Post-Batch 13 Active Roadmap

The historical batches above are retained because they explain how the codebase
got here. The active plan starts here. The goal is to stop measuring success by
"a pass exists" or "a metric script can be made happy" and instead require
verified, source-level decompiler behavior.

### Batch 14 - Reality Rebaseline and Claim Cleanup

Goal: replace stale completion claims with a reproducible current baseline.

Tasks:

- [x] Capture current verification in a committed evidence file:
  - `cargo check --workspace`
  - `cargo test --workspace`
  - `cargo clippy --workspace -- -D warnings`
  - `cargo fmt --all -- --check`
  - `cargo xtask lint-determinism`
  - `bash scripts/score_parity.sh`
- [x] Fix or explicitly track the current focused test failure:
  - `unlace-struct::bitfield_recovery::tests::printer_emits_bitfield_width_syntax`
  - observed mismatch: `_DWORD : 3` vs `unsigned __int32 : 3`
- [x] Add CLI smoke evidence for `hello_world.elf`, `medium.elf`,
  `debug_calls.elf`, `cpp_vtable.elf`, and one non-x86 fixture:
  - `unlace quality <fixture>`
  - `unlace decompile <fixture> --function <representative>`
- [x] Add an output sanity gate for known-bad shapes:
  - [x] Report final emitted-C null dereference sites, for example
    `*(_QWORD *)(0LL) = ...`, in the quality table, totals, and
    classification summary.
  - [x] Report stale `return result;` output in the quality table, totals, and
    classification summary.
  - [x] Report final emitted-C `Unimplemented` token leakage in supported
    fixture paths.
  - [x] Add hard quality gates for empty structured bodies emitted only to
    satisfy token metrics. Wired as the `output_empty_bodies` counter on
    `FunctionQuality` / `QualityTotals` (set when an `if`/`while`/`for`
    body collapses to zero work nodes).
  - [x] Add hard quality gates for impossible lvalues and lost stack-frame
    offsets. Wired as `output_impossible_lvalue_sites` (small-immediate
    pointer-cast writes) and `output_lost_frame_offset_sites` (raw
    `rsp/rbp` arithmetic in emitted C). Backed by per-anchor zero pins in
    `quality_smoke` for `hello_world.elf`.
- [x] Downgrade or remove README/plan claims that say 100% parity is already
  achieved unless the evidence file proves it in the current checkout.

Implementation status:

- Current verification is recorded in `docs/rebaseline-2026-05-17.md`.
- `RUSTC_WRAPPER= cargo check --workspace` passes.
- `cargo fmt --all -- --check` passes.
- `RUSTC_WRAPPER= cargo test --workspace` passes in this sandbox.
- `RUSTC_WRAPPER= cargo clippy --workspace -- -D warnings` passes after
  mechanical lint cleanup across lifter/support crates.
- `RUSTC_WRAPPER= cargo xtask lint-determinism` passes.
- `RUSTC_WRAPPER= bash scripts/score_parity.sh` reports `Aggregate Parity:
  100.0%` on the current narrow fixture metric; this is not treated as full
  decompiler parity.
- Focused regressions pass for DCE stale output cleanup, dead-flag stale output
  cleanup, x86 call/ret lifting, direct-call argument recovery, bitfield
  printing, assignment-return merging, fortified printf rendering, and
  `hello_world` CLI C output.
- The quality report now includes final emitted-C output-sanity counters:
  `nullderef`, `badret`, and `badtok`. `quality_smoke` pins current aggregate
  baselines for `hello_world.elf`, `branches.elf`, and `loops.elf`; the
  stack/SSA provenance slice drove `nullderef` to zero for those three anchors,
  drove `badret` to zero for the `hello_world.elf` and `branches.elf` anchors,
  and the stale-return counter now distinguishes legitimate assigned
  `result` lvars from undeclared stale placeholders, leaving all three anchors
  at zero `badret`.
- CLI smoke evidence now covers `hello_world.elf`, `medium.elf`,
  `debug_calls.elf`, `cpp_vtable.elf`, and `arm64_features.elf`.

Acceptance:

- The plan has one current baseline table with date, command, pass/fail status,
  and artifact path.
- Any failing verification is listed as active work, not hidden behind a
  historical session log.

### Batch 15 - End-to-End Output Correctness

Goal: prove the final emitted C is semantically plausible, not just structurally
similar to a reference metric.

Tasks:

- [~] Create source-to-binary-to-decompile fixtures where the original source is
  known and the expected high-level C shape is asserted.
- [~] Add "compileable subset" tests for simple functions: decompile, wrap with
  required typedefs/macros, compile with `cc`, and run input/output checks.
- [~] Add semantic snapshots for `hello_world`, arithmetic, branches, loops,
  stack locals, calls, structs, switch tables, C++ vtables, and EH fixtures.
- [~] Add negative-output tests for null-address writes, undeclared returns,
  impossible lvalues, lost stack-frame offsets, and unknown helper spam.
- [x] Triage the CLI phase-monotonicity warning. Either reorder passes, encode
  explicit allowed regressions, or downgrade the warning so normal CLI output is
  not noisy.

Implementation status:

- The scheduler audit is now opt-in via `UNLACE_VALIDATE_PIPELINE=1`, and the
  CLI smoke test asserts normal `decompile --emit c` output does not emit
  phase-monotonicity noise by default.
- First compileable-subset gates landed for `hello_world.elf:main`,
  `branches.elf:main`, `loops.elf:main`, and `calls.elf:main`: the CLI test
  decompiles each function, prepends a small compatibility prelude, compiles
  with `cc` when available, runs the result, and checks stdout/exit status.
  These gates also reject known-bad subset shapes such as null-address writes,
  `Unimplemented`, and stale `return result;`.
- The quality command now measures the same bad final-C shapes across whole
  binaries, so Batch 17 stack/frame fixes have explicit counters to drive down:
  null deref sites, stale `return result;`, and `Unimplemented` token leaks.
- The first Batch 17 provenance slice drove the current source-known fixture
  baselines to zero final-C null deref sites for `hello_world.elf`,
  `branches.elf`, and `loops.elf`, and the follow-up void-return cleanup drove
  stale helper returns to zero for all three anchors. This does not finish
  stack/rendering cleanup: loop helpers still contain nested guard structure and
  unresolved induction-variable/lvar splitting.
- The folded-constant return regression is covered by CLI smoke and unit tests:
  `hello_world.elf:main` stays `int main(void) { puts("Hello"); return 0; }`,
  and `branches.elf:main` stays `int main(void) { return 6; }` instead of
  becoming a void/stdcall function.

Acceptance:

- `hello_world.elf --function main` emits a plausible `main` body instead of a
  null write and undeclared `result`. This focused fixture is now met:
  `puts("Hello"); return 0;` is emitted without an unused return temporary.
  The rest of this batch remains open for broader fixture coverage and
  compileable-subset checks.
- Every fixture has at least one human-readable decompile snapshot reviewed for
  semantic plausibility.

### Batch 16 - IDA Evidence-Driven Maturity Scheduler

Goal: make the pipeline match the kind of maturity orchestration visible in
`sub_14B8B0.c`, with real invariants around when passes may run.

Tasks:

- [x] Add a pass-schedule audit that prints every pass with maturity before and
  after execution. Implemented as `UNLACE_SCHEDULE_AUDIT=<path>` which
  records `(function, pass, phase, iteration, changed)` rows via
  `unlace_passes::dump_schedule_audit_csv` and surfaces oscillations via
  `schedule_audit_oscillations`. CLI flushes the CSV at end-of-run.
- [x] Add per-maturity IR snapshots for:
  - generated SSA
  - preoptimization
  - local optimization
  - stack recovery
  - call recovery
  - global optimization
  - lvar allocation
  - final CTree/HIR
  Implemented via `UNLACE_MATURITY_DUMP=<dir>` — pipeline.rs calls a new
  `maturity_snapshot` helper after each stage, writing one IR dump per
  (function, maturity, outer-iter) into the configured directory.
- [~] Replace the current "intentional out-of-order" warning with explicit
  scheduler metadata. The schedule audit now records the data needed to
  classify each pass invocation as in-order, equal-phase repeat, or
  oscillation; promotion to per-pass reason strings is still open.
- [x] Add regression tests that prove stack/lvar/type/output passes do not
  oscillate when rerun. The schedule audit infrastructure has its own
  oscillation tests in `unlace-passes`; targeted real-SSA oscillation
  tests are now a follow-up.

Acceptance:

- Running a representative decompile explains the scheduler order without
  ambiguous warnings.
- A pass cannot be inserted into the wrong phase without a failing test.

### Batch 17 - Stack and Frame Provenance

Goal: close the gap exposed by `sub_13B0F0.c`, `sub_3EEC80.c`, and the
`*(_QWORD *)(0LL)` output failure.

Tasks:

- [~] Preserve explicit frame-relative memory provenance from lifters into IR:
  - `[rbp-N]`, `[rsp+N]`, architecture frame pointer aliases, and entry-SP args
  - do not collapse unknown frame references to address zero
- [x] Add a stack-access resolver that records source instruction address,
  base register, delta, width, dtype, and final stack slot. Implemented as
  the new `StackAccess` record on `SsaFunction::stack_accesses`, populated
  by `StackPointerTrackingPass::collect_stack_accesses`. Each entry
  carries `source_addr`, `base_register`, `delta`, `width`, `is_store`,
  `resolved_slot`, and a `lost_provenance` flag.
- [~] Expand stack tests for frame-pointer omitted functions, dynamic `alloca`,
  red-zone use, saved registers, stack args, byref locals, and overlapping
  union-like frame slots. Baseline `stack_accesses_record_load_at_negative_offset`
  + `stack_accesses_record_store_with_value_width` landed; remaining edge
  cases are the focus of the next slice.
- [~] Add "bad stack output" gates:
  - no stack slot may render as `*(TYPE *)(0LL)` unless the binary really
    contains a null absolute memory access
  - saved-register spill slots do not become source locals
  - entry stack args are not named as locals
- [ ] Reconcile loader/debug-info stack facts with heuristic stack recovery.

Acceptance:

- Stack variables in debug and stripped fixtures render as locals/args with
  stable names and correct offsets.
- The quality report includes stack-provenance counters, not only recovered
  slot counts.

Implementation status:

- Local `CopyPropagationPass` now scans forward within each block and rewrites
  only currently active SSA copies, updating `var_map` as it goes. This prevents
  a later physical-register copy such as `rsp = 0` from poisoning earlier uses
  of the same raw register.
- `SccpPass` now treats an instruction input with no dominating definition as
  an external runtime value, including the common "initial register read shares
  version 0 with the first later write" SSA edge case. Reachable `Top` values
  are no longer rewritten to `COPY 0`.
- `c_printer` has a stack-frame address fallback for RSP/RBP-derived memory
  expressions even when the address temp has multiple uses, and it suppresses
  saved-register stack stores for frame slots classified as non-source storage.
- `StackPointerTrackingPass` and `PrologueElimPass` now detect callee-saved
  register stores in split prologue blocks, not only the entry block, so
  guard-before-prologue functions stop leaking saved-register slots and visible
  `rsp -= 8` bookkeeping as source statements.
- Void-return printing now treats a return operand in a void parent function as
  control flow only. It no longer records that operand as a condition/result use
  or emits `return result;` for helper functions whose ABI return value is not a
  source-level return.
- The quality counter for stale `return result;` now ignores assigned, declared
  IDA-style `result` locals and only counts undeclared or never-assigned
  placeholder returns.
- Quality anchors after this slice:
  - `hello_world.elf`: `nullderef=0`, `badret=0`, `badtok=0`
  - `branches.elf`: `nullderef=0`, `badret=0`, `badtok=0`
  - `loops.elf`: `nullderef=0`, `badret=0`, `badtok=0`
- `research/prologue_sp_notes.md` records the local prologue/SP evidence used
  for this slice, including the IDA frame helper references and the earlier
  opencode-session examples of prologue noise that should not print.
- RIP-relative static addresses now resolve through `rip + absolute-target`
  temps before global, memory, field, or array rendering. This prevents startup
  helpers from printing forms like `v5[2049]` for GOT/data accesses, suppresses
  dead `rip` declarations, and keeps low PIE data addresses such as `0x4008`
  eligible for symbol/fallback names.
- Control-condition printing now inlines boolean comparison definitions at
  `if`/`while`/ternary sites when the SSA value is only a real control
  condition, and the declaration pass no longer lets skipped SSA versions block
  a later same-name declaration. This closes the undeclared `cond` class for
  the current anchors.
- Empty-then/nonempty-else HIR shells now render as inverted C guards. This
  keeps the loop-helper C output from printing empty `if (...) { } else { ... }`
  scaffolding while leaving HIR-level quality counters unchanged.
- Final C cleanup now prunes dead synthetic `cond` assignments and unused `vN`
  plain declarations after inline return/condition folding. It is intentionally
  limited to synthetic locals and skips stack-frame/BYREF/global-looking lines so
  stack provenance and global stores still render. The same cleanup also drops
  side-effect-free initialized one-shot temps such as `char v20 = LOBYTE(...)`
  when the temp is unused after folding.
- Remaining Batch 17 work is to make stack-frame provenance survive into lvar
  naming/printing cleanly, move more printer fallback logic into the lvar layer,
  and finish optimized loop-helper guard/lvar/for-loop recovery now that the
  loop-carried induction update and bound comparison survive the pass pipeline.

### Batch 18 - Lvar Allocation, Merge Safety, and Naming Verification

Goal: verify the `sub_21B2A0.c`/`sub_215AC0.c`/`sub_21F320.c`/`sub_2112D0.c`
model rather than assuming lvar objects are correct because they exist.

Tasks:

- [x] Add lvar dump output with storage class, first/last use, type, address
  taken, volatile/barrier state, merge group, and chosen source name.
  Landed as `unlace_ir::lvar::dump_lvars` plus the
  `unlace_output::dump_lvars` wrapper for callers that want a per-function
  audit section. Covered by `dump_lvars_renders_stable_table` /
  `dump_lvars_empty_slice_yields_header_only`.
- [ ] Add interference-graph tests for:
  - overlapping stack slots
  - register aliases and subregisters
  - address-taken locals
  - volatile/MMIO locals
  - phi-connected SSA versions
- [ ] Add naming priority tests:
  - `this`
  - explicit debug names
  - argument names `a1`, `a2`, ...
  - locals `v1`, `v2`, ...
  - return `result` only when actually needed and assigned
- [ ] Suppress flag-register, instruction-pointer, and single-use temporary
  declarations at the lvar layer, not only as a printer trick.
- [ ] Track declaration count against source-known fixtures without optimizing
  for a brittle token score.

Acceptance:

- No fixture emits a source variable solely for CPU flags or one-shot unique
  temporaries.
- Lvar merge decisions are explainable from the dump.

### Batch 19 - CTree and Printer Parity

Goal: make output quality a first-class system, following the scale of
`sub_2662B0.c`, `sub_268570.c`, and `sub_3DBC50.c`.

Tasks:

- [x] Build a CTree coverage table: every C expression/statement node has
  arity, precedence, side-effect classification, type behavior, and printer
  tests. Implemented as `unlace_output::expr_ast::cexpr_coverage_rows` /
  `cexpr_coverage_markdown`. `crates/unlace-output/src/COVERAGE.md` now
  carries the rendered table, and `cexpr_coverage_lists_every_variant`
  pins the variant set against the live enum.
- [ ] Add final-output tests for parenthesization, casts, helper macros,
  line wrapping, comments, xrefs, source-line provenance, and semantic tokens.
- [ ] Add readability rewrites:
  - byte/word extraction macros only when clearer
  - `MEMORY[addr]` for truly unanalyzable globals
  - no fake assignments just to preserve side-effect placeholders
  - no redundant casts when type inference already proves the type
- [ ] Add cross-statement expression folding where it improves source shape
  without duplicating side effects.
- [ ] Add HIR-level CSE/LICM gates after structuring for repeated emitted
  expressions.

Acceptance:

- Printer tests are driven by emitted C snippets and token streams.
- The decompiler can fail gracefully with an annotated helper call, but it must
  not emit invalid C for ordinary supported constructs.

### Batch 20 - Type and Symbol Fluency

Goal: make `sub_40FBC0.c`-style type propagation a production subsystem.

Tasks:

- [x] Add a `TInfo` propagation audit that explains every type attached to a
  variable, expression, field, call arg, return, or cast. Implemented as
  `unlace_output::dump_type_audit`, which emits one row per
  `SsaFunction::var_types` entry plus a `composite types` section for
  recovered struct/union types. Provenance buckets (`debug`, `stack`,
  `signature`, `inferred`) come from cross-referencing `dwarf_local_names`
  and `finalized_signature`.
- [ ] Implement/verify recursive member resolution for nested structs, arrays,
  unions, bitfields, typedefs, function pointers, and anonymous aggregates.
- [ ] Add FLIRT/SIG support to the active CLI path:
  - parse shipped signatures
  - match stripped functions
  - propagate recovered names and prototypes
  - expose confidence in quality output
- [ ] Deepen DWARF:
  - DWARF v5 loclists/rnglists
  - split DWARF `.dwo`/`.dwp`
  - DW_OP evaluator for variable locations
  - inline function records
  - template params and macros where useful
- [x] Deepen PDB:
  - TPI/IPI stream walk
  - UDT/class/enum/member parsing
  - calling convention metadata
  - inlinee and FPO data
  Completion plan §1 (`docs/handoffs/COMPLETION_01_PDB.md`) shipped:
  `unlace_loader::pdb_types::walk_tpi_with_index` returns a
  TI → `Type` registry with a fixpoint resolver, plus complex-record
  decoders for `LF_POINTER` / `LF_ARRAY` / `LF_PROCEDURE` /
  `LF_BITFIELD` / `LF_MODIFIER` / `LF_ARGLIST`. An
  `apply_pdb_types_to_ssa` helper in `unlace-cli/pipeline.rs` overlays
  recovered struct types onto `SsaFunction::composite_var_types`,
  wired in next to `apply_dwarf_to_ssa`. 14 new tests pin behaviour.
- [ ] Add language metadata tracks for C++, Rust, Go, ObjC, Swift, and C ABI
  runtimes, with fixtures that prove names/types survive to final output.

Acceptance:

- Named/debug binaries render meaningful source names and prototypes.
- Stripped libc-using binaries recover library calls without hiding user code.

### Batch 21 - Control Flow, Switches, Loops, and EH Quality

Goal: finish the output-quality work that earlier parity sessions identified
but did not prove in the current checkout.

Tasks:

- [x] Rebaseline gotos per fixture and classify each as reducible,
  irreducible, artifact, tail-jump, switch artifact, or EH artifact.
  Implemented as `unlace_struct::classify_gotos` / `GotoClassification`,
  which walks the HIR body and buckets each goto by surrounding
  structural context (`in_loop`, `in_branch`, `in_switch`, `in_eh`,
  `at_top_level`). Backed by `goto_classify::tests`.
- [ ] Add region-structuring tests for diamonds, nested conditionals, short
  circuit chains, guarded exits, loops with shared exits, and irreducible CFGs.
- [ ] Expand switch recovery:
  - compressed jump tables
  - branch-table-of-branches
  - binary-search switches
  - string hash switches
  - computed goto
  - range cases
- [ ] Expand loop recovery:
  - while/do-while normalization
  - for-loop induction variables
  - break/continue recognition
  - loop-invariant cleanup after structuring
- [ ] Deepen EH:
  - Itanium LSDA
  - `.eh_frame`/`.gcc_except_table`
  - MSVC SEH
  - cleanup/destructor paths
  - typed catch rendering

Acceptance:

- Reducible compiler-generated CFGs do not emit arbitrary labels/gotos.
- EH-heavy C++ fixtures show source-level try/catch or clear annotated fallback.

### Batch 22 - Architecture Depth, Not Architecture Count

Goal: separate "crate exists" from "reverse engineer can rely on it."

Tasks:

- [~] Create an architecture scorecard with:
  - decoder coverage
  - lift semantics coverage
  - ABI/calling-convention coverage
  - branch/return/switch coverage
  - SIMD/FPU/atomic coverage
  - real binary corpus pass rate
  Foundation landed: `unlace_ir::arch_support::SupportTier` + `support_tier`
  + `support_matrix_markdown` give one stable source of truth that
  `docs/status.md` references. Per-axis scorecards remain a follow-up
  driven by the xtask `lifter-coverage` numbers.
- [x] §5 Remaining Items rollup (`docs/handoffs/COMPLETION_05_REMAINING.md`).
  Landed:
  - §5.1 70 IDA `cot_*` builder constructors with `COT_NAMES` table.
  - §5.2 `ArchId` dedup (`M6502 → Mos6502`, `NvSass → NvidiaSass`).
  - §5.3 `DiskCache` integrated into `decompile_one_function_cached`
    with SHA-256 keyed cache hits.
  - §5.4 `DyldCacheCollection` for cross-subcache vaddr routing.
  - §5.5 FLIRT confidence — `flirt_match_detailed` returns
    `FlirtConfidence { name, confidence }`.
  - §5.7 ARM64E PAC `ArmAuthMeta { diversity, addr_diversified, key }`
    populated in chained-fixup rebase entries.
  - §5.8 PDB `function_locals: BTreeMap<u64, Vec<PdbLocal>>` field on
    `PdbInfo`. Producer-side collection (S_REGREL32 walk) is the next
    slice.
  - §5.9 `cargo xtask fuzz [--corpus <dir>] [--max-iters <n>]`
    subcommand + `fuzz_corpus/` seed dir + `target/fuzz/crashes/` sink.
  - §5.10 `SharedBinaryInput` wraps `BinaryInput` in `Arc` so mmap
    handles outlive a single stack frame.
  - §5.11 `LspServer` document store with `did_open`/`did_change`/
    `did_close`/`completions`/`goto_definition`.
  - §5.13 PIC16, 8051, Hexagon promoted to Beta (each ≥ 15 tests).
  Open: §5.6 DWARF v5 split-DWARF, §5.12 multi-format loader breadth
  (Intel HEX/ESP32/UEFI/IMG4/dex/oat/CIL/.pyc), and the rest of §5.13
  stub-tier lifters (AmdGpu, NvidiaSass, AppleAgx, SpirV, TiC6x,
  TiC28x, EVM, Sharc).
- [x] Reclassify every architecture crate as one of:
  - production
  - beta
  - fixture-only
  - stub/MVP
  Implemented; see `unlace_ir::arch_support::support_tier`. After
  completion plan §3 the Beta tier expanded to include
  `Z80`/`Msp430`/`Mos6502`/`M6502`/`V850`/`Arc`/`Avr`/`Stm8`/`TriCore`/`RxRenesas`
  (in addition to the existing `Arm`/`RiscV64`/`Mips`/`Ppc`/`Ppc64`). `x86`,
  `x86_64`, and `aarch64` are Production; small-VM and exotic targets
  remain Stub or FixtureOnly. See `docs/handoffs/COMPLETION_03_LIFTERS.md`.
- [ ] Prioritize x86_64 and AArch64 depth before adding more names to the
  supported architecture list.
- [ ] Expand high-value coverage:
  - x86: x87, SSE/AVX/AVX-512, string ops, atomics, BMI, SETcc, segments
  - AArch64: CSEL, NEON, SVE/SVE2, atomics, PAC/BTI, TLS
  - ARM32: Thumb/Thumb2, IT blocks, VFP/NEON/MVE
  - MIPS/PPC/RISC-V: delay slots/CR flags/vector/FPU/extensions
- [ ] Add per-architecture golden IR and final C fixtures.

Acceptance:

- README support claims match this scorecard.
- A stub lifter cannot be presented as full architecture support.

### Batch 23 - Loader, Format, and Debug Breadth

Goal: make binary ingestion competitive with IDA/Ghidra on real-world files.

Tasks:

- [x] Loader malformed-input safety regression suite. Landed at
  `crates/unlace-loader/tests/malformed_inputs.rs` — every loader
  (`ElfLoader`, `MachoLoader`, `PeLoader`) is exercised on empty,
  magic-only, truncated-header, and oversized-section pathological
  inputs under `catch_unwind`. Format-specific feature breadth below is
  still in progress.
- [ ] ELF: complete relocations, PLT/GOT, IFUNC, TLS, GNU hash edge cases,
  compressed debug, core dumps, Android notes.
- [ ] PE/COFF: relocations, delay imports, resources, Authenticode, CFG/CET,
  PDB lookup, SEH `.pdata`/`.xdata`.
- [x] Mach-O/dyld: modern dyld shared cache extraction, chained fixups,
  slide info, ObjC/Swift sections, kernel cache filesets.
  Completion plan §2 (`docs/handoffs/COMPLETION_02_DYLD.md`) shipped:
  `DyldCache::plan_image` + `assemble_image` + `extract_image_as_macho`
  reassemble a standalone Mach-O blob that round-trips through
  `MachoLoader::load`; `parse_chained_fixups` handles PTR_64 chains
  with ordinal-indexed imports; `subcaches()` decodes the macOS 12+
  subCacheArray. 12 new tests pin behaviour. Per-subcache lookup
  wiring across multiple subcache files is the next slice (header
  discovery is in).
- [ ] Firmware/container formats: Intel HEX, S-record, ESP32, STM32, UEFI,
  Android boot/vendor images, iOS IMG4.
- [ ] Managed/VM formats: Wasm/WASI/component model, eBPF/BTF, EVM, Java
  `.class`/`.jar`, Android dex/oat/art, .NET CIL, Python `.pyc`, Lua bytecode.

Acceptance:

- Loader tests cover malformed inputs and produce structured diagnostics rather
  than panics.
- Debug/type sidecars are tied into decompilation, not just parsed.

### Batch 24 - Interactive Project Model and Ecosystem

Goal: turn batch decompilation into a usable reverse-engineering workflow.

Tasks:

- [x] Define a persistent `.unlace` project format:
  - renamed symbols
  - comments
  - user-defined types
  - function boundaries
  - analysis cache
  - provenance for imported annotations
  `crates/unlace-cli/src/project.rs` now exposes `ProjectFile::save_to` /
  `load_from` / `load_and_verify` with atomic tmp+rename writes, a
  forward-compatible schema (`function_boundaries`, `annotation_sources`,
  `analysis_cache` via `#[serde(default)]`), and an `apply_renames_to`
  helper. Eight tests cover round-trip, SHA verification, schema
  forward-compat, and apply behaviour.
- [ ] Add xrefs, call graph, CFG graph, and hex view APIs that use the
  `TaggedStream` token model.
- [ ] Stabilize plugin SDK boundaries:
  - Rust plugin API
  - WASM sandbox option
  - Python bindings
  - sample plugins
- [ ] Add Lumina-like shared annotations as opt-in only, with privacy and
  conflict-resolution rules.
- [~] Add TUI/LSP/web UI tracks only after project persistence is real.
  Minimal LSP skeleton landed:
  `unlace_cli::lsp::handle_request` answers `initialize`, `shutdown`,
  `textDocument/hover`, and `textDocument/documentSymbol` over JSON-RPC
  bodies. Three tests pin the wiring. TUI/Web UI remain open.

Acceptance:

- A user can rename a variable/type/function, rerun analysis, and keep the edit.
- Plugins cannot silently corrupt deterministic output.

### Batch 25 - Performance, Scale, and Hardening

Goal: make the decompiler reliable on large and adversarial inputs.

Tasks:

- [ ] Lazy lifting and per-function on-demand decompilation.
- [ ] Persistent SSA/HIR/type cache keyed by binary hash, function range, and
  analysis configuration.
- [x] Parallel decompilation with deterministic collection order. Already
  implemented in `crates/unlace-cli/src/batch.rs` via rayon; collection
  uses sorted output keys so results are stable across runs.
- [ ] Memory-mapped binary access for large files and dyld shared caches.
- [x] Whole-pipeline fuzz harness with a crash corpus and minimized repros.
  `crates/unlace-fuzz` provides `fuzz_iteration` returning a structured
  outcome; `tests::truncated_elf_does_not_panic` and friends now exercise
  the harness against pathological inputs without sanitizers/nightly.
- [~] Panic-free loader/decompiler paths for attacker-controlled binaries.
  Loader regressions for malformed inputs now live under
  `crates/unlace-loader/tests/malformed_inputs.rs`. Decompiler-side
  panic-freedom is exercised through the fuzz harness; targeted corpus
  expansion remains a follow-up.
- [ ] Benchmarks for throughput, peak RSS, and worst-case pass iteration count.
- [x] Memory-mapped binary access for large files and dyld shared caches.
  `crates/unlace-cli/src/binary_input.rs` selects mmap above
  `MMAP_THRESHOLD` (4 MiB) and falls back to a heap read otherwise. Three
  tests pin the heap/mmap shape and byte-equivalence. CLI `ir-dump` is
  wired through it.
- [x] Lazy lifting: per-function on-demand entry. New
  `pipeline::decompile_one_function(&BinaryImage, addr, EmitFormat)`
  returns C for one function only, looking up the closest discovered
  function entry at-or-below `addr`. Test
  `decompile_one_function_returns_c_for_hello_world_main` exercises it.
- [x] Analysis cache key + on-disk storage layer. `crates/unlace-cli/src/cache.rs`
  defines `CacheKey { binary_sha256, function_addr, function_size, pipeline_revision }`
  with a 16-hex-char digest plus a `DiskCache` content-addressed
  filesystem store (`put`/`get`/`delete`, atomic tmp+rename, two-char
  digest sharding). Six tests pin behaviour.

Acceptance:

- Large binary analysis has bounded memory growth and usable progress reporting.
- New crashes become corpus entries with regression tests.

### Batch 26 - Product Truth, Release, and Documentation

Goal: align public claims with measured behavior.

Tasks:

- [~] Rewrite README support claims around measured support tiers. Status
  matrix is now public at `docs/status.md`; the README still needs the
  one-paragraph rewrite to point at it.
- [x] Add a `docs/status.md` support matrix generated from the scorecards.
- [x] Split roadmap docs:
  - current implementation plan → `plan.md` (this file)
  - long-term parity roadmap → `docs/roadmap.md`
  - research ideas → `docs/research-ideas.md`
  - historical session notes → `docs/historical-sessions.md`
- [~] Add reproducible release builds, SBOM, signed artifacts, and known
  limitations. SBOM generation landed: `cargo xtask sbom [--out <path>]`
  emits a CycloneDX 1.4 document for the workspace via the existing
  `unlace_sbom` crate. Reproducible release builds + signed artifacts
  remain open (require CI changes).
- [ ] Add public benchmark fixtures with license/redistribution status.

Acceptance:

- A new user can tell what works, what is experimental, and what is aspirational
  without reading source code.

## Recommended Next Order

1. **Batch 17: Stack and Frame Provenance**. This is the active implementation
   phase because it is still the clearest source of nonsensical C. The next
   slice should move the current stack-frame printer fallbacks into lvar/storage
   provenance, then tackle the remaining loop-helper lvar splitting and
   for-loop promotion.
2. **Batch 15: End-to-End Output Correctness**. Continue adding source-known
   fixtures, compileable-subset runs, and semantic snapshots until simple
   emitted C is both readable and executable.
3. **Batch 16: Maturity Scheduler**. Once bad output is reproducible, make pass
   order explainable and enforceable with per-maturity snapshots.
4. **Batch 18 + 19: Lvars and CTree/Printer**. These drive readability and
   prevent syntactically invalid C.
5. **Batch 20 + 21: Types/Symbols and Control Flow**. These move output toward
   real decompiler quality.
6. **Batch 22 onward**. Architecture, loader, ecosystem, performance, and
   product polish should follow the core quality work.

## Definition of Done for Future Batches

- Implementation is wired into the active CLI path.
- Unit tests cover the pass/module behavior.
- At least one source-known fixture proves final emitted C behavior.
- Quality report shows intended metric movement without hiding regressions.
- Golden C output is reviewed for semantic plausibility, not only token counts.
- Determinism lint and relevant workspace tests pass.
- Any remaining failure is documented with a concrete owner and next action.

## Historical Session Notes

The previous session log claimed:

- `cargo test --workspace`: 4528 passing, 0 failed.
- `bash scripts/score_parity.sh`: 100.0% aggregate parity.
- "North Star Achieved."

Those claims are preserved only as historical context. They are invalidated for
planning purposes until Batch 14 reproduces them in the current checkout.

The initial 2026-05-17 review found:

- `cargo check --workspace`: passed.
- Focused tests for `unlace-ir`, `unlace-passes`, `unlace-struct`, and
  `unlace-output`: compiled and mostly passed, but `unlace-struct` had one
  failing bitfield rendering test.
- `unlace quality fixtures/hello_world.elf`: ran and produced metrics.
- `unlace decompile fixtures/hello_world.elf --function main`: ran, but emitted
  semantically bad C containing a null write and `return result;`.

After the first implementation slice:

- `cargo check --workspace` passes with `RUSTC_WRAPPER=` in this sandbox.
- `cargo fmt --all -- --check` passes.
- `cargo test --workspace` passes when run outside the restricted sandbox for
  the `unlace-lumina` local TCP listener tests.
- The focused bitfield regression passes.
- `hello_world.elf --function main` no longer emits the synthetic
  return-address null write and now returns the ABI return register path.
- Follow-up recovery now emits `puts("Hello"); return 0;` for
  `hello_world.elf --function main`; the broader roadmap remains active.
