# Decompiler Pipeline Redesign (2026-10-28)

Status: accepted direction; implementation in progress (wave 1 of the 2026-10 fan-out).
Owner of this document: root agent. Research inputs: `unlace-fanout/reports/ida-flow.md`,
`unlace-fanout/reports/crates-survey.md` (folded in below when they land).

## Why

unlace's output on simple and debug-info binaries is good, but on stripped `-O2` code it is not.
Measured on `fixtures/stripped.*` (gcc `-O2`, `strip -s`) at checkpoint `838131a972`:

- CPU flags leak into C as variables (`char c8; // CF`, `_BOOL c10; // ZF`, `c11`/`c12` SF/OF).
- Wrong prototypes: `int sub_1b80(void)` for a two-argument function (`f_rec_power`).
- Callee-saved register spills print as memory traffic (`*(_DWORD *)(buf_0 + 12) = ...`).
- Empty branches (`if (v31) { }`), dead assignments, and many gotos (75 on `medium`/`stripped`).
- A false function start (`sub_1560` overlapping `sub_1570`).

The cause is architectural, not a lack of features:

- `unlace-passes` has 185 pass modules; 88 of them (~23k lines) are never called.
- The pipeline is a fixed sequence in an 8k-line `unlace-cli/src/pipeline.rs`.
- Semantic cleanup is duplicated in the C printer on emitted text: `c_printer/mod.rs` is 18.5k lines,
  85 of its 416 functions operate on strings/lines (`simplify_signed_flag_line`,
  `rewrite_one_signed_flag_idiom`, ...), and `c_printer/postprocess/dead_assign` has its own liveness.
  `unlace-output` is 42k lines; Ghidra's whole printer (`printc` + `printlanguage` + `prettyprint`) is 7.8k.
- Each output bug got its own pass or printer special case instead of a general mechanism.

## How other decompilers are built

| | IR | Driver | Flags | Calls / prototypes | Variables | Structuring | Printer |
|---|---|---|---|---|---|---|---|
| Hex-Rays | one microcode IR moving through maturity levels `MMAT_GENERATED -> LOCOPT -> CALLS -> GLBOPT1..3 -> LVARS`, then ctree | in-place rewriting per maturity level, local then global optimizers, combination rules | removed during local optimization | dedicated `MMAT_CALLS` stage after local cleanup decides arguments/returns | lvar allocation + interference merge at `MMAT_LVARS` | on the graph, then ctree cleanups | prints ctree only |
| Ghidra | one p-code graph (`Funcdata`: varnodes + ops with def-use) | `universalAction`: 85 Actions + 161 Rules, fixpoint groups (`mainloop`, `fullloop`, `stackstall`), worklist rule pools | ordinary varnodes; `ActionDeadCode` + rules fold them | data-driven `ProtoModel` from `.cspec`; trial-based `ActionActiveParam` / `ActionReturnRecovery` | `merge.cc` HighVariables from SSA by cover/interference | `blockaction` collapse rules | `printc`, no analysis |
| Binary Ninja | Lifted IL -> LLIL -> MLIL -> HLIL, each with SSA | per-level translation + analysis | LLIL "folds flags into conditional instructions"; arch declares flag producers/consumers | MLIL builds typed call sites from platform info | MLIL turns registers/memory into variables | HLIL | from HLIL |
| angr | AIL | per-block simplification (const fold, copy prop, dead assignment, peephole) then per-function (expression folding, local-variable unification, call folding) | in simplification | calling-convention analysis | "unifying local variables" | pluggable: DREAM, Phoenix, SAILR | from structured AIL |
| RetDec / Rellic | LLVM IR | LLVM optimizer | LLVM | LLVM-level | LLVM values | Rellic: pattern-independent (DREAM-style), Z3 condition simplification | Clang AST |

Common pattern: flags disappear at the lowest level; local cleanup runs before call analysis;
variables are formed in one stage before structuring; all semantics are finished before printing;
a small number of general mechanisms (rule engine / fixpoint) do the work.

Structuring state of the art: DREAM (NDSS 2015) removes all gotos via condition duplication;
SAILR (USENIX Security 2024) shows most gotos come from specific compiler optimizations
(jump threading, tail duplication/cross-jumping, switch lowering) and undoes those first,
giving output closer to source. unlace's `-O2` gotos are exactly these cases.

Sources: Ghidra source in `research/decompiled-references/Ghidra/Ghidra/Features/Decompiler/src/decompile/cpp/`
(`coreaction.cc` `universalAction`, `ruleaction.cc`, `heritage.cc`, `merge.cc`, `fspec.cc`, `blockaction.cc`, `printc.cc`);
https://hex-rays.com/blog/hex-rays-microcode-api-vs-obfuscating-compiler ;
https://docs.binary.ninja/dev/bnil-overview.html ; https://docs.binary.ninja/dev/flags.html ;
https://docs.angr.io/en/latest/analyses/decompiler.html ;
https://www.usenix.org/conference/usenixsecurity24/presentation/basque (SAILR) ;
https://github.com/lifting-bits/rellic ; https://github.com/avast/retdec ; https://github.com/fkie-cad/dewolf .

## Target architecture

### 1. Explicit stages, enforced by types

```
load -> discover -> lift
     -> Normalize   (flag folding, local rules, dead code)
     -> Calls       (prototype recovery: args, returns, spoiled regs, callee-saved spills)
     -> Global      (propagation, rules to fixpoint, stack/memory SSA extension)
     -> Variables   (SSA merge into variables, stack slots, naming)
     -> Structure   (SAILR-style deoptimization, then region structuring)
     -> Tree        (C-tree cleanups: casts, expression shape, helper macros)
     -> Print       (tokens only)
```

Each stage is a phase marker type (e.g. `Function<Normalized>`), so a pass cannot run at the wrong stage and
the pipeline order is compiler-checked. `pipeline.rs` shrinks to stage orchestration.

### 2. One rule engine

A Ghidra-style engine in `unlace-passes`:

- `Rule`: small local rewrite on one op (match on opcode, rewrite in place via the def-use graph).
- `RulePool`: worklist of changed ops; applies all rules for that opcode until no change.
- `Action`: whole-function step (dead code, heritage/SSA extension, prototype trial, merge).
- Groups with fixpoint semantics (`repeat until no change`, with a work budget from config).
- Rules are registered by stage; every rule has a unit test on IR text and is visible in traces.

Existing peephole passes (`algebraic_simplify`, `condition_simplify`, `strength_reduce`, `idiom_recognition`,
`const_fold`, ...) become rule sets. Unused modules are either converted into rules/actions that measurably help,
or deleted (prune-or-wire).

### 3. Flags

Lifters declare flag producers and consumers (Binary Ninja's model). Normalize folds
"flag-setting op + flag consumer" into comparisons (`a < b`, `a == b`, signed/unsigned) and generic
def-use dead code removes every flag nobody reads. Target: zero flag variables in output on the corpus.

### 4. Calls and prototypes

Data-driven `ProtoModel` per ABI (SysV x86-64, Win64, AAPCS64 first): parameter registers/stack, return
registers, callee-saved and spoiled sets. Trial-based recovery after Normalize: a register is a parameter if
read before written on some path and allowed by the model; a return if defined at exit and used by callers.
Callee-saved save/restore pairs are recognized and removed. Interprocedural fixpoint over the call graph.

### 5. Variables

Variables are formed from SSA values by interference-based merging (Ghidra `merge.cc`, Hex-Rays LVARS), plus
stack slots recovered from SP-relative accesses before propagation erases them. Naming (`a1..`, `v1..`,
`result`, debug-info names) happens here, not in the printer.

### 6. Structuring

Before region structuring, undo compiler transformations that create gotos (SAILR): jump threading,
tail-block duplication / cross-jumping, switch lowering. Then structure regions; condition-based
refinement only where needed. Target: `medium` gotos < 10 with no semantic regressions.

### 7. Tree and printer

Structuring produces a C tree (`CExpr`/statements). Tree cleanups run on the tree. The printer prints tokens:
no string rewriting, no liveness, no dead-assignment removal. Everything in `c_printer/postprocess` and the
text-rewrite functions moves to rules/actions in earlier stages, then is deleted. The always-emitted helper
prelude (SIMD/atomic helpers) is emitted only when referenced.

### 8. Configuration and tracing

All limits/options in typed per-crate option structs loaded from `unlace.toml` (wave 0 `config-tracing`).
Traces via `tracing` targets per stage/rule and `RUST_LOG`. No `UNLACE_*` env vars.

### 9. Lifting (decision pending)

Option: lift via Ghidra SLEIGH processor specs through a Rust SLEIGH runtime instead of ~40 hand-written lifters
(1,051 `Unimplemented`/`Callother` placeholders today). Decision after `crates-survey` reports; until then
x86-64 and AArch64 hand lifters stay and get flag producer/consumer metadata.

## Measurement

The 15 small goldens cannot show `-O2` problems. Add a real-world corpus: small C programs and selected
real tools with source, built with gcc and clang at `-O2` for x86-64 (and AArch64 via cross toolchain when
available), stripped and unstripped. Metrics per function, tracked in `cargo xtask gate`:

- flag variables in output (target 0)
- prototype arity mismatch vs DWARF of the unstripped build
- gotos, empty blocks, dead assignments, leaked temporaries
- recompile-and-run equivalence where the program is self-contained

Every wave-1 change reports before/after on this corpus plus the existing gates.

## Work tracks

| Track | Content | Depends on |
|---|---|---|
| corpus-gate | real -O2 corpus + metrics in `xtask gate` | wave 0 `speed` (xtask gate) |
| rule-engine | stage types, Rule/RulePool/Action engine, convert peephole passes | none (additive), pipeline wiring after `config-tracing` |
| flags | lifter flag producers/consumers (x86-64, AArch64), Normalize folding, DCE | rule-engine API |
| calls | ProtoModel, trial-based args/returns, callee-saved removal, interprocedural | rule-engine API |
| structuring | SAILR-style deoptimization + region structuring | none |
| variables | SSA merge, stack slots, naming moved out of printer | rule-engine, calls |
| printer | move postprocess/text rewrites into rules, delete; prelude on demand | flags, variables |
| prune-or-wire | 88 unused pass modules: convert if measured win, else delete | rule-engine |

Gates for every merge: semantic-report all pass, goldens reviewed, type recall 100% and precision not lower,
corpus metrics not worse, clippy/fmt/determinism clean.
