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
