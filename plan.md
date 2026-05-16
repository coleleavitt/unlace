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

Primary IDA/Hex-Rays evidence:

- `references/hexrays/ida_dump/hexx64/all/sub_14B8B0.c`
  - Core decompiler maturity pipeline.
- `references/hexrays/ida_dump/hexx64/all/sub_13B0F0.c`
  - Stack variable address resolution.
- `references/hexrays/ida_dump/hexx64/all/sub_3EEC80.c`
  - Instruction/operand/dtype stack offset detection.
- `references/hexrays/ida_dump/hexx64/all/sub_21B2A0.c`
  - Lvar allocation, sorting, remapping.
- `references/hexrays/ida_dump/hexx64/all/sub_215AC0.c`
  - Lvar comparator/interference ordering.
- `references/hexrays/ida_dump/hexx64/all/sub_21F320.c`
  - Stack frame and local layout.
- `references/hexrays/ida_dump/hexx64/all/sub_2112D0.c`
  - Lvar naming.
- `references/hexrays/ida_dump/hexx64/all/sub_2662B0.c`
  - Expression printing.
- `references/hexrays/ida_dump/hexx64/all/sub_268570.c`
  - Statement printing.
- `references/hexrays/ida_dump/hexx64/all/sub_3DBC50.c`
  - Top-level ctree printing.
- `references/hexrays/ida_dump/hexx64/all/sub_40FBC0.c`
  - Large helper/type/expression dispatcher.
- `references/hexrays/ida_dump/idallib/`
  - Type info, struct operand, print/format helpers, TIL-style support.

Primary session evidence:

- `research/opencode-sessions/INDEX.md`
- Relevant sessions around stack recovery: `0734`, `0735`, `0736`.
- Relevant sessions around IDA algorithm analysis: `0743`, `0744`.
- Relevant sessions around printer/output: `0759`.
- Relevant sessions around expression simplification: `0760`.
- Relevant sessions around type system: `0761`.
- Relevant sessions around control flow: `0762`.
- Relevant sessions around pass pipeline: `0767`.
- Relevant sessions around struct reconstruction: `0768`.
- Relevant sessions around lvar allocation: `0769`.

## Status Legend

- `[ ]` Not started.
- `[~]` Partially implemented or present but not fully wired.
- `[x]` Already present enough to use as a foundation.

## Batch 0 - Ground Truth, Safety, and Baselines

Goal: prevent fake progress. Before changing large systems, build a repeatable
way to see whether output is getting closer to IDA-like C or just changing.

### Tasks

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
  - normalize whitespace
  - normalize local variable names where needed
  - compare structure, not only text (partial — `cargo xtask
    compare-golden` reports aggregate keyword/density similarity;
    `cargo xtask compare-corpus` reports per-pattern IDA-vs-Unlace
    coverage table to stdout + `target/corpus-compare.md`)
  - report changed functions
  - report missing constructs
  - report newly introduced gotos
  - report newly introduced `undefined`, `Unimplemented`, or raw temporaries

- [x] Add feature counters to the decompiler output:
  - number of unresolved `Callother` (landed)
  - number of `Unimplemented` ops (landed)
  - number of recovered stack vars (landed)
  - number of frame holes (landed)
  - number of struct fields (landed)
  - number of switch statements (landed)
  - number of indirect calls resolved (landed)
  - number of labels/gotos emitted (landed)
  - number of unknown types (landed)
  - Batch 0+ extension: if/while/for/do-while loops, ternary, break/continue,
    try-catch/try-finally, tail calls, inferred params, libc-annotated calls,
    noreturn funcs, vtable/objc/crypto/coroutine sites, SEH regions (landed)

- [x] Add a quality report command (`unlace quality <binary>`):
  - one binary (landed)
  - JSON output for automation (`--format json`, landed)
  - Markdown output for review (`--format md`, landed)
  - one directory of binaries (deferred — single-binary works today)
  - whole corpus (deferred)

- [x] Add regression gates:
  - do not allow panic on malformed binaries (`tests/quality_smoke.rs`,
    landed)
  - do not allow all output to become worse due to one pass (pinned
    baselines for hello_world/branches/loops, landed)
  - track performance changes by pass (deferred — Batch 17)
  - track pass iteration counts (`PassesReport.outer_report`, landed)

### Likely Files

- `crates/unlace-cli/src/main.rs`
- `crates/unlace-cli/src/pipeline.rs`
- `crates/unlace-output/src/`
- `tests/`
- `fixtures/`
- `research/`

### Acceptance Checks

- [x] `cargo test --workspace` passes.
- [x] A single command can produce a per-function quality report.
- [x] The report distinguishes "not implemented", "not wired", and
  "implemented but wrong".

**Session log**: Landed commit `137b743f7` (Batch 0 core) + `84c38e68d`
(Batch 0+ extended counters).

## Batch 1 - Wire Existing Passes Into the Real Pipeline

Goal: get the value from code that already exists before building new systems.

### Current Finding

The CLI pipeline already runs many core passes, but several implemented passes
are exported or tested without being part of normal decompilation. This makes
the project look more complete in source than it is in actual output.

### Tasks

- [x] Audit all exported passes in `crates/unlace-passes/src/lib.rs` — 15
  exported but unwired, of which 13 were wired this session.
- [x] Classify each pass — done implicitly during the wiring (commit message
  on `d4499f068` documents placement rationale per pass).

- [x] Wire `StackPointerTrackingPass` before stack/frame recovery (landed).
- [x] Feed SP delta results into:
  - stack var recovery (landed via Batch 2 arch-neutral StackSpec)
  - stack frame recovery (landed)
  - frame hole detection (`StackPointerTrackingPass` populates
    `ssa.stack_holes`, landed)
  - dynamic stack detection (`dynamic_sp` flag, landed)
  - prologue/epilogue cleanup (`PrologueElimPass` already wired)

- [x] Wire `IndirectCallResolvePass` before output and before language-specific
  devirtualization (landed; placed post-outer-loop one-shot).
- [x] Wire `OpTypeBindingPass` after type inference and before struct recovery
  output decisions (landed; placed post-outer-loop).
- [~] Wire vararg and printf-format recovery:
  - `detect_variadic_callees` (deferred — whole-program, needs Batch 6
    follow-up; not blocking)
  - `parse_printf_format_strings` (landed `b7bce9462` — per-function
    pre-pass inside `lift_and_run_passes` + whole-program safety net
    `run_whole_program_printf_parse` driven from the interproc batch
    phase; populates `SsaFunction::variadic_call_types` end-to-end and
    handles PIE base-relative loads)
  - callsite argument naming/type hints (deferred)

- [x] Wire noreturn detection before CFG structuring (landed as one-shot
  pre-outer-loop with PLT/import resolver):
  - remove false fallthroughs after noreturn calls (landed)
  - improve return merging (downstream benefit, landed)
  - improve unreachable label cleanup (downstream benefit, landed)

- [x] Wire language-specific passes behind detection gates:
  - Rust enum recovery (`RustEnumPass`, landed)
  - Rust panic recovery (`RustPanicPass` with resolver, landed)
  - ObjC dispatch recovery (deferred — needs `msgsend_addrs` plumbing
    from loader; documented in commit)
  - C++ vtable/variant recovery (`CppVtablePass` was already wired;
    `CppVariantPass` landed)
  - Go interface/defer recovery (`detect_go_defer` already wired)

- [x] Replace or augment `run_type_infer_bounded` with the real `TypeInferPass`
  (landed `439c0903c` — production `unlace_passes::type_infer::TypeInferPass`
  now runs inside the outer fixed-point with per-function deadline
  `config.timeout` and `seed_from_composites` for pointer-typed struct
  fields; CLI stub removed, only the frozen benchmark baseline keeps
  the old helper).

- [x] Ensure each newly wired pass has:
  - a pass-level feature flag if risky (data-driven gates documented per
    pass in `d4499f068`)
  - a focused regression test (`quality_smoke.rs` baseline pins)
  - a corpus metric (Batch 0 quality counters)
  - before/after output evidence (medium.elf -87 IR insns documented)

### Likely Files

- `crates/unlace-cli/src/pipeline.rs`
- `crates/unlace-passes/src/lib.rs`
- `crates/unlace-passes/src/stack_pointer_tracking.rs`
- `crates/unlace-passes/src/indirect_call_resolve.rs`
- `crates/unlace-passes/src/op_type_binding.rs`
- `crates/unlace-passes/src/vararg_detect.rs`
- `crates/unlace-passes/src/noreturn.rs`

### Acceptance Checks

- [x] Existing tests still pass (3057 passing, parity 100% sustained).
- [x] At least one fixture proves each newly wired pass affects real output
  (`medium.elf` IR insns 2035 → 1948, `void main(void)` →
  `void __noreturn main(void)`, etc.).
- [x] No pass silently runs on unsupported architectures (data-driven
  gates documented in commit message; arch-neutral StackSpec landed in
  Batch 2).
- [x] The quality report shows fewer unresolved calls, unknown stack slots,
  unknown types, or gotos on target fixtures.

**Session log**: Landed commit `d4499f068` (13 of 15 passes wired,
performance regression caught + fixed mid-batch by moving 4 passes from
outer-loop to post-loop).

## Batch 2 - IDA-Style Stack Pointer and Stack Variable Recovery

Goal: move stack recovery from simple SSA heuristics toward IDA-like frame
understanding.

### Current Finding

Current stack recovery handles many `RSP/RBP + const` patterns and has useful
snapshots, but IDA uses instruction decoding, operand dtypes, stack pointer
deltas, frame members, holes, and repeated maturity-stage stack resolution.

### Tasks

- [x] Define an architecture-neutral stack model (`crates/unlace-ir/src/stack.rs`,
  `StackSpec`):
  - stack pointer register (landed)
  - frame/base pointer register (landed)
  - stack growth direction (landed, `StackGrowth { Down, Up }`)
  - alignment (deferred — `ptr_size` covers basic alignment; deeper
    work for shadow-space, red-zone deferred)
  - link register if applicable (deferred)
  - call frame convention (deferred — covered partially by `calling_convention`)
  - red zone (deferred)
  - shadow space (deferred — Windows x64)
  - argument spill area (deferred)
  - return address slot (deferred)

- [x] Replace hard-coded x86 offsets with architecture metadata (landed; 3
  pass files migrated; non-x86 fixtures now show stack vars > 0).
- [ ] Extend SP tracking:
  - block entry SP delta
  - instruction-level SP delta
  - unknown/dynamic SP state
  - alloca/VLA detection
  - frame holes
  - stack pointer restoration validation

- [ ] Feed SP deltas into stack var recovery:
  - resolve stack addresses through SP state at instruction point
  - distinguish local slots from stack arguments
  - distinguish saved registers from locals
  - distinguish compiler spills from source locals where possible

- [ ] Add operand-aware stack access detection:
  - collect source instruction address
  - collect operand index
  - collect operand access kind
  - collect dtype/access size
  - preserve source architecture information

- [ ] Add frame member model:
  - offset
  - size
  - type
  - name
  - source observations
  - confidence
  - local/arg/saved-reg/temp classification

- [ ] Add overlap handling:
  - partial stores
  - byte/word access to wider slot
  - split variables
  - unions or reinterpretation
  - packed structs

- [ ] Add dynamic stack support:
  - alloca
  - VLAs
  - stack probes
  - variable indexed stack accesses
  - fallback names for unresolved dynamic slots

- [ ] Add stack recovery maturity reruns:
  - initial pre-optimization snapshot
  - post-copy-prop stack recovery
  - post-type-inference refinement
  - final lvar layout pass

- [ ] Add architecture fixtures:
  - x86_64 SysV frame pointer
  - x86_64 SysV no frame pointer
  - Windows x64 shadow space
  - x86 32-bit cdecl/stdcall
  - AArch64 frame pointer/link register
  - ARM Thumb stack frames
  - RISC-V stack frames

### Likely Files

- `crates/unlace-ir/src/ssa.rs`
- `crates/unlace-passes/src/stack_pointer_tracking.rs`
- `crates/unlace-passes/src/stack_vars.rs`
- `crates/unlace-passes/src/stack_frame_recovery.rs`
- `crates/unlace-lift/src/`
- `crates/unlace-cli/src/pipeline.rs`

### Acceptance Checks

- [ ] Frame-pointer-omitted functions recover stable locals.
- [ ] Windows x64 shadow space is not misnamed as locals.
- [ ] Saved registers are not emitted as user locals.
- [ ] alloca/VLA fixtures degrade gracefully.
- [ ] Stack var names and types improve after the second refinement pass.

## Batch 3 - LVAR Allocation, Merging, and Naming

Goal: create a real local-variable object layer between SSA temporaries and C
output, similar in spirit to Hex-Rays lvars.

### Current Finding

`VariableMergePass` performs useful liveness and coalescing, but IDA has a
dedicated lvar record model with merge state, arglocs, frame linkage, comparator
logic, remapping, naming, and type-aware allocation.

### Tasks

- [ ] Define `Lvar` or equivalent:
  - stable id
  - storage class
  - stack slot
  - register/argloc
  - live range
  - type
  - name
  - source confidence
  - flags
  - merge group
  - user name/type override support

- [ ] Build lvar candidates from:
  - stack frame members
  - SSA Unique temporaries
  - register values that survive expression folding
  - call parameters
  - return values
  - debug/DWARF/PDB locals

- [ ] Implement interference graph:
  - live range overlap
  - storage overlap
  - type incompatibility
  - address-taken barrier
  - volatile/MMIO barrier
  - call boundary barrier

- [ ] Implement lvar merge policy:
  - merge same storage when live ranges do not conflict
  - avoid merging across incompatible types
  - prefer source/debug names
  - prefer argument slots for params
  - prefer frame names for stack locals
  - preserve ABI argument locations

- [ ] Implement lvar ordering:
  - `this`
  - explicit args
  - stack args
  - named locals
  - compiler temporaries
  - spills
  - synthetic temps

- [ ] Implement naming:
  - `this`
  - `a1`, `a2`, etc for args when names absent
  - `v1`, `v2`, etc for locals
  - field-derived names where obvious
  - avoid name collisions
  - stable names across runs
  - no reuse for overlapping live ranges

- [ ] Add lvar remapping before output:
  - replace SSA varnodes with lvar references
  - preserve expression folding
  - preserve debug names
  - preserve stack field accesses

- [ ] Add lvar diagnostics:
  - why two candidates did not merge
  - why a name was chosen
  - why a variable stayed synthetic

### Likely Files

- `crates/unlace-ir/src/ssa.rs`
- `crates/unlace-passes/src/variable_merge.rs`
- `crates/unlace-passes/src/var_naming.rs`
- `crates/unlace-output/src/c_printer.rs`
- new `crates/unlace-passes/src/lvar_alloc.rs`

### Acceptance Checks

- [ ] Output has fewer raw SSA temporaries.
- [ ] Args are named before locals.
- [ ] Stack locals do not alias unrelated temps.
- [ ] Debug names survive lvar allocation.
- [ ] Golden fixtures remain stable across repeated runs.

## Batch 4 - TInfo-Style Type System and Type Propagation

Goal: make types a central decompiler fact, not just final output decoration.

### Current Finding

Unlace has primitive SSA types, richer output `Type`, and a constraint solver,
but it does not yet have an IDA-like `tinfo_t` lifecycle with type libraries,
apply/guess logic, best-fit members, rich pointer propagation, and validation.

### Tasks

- [ ] Define a canonical internal type representation:
  - void
  - bool
  - signed/unsigned ints with width
  - floats
  - pointers
  - arrays
  - structs
  - unions
  - enums
  - function types
  - varargs
  - bitfields
  - opaque/named typedefs
  - qualifiers
  - address spaces

- [ ] Bridge SSA primitive types and output `Type`:
  - no duplicate truth sources
  - explicit conversion rules
  - confidence levels
  - unknown vs conflicting vs intentionally opaque

- [ ] Add type source tracking:
  - ABI
  - debug info
  - symbols
  - TIL/library
  - call usage
  - memory access width
  - constants
  - arithmetic
  - casts
  - user hints

- [ ] Implement apply/guess type operations:
  - apply function prototype to callsite
  - apply struct type to pointer base
  - guess pointer from load/store
  - guess integer signedness from comparisons
  - guess array from indexed access
  - guess function pointer from indirect call

- [ ] Improve pointer propagation:
  - pointer base type
  - pointee type
  - field access propagation
  - array element propagation
  - pointer arithmetic scaling
  - char pointer/string recognition
  - void pointer fallback

- [ ] Add type validation:
  - invalid casts
  - impossible field access
  - conflicting widths
  - incompatible call signature
  - union fallback when conflict is real

- [ ] Add type library support:
  - libc common signatures
  - platform ABI types
  - Windows API signatures
  - Objective-C runtime signatures
  - Rust runtime/panic signatures
  - Go runtime signatures
  - user-provided type libraries

- [ ] Add serialization:
  - stable type ids
  - cacheable type database
  - export/import recovered types
  - attach type db to quality reports

- [ ] Integrate `TypeInferPass` with `TypeConstraintSolverPass`:
  - define pass order
  - define fixed-point condition
  - avoid oscillation
  - record changed facts
  - cap iterations with diagnostics

### Likely Files

- `crates/unlace-ir/src/types.rs`
- `crates/unlace-ir/src/ssa.rs`
- `crates/unlace-passes/src/type_infer.rs`
- `crates/unlace-passes/src/type_constraint_solver.rs`
- `crates/unlace-loader/src/`
- `crates/unlace-cli/src/pipeline.rs`
- new `crates/unlace-ir/src/type_db.rs`

### Acceptance Checks

- [ ] Known libc calls type their args and returns.
- [ ] Pointer fields print as `p->field` instead of raw offset math.
- [ ] Array indexing uses element scale.
- [ ] Function pointer calls receive useful prototypes.
- [ ] Type conflicts produce diagnostics, not silent bad output.

## Batch 5 - Whole-Program Interprocedural Recovery

Goal: stop treating each function as an island when decompiling full binaries.

### Current Finding

Interprocedural infrastructure exists, but the normal CLI path decompiles
functions independently enough that caller/callee information is underused.

### Tasks

- [ ] Add a whole-program decompile mode:
  - load all candidate functions
  - lift all functions
  - build call graph
  - run per-function early passes
  - run interproc fixed point
  - run final per-function passes
  - print selected/all functions

- [ ] Build a signature registry:
  - known imported signatures
  - recovered callee signatures
  - caller-observed argument counts
  - return value usage
  - noreturn facts
  - vararg facts
  - indirect call target sets

- [ ] Propagate facts:
  - callsite args to callee params
  - callee return type to caller expression
  - noreturn to CFG cleanup
  - function pointer prototype to indirect call
  - struct pointer receiver to methods
  - thiscall receiver to field accesses

- [ ] Add recursion/SCC handling:
  - strongly connected components
  - bounded iteration
  - stable conflict resolution
  - diagnostics for unresolved SCCs

- [ ] Add CLI controls:
  - decompile one function with whole-program facts
  - decompile all
  - skip interproc
  - dump call graph
  - dump signature registry

### Likely Files

- `crates/unlace-cli/src/main.rs`
- `crates/unlace-cli/src/pipeline.rs`
- `crates/unlace-passes/src/interproc_fixpoint.rs`
- `crates/unlace-passes/src/caller_param_propagate.rs`
- `crates/unlace-passes/src/calling_convention.rs`
- `crates/unlace-passes/src/calling_conv_finalize.rs`

### Acceptance Checks

- [ ] A caller can improve a callee's parameter count/type.
- [ ] A callee can improve a caller's return expression type.
- [ ] Recursive functions converge.
- [ ] Single-function mode still works.

## Batch 6 - Calling Conventions, Params, Varargs, and Noreturn

Goal: make calls look like source-level calls rather than register movement.

### Tasks

- [ ] Improve ABI models:
  - SysV x86_64
  - Windows x64
  - x86 cdecl/stdcall/fastcall/thiscall
  - AArch64
  - ARM EABI
  - RISC-V
  - MIPS/PPC where supported

- [ ] Improve parameter inference:
  - read-before-write registers
  - stack args
  - shadow space
  - variadic tails
  - hidden sret pointers
  - `this` receiver
  - vector args
  - aggregate args

- [ ] Improve return inference:
  - integer returns
  - float/vector returns
  - aggregate returns
  - no-return calls
  - multi-register returns

- [ ] Wire and extend vararg detection:
  - printf/scanf format parsing
  - custom format function database
  - variadic ABI rules
  - format-derived argument types

- [ ] Wire and extend noreturn detection:
  - known noreturn imports
  - panic/abort/exit patterns
  - infinite loop detection
  - assert/fail helpers

- [ ] Add diagnostics:
  - parameter count source
  - calling convention confidence
  - signature conflict report

### Likely Files

- `crates/unlace-passes/src/calling_convention.rs`
- `crates/unlace-passes/src/calling_conv_finalize.rs`
- `crates/unlace-passes/src/vararg_detect.rs`
- `crates/unlace-passes/src/noreturn.rs`
- `crates/unlace-ir/src/ssa.rs`
- `crates/unlace-cli/src/pipeline.rs`

### Acceptance Checks

- [ ] Known ABI fixtures print correct parameter lists.
- [ ] `printf("%d", x)` types `x` as int-like.
- [ ] Calls to `exit`, `abort`, panic helpers, and fatal asserts remove false
  fallthroughs.
- [ ] Hidden sret fixtures do not print bogus first args.

## Batch 7 - Struct, Union, Array, and Field Recovery

Goal: recover memory layout as source-level objects.

### Current Finding

Unlace has repeated base+constant struct field detection and array-of-struct
loop detection. Missing pieces are named type integration, best-fit member
lookup, unions/overlaps, field paths, cross-function propagation, and stronger
layout validation.

### Tasks

- [ ] Build a layout fact database:
  - base expression
  - offset
  - access size
  - access type
  - load/store/call use
  - field confidence
  - source instruction addresses

- [ ] Implement best-fit member lookup:
  - exact offset
  - containing field
  - nested field
  - array element
  - bitfield slice
  - union alternative

- [ ] Improve struct creation:
  - preserve gaps
  - infer padding
  - align fields
  - infer field type
  - infer field names
  - merge compatible observations
  - split incompatible layouts

- [ ] Add union recovery:
  - overlapping access with incompatible type
  - tagged union patterns
  - variant discriminants
  - reinterpretation casts

- [ ] Add array recovery:
  - base + index * stride
  - constant stride loops
  - pointer increment loops
  - flexible array members
  - array of structs
  - multidimensional arrays where clear

- [ ] Propagate structs interprocedurally:
  - receiver pointer into methods
  - field access in callees
  - allocated object constructors
  - factory functions
  - vtable-backed classes

- [ ] Add type-library struct binding:
  - known library structs
  - debug/DWARF/PDB structs
  - user-provided structs
  - best-fit against known layouts

### Likely Files

- `crates/unlace-passes/src/struct_field_detect.rs`
- `crates/unlace-passes/src/struct_field_recovery.rs`
- `crates/unlace-passes/src/op_type_binding.rs`
- `crates/unlace-ir/src/types.rs`
- `crates/unlace-output/src/c_printer.rs`
- `crates/unlace-loader/src/`

### Acceptance Checks

- [ ] `base + 8` becomes `obj->field_8` or a named field.
- [ ] Array loops become `arr[i]` where safe.
- [ ] Overlapping fields do not corrupt output; they become unions or remain
  explicit with diagnostics.
- [ ] Known debug structs print with real field names.

## Batch 8 - Indirect Calls, Vtables, Function Pointers, and Dispatch

Goal: recover high-level call targets and dispatch mechanisms.

### Tasks

- [ ] Wire indirect call resolution in normal pipeline.
- [ ] Extend target resolution:
  - direct constant target
  - loaded function pointer
  - jump table entry
  - vtable slot
  - GOT/PLT/IAT slot
  - ObjC selector dispatch
  - Go itab/interface method
  - Rust trait object/vtable

- [ ] Add target-set representation:
  - singleton target
  - finite target set
  - unknown but typed function pointer
  - virtual dispatch with receiver type

- [ ] Propagate function pointer types:
  - indirect call args
  - return type
  - storage location
  - struct field containing callback

- [ ] Recover C++ virtual calls:
  - vtable base
  - slot index
  - method prototype
  - `this` type
  - constructor/destructor patterns

- [ ] Recover ObjC message sends:
  - selector names
  - receiver class where possible
  - method family return conventions
  - ARC helper calls

- [ ] Recover Rust/Go dynamic dispatch:
  - trait object data/vtable pair
  - Go interface itab/data pair
  - method slot names where symbols exist

### Likely Files

- `crates/unlace-passes/src/indirect_call_resolve.rs`
- `crates/unlace-passes/src/cpp_vtable.rs`
- `crates/unlace-passes/src/objc_dispatch.rs`
- `crates/unlace-passes/src/go_interface.rs`
- `crates/unlace-passes/src/rust_vtable.rs`
- `crates/unlace-ir/src/ssa.rs`
- `crates/unlace-output/src/c_printer.rs`

### Acceptance Checks

- [ ] Simple function pointer calls print with prototypes.
- [ ] C++ vtable calls print as method-like calls when confidence is high.
- [ ] ObjC message sends do not remain raw runtime calls when selector data is
  present.
- [ ] Go/Rust dynamic dispatch fixtures produce typed receiver-aware calls.

## Batch 9 - Control Flow, Switches, Loops, and Exception Handling

Goal: reduce gotos and recover source-level control structures more reliably.

### Current Finding

The structurer is real and already has post-processing passes, but switch table
recovery and typed exception recovery are not integrated deeply enough. IDA's
ctree construction/validation pipeline is more mature.

### Tasks

- [x] Wire switch table recovery/refinement into CLI output path
  (landed `bc6169cef` + `4cf784d12` — `IndirectJumpResolvePass`
  populates `SsaFunction::resolved_jump_tables`, `refine_switches_with_tables`
  rewrites the HIR switch in the structurer pipeline).
- [x] Feed binary section/relocation data into switch recovery
  (landed `bc6169cef` + `0160f8858` — `pipeline::resolve_jump_table_targets`
  decodes `.rodata` / `.data.rel.ro` table entries and gates promotions on
  RX-section plausibility; new `switch_table.elf` fixture exercises a real
  jump table).
- [ ] Support switch table forms:
  - direct address table
  - relative offset table
  - value table + target table
  - range checks
  - sparse switches
  - compiler binary-search switches
  - string/hash switches

- [ ] Improve loop recovery:
  - while
  - do while
  - for loops
  - break/continue
  - loop inversion
  - irreducible CFG fallback
  - guarded while recovery

- [ ] Improve if/else recovery:
  - else-if chains
  - guard clauses
  - short-circuit conditions
  - ternaries
  - condition inversion
  - common tail merging

- [ ] Improve exception handling:
  - landing pad classification
  - typed catch clauses
  - cleanup-only pads
  - C++ personality data
  - Rust panic unwind edges
  - SEH where supported

- [ ] Add ctree-like validation:
  - every CFG edge accounted for
  - no missing labels
  - no duplicate labels
  - no invalid break/continue targets
  - no unreachable structured body unless intentional

### Likely Files

- `crates/unlace-struct/src/structurer.rs`
- `crates/unlace-passes/src/switch_recovery.rs`
- `crates/unlace-passes/src/string_hash_switch.rs`
- `crates/unlace-passes/src/ternary_recovery.rs`
- `crates/unlace-passes/src/short_circuit_recovery.rs`
- `crates/unlace-passes/src/goto_cleanup.rs`
- `crates/unlace-cli/src/pipeline.rs`
- `crates/unlace-output/src/c_printer.rs`

### Acceptance Checks

- [ ] Jump-table fixtures print `switch`.
- [ ] Loop fixtures avoid unnecessary gotos.
- [ ] EH fixtures distinguish catch vs cleanup where metadata permits.
- [ ] Structurer validation catches malformed output in tests.

## Batch 10 - Expression Simplification and Microcode-Style Optimization

Goal: improve expression quality and pass fixed-point behavior.

### Current Finding

Unlace already runs constant folding, propagation, DCE, SCCP, CSE, GVN, LICM,
idiom recognition, and HIR cleanup. IDA has a maturity-driven scheduler with
repeated optimization, stack/lvar/type passes, global propagation, and final
validation.

### Tasks

- [ ] Document current maturity levels for Unlace:
  - lifted IR
  - SSA built
  - early simplification
  - stack recovered
  - types recovered
  - lvars allocated
  - structured HIR
  - final C output

- [ ] Rework pass scheduler into explicit phases:
  - pre-SSA
  - SSA optimization
  - stack/frame phase
  - type phase
  - lvar phase
  - structuring phase
  - HIR cleanup phase
  - print phase

- [ ] Add pass dependency declarations:
  - requires SSA
  - invalidates liveness
  - invalidates stack facts
  - invalidates type facts
  - must run before structuring
  - must run after lvar allocation

- [ ] Improve expression folding:
  - associative/commutative reassociation
  - comparison simplification
  - boolean identity cleanup
  - bit-mask patterns
  - sign/zero extension cleanup
  - pointer arithmetic scaling
  - cast sinking/hoisting
  - rotate/carry idioms
  - division/modulo magic constants

- [ ] Add global propagation safety:
  - memory alias barriers
  - volatile barriers
  - call clobber barriers
  - exception edge barriers
  - MMIO barriers

- [ ] Add final expression validation:
  - no illegal assignment target
  - no invalid pointer deref type
  - no impossible cast if type is known
  - no raw flag temporary in final C unless unavoidable

### Likely Files

- `crates/unlace-cli/src/pipeline.rs`
- `crates/unlace-passes/src/const_fold.rs`
- `crates/unlace-passes/src/copy_prop.rs`
- `crates/unlace-passes/src/global_copy_prop.rs`
- `crates/unlace-passes/src/dead_code.rs`
- `crates/unlace-passes/src/sccp.rs`
- `crates/unlace-passes/src/cse.rs`
- `crates/unlace-passes/src/gvn.rs`
- `crates/unlace-passes/src/idiom_recognition.rs`
- `crates/unlace-passes/src/expression_tree.rs`

### Acceptance Checks

- [ ] Pass order is inspectable in one place.
- [ ] Each pass reports whether it changed the function.
- [ ] Fixed-point loops have max iteration diagnostics.
- [ ] Expression quality improves without hiding side effects.

## Batch 11 - C Printer, CTree-Like Output, and Formatting

Goal: make final C output readable, stable, and close to IDA-quality.

### Current Finding

The C printer is one of the stronger parts of the project. It has substantial
operator handling, precedence logic, casts, macros, type awareness, and many
intrinsics. Remaining gaps are tagged output, full wrapping, missing ctree
operator forms, helper coverage, and final polish.

### Tasks

- [ ] Complete missing expression forms:
  - true pre-increment
  - true pre-decrement
  - `sizeof`
  - `alignof`
  - type expression nodes
  - labels as first-class statement nodes if needed

- [ ] Improve helper intrinsic printing:
  - x86 FPU helpers
  - SSE/AVX/AVX512 helpers
  - ARM NEON/SVE helpers
  - AArch64 PAC helpers
  - compiler builtins
  - sanitizer helpers
  - language runtime helpers

- [ ] Add line wrapping:
  - max width
  - binary expression wrapping
  - call argument wrapping
  - initializer wrapping
  - nested ternary wrapping
  - stable indentation

- [ ] Add tagged output stream:
  - token kind
  - identifier reference
  - address reference
  - type reference
  - comment/reference spans
  - optional plain text rendering

- [ ] Improve comments:
  - function address
  - unresolved call target
  - unresolved type conflict
  - dangerous cast
  - original symbol where renamed
  - confidence diagnostics only when requested

- [ ] Add printer validation:
  - all expressions have precedence
  - all statement kinds can print
  - no accidental empty output
  - no trailing malformed syntax

### Likely Files

- `crates/unlace-output/src/c_printer.rs`
- `crates/unlace-output/src/lib.rs`
- `crates/unlace-ir/src/types.rs`
- `crates/unlace-struct/src/`

### Acceptance Checks

- [ ] Long expressions wrap deterministically.
- [ ] Helper-heavy fixtures print meaningful C or documented fallbacks.
- [ ] Plain text and tagged output produce equivalent visible code.
- [ ] Printer tests cover all HIR/ctree-like node kinds.

## Batch 12 - Loader, Symbols, Libraries, and Type Libraries

Goal: use all available binary metadata before guessing.

### Tasks

- [ ] Improve symbol loading:
  - ELF symbols
  - PE exports/imports
  - Mach-O symbols
  - dynamic symbol tables
  - stripped binary fallback

- [ ] Improve relocation usage:
  - function pointers
  - switch tables
  - vtables
  - GOT/PLT/IAT
  - string references
  - type metadata

- [ ] Improve debug info usage:
  - DWARF locals
  - DWARF structs/classes
  - DWARF inlined functions
  - PDB symbols/types
  - line info for diagnostics

- [ ] Add library recognition:
  - FLIRT-like patterns
  - import signature db
  - standard library function prototypes
  - compiler runtime helpers
  - language runtimes

- [ ] Add type library files:
  - builtin libc
  - Linux syscalls
  - Windows API subsets
  - Objective-C runtime
  - Rust core runtime helpers
  - Go runtime helpers
  - user-provided type db

### Likely Files

- `crates/unlace-loader/src/`
- `crates/unlace-cli/src/main.rs`
- `crates/unlace-cli/src/pipeline.rs`
- `crates/unlace-passes/src/flirt.rs`
- `crates/unlace-ir/src/types.rs`

### Acceptance Checks

- [ ] Imported libc/API functions get prototypes.
- [ ] Relocations improve indirect call/switch/vtable recovery.
- [ ] DWARF/PDB names and types survive through output.
- [ ] Stripped binaries still decompile with safe fallbacks.

## Batch 13 - Lifter Coverage and Callother Reduction

Goal: reduce architecture-specific blind spots that leak into final C.

### Current Finding

The lifter facade covers many architectures, but many lifters still emit
`Unimplemented` or opaque `Callother` for substantial instruction sets.

### Tasks

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

### Likely Files

- `crates/unlace-lift/src/`
- `crates/unlace-ir/src/op.rs`
- `crates/unlace-output/src/c_printer.rs`
- `crates/unlace-passes/src/idiom_recognition.rs`
- `crates/unlace-passes/src/type_infer.rs`

### Acceptance Checks

- [ ] Coverage report shows fewer unimplemented instructions.
- [ ] Callother-heavy fixtures produce readable helper/intrinsic output.
- [ ] New lifter support does not break existing architectures.

## Batch 14 - Language-Specific Recovery

Goal: recognize source language/runtime constructs where binary metadata makes
that possible.

### C++

- [ ] Constructor/destructor recognition.
- [ ] Vtable and RTTI recovery.
- [ ] `this` pointer propagation.
- [ ] Virtual call recovery.
- [ ] Exception catch type recovery.
- [ ] STL/container hints where safe.

### Rust

- [ ] Panic path recognition.
- [ ] `Result`/`Option`/enum layout recovery.
- [ ] Trait object recovery.
- [ ] Slice/string layout recovery.
- [ ] Rust symbol demangling integration.
- [ ] Drop glue recognition.

### Go

- [ ] Interface dispatch recovery.
- [ ] `defer` recovery.
- [ ] slice/map/string layout recovery.
- [ ] goroutine/runtime helper recognition.
- [ ] Go symbol/type metadata usage.

### Objective-C

- [ ] Message send recovery.
- [ ] Selector/class metadata recovery.
- [ ] ARC helper recognition.
- [ ] Property-style access where safe.

### Likely Files

- `crates/unlace-passes/src/cpp_vtable.rs`
- `crates/unlace-passes/src/cpp_variant.rs`
- `crates/unlace-passes/src/rust_enum.rs`
- `crates/unlace-passes/src/rust_panic.rs`
- `crates/unlace-passes/src/go_defer.rs`
- `crates/unlace-passes/src/go_interface.rs`
- `crates/unlace-passes/src/objc_dispatch.rs`
- `crates/unlace-output/src/c_printer.rs`
- `crates/unlace-loader/src/`

### Acceptance Checks

- [ ] Language-specific fixtures improve only when metadata/pattern confidence
  is high enough.
- [ ] Wrong-language binaries do not get polluted by language-specific guesses.
- [ ] Runtime helpers can be shown or hidden based on output mode.

## Batch 15 - Memory, Aliasing, Volatile, and MMIO Correctness

Goal: avoid prettier but wrong C.

### Tasks

- [ ] Add alias categories:
  - stack
  - globals
  - heap-like unknown
  - readonly data
  - volatile/MMIO
  - TLS
  - code pointers

- [ ] Add memory SSA or lighter memory-version model:
  - load/store dependency
  - call clobber
  - volatile barriers
  - exception barriers
  - alias uncertainty

- [ ] Prevent unsafe propagation:
  - across unknown calls
  - across volatile accesses
  - across stores that may alias
  - across atomic operations

- [ ] Improve MMIO printing:
  - volatile pointer casts
  - named register blocks when metadata exists
  - no accidental load folding

- [ ] Add tests:
  - volatile globals
  - memory-mapped registers
  - aliasing pointers
  - function calls with unknown side effects
  - atomics

### Likely Files

- `crates/unlace-ir/src/ssa.rs`
- `crates/unlace-passes/src/global_copy_prop.rs`
- `crates/unlace-passes/src/dead_store.rs`
- `crates/unlace-passes/src/cse.rs`
- `crates/unlace-passes/src/gvn.rs`
- `crates/unlace-output/src/c_printer.rs`

### Acceptance Checks

- [ ] Volatile loads/stores are preserved.
- [ ] Unknown calls block unsafe memory propagation.
- [ ] MMIO fixtures do not collapse repeated reads.

## Batch 16 - Diagnostics, Debugging, and Developer UX

Goal: make it possible to debug why output changed.

### Tasks

- [ ] Add pass trace mode:
  - pass name
  - changed/not changed
  - time taken
  - facts added
  - facts removed
  - iteration count

- [ ] Add IR dump controls:
  - before pass
  - after pass
  - selected function
  - selected address range
  - selected pass group

- [ ] Add fact dumps:
  - stack frame
  - lvars
  - types
  - call graph
  - signatures
  - switch tables
  - struct layouts
  - indirect call targets

- [ ] Add explain mode:
  - why this variable name
  - why this type
  - why this call target
  - why this switch
  - why this goto remained

- [ ] Add JSON diagnostics for tools.
- [ ] Add Markdown diagnostics for human review.

### Likely Files

- `crates/unlace-cli/src/main.rs`
- `crates/unlace-cli/src/pipeline.rs`
- `crates/unlace-ir/src/`
- `crates/unlace-passes/src/`

### Acceptance Checks

- [ ] A changed output can be traced to a pass.
- [ ] Debug dumps are deterministic.
- [ ] Diagnostics do not require editing source.

## Batch 17 - Performance, Caching, and Scalability

Goal: make full-binary decompilation practical.

### Tasks

- [ ] Add timing by phase and pass.
- [ ] Add memory usage reporting for large binaries.
- [ ] Cache stable facts:
  - decoded instructions
  - lifted IR
  - function boundaries
  - type libraries
  - FLIRT matches
  - debug info parsing

- [ ] Avoid quadratic behavior:
  - lvar interference graph
  - struct field matching
  - type constraint solving
  - interproc SCC iteration
  - expression tree rebuilding

- [ ] Add parallel decompilation:
  - per-function early passes
  - controlled interproc synchronization
  - deterministic final output order

- [ ] Add stress tests:
  - many small functions
  - one huge function
  - dense call graph
  - many type constraints
  - huge switch tables

### Likely Files

- `crates/unlace-cli/src/main.rs`
- `crates/unlace-cli/src/pipeline.rs`
- `crates/unlace-loader/src/`
- `crates/unlace-passes/src/`

### Acceptance Checks

- [ ] Large binaries complete without runaway memory.
- [ ] Parallel mode is deterministic.
- [ ] Performance regressions are visible in reports.

## Batch 18 - Documentation and Project Memory

Goal: keep the implementation plan, Claude/Codex context, and audit findings
current.

### Tasks

- [ ] Keep `CLAUDE.md` current with:
  - architecture overview
  - pass pipeline
  - known missing work
  - testing commands
  - important research/session locations
  - IDA dump mapping

- [ ] Keep this `plan.md` current:
  - update checkboxes as batches land
  - add newly discovered gaps
  - remove stale assumptions
  - link evidence to implementation tasks

- [ ] Add `research/README.md`:
  - what is in opencode sessions
  - which sessions matter for Unlace
  - what is unrelated noise
  - how to search them

- [ ] Add architecture notes:
  - decompiler maturity stages
  - pass dependencies
  - type system design
  - stack/lvar design
  - output/ctree model

### Likely Files

- `CLAUDE.md`
- `plan.md`
- `research/README.md`
- `docs/`

### Acceptance Checks

- [ ] A new contributor can find the current pipeline in under five minutes.
- [ ] The plan distinguishes implemented, wired, and aspirational features.
- [ ] Research notes point to exact sessions and IDA subs.

## Recommended Batch Order

1. Batch 0: baselines and quality reporting.
2. Batch 1: wire existing passes.
3. Batch 2: stack pointer and stack variable recovery.
4. Batch 5: whole-program interproc mode.
5. Batch 4: type system and type propagation.
6. Batch 3: lvar allocation and naming.
7. Batch 7: struct/union/array recovery.
8. Batch 9: switch/control-flow/EH recovery.
9. Batch 11: printer polish.
10. Batch 13: lifter and Callother reduction.
11. Batch 14: language-specific recovery.
12. Batch 15: memory/alias/volatile correctness.
13. Batch 16: diagnostics and explain mode.
14. Batch 17: performance and caching.
15. Batch 18: documentation and project memory.

## Immediate First Implementation Slice

This is the first practical coding slice to run after this plan lands.

- [ ] Add pass inventory test or diagnostic listing all passes.
- [ ] Wire `StackPointerTrackingPass` into `pipeline.rs`.
- [ ] Thread SP tracking facts into stack var/frame recovery.
- [ ] Wire `IndirectCallResolvePass`.
- [ ] Wire `OpTypeBindingPass`.
- [ ] Wire vararg/printf detection.
- [ ] Wire noreturn detection before structuring.
- [ ] Add one focused fixture per newly wired pass.
- [ ] Add quality counters for:
  - unresolved indirect calls
  - stack vars recovered
  - unknown types
  - gotos emitted
  - unimplemented ops
- [ ] Run `cargo test --workspace`.

## Definition of Done for Each Batch

Each batch is complete only when:

- [ ] The implementation is wired into the real CLI path or explicitly gated.
- [ ] There is at least one fixture proving the behavior.
- [ ] There is at least one regression test.
- [ ] The quality report shows the intended metric improved or unchanged.
- [ ] The pass does not panic on malformed or unsupported inputs.
- [ ] Any risky behavior has a feature flag or confidence threshold.
- [ ] `CLAUDE.md` and `plan.md` are updated if architecture changes.

## Known Risks

- False parity metrics can hide real output problems.
- Emitter capability can exceed recovery quality, producing pretty but wrong C.
- New passes can cascade and break later assumptions.
- Type inference can oscillate without clear convergence rules.
- Stack recovery can become architecture-specific if hard-coded x86 facts spread.
- Interprocedural recovery can become expensive without SCC boundaries.
- Language-specific recovery can create false positives on normal C/C++ binaries.
- Lifters can leak opaque `Callother` values into otherwise good output.
- Printer polish can mask incorrect IR facts instead of fixing them.

## North Star

The target is not just "more C output". The target is:

- stable decompilation over real binaries,
- fewer raw temporaries,
- correct stack/local variables,
- useful function signatures,
- meaningful types and fields,
- fewer gotos,
- fewer unknown helpers,
- graceful fallback when facts are uncertain,
- and measurable improvement against an IDA-style golden corpus.

## Session Log

This section records the concrete commits each batch landed, so a reader
can `git show <sha>` to see exactly what was done. Append-only.

### Session 2026-05-14 (master `5eaea62e7`)

- **Recovery of orphaned t410 lua bytecode lifter** — commit `8d4d94e03`.
  Workspace was broken when this session opened: `unlace-lift-lua/src/lib.rs`
  declared `mod ir_lift;` but the file did not exist. The `SsaFunction`
  `coroutine_sites` field was missing from 15 test-helper constructors.
  Written + 9266 lines landed across 48 files.

- **Batch 0 (core)** — commit `137b743f7`. `unlace quality <binary>`
  subcommand + 13 feature counters + `quality_smoke.rs` regression
  baselines. Markdown + JSON output. Three-bucket classification ("not
  implemented" / "not wired" / "implemented but wrong").

- **Batch 1** — commit `d4499f068`. 13 of 15 unwired passes wired into
  the canonical pipeline with placement rationale:
  - Pre-outer-loop one-shot: `NoreturnDetectPass` (with PLT resolver).
  - Inner IR fixed-point cluster: `CallBoundaryCopyPropPass`,
    `RedundantFlagElimPass`, `AlgebraicSimplifyPass`.
  - Per-outer-iter structural: `DeadStoreElimGlobalPass`,
    `StackPointerTrackingPass`.
  - Post-outer-loop one-shot: `BitfieldIdiomPass`, `CryptoIdiomPass`,
    `IndirectCallResolvePass`, `OpTypeBindingPass` (moved here mid-batch
    after `medium.elf::sub_1560` hit the 30s timeout — placement matters).
  - Post-VarMerge: `RegisterCoalescePass`, `RustEnumPass`,
    `RustVtablePass`, `RustPanicPass` (resolver-gated).
  - **Deferred**: `TailDuplicationPass` (operates on Function pre-SSA;
    pipeline already calls `tail_duplicate_small_blocks`),
    `ObjcDispatchPass` (needs `msgsend_addrs` plumbing from loader).
  - Quality delta: `medium.elf` IR insns 2035 → 1948 (-87);
    `loops.elf` 207 → 203 (-4); 11 goldens regenerated for legitimate
    output improvements (`(a-b)==0` → `a==b`, `__noreturn` propagation).

- **Batch 2 first slice** — commit `e35051c6a`. Architecture-neutral
  stack model: new `crates/unlace-ir/src/stack.rs` with `StackSpec`
  covering x86/x86_64, AArch64/ARM, MIPS/MIPS64, RISC-V, PPC/PPC64,
  V850, Arc. `SsaFunction.arch` field added. 3 pass modules migrated
  (`stack_pointer_tracking`, `stack_vars`, `stack_frame_recovery`).
  Quality delta: arm64_features stkvars 0 → 3, mips64/riscv64 0 → 2;
  3 non-x86 goldens regenerated.

- **Batch 3 (determinism cleanup)** — commit `9226a74d7`. 26 HashMap /
  HashSet violations across 9 files in `unlace-passes` + `unlace-struct`
  converted to BTreeMap / BTreeSet. `cargo xtask lint-determinism` now
  passes (was: FAIL).

- **Clippy clean unlace-ir** — commit `388bf72b4`. Closes the CLAUDE.md
  `ssa.rs:1185` type_complexity item (factored RenameResult type alias)
  + `identity_op` fixes for `1 * 4` / `1 * 8` in stack.rs.

- **Batch 0+ extended counters** — commit `84c38e68d`. 20 more counters
  on top of Batch 0's 13: if/while/do-while/for, ternary,
  break/continue, tail calls, try-catch/try-finally, inferred params,
  libc-annotated calls, noreturn funcs, vtable/objc/crypto/coroutine
  sites, SEH regions.

- **Parallel 5-agent batch** — commits `8ddb9369b` (cli + README),
  `dce932e5a` (recover_switches wiring slice), `02df11552` (output +
  struct clippy-clean), `934f47c96` (unlace-passes clippy-clean),
  `8299056d7` (lift-* dead-code wiring or `#[allow]` with rationale).
  All 5 agents ran in isolated worktrees. After merge: 127 build
  warnings → 0 (except 4 in unlace-passes).

- **Pipeline.rs + bench clippy clean** — commit `d41dc6360`. Closed the
  last 10 clippy errors in `unlace-cli` that the parallel agent left
  for the pipeline.rs owner. All 5 output-affecting crates now pass
  `cargo clippy -p <crate> --no-deps --all-targets -- -D warnings`.

- **Batch 5 first slice (whole-program interproc helper)** — commit
  `5eaea62e7`. New `pipeline::run_whole_program_interproc(funcs, cap)`
  helper drives `run_interproc_fixpoint` over a built SSA map.
  Integration tests on `branches.elf` (converges <cap) and `medium.elf`
  (no-panic smoke). The default CLI path is unchanged (parity 100%
  sustained) — deeper "default-on" wiring requires splitting
  `decompile_function_with_symbols` into lift+passes / structure+emit
  phases, deferred.

### Verified state at end of session

- `cargo build --workspace`: 0 errors, 0 warnings (except 4 in unlace-passes).
- `cargo test --workspace`: 3059 passing, 0 failed.
- `cargo xtask lint-determinism`: OK.
- `cargo clippy -p {unlace-ir,unlace-passes,unlace-struct,unlace-output,unlace-cli}
  --no-deps -- -D warnings`: clean.
- `cargo clippy -p unlace-loader --no-deps -- -D warnings`: ~36 errors
  (still open; backlog item).
- `bash scripts/score_parity.sh`: 100.0% (sustained).

### Still open (high-signal next picks)

- **Batch 9** — Indirect-jump resolution pass + wire
  `refine_switches_with_tables`. Every fixture still shows
  `switch_statements = 0` because `branchind` targets are never resolved
  to a `JumpTable`. The simpler `recover_switches` is wired but is a
  pure traversal — the substantive recovery needs the jump-table map.
- **Batch 6** — Wire `parse_printf_format_strings` whole-program. The
  C printer already does inline printf parsing, but `variadic_call_types`
  population enables better signature recovery.
- **Investigation** — `noreturn_functions = 0` and
  `libc_annotated_calls = 0` on every fixture suggest the passes are
  running but not populating the SSA fields the counters read. Quick
  debug task.
- **Plan Batches 3–17 deeper work** — each is a multi-session system
  (lvar allocation, TInfo type system, alloca/VLA, EH recovery,
  printer ctree model, etc.).
- **Workspace clippy** — `unlace-loader` is the only output-side crate
  not yet clippy-clean.

### Session 2026-05-16 (master `a27e994ad`)

- **Batch 0 IDA-vs-Unlace corpus tooling** — commit `a27e994ad`. New
  `cargo xtask compare-corpus` enumerates 16 x86_64 fixtures + 150 IDA
  references, counts 20+ patterns (_QWORD/aN/vN/result/LOBYTE/etc.),
  emits markdown coverage table to stdout + `target/corpus-compare.md`.
  Complements `cargo xtask compare-golden` (commit `59d756732`,
  aggregate keyword/density similarity). Top-level Batch 0 checkbox
  remains `[~]` — neither tool reports per-function changed/missing
  constructs or diff-introduced gotos/`Unimplemented` yet.
- **Batch 1 TypeInferPass wiring** — commit `439c0903c`. Replaced
  `run_type_infer_bounded` with the real `TypeInferPass` + 30s per-fn
  deadline. Recovers pointer-typed struct fields (`__int64 field_N`
  → `void * field_N` via `seed_from_composites`). Parity sustained at
  100%.
- **Batch 6 printf whole-program** — commit `b7bce9462`. Added per-fn
  pre-pass + whole-program `run_whole_program_printf_parse` call to
  `parse_printf_format_strings`. PIE base-relative load pattern now
  matched. `cpp_exceptions.elf` `variadic_call_types` 0 → 2. Top-level
  Batch 1 vararg/printf checkbox remains `[~]` —
  `detect_variadic_callees` + callsite arg naming still deferred.
- **Batch 9 switch table recovery wiring** — commits `bc6169cef`,
  `4cf784d12`, `0160f8858`. `IndirectJumpResolvePass` populates
  `SsaFunction::resolved_jump_tables`; `pipeline::resolve_jump_table_targets`
  decodes `.rodata` / `.data.rel.ro` entries with RX-section gating;
  `refine_switches_with_tables` rewrites HIR in the structurer.
  New `switch_table.elf` fixture exercises a real jump table end-to-end.
- **noreturn/libc counter wiring fix** — commit `334745b93`. No
  underlying bug — producer/consumer plumbing was already intact.
  Added regression test pinning SSA field → counter end-to-end on
  `medium.elf` + `cpp_vtable.elf`.

### Verified state at end of session

- `bash scripts/score_parity.sh`: 100.0% (sustained — this session is a
  pure doc edit, no code touched).

