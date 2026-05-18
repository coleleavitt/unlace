# unlace

`unlace` is a high-performance, multi-architecture decompiler engine written in Rust. Its long-term engineering target is high functional and structural parity with industry-standard decompilers such as Hex-Rays, but current support is measured fixture-by-fixture rather than claimed as complete.

Through a milestone-driven implementation of the classic decompiler pipeline, `unlace` transforms raw binary blobs into clean, structured, and human-readable C source code.

## 🚀 The North Star: Measured Decompiler Quality
Unlike traditional decompilers that focus solely on lifting instructions to IR, `unlace` focuses on **high-fidelity logic recovery**. 
- **0-Goto Output:** Advanced control-flow structuring eliminates unnecessary gotos in standard compiler patterns.
- **Data-Flow Excellence:** Leverages an SSA-based optimization suite (SCCP, GVN, CSE) to collapse thousands of temporaries into original source variables.
- **Total Stability:** A formalized 7-stage Maturity Pipeline (`sub_14B8B0` model) ensures that every pass runs at the optimal moment, preventing oscillation and ensuring deterministic output.

## 🧠 Key Architectural Pillars

### 1. Milestone-Driven Maturity Pipeline
Mimicking the `mba_maturity_t` orchestrator, `unlace` executes passes in discrete milestones:
- `M_GENERATED`: IR Fixed-point (Folding, CopyProp).
- `M_PREOPTIMIZED`: Instruction-level cleanup and 64-bit demotion.
- `M_LOCOPT`: Local structural recovery and stack frame layout.
- `M_CALLS`: Interprocedural signature stabilization.
- `M_GLBOPT`: Global type-recovery and data-flow fixed-point.
- `M_LVARS`: Interference-graph-based variable merging and naming.
- `M_FINAL`: High-level Ctree construction and formatted emission.

### 2. TInfo Recursive Type System
A high-fidelity type engine (`sub_40FBC0` model) that understands complex data layouts:
- **Best-Fit Resolver:** Recursively resolves byte offsets into nested structs, unions, and array indices.
- **Type Propagation:** Flows types through calls, pointer math, and memory accesses.
- **Library Awareness:** Integrated `TypeDb` with standard signatures for Libc, Win32, and language runtimes (Rust/Go/C++).

### 3. Whole-Program Interprocedural Analysis
`unlace` treats binaries as interconnected systems, not isolated functions:
- **SCC-Based Traversal:** Uses Tarjan's algorithm to analyze the call graph in optimal bottom-up order.
- **Signature Recovery:** Propagates parameter types from callers and return types from callees.
- **Class Recovery:** Automatically identifies `this` pointers and promotes virtual calls (`this->vtable->method()`) to class-aware syntax.

### 4. Professional C Printer (CTree)
The output isn't just C; it's **source code**.
- **69-Opcode CTree Model:** Uses a dedicated `cot_*` AST for precise rendering of complex expressions.
- **Inverted Precedence:** Employs the Hex-Rays 0-15 precedence scale to ensure perfect, noise-free parenthesization.
- **Width-Aware Formatting:** Implements a 20-character threshold rule for deterministic line-breaking and operand alignment.
- **TaggedStream Tokenization:** Emits a stream of semantic tokens (`Token::Identifier`, `Token::Address`), enabling instant UI integration for renaming and Xrefs.

## 🛠 Supported Architectures
`unlace` features an architecture-neutral core driven by `StackSpec` and deep metadata:
- **x86 / x86_64** (Full SIMD and Flag recovery)
- **AArch64 / ARM** (PAC/BTI, NEON support)
- **RISC-V** (Hardware-loop and Branch tuning)
- **PowerPC / MIPS / ARC** (Delay slot and condition refinement)
- **EVM / Lua / 6502 / 8051** (Specialized lifters)

## 🏗 Engineering Excellence
- **Determinism:** No `HashMap`/`HashSet`. The entire pipeline uses `BTreeMap`/`BTreeSet` to guarantee identical output across identical inputs.
- **Validation:** The current full verification snapshot is recorded in `docs/rebaseline-2026-05-17.md`.
- **Parity Tracking:** `bash scripts/score_parity.sh` provides an aggregate metric against the current fixture profile. That score is a regression signal, not a full IDA/Hex-Rays parity claim.
- **Clippy-Clean:** The current workspace passes `cargo clippy --workspace -- -D warnings` with `RUSTC_WRAPPER=`.

## 📖 Usage
```bash
# Decompile a function to C
unlace decompile <binary> --addr <offset>

# Generate a quality report against the IDA baseline
unlace quality <binary>

# Run the parity scoring suite
bash scripts/score_parity.sh
```

## ⚖️ License
Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License.
