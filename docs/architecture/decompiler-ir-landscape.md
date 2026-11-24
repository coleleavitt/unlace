# Decompiler IR landscape and where this engine sits

Every decompiler has the same broad pipeline. The big design decision is the middle: one IR
rewritten in place until nothing changes (Ghidra, and so this engine), or a ladder of IRs, each its
own layer (Binary Ninja, Hex-Rays, angr). That choice is why `unlace_decomp` was one big cycle,
and why the split that followed (`notes/crate-architecture.md`, section 8) kept the middle fixpoint
in one crate.

## The common pipeline

```
binary
└─ loader            formats, sections, symbols, relocations, debug info, imports
   └─ disassembler / lifter       per-architecture: machine code → IR
      └─ IR (CFG + instructions)
         └─ analysis              SSA, propagation, dead code, calls / calling convention,
            │                     stack frame, types, variables
            └─ structuring        regions → if / loop / switch, goto removal
               └─ emitter         AST → C text, names, casts
```

## Ghidra, and this engine (one IR, rewritten to a fixpoint)

Sources: [Ghidra decompiler docs](https://grant-h.github.io/docs/ghidra/decompiler/index.html),
[SLEIGH](https://ghidra.re/ghidra_docs/languages/html/sleigh.html).

```
loader (unlace-analysis here; Ghidra's Java side)
└─ SLEIGH spec (.slaspec → .sla) ─ per-architecture, data not code
   └─ raw p-code                  one IR for everything
      └─ Funcdata                 the same objects mutated until done
         ├─ heritage (SSA)
         ├─ Action / Rule pool    hundreds of rules, re-run until nothing changes
         │   (calls, types, propagation, variables interleave here;
         │    the "Band B" P3–P6 fixpoint)
         ├─ merge → HighVariables
         └─ block structuring (CollapseStructure)
            └─ PrintC
```

- The good: lifting is pure data (SLEIGH), so new architectures are cheap. One IR keeps the rules
  simple and composable.
- The cost: every rule can touch everything, so types, calls, dataflow and variables depend on each
  other. That was the ~300k-line cycle measured in `notes/crate-architecture.md`, and why the split
  keeps P3–P6's cyclic core together as one crate: it is a single fixpoint by design. Step 10 measured
  the cycle inside P3–P6: 81 modules (116k lines, all four phases) form it; the other 168 modules
  below it or unrelated to it moved to `unlace-bandb-base`, the cycle to `unlace-bandb-core`, and the 59
  modules above it stayed in `unlace-bandb`, without inverting an edge.

## Binary Ninja (a ladder of IRs)

Sources: [LLIL](https://docs.binary.ninja/dev/bnil-llil.html),
[MLIL](https://docs.binary.ninja/dev/bnil-mlil.html),
[BNIL series](https://binary.ninja/2017/04/17/BNIL-Series-Part-1.html).

```
Architecture plugin (per arch, code)
└─ Lifted IL
   └─ LLIL ── LLIL SSA            registers, flags, memory
      └─ MLIL ── MLIL SSA         variables, calls with arguments, stack resolved
         └─ HLIL ── HLIL SSA      structured control flow, expressions folded
            └─ Pseudo-C / Pseudo-Rust / ...
```

Each level has fixed meaning and its own API. Analyses at one level only consume the level below,
so the layering is a real boundary.

## Hex-Rays (one IR with maturity levels, then a separate AST)

Sources: [microcode docs](https://docs.hex-rays.com/core/decompiler/how-tos/microcode-view),
[Elastic's internals write-up](https://www.elastic.co/security-labs/threat-command/introduction-to-hexrays-decompilation-internals),
[microcode vs obfuscation](https://hex-rays.com/blog/hex-rays-microcode-api-vs-obfuscating-compiler).

```
processor module
└─ microcode at MMAT_GENERATED   looks like assembly
   └─ PREOPTIMIZED → LOCOPT       local optimisation
      └─ CALLS                   calls and arguments resolved
         └─ GLBOPT1..3           global optimisation, loops
            └─ LVARS             local variables allocated
               └─ ctree (a C AST, its own maturity levels)   structuring, cleanup
                  └─ pseudocode
```

One data structure, but its maturity only increases, so each pass knows what is already settled: a
middle ground between Ghidra's free-for-all fixpoint and Binary Ninja's separate IRs.

The ctree is the second idea: C-level cleanups are rewrites of a syntax tree built after
structuring, not edits of the IR or decisions taken while printing. The plan to add one between
`unlace-structure` and `unlace-emit` is `docs/architecture/ctree.md`.

## angr (lift, then a decompiler IR)

Sources: [Clinic pipeline](https://deepwiki.com/angr/angr/6.3-clinic:-ail-transformation-pipeline),
[decompiler pipeline (SAILR fork)](https://deepwiki.com/mahaloz/angr-sailr/5.1-decompiler-pipeline-and-clinic),
[Clinic API](https://docs.angr.io/en/v10.0.1/api/angr.analyses.decompiler.clinic.html).

```
CLE (loader)
└─ pyvex (VEX IR)  or  pypcode (Ghidra p-code)     lifting
   └─ Clinic: VEX → AIL (angr IL)
      ├─ simplifications, calling conventions, stack, variable recovery, types
      └─ RegionIdentifier
         └─ structurer (Phoenix / DREAM / SAILR)
            └─ StructuredCodeGenerator → C
```

## rev.ng (built on LLVM)

Sources: [what is rev.ng](https://docs.rev.ng/what-is-revng/),
[artifacts](https://docs.rev.ng/references/artifacts/),
[CGO paper](https://dl.acm.org/doi/10.1145/3033019.3033028).

```
lifting via QEMU's TCG → LLVM IR (whole binary)
└─ CFG / function recovery
   └─ one LLVM module per function ("clean IR")
      └─ LLVM passes + rev.ng passes
         └─ C backend
```

It reuses a compiler's IR and pass manager.

## What this means for the split

```
before the split (Ghidra-style, one crate, one cycle)
└─ unlace_decomp 479k
   ├─ substrate (IR) ⇄ p4 calls ⇄ p5 types ⇄ p6 vars ⇄ p3 dataflow   ← one fixpoint
   ├─ infra (scheduler) ⇄ every phase
   └─ p9 emit, p8 structure, p2 lift (mostly downstream, with some back-edges)

now (rustc_middle + providers style; lines of src/*.rs incl. in-tree tests, 2026-11-23)
└─ unlace-middle     168k  IR, types, prototype model, Architecture, option registry,
   │                       FuncState/ArchStates slots, UnlaceHooks table   (like rustc_middle)
   ├─ unlace-lift          43k   P1–P2   (SLEIGH p-code → Funcdata)
   ├─ unlace-structure     29k   P7–P8
   ├─ unlace-bandb-base    84k   P3–P6   the modules outside the fixpoint's cycle (step 10)
   ├─ unlace-bandb-core  116k   P3–P6   the cyclic core stays one crate, as the algorithm intends
   ├─ unlace-bandb        49k   P3–P6   the passes above the core
   └─ unlace-emit          74k   P9
unlace-decomp            18k   driver: schedule, option dispatch, fills the hooks table; facade
                               re-exports the crates below it
```

- The real boundaries are lifting (in), structuring and emitting (out), and the IR underneath. The
  middle fixpoint is one unit by design; splitting its cycle fights the algorithm, while the acyclic
  modules around it split off for free.
- Binary Ninja splits that middle only because it lowers through separate IR levels. This engine
  does not, and Ghidra's ruleset assumes it does not.
- Hex-Rays' maturity levels are borrowed as a record, not a new IR: each function carries how far
  the scheduler has got through the current pass (`raw` … `band-b` … `complete`), and passes ask
  whether a fact is settled instead of reading ad-hoc flags. Because the middle is one fixpoint
  that restarts, a level only rises within a pass and drops back to `raw` on a restart
  (`docs/spec/00-overview.md` §0.10; `unlace-middle`'s `unlace_maturity`, marked by the driver's
  schedule).
