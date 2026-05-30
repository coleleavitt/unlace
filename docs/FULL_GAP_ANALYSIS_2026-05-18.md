# Full Gap Analysis: LLVM/Clang vs Unlace
## Generated 2026-05-18 — Based on exhaustive LLVM/Clang source read + Oracle review

> **Authority note**: This document supersedes `LLVM_DECOMPILER_GAP_ANALYSIS.md`,
> `LLVM_PASSES_CATALOG.md`, `x86_gap_analysis.md`, and related fragments in `docs/`.
> Ground truth for *what is shipped* remains `docs/status.md`.
> Day-to-day backlog lives in `plan.md` / `docs/handoffs/`.

---

## 0. How to Read This Document

The decompiler gap analysis is structured as the **inverse of a compiler**.
Every section names a compiler subsystem, explains what it does in the forward
(compilation) direction, then defines what unlace must recover in the reverse
(decompilation) direction. Gaps are marked **MISSING**, **PARTIAL**, or
**EXISTS** against the current verified codebase state (May 2026).

Oracle's blunt planning rule governs priority:

> *If a task does not improve one of these visible outputs, defer it: fewer raw
> stack dereferences, cleaner function signatures, fewer leaked temporaries,
> better field/array access, fewer gotos, better casts, better calls, or more
> recognisable library/runtime names.*

---

## 1. Current Verified State (May 2026)

| Area | Status |
|------|--------|
| Narrow fixture parity | 100% (14 fixtures, narrow counter set) |
| `cargo test --workspace` | Passes |
| `cargo clippy -- -D warnings` | Passes |
| `cargo xtask lint-determinism` | Passes |
| IR opcode set (frozen v1.0) | 84 opcodes |
| Type system | Rich (`TInfo`, recursive, qualifiers, calling-conv metadata) |
| SSA infrastructure | Versioned varnodes, phi/`MULTIEQUAL`, dominator tree |
| Pass phases | 7 (PreOpt → LocalOpt → GlobalOpt → TypeRecovery → StackRecovery → LVarAlloc → FinalCleanup) |
| Structuring passes | 38 (if/else, while/do/for, switch, break/continue, goto, try/catch, range-for) |
| C printer CExpr variants | 36 explicit + ~33 via `Binary` dispatch |
| IDA `cot_*` coverage | 69/70 |
| Architectures lifted | 34 (semantics vary widely; see `docs/status.md`) |
| Loaders | 40+ (ELF, PE/COFF, Mach-O, DWARF, PDB, Android, WASM, …) |

**Critical caveat**: The 100% parity score and 136-pass count are both
*misleading health signals*. The fixture set is narrow; many passes are stubs.
The first action in any improvement campaign is building honest quality gates
(see Gap 1 below).

---

## 2. Gap Catalog

Gaps are grouped by the compiler subsystem that creates them.
Each gap has: **Priority**, **Compiler side**, **Decompiler reverse needed**,
**Current unlace state**, **Dependencies**, **Traps**.

---

### GAP 1 — Honest Quality Gates  ★ PRIORITY 1 (Foundation)

**Compiler side**: LLVM measures pass correctness via `opt -stats`, FileCheck
tests, and regression suites. Clang measures correct C output via thousands of
test cases.

**Decompiler reverse needed**: Unlace needs corpus-level metrics before
any new pass can be evaluated honestly.

**Current state**: MISSING — 14-fixture narrow metric is a regression watchdog
only.

**What to add**:
- Pattern counters on the 150-file x86_64 IDA corpus: locals emitted, args
  emitted, calls with correct signatures, field/array accesses (not raw pointer
  arithmetic), structured loops (not gotos), structured ifs, switch statements,
  compound assignments, casts by kind, intrinsic calls named, raw `*(base+off)`
  dereferences remaining, leaked SSA temporaries (`t1`, `t2` names).
- AST-level diff between unlace output and IDA reference where address mapping
  exists.
- `unlace quality` (already exists) — wire it into CI and gate on regressions.

**Trap**: Without this, every subsequent "improvement" is subjective. Build
first, before touching the pipeline.

---

### GAP 2 — Pass Inventory Honesty  ★ PRIORITY 2 (Foundation)

**Current state**: MISSING — 136 passes claimed, but many are stubs or
disabled.

**What to add**:
- A machine-readable pass registry (name, status: `implemented` / `partial` /
  `stub` / `disabled`, description, one focused test).
- `cargo xtask list-passes` that prints the registry.
- CI gate: every `stub` pass must have an open issue.

**Trap**: Pass count is not a quality metric. Gate on *output wins*, not count.

---

### GAP 3 — Provenance / Fact Model  ★ PRIORITY 3 (Foundation)

**Compiler side**: LLVM tracks value provenance through `Value::use_def_chain`,
`Metadata`, and `DebugInfo` attachments. Every instruction knows where its
operands came from.

**Decompiler reverse needed**: Unlace needs to track *how* every recovered
fact was derived: register read, stack slot, global symbol, constant, call
return, memory load, type-derived from PDB/DWARF, inferred from load width,
or guessed. Without this, later passes cannot distinguish high-confidence
from low-confidence facts and will compound errors.

**Current state**: PARTIAL — SSA tracks use-def; no confidence/source
annotation on recovered types, names, ABI assignments.

**What to add**:
```
enum FactSource {
    Register,
    StackSlot { offset: i64, frame: FrameId },
    GlobalSymbol(SymId),
    Constant,
    CallReturn(CallSiteId),
    MemLoad { addr: VarId, width: u8 },
    DebugInfo(DebugSource),
    Inferred { from: Vec<FactId>, confidence: Confidence },
    Guessed,
}
```
Attach to: recovered types, local variable names, ABI argument assignments,
call signature overrides, struct field matches.

**Dependencies**: None — build alongside stack reconstruction (Gap 5).

---

### GAP 4 — Lifter Semantic Correctness  ★ PRIORITY 4

**Compiler side**: LLVM's x86 backend (X86ISelLowering.cpp, X86InstrInfo.td,
X86CallingConv.td) defines precise semantics for every opcode, flag effect,
implicit register use, memory operand, vector operation, and calling convention.
~300k lines of x86 target code in LLVM.

**Decompiler reverse needed**: The lifter must be semantically correct for
every opcode that appears in real binaries before any pass can work correctly.

**Current state**: PARTIAL — x86/x86_64 handles common cases; known gaps
include:

| Category | Gap |
|----------|-----|
| Flags | Partial flag modeling; some flag consumers see wrong values |
| SIMD/SSE/AVX | Many opcodes emit `IrOp::Unimplemented` |
| String instructions | `rep movs/stos/scas/cmps` — partial |
| Segment registers | `fs:/gs:` prefix handling (TLS, `__readfsqword`) |
| Memory operands | Complex SIB addressing occasionally mis-decoded |
| Call edges | Indirect calls via register sometimes lost |
| Exception edges | SEH/EH implicit edges from `call` not always modelled |
| AVX-512 | Largely unimplemented |
| 3DNow!/legacy MMX | Not handled |

**LLVM reference files to study**:
- `llvm/lib/Target/X86/X86InstrSSE.td` — full SSE/AVX encoding
- `llvm/lib/Target/X86/X86ISelLowering.cpp` — lowering decisions
- `llvm/lib/Target/X86/X86CallingConv.td` — all ABI register assignments
- `clang/lib/CodeGen/CGBuiltin.cpp` — builtin → intrinsic mappings

**Trap**: "34 architectures" is a vanity metric. Fix x86_64 semantics
completely before expanding breadth.

---

### GAP 5 — Stack Frame Reconstruction  ★ PRIORITY 5

**Compiler side**: LLVM's PrologEpilogInserter.cpp, X86FrameLowering.cpp, and
StackColoring.cpp manage frame layout: compute frame size, assign slots,
handle callee-saved registers, red zone, shadow space (Win64), alloca,
variable-length arrays, and frame pointer omission.

**Decompiler reverse**: Unlace must reconstruct this in reverse — from the
already-emitted prologue/epilogue and stack-referencing instructions.

**Current state**: MISSING — raw `*(RSP + offset)` or `*(RBP - offset)` leaks
into output when stack reconstruction fails.

**Pipeline** (must happen in this order, pre-propagation):
1. **Pre-propagation capture**: Before copy/constant propagation runs, scan
   all instructions and record every `RSP/RBP/SP/FP + const` with access
   width, signedness, and surrounding call context. Store in a `StackMap`.
   If propagation runs first, these expressions get rewritten into anonymous
   arithmetic that cannot be recovered.
2. **Frame size computation**: Find prologue (`push rbp` / `sub rsp, N`),
   identify frame deltas from SP-tracking annotations or heuristic, compute
   total frame size.
3. **Access collection**: Collect all stack accesses: offset, width, read/write,
   in/out of calls.
4. **Overlap resolution**: Multiple accesses to overlapping ranges → split or
   keep widest; flag as BYREF/address-taken if address escapes via `lea` + use.
5. **Variable creation**: Assign names (`v1`/`a1`/`result`) with types inferred
   from width and context.
6. **Saved-register elision**: Detect callee-saved register save/restore pairs
   and remove from output.

**LLVM/IDA references**:
- `llvm/lib/CodeGen/PrologEpilogInserter.cpp`
- IDA: `add_auto_stkpnt`, `get_spd`, `set_frame_size`, `insn_create_stkvar`
- IDA: `sub_13B0F0` (`resolve_stkvar_addresses`), `sub_1CD380` (stack var classification)

**Trap**: Any pass that performs constant/copy propagation before step 1
destroys stack facts irreversibly. Guard the phase boundary with an assertion.

---

### GAP 6 — ABI / Calling Convention Recovery  ★ PRIORITY 6

**Compiler side**: `llvm/lib/Target/X86/X86CallingConv.td` defines 12+
calling conventions. Clang's `CGCall.cpp` (~8k lines) handles argument
marshalling, return value placement, sret pointers, varargs, struct-by-value,
tail calls, and register pairs.

**Key conventions** LLVM defines that unlace must recognise:
| Convention | Key rules |
|------------|-----------|
| x86_64 SysV | RDI/RSI/RDX/RCX/R8/R9 + XMM0-7; return RAX/RDX or XMM0/1 |
| x86_64 Win64 | RCX/RDX/R8/R9 + XMM0-3; shadow space 32 bytes; return RAX/XMM0 |
| x86_32 cdecl | Stack args right-to-left; caller cleans; EAX return |
| x86_32 stdcall | Stack args; callee cleans; EAX return |
| x86_32 fastcall | ECX/EDX first two; callee cleans remainder |
| x86_32 thiscall | ECX=this; callee cleans |
| x86_32 vectorcall | XMM0-5 for float/vector; ECX/EDX for int |
| AArch64 AAPCS64 | X0-X7 int, V0-V7 float; return X0/V0 |
| AArch64 DarwinPCS | Like AAPCS64 + ObjC calling slot |
| AArch64 Win64 | Like AAPCS64 + shadow space quirks |

**Current state**: PARTIAL — x86_64 SysV/Win64 basic; edge cases (sret, varargs,
struct-by-value, register pairs) incomplete; x86_32 conventions unverified;
AArch64 partial.

**What to build**:
```rust
struct AbiFactModel {
    convention: CallingConvention,
    args: Vec<ArgLocation>,       // reg, stack-offset, or split
    ret: ReturnLocation,          // reg, reg-pair, sret-ptr, or void
    sret: Option<SRetInfo>,
    varargs: Option<VarargsShape>,
    callee_cleanup: bool,
    shadow_space: usize,
}
```

Attach to every call site and function entry. Propagate across known call
edges (direct calls, imports, PLT stubs).

**Dependencies**: Stack reconstruction (Gap 5) must exist first — ABI
argument passing overlaps with frame offsets for stack args.

---

### GAP 7 — Library / Runtime Signature Database  ★ PRIORITY 7

**Compiler side**: Clang's `CGBuiltin.cpp` (~15k lines) maps `__builtin_*`
names to LLVM intrinsics. LLVM's `TargetLibraryInfo` (~3k entries) maps
library function names to well-known prototypes for alias/const analysis.

**Decompiler reverse**: Without knowing that `sub_401234` is `memcpy(dst, src,
n)` with signature `void*(void*, const void*, size_t)`, the output looks like
untyped pointer arithmetic.

**Current state**: MISSING — FLIRT/SIG wiring described in README as
"aspirational"; no active TargetLibraryInfo equivalent.

**What to build**:
- Signature DB: libc (all POSIX functions), libm, compiler runtime
  (`__stack_chk_fail`, `__cxa_*`, `__gxx_personality_v0`, `_Unwind_*`,
  CRT entrypoints, `__divti3`, `__mulodi4`, etc.), platform APIs (Win32,
  Darwin), common allocators (`malloc`/`free`/`realloc`/`new`/`delete`).
- FLIRT/SIG matcher for stripped binaries.
- Import table resolution: PLT stubs, IAT entries, ObjC selectors,
  Mach-O lazy symbols, ELF versioned symbols.
- Confidence-annotated: `KnownByImport` > `KnownByFlirt` > `KnownByHeuristic`.

**Impact**: Library name recovery is the single highest ROI improvement for
making output readable. A call to `sub_4010F0` that gets resolved to `strlen`
with its prototype eliminates all downstream guesswork about that return value.

---

### GAP 8 — Local Variable Allocation and Naming  ★ PRIORITY 8

**Compiler side**: LLVM's register allocator (RegAllocGreedy, RegAllocFast,
LiveIntervals, LiveRangeCalc, RegisterCoalescer) and stack coloring
(StackColoring.cpp) assign machine locations to IR values. The result is
a precise, non-overlapping allocation.

**Decompiler reverse**: Recover original variable identities from SSA
temporaries.

**Current state**: PARTIAL — the default pipeline now has interference-aware
coalescing, one lvar candidate per coalesced temp cluster, and factual
`this`/`len`/`i`/`buf`/`result` role names. Remaining leaks are scorer-driven
producer gaps, not a missing naming/coalescing pass.

**Pipeline**:
1. **Live range computation**: For each SSA value, compute its live range
   (def → last use).
2. **Interference graph**: Two values interfere if their live ranges overlap.
3. **Conservative coalescing**: Merge non-interfering values that flow through
   phi nodes (same "original variable").
4. **Stack slot merge**: Overlapping stack accesses that don't interfere →
   same variable.
5. **Type unification**: After merging, pick widest/most specific type.
6. **Naming** (IDA convention; wired where facts justify it):
   - Function arguments: `a1`, `a2`, ... (from ABI model)
   - Local variables: `v1`, `v2`, ...
   - Return value: `result`
   - Known names from debug info / FLIRT: override above
   - `this` for `__thiscall` first argument

**LLVM references**:
- `llvm/lib/CodeGen/RegisterCoalescer.cpp`
- `llvm/lib/CodeGen/LiveIntervalAnalysis.cpp`
- IDA: `sub_1F8DC0` (lvar allocation), `sub_21B2A0` (interference/coalesce)

---

### GAP 9 — Semantic C AST Contract  ★ PRIORITY 9

**Compiler side**: Clang's AST (Stmt.h, Expr.h, Type.h) defines 80+ statement
kinds and 100+ expression kinds as first-class typed nodes. The printer emits
from the AST; it never does string surgery.

**Current state**: PARTIAL — 36 `CExpr` variants, printer handles most cases,
but several constructs are emitted via textual approximation rather than
semantic nodes.

**Missing semantic nodes** (from Clang Sema/CodeGen read):

| Construct | Current | Needed |
|-----------|---------|--------|
| Compound assignment `+=` `-=` `*=` etc. | String hack / missing | Semantic `CompoundAssign(op, lhs, rhs)` |
| Pre/post `++` `--` | Missing | `IncDec { pre: bool, inc: bool, operand }` |
| Short-circuit `&&` `\|\|` | CFG-recovered but fragile | Semantic `LogicalBinop` with guaranteed short-circuit semantics |
| Function pointer call | Missing | `FnPtrCall { ptr, args }` |
| Member access `.` `->` | Partial | Full `MemberAccess { base, field, deref: bool }` |
| Array subscript `a[i]` | Partial | `ArrayAccess { base, index }` |
| Ternary `?:` | Partial | `Conditional { cond, then, else_ }` |
| Cast categories | 4 kinds | All 17 Clang CastKind groups (see below) |
| `sizeof`/`alignof`/`typeof` | Missing | `SizeOf(ty)`, `AlignOf(ty)` |
| Initializer list `{a, b, c}` | Missing | `InitList(Vec<CExpr>)` |
| Comma expression | Missing | `Comma(Vec<CExpr>)` |
| String literal | Missing | `StringLit(bytes, encoding)` |
| Intrinsic call | Missing | `IntrinsicCall { name, args, ret_ty }` |
| Vector literal | Missing | `VectorLit(Vec<CExpr>, VecTy)` |
| LOBYTE/HIDWORD macros | String hack | `ByteExtract { src, byte_offset, width }` |

**CastKind groups** (from Clang's `OperationKinds.h`):
Clang defines 60+ `CastKind` values. The 17 groups unlace must represent:
1. `LValueToRValue` — load from addressable location
2. `IntegralCast` — integer width change (sign/zero extend, truncate)
3. `IntegralToBoolean` / `BooleanToSignedIntegral`
4. `FloatingCast` — float precision change
5. `FloatingToIntegral` / `IntegralToFloating`
6. `PointerToIntegral` / `IntegralToPointer`
7. `BitCast` — same-size reinterpret
8. `AddressSpaceCast`
9. `NullToPointer`
10. `ArrayToPointerDecay` / `FunctionToPointerDecay`
11. `ToVoid`
12. `VectorSplat` / `VectorElementCast`
13. C-style cast (encompasses multiple rules)
14. `static_cast` with base-to-derived / derived-to-base adjustment
15. `reinterpret_cast`
16. `const_cast`
17. Truncation / `COERCE_*` IDA macros

**Trap**: Adding semantic nodes requires touching the printer and all
producers simultaneously. Define the node types first, update the printer,
then migrate producers one by one. Do not add nodes without updating the
printer first — you will create "dead" enum variants.

---

### GAP 10 — C Printer Semantics (Precedence, Parenthesization, Types)  ★ PRIORITY 10

**Compiler side**: Clang's `lib/AST/StmtPrinter.cpp` and `ExprPrinter.cpp`
(~3k lines) implement a complete, precedence-aware C printer. Every operator
knows its precedence and associativity; the printer inserts parentheses exactly
where needed.

**Current state**: PARTIAL — basic precedence exists; edge cases missing.

**What to fix**:

1. **Precedence table** — implement the full C11 precedence table (15 levels):
   ```
   1: , (comma)
   2: = += -= *= /= %= <<= >>= &= |= ^= (assignment, right-assoc)
   3: ?: (conditional, right-assoc)
   4: ||
   5: &&
   6: |
   7: ^
   8: &
   9: == !=
   10: < <= > >=
   11: << >>
   12: + - (additive)
   13: * / % (multiplicative)
   14: unary: ! ~ + - * & (cast) sizeof (right-assoc)
   15: ++ -- (postfix), () [] . -> (left-assoc)
   ```

2. **Parenthesization rules**:
   - Right child of left-associative op: parens if child precedence ≤ parent
   - Left child of right-associative op: parens if child precedence < parent
   - Same-precedence non-associative (comparisons): always parens

3. **Type printing**:
   - Function pointers: `int (*name)(int, char *)`
   - Arrays: `int arr[N]` vs `int *arr`
   - Calling conventions: `__cdecl`, `__stdcall`, `__fastcall`, `__thiscall`
   - Qualifiers: `const`, `volatile`, `restrict`, `_Atomic`
   - IDA-style primitive names: `_BYTE`, `_WORD`, `_DWORD`, `_QWORD`,
     `__int64`, `__int128`, `_BOOL8`
   - Vector types: `__m128`, `__m256`, `__m256i`, `__m512`
   - Bitfields in struct output

4. **Line width and breaking**: Pre-measure expressions; break long lines at
   logical boundaries (argument lists, binary operators).

---

### GAP 11 — Expression Recovery (SCCP, GVN, Reassociation)  ★ PRIORITY 11

**Compiler side** (from LLVM Transforms/Scalar, InstCombine):

| Pass | What it does | Decompiler reverse |
|------|-------------|-------------------|
| SCCP | Constant propagation through CFG + SSA | Recover expressions hidden by constant folding; simplify known-constant conditions |
| GVN / NewGVN | Eliminate redundant expressions | De-duplicate; recognize `%x = load` reused as `%y = load` |
| Reassociate | `(a + 4) + 5 → a + 9` | Detect reassociated constants; simplify grouped arithmetic |
| InstCombine (Add/Sub) | `a - a → 0`, `a + 0 → a`, `a * 2 → a << 1` | Undo strength-reduced forms; recognize original arithmetic |
| InstCombine (AndOrXor) | De Morgan's, mask simplifications | Recover bitwise logic |
| InstCombine (Cmp) | `icmp eq (a >> 5), 0 → icmp ult a, 32` | Recover original comparisons |
| InstCombine (Casts) | Remove redundant extends/truncates | Emit correct casts |
| InstCombine (Shifts) | `(a << 2) >> 2 → a & mask` | Recover masked values |
| CorrelatedValuePropagation | Narrows value ranges in dominated blocks | Simplify condition chains |
| Float2Int | `fptosi (sitofp x) → x` | Detect float-round-trip patterns |
| AggressiveInstCombine | Complex deinterleaving, interleaved access | Recognize SIMD pattern decompositions |

**Current state**: PARTIAL — basic constant propagation exists; GVN/reassociation missing.

**Prerequisite**: Stack (Gap 5) + ABI (Gap 6) facts must be stable first,
or expression recovery will simplify expressions that still encode stack/arg
information.

---

### GAP 12 — Memory Expression Idioms  ★ PRIORITY 12

**Compiler side**: LLVM's DSE (Dead Store Elimination), MemCpyOpt, and
LoadStoreVectorizer transform memory operations. GVN-PRE hoists memory loads.

**Decompiler reverse**: Recognise common patterns and emit C idioms:

| Pattern | Raw output | Correct output |
|---------|-----------|---------------|
| `memcpy` idiom (load + store loop) | Ugly loop | `memcpy(dst, src, n)` |
| `memset` idiom (store loop) | Ugly loop | `memset(ptr, val, n)` |
| `strlen` idiom (scan loop) | Ugly loop | `strlen(s)` |
| Array indexing `base + i*stride` | `*(ptr + i*4)` | `arr[i]` |
| Field access `base + const` | `*(ptr + 8)` | `obj.field` |
| Byte extraction `(val >> N) & 0xFF` | As-is | `LOBYTE(val)` / `HIBYTE(val)` |
| Zero-extend then mask | Complex | Correct cast |
| Load width → type | `*(QWORD*)` | `__int64 x = ...` |

---

### GAP 13 — Compound Assignment and Increment/Decrement Recovery  ★ PRIORITY 13

**Compiler side**: Clang emits `i += 1` as `%0 = load; %1 = add %0, 1; store %1`.
**Decompiler reverse**: Recognise load-op-store triples and emit `+=`, `-=`, etc.

**Current state**: MISSING.

**Rules** (all must hold before emitting):
1. `store` and `load` reference the same lvalue with proven identity.
2. No intervening access to that location on any path.
3. Not `volatile` or `atomic`.
4. Type-correct under the C promotion rules.
5. For `++`/`--`: operand is used exactly once (pre) or not used before the
   store (post), and the delta is ±1.

**Trap**: Lvalue identity is harder than it looks. Two pointer-typed SSA values
may alias. Require stack/global provenance (Gap 5/6) before implementing this.

---

### GAP 14 — Control Flow Quality (Short-Circuit, Irreducible, Goto Min)  ★ PRIORITY 14

**Compiler side**: LLVM's SimplifyCFG, JumpThreading, FixIrreducible, LCSSA,
and StructurizeCFG all reshape the CFG.

**Decompiler reverse needs**:

1. **Short-circuit `&&`/`||` recovery**: When CFG encodes `a && b` as
   "if a is false, jump to false-branch; else evaluate b", detect the pattern
   and emit a single `&&` expression. Requires reliable condition analysis.

2. **Empty block elision**: SimplifyCFG merges empty blocks. After structuring,
   eliminate any remaining empty basic blocks that exist only as jump targets.

3. **Irreducible CFG fallback**: When a CFG is irreducible (no single entry
   for a loop), LLVM's FixIrreducible inserts a dispatcher. Unlace must detect
   the dispatcher and emit `goto` rather than corrupt structuring.

4. **Goto minimisation**: After structuring, look for goto targets that are
   reachable via structured flow (break, continue, early return) and substitute.

5. **Switch quality**: Ensure `recover_switches` handles: contiguous ranges,
   sparse ranges (jump table with holes), string-indexed switches (ternary
   chains), and default + fall-through.

**Current state**: PARTIAL — basic structuring exists; short-circuit and
irreducible CFG handling need verification.

---

### GAP 15 — Loop Recovery (Induction Variables, Trip Counts)  ★ PRIORITY 15

**Compiler side**: LLVM's LICM, IndVarSimplify, LoopStrengthReduce,
LoopUnroll, LoopRotate, and ScalarEvolution.

| Pass | Decompiler reverse |
|------|-------------------|
| LICM | Detect loop-invariant code pulled before loop; show it inside if readability permits |
| IndVarSimplify | Canonicalises `for (i = 0; i != N; i++)` — recover original condition |
| LoopStrengthReduce | Replaces `i*4 + base` with a pointer IV — recover array indexing |
| LoopRotation | Converts `while` to `do-while` — detect and reverse when possible |
| LoopUnroll | Replicates body N times — detect small unrolls; leave large ones alone |
| LoopIdiomRecognize | Detects `memcpy`/`memset` loops | (see Gap 12) |

**ScalarEvolution trap**: Do not implement full SCEV. Build:
- Canonical IV detection: `phi(0, iv+1)` form
- Simple trip count: `icmp ult iv, N`
- Affine expression: `base + stride * iv`
- Array-stride recogniser: match LoopStrengthReduce output pattern

**Current state**: PARTIAL — loop structuring exists; IV/trip-count recovery
incomplete; LoopStrengthReduce output not recognised.

---

### GAP 16 — Type System Depth (Records, Bitfields, Function Pointers)  ★ PRIORITY 16

**Compiler side**: Clang's `Type.h` (~7k lines), `RecordLayout.h`, and
`ASTRecordLayout` compute struct layout with padding, bitfields, alignment,
and gaps. `CGRecordLayout.cpp` maps struct members to LLVM types.

**Decompiler reverse needs**:

1. **Record layout reconstruction**: Given observed field accesses at offsets,
   reconstruct `struct { type field_at_0; pad[N]; type field_at_8; ... }`.
   Use `calc_tinfo_gaps` equivalent. IDA function: `udt_type_data_t::get_best_fit_member`.

2. **Bitfield recovery**: Load of `(val >> N) & mask` where mask is
   `(1 << bits) - 1` → bitfield access.

3. **Function pointer types**: Recover `int (*fn)(int, char *)` from call site
   analysis. Currently missing from printer output.

4. **Typedef preservation**: When DWARF/PDB names a type `size_t`, emit
   `size_t` not `unsigned long`.

5. **`_Atomic` / `volatile` qualifiers**: From atomic IR ops and volatile
   memory access markers.

6. **Array vs pointer distinction**: Recover `T arr[N]` vs `T *ptr` from
   usage patterns (fixed-size loops, `sizeof` computations).

7. **Type propagation across calls**: If function is known (Gap 7), propagate
   parameter types inward to call sites.

**Current state**: PARTIAL — `TInfo` type system is rich; record layout
reconstruction and function pointer printing incomplete.

---

### GAP 17 — SIMD / Intrinsics  ★ PRIORITY 17

**Compiler side**: LLVM has 3,000+ named intrinsics (`llvm/include/llvm/IR/Intrinsics*.td`).
Clang's `CGBuiltin.cpp` (~15k lines) maps builtins to them. Key families:

| Family | Example intrinsics | Unlace output needed |
|--------|-------------------|---------------------|
| SSE arithmetic | `_mm_add_ps`, `_mm_mul_pd` | Emit named intrinsic |
| SSE comparison | `_mm_cmpeq_ps` | Emit named intrinsic |
| SSE load/store | `_mm_load_ps`, `_mm_storeu_ps` | Emit named intrinsic |
| AVX/AVX2 | `_mm256_*` | Emit named intrinsic |
| AVX-512 | `_mm512_*` | Emit named intrinsic |
| Memory | `llvm.memcpy`, `llvm.memset`, `llvm.memmove` | `memcpy`/`memset` |
| Atomic | `llvm.atomic.load`, `__sync_*` | `_Atomic` + fence |
| x86 system | `__rdtsc`, `__readfsqword`, `_mm_sfence` | Emit named builtin |
| Bit manipulation | `llvm.ctlz`, `llvm.cttz`, `llvm.bswap`, `llvm.popcnt` | `__builtin_clz` etc. |
| Math | `llvm.sqrt`, `llvm.fabs`, `llvm.ceil` | `sqrtf`, `fabs`, etc. |

**Current state**: PARTIAL — vector IR opcodes exist; intrinsic → named call
emission largely missing.

**Prerequisite**: Vector types in printer (Gap 10) + type system (Gap 16)
must exist first.

---

### GAP 18 — C++ Recovery  ★ PRIORITY 18 (DEFERRED)

**Compiler side**: `clang/lib/CodeGen/CGCXX.cpp`, `CGClass.cpp`,
`CGException.cpp`, `CGVTables.cpp`, `MicrosoftCXXABI.cpp`, `ItaniumCXXABI.cpp`
(~50k lines combined).

**This is the largest sinkhole in the project.** Do not begin until:
- [ ] Stack reconstruction is complete (Gap 5)
- [ ] ABI model is solid (Gap 6)
- [ ] Symbol/library recognition works (Gap 7)
- [ ] Type system handles records and function pointers (Gap 16)
- [ ] C output for optimised C binaries is consistently readable

**What eventually needs building**:
1. Virtual dispatch: vtable layout recognition → `obj->vtable[N](args)` → `ClassName::method(args)`
2. RTTI recognition: `type_info` layouts, `dynamic_cast` pattern
3. Constructor/destructor recovery from symbol names
4. C++ exception structuring: personality function, landing pad, `__cxa_*` calls
5. Name demangling (Itanium ABI `_Z*`, MSVC `?*`)
6. Template instantiation name simplification

---

### GAP 19 — Analysis Infrastructure (Minimal Spine)  ★ PRIORITY 19

**Do not build full LLVM-style analyses upfront.** Build only what's needed
to unblock concrete output wins.

**Minimum spine needed** (build incrementally as each gap above demands it):

| Analysis | Needed for | Complexity |
|----------|-----------|------------|
| Dominator tree | Already exists | — |
| Post-dominator tree | Short-circuit recovery (Gap 14) | Low |
| Loop info | Loop recovery (Gap 15) | Medium (already partial) |
| Value range (mini-LazyValueInfo) | Condition simplification, impossible branch elision | Medium |
| Alias classes | Compound assignment safety (Gap 13) | Medium |
| Memory object partitioning | Stack/global/heap distinction | Medium |
| Use-def queries | Already via SSA | — |

**Traps**:
- Full ScalarEvolution: multi-year project. Don't start.
- Full MemorySSA: without strong alias facts, it won't improve output.
- Full DependenceAnalysis: only needed for vectorization reversal (Gap 17).

---

## 3. Ordered Implementation Backlog

These 20 items, in this order. Each depends on the ones before it.

| # | Item | Blocks |
|---|------|--------|
| 1 | Broaden quality gate (corpus metrics, pattern counters, `unlace quality` in CI) | Everything — cannot measure improvement without this |
| 2 | Truthful pass inventory (registry, `list-passes`, stub issues) | Honest scope-setting |
| 3 | Provenance/fact model (`FactSource` annotation on recovered values) | Stack, ABI, type recovery quality |
| 4 | Pre-propagation stack capture (RSP/RBP offset preservation before simplification) | All stack output |
| 5 | Stack frame reconstruction (frame size, access collection, overlap, BYREF, naming) | Local variables, args |
| 6 | Lvar allocation strengthening (live ranges, interference, coalescing, `a1`/`v1`/`result` naming) | Readable variable names |
| 7 | ABI fact model (`AbiFactModel`, argument/return locations, sret, varargs, register pairs) | Function signatures |
| 8 | x86-64 ABI recovery (SysV + Win64, struct-by-value, varargs, multi-register return) | x86_64 function output |
| 9 | x86-32 + AArch64 ABI slices (cdecl/stdcall/fastcall/thiscall, AAPCS64) | Multi-platform output |
| 10 | Prototype/library signature DB (libc, CRT, allocators, compiler runtime, FLIRT) | Named calls throughout |
| 11 | Semantic C AST: missing nodes (CompoundAssign, IncDec, LogicalBinop, FnPtrCall, MemberAccess, ArrayAccess, CastKinds, IntrinsicCall) | All expression output |
| 12 | Printer: precedence table + parenthesization + type printing (fn ptrs, qualifiers, vector types) | All output formatting |
| 13 | SCCP + value range basics (constant folding through SSA, impossible branch elision) | Expression quality |
| 14 | GVN-like expression reuse + reassociation + flag/comparison simplification | Expression quality |
| 15 | Memory idiom recovery (array indexing, field access, byte macros, memcpy/memset/strlen) | Struct/array output |
| 16 | Compound assignment + inc/dec recovery (guarded by lvalue identity + alias safety) | Code density |
| 17 | CFG quality (short-circuit `&&`/`\|\|`, empty block elision, irreducible goto fallback, switch quality) | Structured output |
| 18 | Loop analysis (canonical IV, trip counts, array stride, loop idiom recognition) | Loop output |
| 19 | Type system depth (record layout, bitfields, function pointers, typedef, `_Atomic`, arrays) | Type accuracy |
| 20 | SIMD/intrinsics (vector types in printer, intrinsic → named call emission) | SIMD binary output |

C++ recovery (Gap 18) is deferred until items 1–19 are solid.

---

## 4. Dependency Graph (What Breaks If You Skip Steps)

```
1 (metrics)
└── 2 (pass inventory)
    └── 3 (provenance model)
        ├── 4 (pre-propagation stack capture)   ← MUST happen before any propagation pass
        │   └── 5 (stack frame reconstruction)
        │       └── 6 (lvar allocation)
        │           └── 8 (x86-64 ABI)
        │               ├── 9 (other ABI)
        │               └── 10 (signature DB)
        │                   └── 15 (memory idioms)
        └── 7 (ABI fact model)
            └── 8 ...

11 (semantic AST nodes)
└── 12 (printer semantics)
    ├── 13 (SCCP)
    │   └── 14 (GVN/reassoc)
    │       └── 16 (compound assign) ← needs lvalue identity from 5
    └── 17 (CFG quality)
        └── 18 (loop analysis)
            └── 19 (type depth)
                └── 20 (SIMD)
```

**Critical ordering constraint**: Item 4 (pre-propagation stack capture) must
be inserted in the pipeline *before* any pass that performs constant/copy
propagation. Violating this irreversibly destroys stack facts.

---

## 5. Trap Summary (Oracle's List)

1. **"Implement ScalarEvolution"** — Build counted-loop recognition + affine
   expression helpers. Full SCEV is a multi-year compiler project.

2. **"Implement MemorySSA"** — Build stack/global/local-object memory
   partitions and conservative alias classes first. MemorySSA without strong
   alias facts won't improve output.

3. **"SROA reversal"** — Partially impossible. Recognise common decomposed
   struct-field patterns; do not expect perfect aggregate reconstruction from
   optimised code.

4. **"136 passes"** — Pass count is not a quality metric. Passes with explicit
   input/output invariants and focused tests matter.

5. **"34 architectures"** — Broad lifter lists hide shallow semantics. Make
   x86_64 excellent before expanding breadth.

6. **Compound assignment / inc/dec** — Looks easy. Requires lvalue identity,
   side-effect ordering, volatile/atomic awareness, alias safety, and
   type-correct C promotion rules.

7. **C++ recovery** — The largest sinkhole. Defer until C output for optimised
   C binaries is consistently readable.

8. **100% parity score** — A narrow regression watchdog. Not a product-quality
   claim.

---

## 6. Relationship to Existing Docs

| Document | Status after this analysis |
|----------|--------------------------|
| `docs/PARITY_PLAN.md` | Historical roadmap; items here supersede it |
| `docs/LLVM_DECOMPILER_GAP_ANALYSIS.md` | Superseded by this document |
| `docs/LLVM_PASSES_CATALOG.md` | Reference catalog; still useful as lookup |
| `docs/x86_gap_analysis.md` | Superseded; x86 gaps covered in Gaps 4, 6, 8 above |
| `docs/roadmap.md` | Band structure unchanged; use this doc for ordered items |
| `docs/status.md` | Remains the authority for what is *shipped* |
| `plan.md` | Active backlog — update with items from Section 3 |

---

## 7. Effort Estimates (Oracle's Assessment)

- **Items 1–3** (metrics, inventory, provenance): ~2 weeks
- **Items 4–6** (stack + lvar): ~4–6 weeks
- **Items 7–10** (ABI + signatures): ~4–6 weeks
- **Items 11–12** (AST + printer): ~2–3 weeks
- **Items 13–16** (expression recovery): ~4–6 weeks
- **Items 17–18** (CFG + loops): ~3–4 weeks
- **Items 19–20** (types + SIMD): ~4–6 weeks

**Total to first meaningful production-quality tranche**: ~3–4 months.
**Broad parity beyond narrow fixture score**: 12+ months.

These are engineering estimates assuming focused, grounded work with
no scope drift.

---

*Generated from: exhaustive LLVM/Clang source read (8 parallel agents) +
Oracle architectural review. Cross-verified against current unlace codebase
audit (May 2026).*
