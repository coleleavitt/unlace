# Unlace Decompiler — Learnings

## Conventions
- Workspace edition: 2024
- Crate naming: `unlace-{ir,loader,lift-*,passes,struct,output,cli}`
- Determinism: BTreeMap/IndexMap only in output paths, no HashMap
- IR follows Ghidra P-code model (~70 opcodes)
- Architectures: 7 (x86, ARM, RISC-V, MIPS, PPC, V850, ARC). hex_loader is NOT an architecture.

## Key Paths
- Plan: `.sisyphus/plans/unlace-decompiler.md`
- Reference dumps: `references/hexrays/ida_dump/`, `references/ida/`, `references/loaders/`, `references/procs/`, `references/plugins/`, `references/demangle/`
- ARM proc reference: `references/ida/processors/arm/all/` (NOT references/procs/arm)
- Evidence: `.sisyphus/evidence/task-{N}-{slug}.txt`

## Tools
- iced-x86 for x86 decoding (pure Rust, fastest)
- capstone for ARM/MIPS/PPC/RISC-V (C FFI)
- object crate for ELF/PE/Mach-O
- petgraph for CFG/dominator trees
- gimli for DWARF, pdb2 for PDB
- tree-sitter-c for golden AST comparison
- insta for snapshot tests

## [Task 1 Complete] Workspace setup
- 14 crates under `crates/`: unlace-ir, unlace-loader, unlace-lift, unlace-lift-{x86,arm,riscv,mips,ppc,v850,arc}, unlace-passes, unlace-struct, unlace-output, unlace-cli
- xtask crate at root `xtask/` (included in workspace members)
- Workspace deps declared in root Cargo.toml; each crate uses `workspace = true`
- Workspace resolver = "3" (required for edition 2024)
- CI: `.github/workflows/ci.yml` with check, test, clippy, fmt jobs
- rustfmt uses nightly toolchain in CI (edition 2024 requires it)
- V850 and ARC lifters have no capstone dependency (no capstone support for these architectures) — will need custom decoders
- `thiserror = "2"` used (latest major, not 1.x) — compatible with edition 2024
- Old `src/main.rs` removed; CLI entry point moved to `crates/unlace-cli/src/main.rs`
- `cargo check --workspace` and `cargo clippy --workspace -- -D warnings` both pass clean

## [Task 6] Fixture binaries
- 7 ELF fixtures in `fixtures/`: hello_world, branches, loops, calls, medium, stripped, empty
- Source C files in `fixtures/src/` for reproducibility
- Compiled with `gcc -O2` (no debug info), x86-64 Linux, dynamically linked
- medium.c has ~50 functions in source but most are inlined at -O2; ~896 instructions remain with 3 recursive functions as separate symbols
- stripped.elf = medium.elf + `strip -s` (no symbols)
- All fixtures < 16KB (well under 1MB limit)
- Used by Task 22 (e2e pipeline) and Task 23 (golden tests)

## [Task 5] Golden corpus stats
- 250 functions selected across 7 architectures from ~54K valid candidates (after filtering ~12K stubs)
- hexx64→x86_64: 150 files, hexarm→arm: 25, hexrv→riscv: 15, hexmips→mips: 15, hexppc→ppc: 15, hexv850→v850: 15, hexarc→arc: 15
- Complexity distribution (global): trivial=73 (29.2%), simple=73 (29.2%), branchy=50 (20.0%), complex=54 (21.6%)
- All per-arch buckets >= 15% threshold
- Filtered out: dot-prefixed PLT thunks, THUNK/TRAMPOLINE files, extern-only stubs, nullsub_*, __unwind_resume
- Dot-prefixed filenames (e.g. `.abort.c`) are PLT/GOT trampolines, not real decompiled functions
- Selection is deterministic: sorted by filename, first-N from each complexity bucket
- `cargo xtask regen-goldens` re-runs selection via `scripts/select_goldens.py`
- manifest.json sorted by (arch, function_name) for reproducibility
