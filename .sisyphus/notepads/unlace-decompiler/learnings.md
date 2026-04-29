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

## [Task 8] ELF loader
- `unlace-loader` crate: 4 source files — lib.rs, image.rs, elf.rs, error.rs
- `trait Loader { fn can_load(&[u8]) -> bool; fn load(&[u8]) -> Result<BinaryImage, LoadError>; }` — associated functions (not methods), since loaders are stateless
- `BinaryImage` holds: arch (ArchId), endian (Endian), entry (u64), sections (Vec<Section>), symbols (BTreeMap<u64, Symbol>)
- Section.data is owned Vec<u8> (not a reference) for ownership simplicity in v1
- `ElfLoader` handles ELF32/64 via generic `load_elf::<Elf: FileHeader>()` dispatch based on EI_CLASS byte
- `object` crate v0.39 API: use `elf_header()` not deprecated `raw_header()`, Ident field is `.class` not `.ei_class`, no `EI_NIDENT` const (use `size_of::<elf::Ident>()`)
- e_machine mapping: EM_MIPS disambiguates Mips vs Mips64 using ELF class (ELFCLASS32 vs ELFCLASS64)
- Reads both .symtab and .dynsym; merges into single BTreeMap, preferring symbols with non-empty names on address collision
- SectionFlags uses manual bitflag struct (not the `bitflags` crate) — READ, WRITE, EXEC derived from SHF_ALLOC, SHF_WRITE, SHF_EXECINSTR
- `ArchId::Unknown(u16)` variant captures unmapped e_machine values without returning an error
- 5 tests: load hello_world, reject non-ELF, .text is executable, stripped vs non-stripped symbol count, symbol_at lookup

## [Task 7] unlace-ir implementation
- 7 source modules: space.rs, varnode.rs, op.rs, insn.rs, block.rs, function.rs, display.rs
- `SpaceId` enum with 5 variants, `#[repr(u8)]` with stable discriminants (Register=0..Stack=4)
- `Varnode { space: SpaceId, offset: u64, size: u8 }` — Copy + Clone + Debug + PartialEq + Eq + Hash + PartialOrd + Ord
- `IrOp` enum with exactly 75 variants (discriminants 0..=74) matching SS4.4 stable ordering, `#[non_exhaustive]` + `#[repr(u8)]`
- `IrInsn { op, output: Option<Varnode>, inputs: SmallVec<[Varnode; 3]>, addr: u64 }`
- `BlockId(u32)` newtype — Copy + Ord + Display ("BB_N")
- `BasicBlock { id: BlockId, insns: Vec<IrInsn>, successors: SmallVec<[BlockId; 2]> }`
- `Function { name: String, entry: BlockId, blocks: BTreeMap<BlockId, BasicBlock>, addr: u64 }`
- Display impls for IrInsn, BasicBlock, Function matching canonical text form (SS2)
- Type tags derived from `(opcode, size)` via `IrOp::type_family()` and `IrOp::input_type_family(index)`
- 22 unit tests covering: varnode equality, IrOp variant count, BasicBlock construction, Function construction, Display roundtrip for 10 opcodes (INT_ADD, STORE, CBRANCH, FLOAT_ADD, INT_SLESS, BOOL_NEGATE, COPY, UNIMPLEMENTED, RETURN, FLOAT_INT2FLOAT)
- BTreeMap used for Function.blocks — no HashMap anywhere in crate, lint passes
- `smallvec` already in workspace deps, `thiserror` dep exists but not yet used (will be needed for parsing errors)

## [Task 10] Golden comparison harness
- `crates/unlace-test-harness/` crate: lib.rs, ast_compare.rs, tests/golden_x86_64.rs
- `ast_equiv(expected, actual) -> Result<(), AstDivergence>` — public API for AST structural comparison
- tree-sitter = "0.24", tree-sitter-c = "0.23" (task specified 0.22/0.21 but those are outdated; latest compatible used)
- Comparison algorithm: pre-order walk with explicit stack, yields (node_kind, depth) tuples
- Skipped node kinds (entire subtree pruned): comment, preproc_include, preproc_def, preproc_function_def, identifier, field_identifier, type_identifier
- Critical: must skip the subtree (don't push children) not just the node — preproc_include has child nodes like system_lib_string
- `AstDivergence` error enum reports: KindMismatch (with both locations), ExpectedExtra, ActualExtra, parse errors
- 150 ignored golden tests (`golden_{function_name}`) + 2 non-ignored helper tests (test_identical_match, test_structural_divergence)
- `#![allow(non_snake_case)]` needed in test file — hex addresses like sub_11B9C0 trigger warnings
- Integration tests live in crate (`crates/unlace-test-harness/tests/`) not workspace root (virtual workspace has no root package)
- `cargo test --test golden_x86_64` works from workspace root without `-p` flag
- No HashMap used — comparison uses iterators, no collection needed

## [Task 11] Stub lifters
- 6 stub crates: unlace-lift-{arm,riscv,mips,ppc,v850,arc} — each implements `trait Lifter` from unlace-ir
- Facade crate: `unlace-lift` with `pub fn get_lifter(arch: ArchId) -> Box<dyn Lifter>` dispatching to all 7 arch lifters
- Stub lifters return `Ok(LiftedInsn { ir_ops: vec![IrInsn::without_output(IrOp::Unimplemented, ...)], len: N })` — never panic
- Register files use `&'static str` names (not `String`) per `RegisterDef { name: &'static str, varnode: Varnode }`
- Register file sizes: ARM=34 (X0-X30+SP+PC+NZCV), RISC-V=33 (x0-x31+pc), MIPS=35 ($0-$31+HI+LO+PC), PPC=37 (r0-r31+CR+LR+CTR+XER+PC), V850=34 (r0-r31+PC+PSW), ARC=68 (r0-r63+STATUS32+BTA+LP_START+LP_END)
- V850 registers are 4-byte (32-bit arch), ARC core regs are 4-byte; ARM/RISC-V/MIPS/PPC GP regs are 8-byte
- V850 instruction stub length = 2 bytes (16-bit base encoding); all others = 4 bytes
- Removed capstone dependency from all 4 stub crates that had it (arm, riscv, mips, ppc) — stubs don't decode
- `UnimplementedLifter` fallback in facade returns `Err(LiftError::Unsupported)` and empty register file
- Facade maps: Arm|AArch64→ArmLifter, RiscV64→RiscVLifter, Mips|Mips64→MipsLifter, Ppc|Ppc64→PpcLifter, V850→V850Lifter, Arc→ArcLifter
- 14 unit tests total: 1 per stub crate + 8 in facade (per-arch + unknown fallback + all-stubs-unimplemented)
- Task 9 created `ArchId` in unlace-ir/src/arch.rs and `Lifter` trait in unlace-ir/src/lifter.rs — both now canonical

## [Task 9] x86-64 lifter
- `X86Lifter` struct in unlace-lift-x86/src/lift.rs implements `trait Lifter` from unlace-ir
- Source layout: lib.rs, lift.rs (main decoder + LiftCtx), register_file.rs, ops/{mod,data_move,arithmetic,bitwise,control_flow,stack}.rs
- iced-x86 `Decoder::with_ip(64, bytes, addr, DecoderOptions::NONE)` for x86-64 decoding
- `ArchId` moved from unlace-loader/src/image.rs to unlace-ir/src/arch.rs; loader re-exports via `pub use unlace_ir::ArchId`
- `LiftCtx` struct manages: emitted ops vec, unique counter, machine address; methods: alloc_unique, emit, emit_store, operand_read, operand_write, write_operand_insn, memory_address
- Register file: RAX=0, RCX=8, RDX=16, RBX=24, RSP=32, RBP=40, RSI=48, RDI=56, R8=64..R15=120, RIP=128; RFLAGS at 256+ (CF=256,PF=257,AF=258,ZF=259,SF=260,OF=261)
- Sub-registers: iced_reg_to_varnode() maps EAX/AX/AL etc to (parent_offset, smaller_size); AH/BH/CH/DH mapped to offset+1 size=1
- Memory destinations: must check `insn.op0_kind() == OpKind::Memory` to distinguish STORE vs COPY — address varnodes from compute_memory_address live in Unique space, not Ram
- RIP-relative: iced-x86 resolves to absolute address in memory_displacement64 when Decoder::with_ip is used — no manual RIP computation needed
- Shift operations emit explicit `INT_AND` mask for x86 shift count masking (count & (bits-1)) per ISA behavior
- Jcc conditions: each maps to flag checks — JE=ZF, JB=CF, JL=SF^OF, JG=!ZF&(SF==OF), etc using BOOL_* ops
- CALL: emits RSP-=8, STORE return_addr, then CALL/CALLIND. RET: LOAD from [RSP], RSP+=8, RETURN
- Unknown/SSE/AVX → IrOp::Unimplemented (never panic)
- 32 unit tests pass: arch, register_file, mov(reg-reg, reg-imm, mem-read, mem-write), add, sub, cmp, test, and, or, xor, shl, shr, not, neg, sar, jmp, je, jne, call, ret, push, pop, lea, nop, unknown_insn, empty_buffer, imul_3op, div, no_unwrap_in_lib
- No unwrap() in library code — all paths use `?` or return Option/Result
