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
   short-circuit recovery, loop-rotation reversal, condition de-duplication,
   safe tail duplication, and switch/condition normalization are now wired into
   the default pipeline. Further work should target measured gaps in specific
   SAILR schemas. (#15)
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

Expanded research on the specific gaps blocking `medium`/`stripped` fixture
convergence and broader output quality. `debug_templates` has since moved from
XFAIL to PASS in `xtask semantic-report`.

### 1. Optimized loop recovery (medium/stripped XFAIL timeout)

**The problem:** Compiler-optimized loops (loop rotation, unswitching,
unrolling, LICM, induction variable strength-reduction) produce CFGs that don't
match any simple while/for template. The current failure is concrete: generated
C for optimized `main` now materializes more loop seed assignments, but still
loses loop-carried lvar/phi state and x86 subregister state in loop bodies
(`eax`/`rax` style aliases), so the recompiled subset times out.

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
The default cleanup pipeline now includes a generic exact-match while-rotation
reversal pass in addition to the existing for-loop recovery.

**Actionable for unlace:**
- Add a **timeout/fuel limit** to `structure_region` so it can't infinite-loop
  (this fixes the XFAIL hang immediately)
- Extend **condition duplication** and **code duplication** transforms only for
  measured fixture gaps beyond the default cleanup pipeline
- Extend **loop rotation reversal** only for non-exact measured patterns
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

### Summary: specific fixes for the remaining XFAILs

| XFAIL | Root cause | Fix |
|---|---|---|
| medium | optimized `main` loses loop-carried lvar/phi and x86 subregister state in loop bodies | lvar/phi coalescing that materializes initial values and loop-carried updates, plus subregister-aware expression recovery |
| stripped | same optimized-main recovery bug under stripped symbols | same fix benefits both |
| debug_templates | fixed: C++ template helper subset now recompiles and behavior-matches | keep semantic PASS covered by `xtask semantic-report` |

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


---

## Part 3: Register aliasing, partial-register SSA, and lvar recovery (2026-05-27)

This is the core technical gap blocking correct variable recovery in unlace.
The problem: x86-64 has hierarchically overlapping registers (RAX ⊃ EAX ⊃ AX ⊃
{AH, AL}), and a 32-bit write implicitly zero-extends into the 64-bit parent.
Our SSA construction treats each (space, offset, size) tuple as an independent
variable, so `rax:8` and `eax:4` become separate SSA names with no semantic
connection. This breaks data flow, type propagation, and variable recovery.

### The problem in detail (unlace-specific)

Current state in `crates/unlace-lift-x86/src/register_file.rs:819`:
- RAX → (offset=0, size=8)
- EAX → (offset=0, size=4)
- AX → (offset=0, size=2)
- AL → (offset=0, size=1)
- AH → (offset=1, size=1)

In `crates/unlace-ir/src/ssa.rs:1760`, SSA keys by exact `(space, offset, size)`.
So a write to EAX and a subsequent read of RAX are **disconnected** — no
def-use chain, no data flow. This is semantically wrong on x86-64 where
`mov eax, 5` implicitly sets `rax = 5` (zero-extends upper 32 bits).

### Van Emmerik's solution (Boomerang decompiler, PhD 2007)

The canonical reference: "Static Single Assignment for Decompilation" (PhD thesis,
U. Queensland, 2007). Chapter 3.7 "Overlapped Registers":

**Core principle:** Treat overlapped registers as separate IR variables, but make
the side-effects explicit at decode time. After any assignment to an overlapped
register, the decoder emits assignments representing the aliasing effects:

**Four cases for x86 (eax/ax/al/ah):**

1. After `eax := expr`:
   - `ax := truncate(eax)`
   - `al := truncate(eax)`
   - `ah := eax@[8:15]`

2. After `ax := expr`:
   - `eax := (eax & 0xFFFF0000) | zext(ax)`
   - `al := truncate(ax)`
   - `ah := ax@[8:15]`

3. After `al := expr`:
   - `eax := (eax & 0xFFFFFF00) | zext(al)`
   - `ax := (ax & 0xFF00) | zext(al)`

4. After `ah := expr`:
   - `eax := (eax & 0xFFFF00FF) | (zext(ah) << 8)`
   - `ax := (ax & 0x00FF) | (zext(ah) << 8)`

**Key insight:** Dead code elimination removes almost all of these. Where `al` and
`ah` are used as independent variables, the parent `ax`/`eax`/`rax` assignments
are dead and get eliminated. Where the complex manipulations survive, the
original source genuinely performed those operations.

**x86-64 extension:** On x86-64, a 32-bit write to EAX implicitly zero-extends
to RAX. So the rule becomes:

After `eax := expr`:
- `rax := zext32_to_64(eax)`  ← this is the critical one
- `ax := truncate(eax)`
- `al := truncate(eax)`
- `ah := eax@[8:15]`

After `rax := expr`:
- `eax := truncate(rax)`
- `ax := truncate(rax)`
- `al := truncate(rax)`
- `ah := rax@[8:15]`

16-bit and 8-bit writes do NOT zero-extend on x86-64 (only 32-bit does):

After `ax := expr`:
- `rax := (rax & 0xFFFFFFFFFFFF0000) | zext(ax)`
- (etc.)

### Ghidra's pcode approach

Ghidra uses SUBPIECE and INT_ZEXT p-code ops to model this:
- A write to a sub-register emits `COPY` to the sub-register varnode, then
  `INT_ZEXT` or `PIECE`/`SUBPIECE` to connect to the parent varnode
- SSA is constructed over the resulting p-code, where the aliasing is already
  explicit in the IR
- The decompiler later **merges** varnodes that are proven to be parts of the
  same high-level variable (the "merge" phase after type propagation)

### Hex-Rays lvar model (from indexed SDK)

From `research/ida-hexrays-docs/sdk/include/hexrays.hpp:2387`:
- `lvar_ref_t` only exists after `MMAT_LVARS` maturity
- It carries `mba` (microcode block array) + `idx` (lvar index) + `off` (byte
  offset within the lvar)
- This means sub-pieces of locals are represented as **byte-range references
  into a recovered variable**, not as independent SSA names
- The key architectural difference: Hex-Rays first recovers full-width variables
  (via microcode optimization + GLBOPT stages), then references sub-pieces by
  offset within the lvar — our approach tries to version sub-pieces independently
  and then coalesce later, which is architecturally backwards

### LLVM's sub-register liveness model

From LLVM's `lib/CodeGen/RegisterCoalescer.cpp`:
- LLVM tracks **lane masks** — each sub-register has a bitmask identifying which
  lanes of the super-register it covers
- `LiveRange` has `subranges` — sub-register-granularity liveness tracked
  separately when needed
- The `RegisterCoalescer` handles aliased copies by checking whether the copy
  source/dest lane masks overlap and whether the interference is only on
  certain sub-ranges
- Key concept: **partial defs** — a write to a sub-register is a partial def of
  the super-register, requiring special handling in liveness (the super-register
  is not fully killed)

### Colibri: coalescing algorithm for aliased registers (UFMG, 2009)

Pereira & Palsberg's "Coalescing Algorithm for Aliased Registers":
- Models register aliasing as a **hierarchy**: RAX at level 3, EAX at level 2,
  AX at level 1, AL/AH at level 0
- The interference graph has both regular edges (conflict) and **alias edges**
  (same physical storage, different widths)
- Coalescing decision: two variables can share a register only if:
  1. They don't interfere (standard Chaitin condition)
  2. Their combined width fits the alias hierarchy (e.g., two 32-bit values
     can't both live in the same 64-bit register at the same time unless one
     dominates the other)
- The approach adapts Bouchez et al.'s optimistic/conservative coalescing to
  handle hierarchical aliasing
- NP-complete in general (Lee et al., ICALP'07), but practical heuristics work
  well

### Puzzle-solving formulation (Pereira & Palsberg, PLDI'08)

- Models register allocation as a puzzle: each register is a "board" with slots
  of different sizes, each variable is a "piece" that must fit
- For x86: RAX is a board with slots {RAX:64, EAX:32, AX:16, AH:8, AL:8}
- Constraint: pieces cannot overlap in time (liveness) or space (physical bits)
- Polynomial-time solvable for fixed-depth hierarchies (which x86 is)
- Directly applicable to decompiler lvar allocation: instead of allocating
  registers, we're allocating variable names to overlapping live ranges

### What unlace needs: a concrete implementation plan

**Phase 1: Explicit aliasing in the lifter (immediate fix)**

In `crates/unlace-lift-x86/src/lift.rs`, after each register write:

```rust
// After a 32-bit write (e.g., `mov eax, expr`):
// Emit: rax := zext32_to_64(eax)
emit(IrOp::ZExt, dst=rax_var, src=eax_var);
// Emit: ax := truncate16(eax)  [optional, only if ax is live]
// Emit: al := truncate8(eax)   [optional, only if al is live]

// After a 16-bit write (e.g., `mov ax, expr`):
// Emit: rax := (rax & ~0xFFFF) | zext(ax)
emit(IrOp::Compose, dst=rax_var, hi=rax_upper, lo=ax_var);

// After an 8-bit write to AL:
// Emit: rax := (rax & ~0xFF) | zext(al)
emit(IrOp::Compose, dst=rax_var, hi=rax_upper, lo=al_var);
```

The IR needs two new ops (or reuse existing):
- `IrOp::ZExt { from_bits, to_bits }` — zero-extend
- `IrOp::SubPiece { offset, size }` — extract byte range (like Ghidra SUBPIECE)
- `IrOp::Compose` — combine high/low parts (like Ghidra PIECE)

**Phase 2: Dead code elimination cleans up**

After explicit aliasing, most of the auxiliary assignments will be dead (the
original source only used one width). Our existing `eliminate_dead_code_ssa`
will remove them. The ones that survive represent genuine partial-register
operations in the source.

**Phase 3: Canonical-width SSA**

After DCE, introduce a normalization pass:
- For each register family (RAX/EAX/AX/AL/AH), determine the "canonical width"
  actually used in the function (typically 64-bit for x86-64)
- Replace remaining sub-register references with explicit zext/truncate of the
  canonical variable
- SSA then versions the canonical-width variable, and sub-accesses become
  expressions on it

**Phase 4: Lvar allocation (matches Hex-Rays model)**

After SSA optimization and before structuring:
1. Build interference graph over canonical variables
2. Apply graph-coloring coalescing (Hack & Goos, or Bouchez et al.)
3. Merge non-interfering SSA names that originated from the same register family
4. Name the result: `v1` (64-bit use of RAX), or if only 32-bit is ever used,
   declare as `int v1` (32-bit) and suppress the zext

**Alternative approach: pre-SSA canonicalization (simpler, recommended first)**

Before SSA construction:
1. In the lifter, always emit writes to the full 64-bit register
2. For `mov eax, X`: emit `rax := zext32(X)`
3. For `mov ax, X`: emit `rax := (rax & ~0xFFFF) | zext16(X)`
4. For `mov al, X`: emit `rax := (rax & ~0xFF) | zext8(X)`
5. For reads of sub-registers: emit `eax := trunc32(rax)` as needed

This means SSA only ever versions `rax`, never `eax`/`ax`/`al`/`ah` directly.
Sub-register reads become explicit truncation expressions. This is simpler to
implement and avoids the need for post-SSA coalescing of aliases entirely.

**Tradeoff:** The pre-SSA approach produces more verbose IR initially (lots of
mask-and-or operations) but DCE + expression simplification will eliminate most
of them. It also makes the "two independent 8-bit variables in AL and AH" case
slightly harder to recover (requires detecting that the high/low halves are
independent after SSA — but this is rare in x86-64 code).

### Summary: recommended implementation order

1. **Pre-SSA canonicalization** (Phase 4 alternative above) — simplest, highest
   value, directly fixes the register aliasing bug. All register writes target
   the 64-bit parent; reads of sub-registers become explicit truncations.
2. **Add ZExt/SubPiece/Compose IR ops** if not already present (check current
   `IrOp` enum — we may already have these or equivalent).
3. **Expression simplification** to clean up the verbose patterns:
   - `trunc32(zext32(x))` → `x`
   - `(x & ~0xFF) | (x & 0xFF)` → `x`
   - `zext32(trunc32(x))` → `x` when upper bits are known zero
4. **Type-driven width selection** in the printer: if a variable is only ever
   used at 32-bit width, declare as `int` not `__int64`.

### Sources

- Van Emmerik, M.J. "Static Single Assignment for Decompilation" PhD thesis,
  U. Queensland, 2007. Ch. 3.7 "Overlapped Registers". PDF: yurichev.com/mirrors/vanEmmerik_ssa.pdf
- Pereira, F.M.Q. & Palsberg, J. "Register Allocation by Puzzle Solving"
  PLDI'08. PDF: llvm.org/pubs/2008-06-PLDI-PuzzleSolving.pdf
- Pereira et al. "A Coalescing Algorithm for Aliased Registers" UFMG 2009.
  PDF: homepages.dcc.ufmg.br/~fernando/publications/papers/Colibri2009.pdf
- Lee, J.K., Palsberg, J., Pereira, F.M.Q. "Aliased Register Allocation"
  ICALP'07.
- LLVM RegisterCoalescer: llvm.org/doxygen/RegisterCoalescer_8cpp_source.html
- Hex-Rays SDK: hexrays.hpp lvar_ref_t (MMAT_LVARS model)
- Ghidra p-code: SUBPIECE/INT_ZEXT/PIECE ops for sub-register modeling

## Part 4: Deep-read addendum on register aliasing/type papers (2026-05-27)

This is the reconciled read of the local/public papers and code references used
for Part 3. The key correction is that these sources are not all arguing for the
same implementation layer:

- **Van Emmerik / Ghidra / iced** are directly relevant to lifter semantics.
- **LLVM / GCC** are compiler back-end models for live ranges, lanes, modes, and
  register classes.
- **Puzzle Solving / Colibri** are allocation/coalescing models; useful for the
  later lvar allocator, not the first fix for decompiler SSA.
- **Soni et al.** is the right evaluation harness for type/variable recovery, but
  it explicitly excludes register-allocated variables, so it would not by itself
  catch the `eax`/`rax`/`al` bug fixed here.

### Soni et al. SURE'25: what the benchmark actually measures

Soni, Dutcher, Bao, and Wang evaluate five decompilers against DWARF ground truth
on Nixpkgs C binaries compiled at `-O0` and `-O2`. The metrics are:

- **Coverage:** recovered ground-truth variables, regardless of type.
- **Accuracy:** recovered ground-truth variables with correct type.
- **Precision:** decompiler-reported variables that are real and correctly typed.
- **False positive rate:** reported variables not present in ground truth.

Important limitation for our register-alias work: their ground truth identifies a
variable by stack-frame offset and explicitly excludes register-allocated variables
and static variables. That makes the paper excellent for stack/lvar/type scoring,
but incomplete for partial-register SSA bugs. We need both:

1. Soni-style DWARF/type/lvar scoring for stack locals, structs, arrays, pointers.
2. ISA-specific semantic fixtures for register aliasing, flags, SIMD lanes, calls,
   and ABI clobbers.

The hard numbers still matter for priorities:

- Hex-Rays leads the evaluated tools, but overall variable type accuracy is only
  **35.69% at `-O0`** and **49.74% at `-O2`**.
- Hex-Rays precision drops from **54.92% at `-O0`** to **21.85% at `-O2`**.
- Pointer target resolution remains weak: Hex-Rays resolves **19.24%** at `-O0`
  and **40.59%** at `-O2`.
- Struct identification remains weak even for Hex-Rays: **20.25%** at `-O0`,
  **17.08%** at `-O2`.
- Array base-type recognition is often possible, but array length is commonly
  wrong.

Implication for unlace: stylistic IDA parity is not enough. The real gate should
track `coverage / accuracy / precision / FPR` separately, plus type-specific
rows for primitive, pointer, array, struct, and typedef cases.

### Van Emmerik 2007: decompiler-side SSA, not compiler allocation

Van Emmerik's Chapter 3.7 is the direct ancestor of the Part 3 fix. The thesis
rejects two tempting models:

- Treating `eax`, `ax`, `al`, and `ah` as independent IR variables is wrong,
  because it loses architectural aliasing.
- Treating everything as one physical register is also wrong, because `al` and
  `ah` can carry genuinely independent 8-bit source variables.

The proposed Boomerang solution is to keep overlapped registers as separate
locations but emit explicit side-effect assignments at decode time. For example:

- `eax := x` implies `ax := trunc(eax)`, `al := trunc(eax)`, and `ah := eax[8:15]`.
- `ax := x` implies `eax := (eax & 0xFFFF0000) | ax`, plus `al`/`ah` side effects.
- `al := x` and `ah := x` imply masked updates of `eax` and `ax`.

Dead code elimination then removes almost all auxiliary side effects. The complex
ones that survive are evidence that the source really used sub-field operations.

Our implemented approach is the simpler variant already described in Part 3:
**pre-SSA canonicalization to the full GPR parent**. That is not exactly
Boomerang's representation, but it applies the same core lesson at an earlier
boundary:

- `eax` writes become `rax := zext32(x)`.
- `ax`/`al`/`ah` writes become masked updates of `rax`.
- sub-register reads become `SUBPIECE(rax, offset)`.
- SSA versions `rax`, not independent `eax`/`ax`/`al` names.

This is the right first implementation for x86-64 because it prevents the
incorrect split before SSA. The tradeoff is delayed recovery of the rare
independent `al`/`ah` local-variable case; that belongs in the later lvar
allocator as lane splitting, not in the raw lifter.

Van Emmerik's broader message is still not done:

- **Collectors:** snapshot reaching definitions and live variables at calls and
  returns during SSA renaming. These support call bypassing, caller/callee
  context translation, argument discovery, result discovery, and childless calls.
- **Preservation analysis:** decide which registers/memory locations a call
  preserves, including recursive and indirect calls.
- **Sparse type analysis:** store type variables on SSA definitions/constants and
  solve over a lattice; addition/subtraction need special pointer-or-int logic.
- **Indirect jump/call restart:** delay switch/vcall analysis until propagation is
  strong enough, then restart affected function analysis when new CFG edges are
  discovered.
- **Value + alias analysis:** required for pointer targets, aggregate offsets,
  escaped locals, colocated variables, VFT resolution, and function pointers.

### iced: the local decoder already knows the missing facts

`iced-x86` has exactly the metadata the lifter should lean on:

- `Register::info()` gives `RegisterInfo`.
- `RegisterInfo::{base, number, full_register, full_register32, size}` describe
  the register family and width.
- `InstructionInfoFactory::info()` exposes used registers and operand access
  modes through `UsedRegister` and `OpAccess`.
- `InstructionInfoFactory::add_register()` already models the critical 64-bit
  rule: in 64-bit mode, 32-bit GPR writes are promoted to the 64-bit full
  register; read-write operations are represented as a read of the original
  register plus a write of the promoted register.

What is now wired in unlace:

- `X86RegView` wraps iced metadata for GPRs.
- `LiftCtx::read_register()` emits `SUBPIECE(parent, byte_offset)` for GPR
  sub-register reads.
- `LiftCtx::write_register()` emits:
  - full-width copy for `rax`;
  - `INT_ZEXT` into `rax` for `eax`;
  - mask/shift/or update into `rax` for `ax`, `al`, `ah`.
- MOV/CMOV/LEA/XCHG and key special register writes are routed through this
  central helper.
- `RIP` was moved out of the APX `R16` slot, so `R16` and `RIP` no longer alias.

Remaining iced-derived gaps:

- Vector zeroing semantics are not solved by the GPR-only `X86RegView`.
  VEX/EVEX instructions can zero upper vector lanes; iced's `ZERO_EXT_VEC_REGS`
  path models this. unlace should add a vector-lane version of the same
  canonicalization for XMM/YMM/ZMM.
- Future iced APX support should extend `X86RegView` from 16 GPRs to 32 GPRs.
  unlace already reserves `R16..R31`, but the current iced metadata table does
  not expose those registers in this checkout.
- Flag/status sub-fields should stay as explicit bit registers unless we decide
  to model a packed RFLAGS parent; current separate flag vars are acceptable for
  decompiler output.

### Ghidra p-code: same shape, different names

Ghidra-style p-code represents sub-register effects with explicit operators:

- `SUBPIECE(parent, offset)` for extracting byte ranges.
- `INT_ZEXT` for 32-bit-to-64-bit GPR write semantics.
- `PIECE`/composition for rebuilding wider values when needed.

unlace now uses equivalent semantics for GPRs with existing IR ops:
`Subpiece`, `IntZext`, `IntAnd`, `IntLeft`, and `IntOr`. A separate `Compose`
operator is still optional; the current lowered mask/or form is explicit and
optimizable.

### LLVM/GCC: useful for later, but not the first decompiler fix

LLVM's `RegisterCoalescer` is the right reference for later lvar/lane allocation:

- `LiveInterval` subranges track lane-specific liveness.
- `LaneBitmask` records which subregister lanes are affected.
- `mergeSubRangeInto()` and `joinSubRegRanges()` split and join subregister live
  ranges when coalescing copies.
- `setUndefOnPrunedSubRegUses()` handles pruned lanes after dead subrange
  segments are removed.

That model belongs after lifter canonicalization, when unlace decides whether two
SSA values can become one user-visible lvar or whether a wide register should be
split into lane variables.

GCC's model says the same thing in RTL/back-end terms:

- `hard_regno_nregs(regno, mode)` tells how many hard registers a mode occupies.
- `subreg_get_info()` computes whether a subreg view is representable and where
  it lands.
- `function_abi` distinguishes full register clobbers from partial clobbers, so a
  call can destroy upper bits while preserving lower bits.

These are valuable references for an eventual ABI/liveness layer, not a reason to
put exact-width `eax` SSA names back into the lifter.

### Puzzle Solving and Colibri: lvar coalescing, not lifter semantics

Pereira/Palsberg's Puzzle Solving paper models the register file as a puzzle board
and variables as pieces. Register aliasing and pre-coloring fit naturally; for x86
the register file is a hybrid of type-0 and type-1 puzzles. This is a compiler
allocation algorithm over live ranges.

Colibri focuses on coalescing for aliased registers. Its useful takeaways:

- x86 register aliasing is hierarchical: `EAX -> AX -> AH/AL`, with other
  families having fewer split levels.
- Aliasing-aware coalescing can remove more copies than an alias-oblivious
  coalescer.
- Global coalescing is hard; local/specialized cases are tractable.

For unlace, these papers are the design source for a later **lvar allocator**:

1. Build an interference graph over optimized SSA values.
2. Add alias/lane metadata from their original physical register family.
3. Coalesce non-interfering values into one C local when it improves output.
4. Split lanes (`al` vs `ah`, XMM lanes, bitfields) only when the surviving uses
   prove they are independent.

They are not the right first step for the original bug, because post-SSA
coalescing cannot reliably recover semantics already lost by exact-width SSA.

### Updated implementation status

Done for the GPR aliasing bug:

- GPR sub-register reads/writes are canonicalized before SSA.
- 32-bit GPR writes zero-extend to the 64-bit parent.
- 8-/16-bit GPR writes update the full parent with masks.
- direct MOV/CMOV/LEA/XCHG-style writes route through the central helper.
- `R16`/`RIP` register-space collision is fixed.
- regression tests cover `eax`, `ax`, `al`, `ah`, call-return use, and APX slot
  separation.

Still real follow-up work:

1. Add vector upper-lane zeroing and sub-lane tests using iced `InstructionInfo`.
2. Add collector-like call snapshots if current call-argument recovery cannot
   express Van Emmerik's def/use collector cases.
3. Add partial-call-clobber modeling: full clobber vs partial clobber vs preserved.
4. Add lvar lane splitting/coalescing after SSA optimization, borrowing LLVM lane
   masks / Colibri hierarchy ideas.
5. Extend the Soni-style evaluator with a separate register-alias semantic suite,
   because DWARF stack-offset scoring will not catch register-only alias bugs.
