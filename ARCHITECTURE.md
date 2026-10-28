# Unlace Architecture

This document maps the unlace decompiler architecture using mermaid diagrams.
Generated 2026-06-27 from the current crate structure.

## Crate Dependency Graph (Core Pipeline)

```mermaid
flowchart TB
    subgraph CLI["CLI Layer"]
        cli[unlace-cli]
        session[unlace-session]
    end

    subgraph Output["Output Layer"]
        output[unlace-output]
    end

    subgraph Analysis["Analysis Layer"]
        struct[unlace-struct]
        passes[unlace-passes]
    end

    subgraph Core["Core IR"]
        ir[unlace-ir]
    end

    subgraph Lifting["Lifting Layer"]
        lift[unlace-lift]
        subgraph Lifters["Architecture Lifters"]
            x86[unlace-lift-x86]
            arm[unlace-lift-arm]
            mips[unlace-lift-mips]
            riscv[unlace-lift-riscv]
            ppc[unlace-lift-ppc]
            others[...30+ more]
        end
    end

    subgraph Loading["Loading Layer"]
        loader[unlace-loader]
        flirt[unlace-flirt]
        capstone[unlace-capstone]
        packer[packer/obfuscator analysis]
    end

    subgraph Integration["Integration Layer"]
        debugger[unlace-debugger]
        emu[unlace-emu]
        lumina[unlace-lumina]
        plugin[unlace-plugin]
        mcp[unlace-mcp]
        ai[AI-assisted analysis]
    end

    cli --> output
    cli --> struct
    cli --> passes
    cli --> lift
    cli --> loader
    cli --> session

    output --> struct
    output --> ir
    mcp --> cli

    struct --> ir
    passes --> ir

    lift --> ir
    lift --> loader
    lift --> capstone
    x86 --> lift
    arm --> lift
    mips --> lift
    riscv --> lift
    ppc --> lift
    others --> lift

    loader --> ir
    packer --> loader
    packer --> ir
    flirt --> loader

    debugger --> ir
    debugger --> loader
    emu --> ir
    lumina --> ir
    plugin --> ir
    ai --> loader
    ai --> ir
    ai --> output
```

## Decompilation Pipeline Flow

```mermaid
flowchart LR
    subgraph Input
        binary[Binary File]
    end

    subgraph Load["1. Load"]
        parse[Parse Format]
        packer_id[Packer/obfuscator ID]
        recover[Unpack/rebuild evidence]
        sections[Extract Sections]
        symbols[Load Symbols]
        debug[Parse Debug Info]
    end

    subgraph Lift["2. Lift"]
        decode[Decode Instructions]
        semantics[Generate IR Semantics]
        cfg[Build CFG]
    end

    subgraph Transform["3. Transform"]
        ssa[SSA Construction]
        prop[Propagation Passes]
        dce[Dead Code Elimination]
        type_recovery[Type Recovery]
        stack[Stack Frame Recovery]
        calling[Calling Convention]
    end

    subgraph Structure["4. Structure"]
        dom[Dominator Tree]
        loops[Loop Detection]
        conditionals[If/Else Recovery]
        switches[Switch Recovery]
        hir[HIR Construction]
    end

    subgraph Emit["5. Emit"]
        cleanup[Post-processing]
        naming[Variable Naming]
        cprint[C Printer]
    end

    subgraph Output
        ccode[C Source]
    end

    binary --> parse
    parse --> packer_id
    packer_id --> recover
    recover --> sections
    sections --> symbols
    symbols --> debug

    debug --> decode
    decode --> semantics
    semantics --> cfg

    cfg --> ssa
    ssa --> prop
    prop --> dce
    dce --> type_recovery
    type_recovery --> stack
    stack --> calling

    calling --> dom
    dom --> loops
    loops --> conditionals
    conditionals --> switches
    switches --> hir

    hir --> cleanup
    cleanup --> naming
    naming --> cprint

    cprint --> ccode
```

## C Printer Module Structure (Current)

The `c_printer` module is ~32k lines and needs extraction into focused submodules.

```mermaid
flowchart TB
    subgraph current["Current: mod.rs (17.7k lines)"]
        all[Everything in one file]
    end

    subgraph tests["tests.rs (13.2k lines)"]
        test_code[Unit tests]
    end

    subgraph postprocess["postprocess/ (existing)"]
        dead_assign[dead_assign/]
        idents[idents.rs]
        idioms[idioms.rs]
        labels[labels.rs]
        repair[repair.rs]
    end

    subgraph trace["trace/ (existing)"]
        gate[gate.rs]
        names[names.rs]
        pipeline[pipeline.rs]
        stack[stack.rs]
    end

    current --> tests
    current --> postprocess
    current --> trace
```

## C Printer Module Extraction Plan

```mermaid
flowchart TB
    subgraph target["Target Structure"]
        mod_new[mod.rs - Public API only]

        subgraph core["core/"]
            ctx[ctx.rs - PrintCtx]
            state[state.rs - Printer state]
            config[config.rs - Configuration]
        end

        subgraph emit["emit/"]
            expr[expr.rs - Expression rendering]
            stmt[stmt.rs - Statement rendering]
            decl[decl.rs - Declarations]
            types[types.rs - Type printing]
            macros[macros.rs - IDA-style macros]
        end

        subgraph fold["fold/"]
            fold_expr[expr.rs - Expression folding]
            fold_binary[binary.rs - Binary op folding]
            fold_cast[cast.rs - Cast folding]
        end

        subgraph naming["naming/"]
            vars[vars.rs - Variable naming]
            layout[layout.rs - Local layout]
            lvar[lvar.rs - LVAR allocation]
        end

        subgraph cleanup["cleanup/"]
            prune[prune.rs - Dead assignment pruning]
            stage[stage.rs - Stage transformations]
            normalize[normalize.rs - Normalization]
        end

        subgraph postprocess_new["postprocess/"]
            dead_assign_new[dead_assign/]
            idents_new[idents.rs]
            idioms_new[idioms.rs]
            labels_new[labels.rs]
            repair_new[repair.rs]
        end

        subgraph trace_new["trace/"]
            gate_new[gate.rs]
            names_new[names.rs]
            pipeline_new[pipeline.rs]
            stack_new[stack.rs]
        end

        tests_new[tests.rs]
    end

    mod_new --> core
    mod_new --> emit
    mod_new --> fold
    mod_new --> naming
    mod_new --> cleanup
    mod_new --> postprocess_new
    mod_new --> trace_new
    mod_new --> tests_new
```

## Architecture Lifters Coverage

```mermaid
pie title Architecture Lifter Status
    "Production (x86, x86_64, AArch64)" : 3
    "Partial (ARM32, MIPS, PPC, RISC-V, ARC)" : 5
    "Beta/Scaffold" : 30
```

## Structurer Module Structure

```mermaid
flowchart TB
    subgraph structurer["structurer.rs (8.8k lines)"]
        core_algo[Core Structuring Algorithm]
        trace_count[Trace/Count Helpers]
        loop_post[Loop Postprocessing]
        switch_post[Switch Postprocessing]
        eh_wrap[EH/Landing Pad Wrapping]
        arch_folds[Arch-specific Folds]
        tests_inline[Inline Tests]
    end

    subgraph target_struct["Target Extraction"]
        mod_struct[mod.rs - Public API]
        core_new[core.rs - Algorithm]
        helpers[helpers.rs - Trace/Count]
        postprocess_struct[postprocess.rs - Loop/Switch]
        eh[eh.rs - Exception Handling]
        arch[arch.rs - Arch Folds]
        tests_struct[tests.rs]
    end

    structurer --> target_struct
```

## Quality Metrics Dashboard

```mermaid
quadrantChart
    title Decompiler Quality vs Coverage
    x-axis Low Coverage --> High Coverage
    y-axis Low Quality --> High Quality
    quadrant-1 Expand coverage
    quadrant-2 Maintain
    quadrant-3 Prioritize
    quadrant-4 Improve quality

    x86_64: [0.85, 0.83]
    AArch64: [0.70, 0.75]
    ARM32: [0.50, 0.60]
    MIPS: [0.40, 0.55]
    RISC_V: [0.35, 0.50]
```

## Phase Roadmap (from PARITY_PLAN.md)

```mermaid
gantt
    title Unlace IDA Parity Roadmap
    dateFormat YYYY-MM
    section Phase A
    Output Quality (goto/switch/IDA-isms)    :a1, 2026-01, 2M
    section Phase B
    Type/Symbol Fluency (FLIRT/PDB/DWARF)   :a2, after a1, 3M
    section Phase C
    Architecture Breadth                     :a3, after a2, 5M
    section Phase D
    Recovery Sophistication                  :a4, after a3, 3M
    section Phase E
    Format Breadth + Dynamic                 :a5, after a4, 2M
    section Phase F
    Ecosystem (Plugin/UI/Lumina)            :a6, after a5, 2M
```

## Quality Metrics Definitions

Unlace uses several distinct metrics. None of them measure "how similar to IDA" — they measure actual decompilation quality.

### 1. Semantic Correctness (`xtask semantic-report`)

**What it measures:** Does the decompiled C compile and produce the same exit code as the original binary?

This is the only metric that proves the decompilation is *correct*. A function passes if:
1. The emitted C compiles with the system C compiler
2. Running it produces the same observable behavior as running the original binary

**Current:** 34/34 pass (21 host executable, 4 qemu-user, 9 source-shape verified)

### 2. Type Recovery (`xtask type-recovery-report`)

**What it measures:** How many type facts from DWARF/source does unlace recover in its output?

- **Recall** = recovered facts / expected facts from debug info
- **Precision** = recovered facts / total emitted facts

High recall means we don't miss known types. High precision means we don't emit garbage types.

**Current:** 100% recall, 93% precision

### 3. Golden Triage (`xtask golden-triage`)

**What it measures:** Do stored expected outputs match current output exactly?

This is a *regression detector*, not a quality score. It catches unintended output changes.

**Current:** 15 exact-pass, 0 review rows

### 4. Stylistic Score (`scripts/score_parity.sh`)

**What it measures:** Structural feature presence in decompiled output.

This is a *watchdog metric* that counts control-flow patterns, variable declarations, and expression shapes. It does NOT measure similarity to IDA — it measures whether output has the structural features we expect.

The 83% number means "83% of expected structural features are present in output." It is NOT "83% similar to IDA."

### 5. Function Quality (`unlace quality <binary>`)

**What it measures:** Per-function quality counters that flag implementation gaps.

- `unimplemented_ops`: Lifter had no handler
- `callother_ops`: Opaque intrinsics leaked to output
- `lost_frame_offsets`: Stack references that should be named locals
- `null_derefs`: Bogus `*(T*)0` expressions
- `unknown_types`: Types that couldn't be inferred

Lower is better for all of these.

```mermaid
pie title Quality Metric Focus
    "Semantic Correctness" : 40
    "Type Recovery" : 25
    "Structural Quality" : 20
    "Regression Detection" : 15
```

| Metric | Current | Target | What It Proves |
|--------|---------|--------|----------------|
| Semantic Pass | 34/34 | 50+ | Output is *correct* |
| Type Recall | 100% | 100% | No missed recoverable facts |
| Type Precision | 93% | 98%+ | No garbage emissions |
| Golden Exact-Pass | 15 | 50+ | No unintended regressions |
| Stylistic Score | 83% | 95%+ | Structural completeness |
| Production Archs | 3 | 20+ | Architecture breadth |

### Where Unlace Already Exceeds IDA

- **Deterministic output** — IDA can vary between runs; unlace is byte-identical
- **Better type inference** — on some optimized code, unlace recovers types IDA misses
- **Cleaner expression folding** — in measured cases, fewer redundant casts/temps
- **Measurable quality** — every claim has a verification command

## Data Flow: Binary to C

```mermaid
sequenceDiagram
    participant User
    participant CLI
    participant Loader
    participant Lifter
    participant Passes
    participant Structurer
    participant Printer

    User->>CLI: unlace decompile binary
    CLI->>Loader: load(path)
    Loader->>Loader: parse ELF/PE/MachO
    Loader->>Loader: extract debug info
    Loader-->>CLI: BinaryInfo

    CLI->>Lifter: lift_function(addr)
    Lifter->>Lifter: decode instructions
    Lifter->>Lifter: generate IR ops
    Lifter-->>CLI: IrFunction + CFG

    CLI->>Passes: run_passes(ir)
    Passes->>Passes: SSA construction
    Passes->>Passes: propagation
    Passes->>Passes: type recovery
    Passes->>Passes: stack frame
    Passes-->>CLI: Optimized IR

    CLI->>Structurer: structure(cfg)
    Structurer->>Structurer: dominators
    Structurer->>Structurer: loop detection
    Structurer->>Structurer: if/switch recovery
    Structurer-->>CLI: HIR

    CLI->>Printer: print(hir)
    Printer->>Printer: emit declarations
    Printer->>Printer: emit statements
    Printer->>Printer: postprocess
    Printer-->>CLI: C source

    CLI-->>User: output.c
```

## Packer / Obfuscator and AI-Assisted Analysis Lane

Packed and adversarial binaries enter the normal decompilation pipeline only
after unlace records what was observed and what was recovered. Packer support is
not a printer trick: loader facts should capture section anomalies, entropy,
entrypoint location, import table damage, TLS callbacks, rebuilt IATs, unpacked
image provenance, and known signatures such as UPX remnants or Scylla rebuild
sections.

The Magic Dork sample (`xdumpgo.exe` on disk) made the missing architecture
concrete: IDA can recover functions from nameless RWX sections plus `.pdata`,
while unlace currently needs a conventional `.text` name before lifting. The
planned loader surface should select executable sections by entrypoint ownership
and permissions, build a function index from `.pdata` / TLS / imports / Go module
metadata, and stream per-function AST/HIR/quality artifacts with progress and
retry state.

```mermaid
flowchart LR
    binary[Binary] --> detect[Packer/protector classifier]
    detect --> evidence[Evidence facts]
    evidence --> loader[Loader normalization]
    evidence --> handoff[Diagnostic handoff]
    loader --> funcs[Function discovery]
    funcs --> decompile[Normal decompile pipeline]
    decompile --> ast[AST/HIR stream]
    evidence --> report[Quality / support report]
    handoff -. optional input .-> ai[Opt-in LLM assistant]
    ai -. proposes .-> evidence
    ai -. proposes names/comments .-> report
    report --> user[Analyst]
```

External IDA/Hex-Rays dumps are a reference lane, not a dependency. Headless
`idat` scripts are best for isolated long jobs when all-or-nothing output is
acceptable; idalib per-function loops are better for huge or fragile databases
because they write resumable `sub_*.c` files. Unlace should consume both through
a manifest-backed corpus importer.

The LLM lane is advisory. It can propose packer IDs, function names, string/API
hash explanations, and triage hypotheses, but accepted project facts still come
from deterministic evidence: bytes, loader structures, IR, debugger/emulator
observations, corpus comparisons, and user-approved annotations. Provider
credentials remain runtime configuration and must not be serialized in project
state or reports.

The diagnostic handoff is the boundary between deterministic loading and
agent-assisted work. It should contain enough facts for an external model or
human to plan unpacking/deobfuscation without re-running discovery: hashes,
section table, entropy, import/TLS/exception directories, function-index source,
tool fingerprints, failed loader step, safe next commands, and explicit execution
policy.

## Module Ownership

```mermaid
mindmap
    root((unlace))
        Loading
            ELF
            PE/COFF
            MachO
            dyld cache
            DWARF
            PDB
            FLIRT/SIG
            Packers
            Import rebuilds
            Obfuscation facts
        Lifting
            x86/x86_64
            AArch64
            ARM32
            MIPS
            RISC-V
            PowerPC
            30+ others
        Analysis
            SSA
            Propagation
            DCE
            Type Recovery
            Stack Frames
            Calling Conv
        Structuring
            Dominators
            Loops
            Conditionals
            Switches
            DREAM
            Goto Reduction
        Output
            C Printer
            Expression Folding
            Variable Naming
            IDA Macros
            Postprocessing
        Integration
            CLI
            Debugger
            Emulator
            Lumina
            Plugin SDK
            MCP
            AI assistance
```
