# Unlace Philosophy

## Stop Staring at the Assembly

If you're manually translating opcodes to understand a function, you're working at the wrong layer.

A decompiler exists to lift that burden. The goal is not to produce *some* output — it's to produce output so clear that you forget you're looking at recovered code.

Unlace is built on a simple premise: **decompilation should be as readable as the original source, when enough information exists to make it so**.

## The Real Product Is Understanding

Unlace is not a hex dump viewer with syntax highlighting.

The real product is:
- understanding what a function does
- finding the bug in a crash dump
- auditing code you don't have source for
- comparing a patch to the vulnerable version
- teaching how compilers transform code

The C output is evidence of that understanding. If the output doesn't help a human reason about the binary, the decompiler has failed — regardless of how "correct" the semantics are.

## Design Principles

### 1. Determinism Is Sacred

Same input. Same output. Every time.

A decompiler that produces different output on different runs is:
- impossible to test reliably
- impossible to diff between versions
- impossible to trust in production pipelines

Unlace uses ordered collections, stable iteration, and reproducible algorithms. Non-determinism is a bug, not a feature.

### 2. Measure Before You Claim

Every quality assertion must have a verification command.

"We handle switch statements" means nothing without:
```bash
cargo run -p xtask -- switch-coverage
```

"Type recovery is good" means nothing without:
```bash
cargo run -p xtask -- type-recovery-report
```

Claims without measurements are wishes. Unlace maintains executable truth: tests, lints, quality reports, and golden fixtures that verify behavior.

**Important:** Our metrics measure actual quality, not IDA similarity. Semantic correctness (does the C compile and run correctly?) matters more than stylistic similarity. Type recovery recall/precision matters more than "looks like Hex-Rays output." When unlace produces *better* output than IDA — fewer gotos, cleaner types, better names — that's the goal, not a deviation to fix.

### 3. Honest About Gaps

When unlace doesn't understand something, it says so:
```c
/* unsupported: AVX-512 VPERMT2D */
```

Silent data loss is worse than a visible comment. A reverse engineer can work around a known gap. They cannot recover from silently wrong output.

### 4. Structure Over String Surgery

Decompiler output emerges from many layers:
- lifter produces IR
- passes optimize IR
- structurer builds HIR
- printer emits C

Quality improvements belong at the right layer:
- Expression folding? IR passes.
- Goto reduction? Structurer.
- Macro emission? Printer with semantic nodes.

Late string rewrites (regex on emitted C) are fragile, untestable, and wrong. The AST/IR should carry the information; the printer should be dumb.

### 5. Debug Info First

Stripped binaries are hard mode. They should not be the primary optimization target.

When PDB/DWARF exists, unlace should:
- recover every type the compiler recorded
- name every variable the source named
- preserve every function signature

Stripping metadata is a lossy operation. We can't recover what doesn't exist. But we should never lose information that *does* exist.

### 6. Narrow Before Broad

One architecture done well beats ten architectures done poorly.

x86_64 with:
- complete AVX-512
- perfect switch recovery
- zero unnecessary gotos
- full PDB type recovery

...is more valuable than:
- 20 architectures with 60% opcode coverage
- switch recovery that works sometimes
- gotos everywhere
- partial debug info

Depth creates trust. Breadth without depth creates doubt.

### 7. The Compiler Is Not Adversarial

Most binaries come from standard compilers: GCC, Clang, MSVC.

These compilers have predictable patterns:
- known calling conventions
- known prologue/epilogue shapes
- known optimization idioms
- known debug info formats

A decompiler should exploit this predictability. Pattern libraries, FLIRT signatures, and compiler-specific recovery are features, not hacks.

Obfuscated/packed/adversarial binaries are a different problem, but they are not
out of scope. Handle the common compiler case well first; then treat packers,
protectors, import rebuilders, API hashing, string encryption, opaque predicates,
and control-flow flattening as explicit support tiers with measurements. A
binary that has UPX remnants, Scylla-rebuilt imports, or damaged sections should
produce evidence-backed loader facts or an honest unsupported marker, not a vague
failure.

### 8. Substrate Is Not Support

A crate, parser, lifter, or API shim is not support by itself.

Support requires:
- a user-facing path that reaches the code
- corpus evidence that the path works outside tiny fixtures
- visible unsupported markers when semantics are missing
- a status row that says exactly how mature the feature is

`unlace-debugger`, `unlace-idapython`, `unlace-lumina`, `unlace-emu`, and the
long-tail lifters are foundations. The roadmap should describe their remaining
depth, wiring, and evidence gaps, not pretend the foundations are absent.

### 9. Compatibility Is an Adoption Surface

Unlace does not need to copy IDA's UI to benefit from IDA compatibility.

The headless compatibility surfaces matter because they let existing workflows
move over gradually:
- IDAPython scripts should run when they only need database, bytes, functions,
  names, xrefs, and decompiler access.
- MCP should expose CLI-first, read-only agent workflows over the stable SDK,
  with mutation gated by explicit capability and provenance.
- Hex-Rays-style ctree and microcode hooks should expose useful decompiler
  facts without freezing unlace into IDA's internal design.
- Lumina-style signatures and annotations should be deterministic, private by
  default, and conflict-aware.
- Plugin and SDK APIs should wrap stable unlace concepts, as described in
  `docs/sdk.md`, not raw implementation internals that will churn.

Compatibility is a bridge. The destination is cleaner, measured analysis.

Unlace is headless; there is no UI frontend. The preferred path is
CLI, SDK, MCP, and scriptability first.

### 10. AI Assists; Evidence Decides

LLMs and agents can accelerate reverse engineering: packer identification,
function naming, string/API-hash triage, malware capability summaries, and
explanations of why a decompilation failed. They do not replace the decompiler.

The deterministic pipeline remains authoritative. Model output must be opt-in,
provenance-tagged, reproducible from saved evidence where possible, and treated
as a proposed fact until loader/IR/debugger/emulator/corpus evidence accepts it.
Provider API keys are user runtime configuration, never roadmap content, project
state, or report output.

### 11. Manual Guidance Is Not Failure

A decompiler should recover as much as it can automatically, but expert input is
part of real reverse engineering.

Force type, split variable, map variable, force call signature, manual switch,
and injected assertion operations are not hacks. They are user-supplied facts.
They should flow through the same typed annotation and validation machinery as
debug info, signatures, and recovered facts.

### 12. Corpus Truth Beats Fixture Comfort

Golden fixtures catch regressions. They do not prove broad parity.

The IDA reference dump under `research/decompiled-references/ida/` is the right
scale for roadmap truth: hundreds of thousands of decompiled functions, real
helper macros, real gotos, real SIMD names, real local-variable conventions, and
real long-tail weirdness. A feature is not finished until it is measured against
the corpus it claims to cover.

## What Unlace Is Not

### Not a Disassembler

Disassemblers show you the instructions. Unlace shows you what the instructions *mean*.

Linear disassembly is a solved problem. We use Capstone. The interesting work is what happens after.

### Not Debugger-First

Debuggers let you watch execution. Unlace lets you understand without executing.

Static analysis scales. Dynamic analysis reveals runtime state. Both matter.
Unlace remains decompiler-first, but debugger, emulator, trace, and coverage
inputs are legitimate evidence sources when they improve static understanding.

### Not a Verification Tool

Unlace output is not proven equivalent to the binary. It's a human-readable approximation.

Formal verification of decompilation is an open research problem. Unlace is a practical tool, not a theorem prover.

### Not IDA

IDA is a 30-year product with millions of hours of usage, a commercial support team, and a massive user base.

Unlace is not trying to replicate IDA's UI, plugin ecosystem, or market position. The goal is to *exceed* IDA's decompilation quality — the thing that actually matters for understanding code.

IDA is the baseline, not the ceiling. When unlace recovers better types, produces cleaner control flow, or eliminates more dead code than Hex-Rays, that's the goal working. Parity metrics measure how often unlace meets or exceeds IDA, not how closely it matches IDA's stylistic choices.

## The Three Layers

### 1. Recovery (IR + Passes)

This is where semantics live:
- what values flow where
- what types exist
- what stack frame shape emerged
- what calling convention applies

Recovery transforms raw bytes into meaning. It's the hardest layer and the most important.

### 2. Structure (CFG → HIR)

This is where readability lives:
- loops instead of backward jumps
- if/else instead of conditional gotos
- switch instead of jump tables
- try/catch instead of exception tables

Structure transforms meaning into shape. A correct but unreadable decompilation has failed.

### 3. Presentation (Printer)

This is where conventions live:
- variable naming
- indentation
- macro style
- comment placement

Presentation transforms shape into text. It should be boring. All the interesting work happened upstream.

## On Agent-Assisted Development

Unlace is developed with significant AI assistance.

This changes the economics of development:
- broad refactors become cheap
- test coverage becomes essential (agents make mistakes)
- documentation becomes code (agents read it)
- measurement becomes mandatory (agents can't taste quality)

The human role shifts from typing to:
- architectural direction
- quality judgment
- edge case identification
- taste

An agent can write a thousand lines of lifter code. A human still has to decide which lifter to write, whether the output looks right, and when to stop.

## What Still Requires Humans

### Taste

"This output is ugly" is a human judgment. Metrics can detect gotos. They can't detect awkwardness.

### Architecture

"This should be three crates, not one" is a human judgment. Agents can refactor. They can't decide *whether* to refactor.

### Priority

"Switch recovery matters more than MIPS DSP" is a human judgment. Agents can execute either. They can't decide which serves users better.

### Trust

Users trust tools maintained by people they can hold accountable. Agents are tools, not maintainers.

## Summary

Unlace exists to make binary analysis accessible.

The philosophy is simple:
1. Produce readable output
2. Be honest about limitations
3. Measure everything that matters
4. Fix problems at the right layer
5. Treat substrate as unfinished until wired and measured
6. Prioritize depth over breadth

The rest is execution.
