# Research: Where unlace Is Missing vs IDA/Hex-Rays (2026-05)

Literature synthesis on decompiler quality gaps, gathered via web + academic
search. Every section maps a published finding to the unlace backlog item it
informs (see `CLAUDE.md` "What Is Still Missing"). Use this to prioritize, not
as proof of current unlace behavior — verify with commands before acting.

## Headline reframe: "parity" is three different axes

Published decompiler evaluations consistently separate three quality axes that
our single fixture parity score conflates:

1. **Stylistic similarity** — does the output *look* like IDA (macros, `_QWORD`,
   `aN`/`vN`, `__fastcall`)? This is what `scripts/score_parity.sh` measures.
2. **Semantic correctness** — does it *recompile and behave identically*?
   (Liu & Wang, ISSTA'20, "How far we have come"; Cao et al., ISSTA'24.)
3. **Type/variable recovery accuracy** — are variables, types, structs, arrays
   recovered correctly vs DWARF ground truth? (Soni et al., SURE'25.)

We score well on axis 1. Axes 2 and 3 are unmeasured in our harness. **This is
the single biggest gap: we have no semantic-correctness or ground-truth type
metric.** (Backlog #3, #4.)

## Hard numbers: even Hex-Rays is far from "solved"

Soni, Dutcher, Bao, Wang — *Benchmarking Binary Type Inference Techniques in
Decompilers* (SURE'25, ACM 10.1145/3733822.3764675). Five tools (Hex-Rays 9.0,
Binary Ninja, Ghidra, angr, Ghidra-Retypd) vs DWARF ground truth on 170 Nixpkgs
C packages at -O0/-O2. Local PDF: `~/Downloads/3733822.3764675.pdf`.

Metrics: variable **coverage** = |Vargt ∩ Vardec| / |Vargt|; **accuracy** =
correct types / ground-truth; **precision** = correct / decompiler-reported.

Key results (Hex-Rays = best overall):

| Metric | Hex-Rays -O0 | Hex-Rays -O2 | Notes |
|---|---|---|---|
| Variable coverage | >50% | >75% | angr comparable; others lower |
| Type inference accuracy | **35.69%** | **49.74%** | best of all five tools |
| Type inference precision | 54.92% | 21.85% | Ghidra 40.6% / 11.9% |
| Struct identification | **20.25%** | 17.08% | angr/Retypd only 2.5–4.5% |
| Array (correct base+length) | low | low | ~43% found but **most lengths wrong** |
| Pointer size inference | ~97% | ~92% | size easy; **target type hard** |

**Takeaways that set realistic targets for unlace:**

- The bar for "IDA-parity on types" is **~36% variable-type accuracy at -O0**,
  not 100%. Modest absolute numbers are competitive. (Backlog #3, #11, #12.)
- **Structs are unsolved industry-wide** — even Hex-Rays only names ~20% of
  structs; angr/Retypd are near-zero. Our emitter support (`COVERAGE.md`) is
  necessary but the *producer-side* recovery is where everyone is weak.
  Shipping decent struct recovery would be genuinely competitive. (Backlog #8.)
- **Arrays: detecting the access pattern is easy, inferring length is the hard
  part.** Most tools get the base right and the length wrong. (Backlog #8.)
- **Pointer target-type** resolution (not pointer-vs-int, which is also hard, but
  *what it points to*) is a distinct, hard sub-problem requiring dereference +
  pointer-arithmetic analysis. (Backlog #6, #12.)
- Optimization level matters enormously; -O2 frame-pointer omission breaks stack
  recovery (they used `-fno-omit-frame-pointer` to even measure). Our fixtures
  should record their `-O` level. (Backlog #9.)

## Type inference — algorithms to study (Backlog #11, #12)

- **TIE** (Lee, Avgerinos, Brumley, NDSS'11) — principled lattice-based type
  reconstruction; the canonical baseline. Our `type_solver.rs` lattice is in
  this family. Worth re-reading for upper/lower bound handling.
- **Retypd** (Noonan, Loginov, Cok, PLDI'16) — polymorphic/constraint type
  inference for machine code; subtyping constraints, type schemes. Open source
  (GrammaTech). The SURE'25 study shows the *plugin* underperforms, but the
  algorithm's subtyping/poly ideas are the reference design. Our constraint
  solver could adopt its constraint-simplification approach.
- **BinSub** (Smith, 2024, arXiv 2409.01841) — "the simple essence of polymorphic
  type inference for machine code"; a cleaner, faster reformulation of Retypd.
  **Best modern starting point** for a principled rewrite of our type solver.
- **OSPREY** (Zhang et al., S&P'21) — probabilistic struct/variable recovery from
  *stripped* binaries; uses a probabilistic constraint model over access
  patterns. Directly relevant to struct/array recovery (Backlog #8).
- **TyGr** (Zhu et al., USENIX'24) — GNN-based type inference on stripped
  binaries. Learning-based; relevant if we ever add ML.
- **STRIDE / TypeFSL / CATI** — lighter-weight type recognition (few-shot,
  inter-procedural data flow, context-assisted). Cheaper to implement than full
  constraint solving; could be a pragmatic first pass.
- **ReSym** (Xie et al., CCS'24) — LLMs to recover variable + data-structure
  symbols from stripped binaries; pairs symbol recovery with type recovery.

## Variable naming — we have nothing here (Backlog #10, #13)

IDA names `a1/v1/result`; high-quality output needs *meaningful* names. State of
the art is learning-based and would be a distinct, high-visibility feature:

- **DIRE** (Lacomis et al., ASE'19) — AST + GGNN model to predict variable names.
- **DIRTY** (Chen et al., 2022) — transformer that retypes *and* renames decompiler
  variables jointly; strong baseline.
- **VarBERT** (Pal et al., IEEE S&P'24) — BERT with transfer learning to predict
  variable names in decompiler output; current SOTA on naming. PDF:
  sefcom.asu.edu/publications/varbert-oakland24.pdf.
- Our current `a1/v1` scheme is the *floor*. Even rule-based heuristic naming
  (idiom-derived: `len`, `i`, `buf`, `result`, `this`) would beat raw `vN` and is
  achievable without ML. (Backlog #10.)

## Control-flow structuring — the goto problem (Backlog #15)

- **DREAM** (Yakdan et al., NDSS'15) — *pattern-independent* structuring; produces
  **zero gotos** and more compact code than Hex-Rays (72.7% of functions smaller).
  Key idea: don't rely on a fixed schema (if/while templates) — use a semantics-
  preserving condition-based approach so any reducible region structures without
  gotos. Our `structurer.rs` is schema-based; this is the algorithm to study if
  goto count is a problem on the broad corpus.
- **SAILR** (Basque et al., USENIX'24) — *compiler-aware* structuring. Core
  finding: most decompiler control-flow divergence (spurious gotos, inverted
  conditions, duplicated tails) is an artifact of **undoing specific compiler
  optimizations** (e.g. `goto`-to-`break` from loop rotation, `&&`/`||` short-
  circuit lowering). They introduce targeted de-optimization passes + a
  `goto-equivalence` metric. **This validates our "post-processing passes over
  core structurer" rule in CLAUDE.md** and gives a concrete list of passes:
  condition de-duplication, short-circuit recovery, loop-rotation reversal.
- **dewolf** (Engel et al., NDSS-BAR'23) — readability-driven structuring informed
  by user surveys; expression simplification + variable declaration placement.
  Source of concrete readability heuristics. (Backlog #16.)
- **Phoenix** (Schwartz et al.) — semantics-preserving structural analysis; the
  classic predecessor to DREAM, uses iterative refinement + tail regions.

## Readability + fidelity metrics — adopt these (Backlog #3, #4, #17)

We need real metrics. Published, reusable ones:

- **R2I — Relative Readability Index** (recent) — a *relative* readability metric
  for decompiled code; comparative rather than absolute. Good fit for "is our
  output more readable than baseline X".
- **"A Taxonomy of C Decompiler Fidelity Issues"** (Dramko, Lacomis, Schwartz,
  Vasilescu, Le Goues, USENIX'24) — a structured taxonomy of *every* way
  decompiled C diverges from source (control flow, types, names, expressions,
  declarations). **This is effectively a ready-made checklist of metric
  categories** — we should turn its taxonomy into fixture counters. Highest-value
  single read for Backlog #3/#4/#17.
- **DecompileBench** (Tan et al., 2025, arXiv 2505.12668) — million-scale
  binary↔source function-pair benchmark; six commercial + six LLM decompilers.
  A corpus + harness we could borrow methodology from for full-corpus parity.
- **Liu & Wang** (ISSTA'20) — recompile-and-compare semantic-equivalence testing.
  The canonical correctness metric: recompile our output, diff behavior vs the
  original binary. (Backlog #4.)
- **Cao et al.** (ISSTA'24) — semantic consistency + readability; notes decompiled
  C still "resembles compiler-generated patterns rather than human-written code"
  even in mature tools — a caution that stylistic parity ≠ readability.
- **Kline & Kulkarni** (ICISSP'23) — framework for assessing decompiler inference
  accuracy of source-level constructs (functions, variables, types) vs ground
  truth. Methodology for a DWARF-based accuracy harness.

## LLM-based decompilation — the new frontier (context, lower priority)

- **LLM4Decompile** (Tan et al., EMNLP'24, arXiv 2403.05286) — first large
  open-source decompiler LLM series (1.3B–33B); introduces **Decompile-Eval**
  (re-executability rate as the metric). Shows end-to-end neural decompilation is
  viable and that **re-executability is the metric that matters**, not text
  similarity. Strategic context: traditional pipelines (us) win on
  determinism/scale; LLMs win on readability/naming. A hybrid (our pipeline +
  LLM naming/commenting post-pass) is the likely frontier.

## Library/runtime recognition (Backlog #13)

- IDA's edge on real binaries is heavily **FLIRT** (Fast Library Identification
  and Recognition Technology) — pattern signatures that name libc/CRT/compiler-
  runtime functions in stripped binaries. We have `unlace-flirt`; the gap is
  signature *coverage* and confidence-scored naming. No single paper; this is an
  engineering/data problem (build/import signature sets for libc, MSVCRT, glibc
  startup, `__stack_chk_fail`, `__cxa_*`).

## Concrete, prioritized recommendations for unlace

Ordered by value-per-effort, grounded in the findings above:

1. **Add a semantic-correctness gate** (recompile-and-run, à la Liu & Wang).
   Highest value: it is the metric the field treats as ground truth and we have
   none. Even a handful of recompilable fixtures would be a real signal. (#4)
2. **Adopt the Dramko fidelity taxonomy as fixture counters.** Turn its categories
   into concrete metrics so "parity" stops being a single conflated number. (#3)
3. **Heuristic variable naming** (idiom-derived `len`/`i`/`buf`/`result`/`this`)
   before any ML. Cheap, high readability payoff, beats raw `vN`. (#10)
4. **SAILR-style de-optimization passes** as post-processing over the structurer:
   short-circuit recovery, loop-rotation reversal, condition de-duplication.
   Matches our CLAUDE.md "post-processing not core structurer" rule. (#15)
5. **Array length inference** — detecting the access pattern is the easy half we
   may already do; inferring length is where even IDA fails, so partial wins are
   competitive. (#8)
6. **Re-found the type solver on BinSub's formulation** if/when we invest in type
   depth; it's the cleanest modern constraint design. (#11, #12)
7. **Record `-O` level per fixture** and add at least one -O2 fixture; -O0-only
   measurement hides the stack/frame-pointer recovery gaps that dominate real
   binaries. (#9)

## Primary sources (for follow-up reading)

- Soni et al., SURE'25 — type inference benchmark — `~/Downloads/3733822.3764675.pdf`
- Dramko et al., USENIX'24 — C decompiler fidelity taxonomy
- Basque et al., USENIX'24 — SAILR compiler-aware structuring
- Yakdan et al., NDSS'15 — DREAM pattern-independent structuring
- Lee et al., NDSS'11 — TIE; Noonan et al., PLDI'16 — Retypd; Smith 2024 — BinSub
- Zhang et al., S&P'21 — OSPREY (struct recovery); Zhu et al., USENIX'24 — TyGr
- Pal et al., S&P'24 — VarBERT; Chen et al. 2022 — DIRTY; Lacomis et al. ASE'19 — DIRE
- Xie et al., CCS'24 — ReSym; Tan et al., EMNLP'24 — LLM4Decompile + Decompile-Eval
- Tan et al., 2025 — DecompileBench (arXiv 2505.12668)
- Liu & Wang, ISSTA'20; Cao et al., ISSTA'24; Kline & Kulkarni, ICISSP'23

---

## Part 2: Deep-dive on remaining recovery gaps (2026-05-27)

Expanded research on the specific gaps blocking medium/stripped/debug_templates
fixture convergence and broader output quality.

### 1. Optimized loop recovery (medium/stripped XFAIL timeout)

**The problem:** Compiler-optimized loops (loop rotation, unswitching, unrolling,
LICM, induction variable strength-reduction) produce CFGs that don't match any
simple while/for template. Our structurer either infinite-loops trying to match
or produces goto-heavy output.

**Binary Ninja 4.1's approach (2024-06):**
A blog post from Vector 35 describes their complete rewrite of control-flow
recovery. Key ideas directly applicable to unlace:

1. **Graph transformation primitives** — instead of pattern-matching templates:
   - `&&`/`||` transformation: merge nested conditionals into compound conditions
   - **Condition duplication**: duplicate condition nodes to eliminate multi-entry
   - **Code duplication**: duplicate code blocks (undo compiler tail-merging)
   - **Sub-region resolution**: recursively resolve single-entry/single-exit regions
   - **Jump-table transformation**: recognize unreachable-default + bounds-check
   - **Merge adjacent code nodes**: simplify after transforms
   - **Goto insertion as last resort** (always terminates, always sound)

2. **Condition complexity explosion** is the failure mode of condition-graph
   resolution — exponential conditions when the compiler deduplicated code paths.
   BN's new approach avoids this by selectively applying duplication vs goto.

3. **Test suite**: they generate random CFGs (simple/complex control, data flow,
   simple/complex loops, simple/complex switch) as AArch64 machine code, then
   compare execution results against HLIL interpreter. Their old algorithm: 41%
   accuracy on complex loops → new: **99.8%**. Complex switch: 45% → **100%**.

**SAILR's approach (USENIX'24):**
Rather than generic structuring, SAILR identifies *specific compiler
optimizations* and reverses them:

- **ISD (Implicit Subgraph Duplication)** — e.g. Jump Threading. GCC duplicates
  a subgraph when reaching conditions overlap. SAILR finds storage-equivalent
  statement pairs, expands match via BFS + KMP, merges them back, re-applies
  conditions. This directly undoes the gotos Jump Threading introduces.
- **ISC (Implicit Subgraph Condensing)** — e.g. Cross Jumping. GCC merges
  semantically-equivalent tails (e.g. multiple `return -1;`) into one block +
  gotos. SAILR duplicates the condensed block back to each predecessor. Special
  case: stack-canary exit regions (if + return + `__stack_chk_fail`) — copy
  entire exit cluster.
- **Switch Lowering reversion** — binary decision trees from switch statements:
  identify `a == c` cascading conditions in a single region, merge into switch
  node. Also handles switch clustering (multiple disjoint sub-switches).
- **Short-circuit Boolean recovery** — GCC transforms `&&`/`||` into control-flow
  at Gimple level. SAILR adds graph schemas to recognize and re-fold them.
- **Comma-separated multi-statement expressions** — loop conditions with side
  effects; only Hex-Rays handles this among current tools.
- **Common-condition while-loop exits** — when a while-loop contains a branch
  with both successors being inversions (`c` and `!c`), replace with if + break.
- **Non-returning function detection** — missing `noreturn` attributes cause
  spurious successor edges that make structurable code appear irreducible.

**Loop rotation reversal (the specific -O2 problem):**
GCC's `-O2` applies loop rotation: transforms `while(cond) { body }` into
`if(cond) { do { body } while(cond) }`. This is a well-known decompiler pain
point. The fix is a post-structuring pass:
1. Detect `if(C) { do { body } while(C) }` where C is the same condition
2. Collapse back to `while(C) { body }`
Our `recover_for_loops` in `refinement.rs` does part of this, but only for
for-loop patterns — need a generic while-rotation reversal pass.

**Actionable for unlace:**
- Add a **timeout/fuel limit** to `structure_region` so it can't infinite-loop
  (this fixes the XFAIL hang immediately)
- Add **condition duplication** and **code duplication** transforms as
  alternatives to goto insertion
- Add **loop rotation reversal** as a refinement pass
- Add **ISC reversal** (duplicate condensed exit blocks — especially stack-canary
  patterns which we already detect in `prologue_elim.rs`)
- Add **non-returning function detection** pre-pass (we have `attributor.rs` —
  wire its `noreturn` findings into the CFG before structuring)

### 2. C++ SRET / aggregate return recovery (debug_templates XFAIL)

**The problem:** When a C++ function returns a struct by value, the System V
AMD64 ABI passes a hidden pointer in RDI (the "sret" parameter). The callee
writes the return value through this pointer, and RAX holds the pointer on
return. Decompilers that don't recognize this pattern show raw pointer
dereferences instead of a clean return expression.

**How it works in practice:**
```c
// Source:
MyStruct foo() { return {1, 2, 3}; }

// What the compiler actually generates (pseudo-C ABI lowering):
MyStruct* foo(MyStruct* __sret_hidden) {
    __sret_hidden->a = 1;
    __sret_hidden->b = 2;
    __sret_hidden->c = 3;
    return __sret_hidden;  // RAX = RDI
}
```

**IDA's approach:**
- Detects `__sret` via function prototype / type info (if available from
  DWARF/PDB/TIL)
- If no debug info: heuristic — first arg is a pointer, callee writes through
  it, RAX == RDI on return → mark as sret
- Renders as: `MyStruct result = foo();` rather than showing the hidden pointer

**Classification rules (System V AMD64, §3.2.3):**
- Struct ≤ 16 bytes, all members INTEGER/SSE class → returned in RAX(:RDX)/XMM0(:XMM1)
- Struct > 16 bytes OR has MEMORY-class member → caller allocates, passes
  hidden pointer in RDI (shifted, real args start at RSI), callee returns RDI in RAX

**What unlace needs:**
1. In `calling_conv.rs`: detect when first arg is a pointer that is:
   - Written to (multiple stores through it) in the function body
   - Returned in RAX (RAX == first-arg at every return)
   - Not read from before the first write (rules out input pointer)
2. Mark the function signature with `sret` attribute
3. In the printer: when calling an sret function, emit
   `MyStruct var = func(real_args)` and suppress the hidden pointer arg
4. In the callee body: emit `return (MyStruct){.a=1, .b=2, .c=3}` instead of
   individual pointer writes + `return __sret_hidden`

**Also applies to:** Win64 (hidden pointer in RCX when struct > 8 bytes or
non-trivially-copyable), ARM64 (X8 register for sret), and `__thiscall` where
ECX/RCX holds `this`.

### 3. Expression recovery / cross-statement folding (Backlog #6)

**The problem:** IDA's output reads like:
```c
result = (unsigned int)(v3 + 4 * v2);
```
Ours reads like:
```c
t1 = v2 << 2;
t2 = v3 + t1;
result = (unsigned int)t2;
```
The difference is **expression propagation** — folding single-use temporaries
into the expressions that consume them.

**IDA's pipeline (from session research):**
- `MMAT_PREOPTIMIZED`: initial expression propagation (`sub_17D8C0`)
- `MMAT_LOCOPT`: combiner/peephole (`sub_B36D0`/`sub_B5190`/`sub_B5460`)
- `MMAT_GLBOPT1-3`: global propagation (`sub_181F80`), 64-bit demotion
- `MMAT_LVARS`: variable allocation + interference-based coalescing
- Each level runs multiple sub-passes in a fixed-point loop

**dewolf's approach (NDSS-BAR'23):**
- **Expression propagation**: after SSA analysis, propagate single-definition
  single-use variables into their use site (standard compiler-like
  propagation). Key rule: only propagate if the definition has exactly one use
  (or the expression is side-effect-free and cheap).
- **Subexpression elimination**: after propagation, find duplicate
  subexpressions and introduce a named variable for them (reverse of
  propagation — used for readability when the expression appears 2+ times).
- **Redundant cast elimination**: nested casts from register sub-access
  (`(int)(short)(char)x` where all are widening) → keep only the outermost.
- **Constant representation**: infer hex vs decimal vs char vs address based on
  context (comparison with known constants, string ops, etc.).
- **Graph-coloring Out-of-SSA**: key for reducing leaked SSA temps. Build
  interference graph from liveness, color it, group same-color vars under one
  name. This is exactly what we need for our LVAR allocation gap.

**Binary Ninja's expression folding:**
From their documentation: "Expression Folding — folds a single-use assignment
into the expression that uses it." This is a standard HLIL pass applied after
type propagation.

**What unlace needs (ordered):**
1. **Single-use temp propagation** — for each `tN = expr` where tN has exactly
   one use, substitute expr at the use site and delete the assignment. We have
   `propagate_copies` and `propagate_copies_ssa` but they're limited to
   `Assign(var, var)` — need to generalize to `Assign(var, arbitrary_expr)`.
2. **Multi-use subexpression extraction** — after propagation, any expression
   appearing 2+ times gets a named temp (readability).
3. **Cast simplification** — collapse nested casts: `(T1)(T2)x` where T1 is
   wider → just `(T1)x`. Remove identity casts.
4. **Interference-graph-based variable coalescing** in out-of-SSA (our
   `coalesce_ssa_vars` is a simple heuristic — needs real liveness +
   interference graph à la dewolf).
5. **Cross-statement folding** — after structuring, walk HIR: any `HirStmt::Expr`
   that is just `var = expr` where var has one use in the next statement → fold.

### 4. Variable naming (Backlog #10)

**Academic state of the art:**
- **DIRE** (ASE'19) — uses AST structure (GGNN over decompiled code AST) to
  predict names. ~44.9% exact-match accuracy on their test set.
- **DIRTY** (USENIX'22) — transformer that jointly predicts names + types from
  decompiler output. Trains on source↔decompiled pairs from open-source code.
- **VarBERT** (S&P'24) — BERT with constrained masked language modeling.
  Current SOTA: ~52.8% exact-match. Key insight: decompiled code is
  structurally similar enough to source that transfer learning works.

**Practical heuristic naming (no ML, high value):**
IDA uses simple rules that cover ~80% of the perceived naming quality:
- `result` — variable that is returned (RAX at return site)
- `a1, a2, ...` — function parameters in ABI order
- `v1, v2, ...` — local variables (stack/register allocated)
- `i, j, k` — loop induction variables (detected by for-loop recovery)
- `this` — first arg of `__thiscall` functions
- `buf, src, dst, len, n, s` — from known libc call sites:
  `memcpy(dst, src, n)`, `strlen(s)`, `malloc(n)`, etc.
- `ptr` — variables that are used exclusively in dereference expressions

**What unlace can do cheaply (no ML):**
1. Name `result` for returned variables (detect RAX at return)
2. Name `aN` for detected parameters (already done partially)
3. Name `vN` for locals with stable scope (already done)
4. Name induction variables `i`/`j`/`k` in for-loops
5. Propagate names from known libc prototypes to arguments at call sites
6. Name `this` for first arg of functions with vtable dispatch patterns

### 5. Struct/field/array recovery (Backlog #8)

**OSPREY (IEEE S&P'21):**
The definitive paper on probabilistic struct recovery from stripped binaries.
Key technique:

1. **Access pattern collection** — for each base pointer, collect all
   (offset, size, operation_type) tuples from loads/stores through it
2. **Probabilistic constraint model** — assign confidence to each access being
   a field access vs coincidental pointer arithmetic:
   - High confidence: consistent offset, consistent size, multiple access sites
   - Low confidence: single access, variable offset, mixed sizes
3. **Constraint propagation** — propagate struct shapes interprocedurally:
   if `foo(ptr)` accesses `ptr+0`, `ptr+8`, `ptr+16` and `bar(ptr)` accesses
   `ptr+0`, `ptr+4` → the struct has fields at 0, 4, 8, 16 (overlap resolved
   probabilistically)
4. **Type lattice unification** — join field types across all access sites
5. **Result:** named struct layout with typed fields + confidence scores

OSPREY achieves **74% precision, 70% recall** on variable recovery and
significantly outperforms IDA/Ghidra on struct identification in stripped
binaries.

**dewolf array detection:**
- Find `*(base + offset)` patterns where offset is `index * stride`
- Verify consistent stride across all accesses through the same base
- Emit `base[index]` syntax
- Discard candidates without consistent array size

**What unlace needs:**
1. **Stack struct detector** — in `stack_analysis.rs`, group adjacent stack slots
   that are always accessed through the same base (RBP/RSP + offset range) →
   emit as struct fields
2. **Heap struct propagation** — when a `malloc(N)` result is accessed at
   consistent offsets, create a struct type with fields at those offsets
3. **Array stride detection** — when offset = `var * constant`, emit as array
   access (`base[var]`) instead of `*(base + var * 8)`
4. **Interprocedural propagation** — if function A passes a pointer to function
   B, and B accesses fields, propagate the struct type back to A's variable

### Summary: specific fixes for the three XFAILs

| XFAIL | Root cause | Fix |
|---|---|---|
| medium | structurer timeout on -O2 loop rotation | fuel limit + loop-rotation reversal pass |
| stripped | same as medium (same binary, stripped) | same fix benefits both |
| debug_templates | C++ sret not detected → raw pointer writes | sret detection in calling_conv + printer rendering |

### Additional sources found

- Binary Ninja blog (2024-06): https://binary.ninja/2024/06/19/restructuring-the-decompiler.html
- SAILR eval code: https://github.com/mahaloz/sailr-eval
- dewolf code: https://github.com/fkie-cad/dewolf
- "A Comb for Decompiled C Code" (rev.ng, 2022) — code duplication approach
- CMU reports: http://reports-archive.adm.cs.cmu.edu/anon/s3d2023/CMU-S3D-23-103.pdf
  (variable naming annotation)
- Decompilation Wiki: https://decompilation.wiki/ (Zion Basque et al.)
- DIRTY code/model: https://github.com/CMUSTRUDEL/DIRTY
- VarBERT: https://sefcom.asu.edu/publications/varbert-oakland24.pdf
