# Old Pass Pruning Audit

This audit records the pass-pruning state after the LLVM-style analysis
infrastructure and default pipeline wiring landed. The goal is to keep useful
recovery logic, but stop scheduling prototype passes that either do not persist
results or mutate SSA without maintaining side tables.

## Runtime Tiers

### Default Pipeline

These passes are promoted into the normal per-function pipeline and must stay in
sync with `canonical_pipeline_descriptor()`:

| Pass | Reason |
| --- | --- |
| `BoolSimplifyPass` | Simplifies boolean algebra in the inner fixed-point. |
| `KnownBitsSimplifyPass` | Uses known-bits facts to fold low-level integer idioms. |
| `SizeofRecognitionPass` | Annotates stable type-size intent after constraint solving. |
| `CppVariantPass` | Persists discriminant metadata used by later output. |
| `CppLambdaCapturePass` | Persists C++ lambda capture metadata. |
| `CppCoroutinePass` | Recovers C++ coroutine-frame patterns. |
| `RustAsyncPass` | Recovers Rust async state-machine metadata. |
| `RepStringIdiomPass` | Detects `rep movs/stos/cmps/scas` idioms after loop/type recovery. |

### Experimental Runtime

These passes are still opt-in behind `UNLACE_EXPERIMENTAL_OLD_PASSES=1`.
They write stable SSA metadata and do not run in the default path:

| Pass | Current output |
| --- | --- |
| `PathSensitivePass` | Refines `var_types` for null/non-null path facts. |

### Library Only

These modules remain compiled, exported, and tested, but are not scheduled by
the runtime. They are kept because their helper functions or tests still encode
useful recovery logic:

| Module/pass | Reason not scheduled |
| --- | --- |
| `bitfield_recovery::BitfieldRecoveryPass` | Detects bitfield sites but does not persist a dedicated bitfield output; current mutation only removes frame-setup marks. Keep helper/tests until a real annotation field exists. |
| `bool_coverage::BoolCoveragePass` | Rewrites instructions without updating SSA input side-table entries. Needs var-map maintenance before runtime use. |
| `func_ptr_table::FuncPtrTablePass` | Detection result is returned from helpers but not stored on `SsaFunction`; pass reports change without stable output. |
| `gcc_cleanup::GccCleanupPass` | Finds cleanup handlers but does not persist them. Needs an output field before scheduling. |
| `ipa_slice::IpaSlicePass` | Analysis-only pass; slicing helpers are useful API, runtime pass is a no-op. |
| `junk_code_removal::JunkCodeRemovalPass` | Removes instructions with `retain` without compacting `var_map`. Needs SSA side-table maintenance before runtime use. |
| `pgo_outlining::PgoOutliningPass` | Symbol-name helper is useful, runtime pass is currently a no-op. |
| `symbolic_heap::SymbolicHeapPass` | Analysis-only pass; memory access helpers are useful API, runtime pass is a no-op. |
| `taint_engine::TaintEnginePass` | Produces findings but does not persist them. Needs an output field before scheduling. |
| `daikon_invariants::DaikonInvariantPass` | Produces likely invariants but does not persist them. Needs an output field before scheduling. |

## Delete Candidates

No module is deleted in this pass because each candidate still has tests or a
public helper API. Deletion should wait until a replacement has equivalent test
coverage and callers have moved over. The strongest future delete candidates are
the pass wrappers whose helper APIs remain useful but whose `Pass::run`
implementation is no-op or non-persisting:

| Candidate | Delete condition |
| --- | --- |
| `IpaSlicePass` wrapper | Keep `backward_slice`/`forward_slice`, remove wrapper if no scheduled consumer appears. |
| `PgoOutliningPass` wrapper | Keep `detect_cold_fragments`, remove wrapper if no output metadata is added. |
| `SymbolicHeapPass` wrapper | Keep `collect_mem_accesses`/`may_alias`, remove wrapper after MemorySSA/alias-analysis fully owns this role. |
| `DaikonInvariantPass` wrapper | Remove wrapper unless invariant annotations are added to `SsaFunction` or printer annotations. |
| `FuncPtrTablePass` wrapper | Remove wrapper unless function-pointer table metadata is added to `SsaFunction`. |
| `TaintEnginePass` wrapper | Remove wrapper unless taint findings are persisted on analysis output. |

## Reintegration Rules

Before moving any library-only pass back into a runtime tier:

1. It must either mutate IR with correct `var_map`/CFG side-table maintenance,
   or write a stable metadata field.
2. Its `Pass::run` return value must mean real state changed.
3. It needs at least one test asserting the persisted output or side-table
   consistency.
4. The canonical descriptor must be updated if the pass enters the default
   pipeline.
