# Decompiler IR landscape and where this engine sits

Every decompiler has the same broad pipeline. The big design decision is the middle: one IR
rewritten in place until nothing changes (Ghidra, and so this engine), or a ladder of IRs, each its
own layer (Binary Ninja, Hex-Rays, angr). That choice is why `kuna_decomp` is one big cycle today.
The plan that follows from it is in `notes/crate-architecture.md`.

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
loader (kuna-analysis here; Ghidra's Java side)
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
  other. That is the ~300k-line cycle measured in `notes/crate-architecture.md`, and why the plan
  keeps P3–P6 together as one `bandb` crate: it is a single fixpoint by design.

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
today (Ghidra-style, one crate, one cycle)
└─ kuna_decomp 479k
   ├─ substrate (IR) ⇄ p4 calls ⇄ p5 types ⇄ p6 vars ⇄ p3 dataflow   ← one fixpoint
   ├─ infra (scheduler) ⇄ every phase
   └─ p9 emit, p8 structure, p2 lift (mostly downstream, with some back-edges)

target (rustc_middle + providers / Hex-Rays maturity style)
└─ *-middle      IR + types + prototype model + options registry + hooks   (like rustc_middle)
   ├─ *-lift          P1–P2   (SLEIGH p-code → Funcdata)
   ├─ *-bandb         P3–P6   the fixpoint stays one crate, as the algorithm intends
   │  └─ *-emit       P9
   └─ *-structure     P7–P8
*-decomp = driver: schedule, option dispatch, fills the hooks table; facade re-exports
```

- The real boundaries are lifting (in), structuring and emitting (out), and the IR underneath. The
  middle fixpoint is one unit by design; splitting it further fights the algorithm.
- Binary Ninja splits that middle only because it lowers through separate IR levels. This engine
  does not, and Ghidra's ruleset assumes it does not.
- Hex-Rays' maturity levels are the idea to borrow inside `bandb` later: mark what each phase has
  settled, so later passes can rely on it.
