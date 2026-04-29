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

## [Task 12] CFG construction
- New module: `crates/unlace-ir/src/cfg.rs` — public module (`pub mod cfg;` in lib.rs)
- `petgraph = { workspace = true }` added to unlace-ir/Cargo.toml (workspace already declared `petgraph = "0.8"`)
- `EdgeKind` enum: Unconditional, ConditionalTrue, ConditionalFalse, Fallthrough, IndirectJump, Call, Return
- `ControlFlowGraph` struct wraps `StableDiGraph<BlockId, EdgeKind>` + `BTreeMap<BlockId, NodeIndex>` node map + entry/exit/unknown BlockIds
- Synthetic sinks: exit block (target of RETURN edges) and unknown block (target of unresolved BRANCHIND) allocated beyond max real BlockId
- `build_cfg(func: &Function) -> ControlFlowGraph` walks blocks in sorted order, inspects `terminator_of(block)` → last insn's IrOp
- Edge inference from terminator: Branch→Unconditional, Cbranch→ConditionalTrue+ConditionalFalse, Branchind→IndirectJump (to successors or unknown sink), Return→Return (to exit), Call/Callind→Call+Fallthrough, no terminator→Fallthrough
- `dot_export(cfg) -> String` hand-writes graphviz DOT with per-EdgeKind styling (colors, dashed/dotted/bold)
- petgraph 0.8 API: `EdgeRef` and `IntoEdgeReferences` traits must be explicitly imported for `.target()`, `.source()`, `.edge_references()`
- 12 unit tests: linear, diamond, loop (back-edge), switch (multi-successor BRANCHIND), branchind_no_successors, call_fallthrough, empty_function, edges_to, node_index_lookup, dot_export (2), synthetic_block_ids
- No HashMap used — `BTreeMap` only, lint-determinism passes

## [Task 13] SSA
- New module: `crates/unlace-ir/src/ssa.rs` — public module (`pub mod ssa;` in lib.rs)
- `SsaVarnode { base: Varnode, version: u32 }` — Copy + Clone + Debug + PartialEq + Eq + Hash + PartialOrd + Ord
- `PhiNode { output: SsaVarnode, inputs: Vec<(BlockId, SsaVarnode)> }` — one input per predecessor
- `DominatorTree` wraps `BTreeMap<BlockId, BlockId>` (idom) + `BTreeMap<BlockId, Vec<BlockId>>` (children) + root
- `SsaFunction { function, cfg, dom_tree, phi_map, var_map }` — phi_map keyed by BlockId, var_map keyed by (BlockId, insn_index, VarnodeSlot)
- `VarnodeSlot` enum: Output | Input(usize) — identifies which operand slot an SSA version maps to
- `build_ssa(func: Function) -> SsaFunction` — main entry point, takes ownership of Function
- Dominator tree via `petgraph::algo::dominators::simple_fast(&graph, entry_ni)` — returns `Dominators<NodeIndex>` with `.immediate_dominator(ni)` method
- Dominance frontier (Cytron et al. 1991): for each CFG edge (P → X), walk P up dom tree to idom(X), adding X to DF(node); must NOT gate on `preds.len() >= 2` because entry blocks with back-edges need frontiers too
- Phi placement: iterative worklist — for each variable defined in multiple blocks, insert phi at dominance frontier blocks (also adds phi block to worklist since phi is a new def)
- Variable renaming: explicit-stack preorder walk of dom tree, (block, is_cleanup) pairs; cleanup pops versions pushed by that block
- Key insight: phi_map entries must be pre-populated before the rename walk, otherwise successors' phis won't be found when predecessors try to fill phi inputs
- phi inputs record (predecessor_block_id, SsaVarnode) — the predecessor is the block being processed (`bid`), not the successor block
- Const-space varnodes are skipped during input renaming (they don't have SSA versions)
- Children of dom tree sorted for deterministic traversal; pushed in reverse order onto work stack
- Added `node_map()` and `predecessors()` methods to ControlFlowGraph for SSA module's use
- 4 unit tests: straight_line (no phis), diamond_phi (phi at merge BB3), loop_phi (phi at loop header BB0), versions_monotonic (3 defs of r0 with strictly increasing versions)
- BTreeMap/BTreeSet throughout — no HashMap, lint-determinism passes

## [Task 16] Type Inference
- PrimitiveType enum in unlace-ir/src/ssa.rs: Unknown, Bool, Int(u8), UnsignedInt(u8), Float, Double, Ptr
- Width is in bytes (matching Varnode.size), not bits
- Type lattice: Unknown joins with anything to become that type; equal types stay; Int+UnsignedInt of same width collapse to Int; other conflicts collapse to Unknown
- var_types: BTreeMap<SsaVarnode, PrimitiveType> field added to SsaFunction
- TypeInferPass in unlace-passes/src/type_infer.rs implements Pass trait
- Uses split borrows to avoid borrow checker conflicts: infer_insn takes &VarMap + &mut TypeMap separately from the function blocks iteration
- Worklist: internal fixed-point loop — iterate over all instructions + phis until no changes
- COPY propagates types bidirectionally between input and output
- Phi nodes propagate types: all inputs and outputs get the joined type
- Constants (SpaceId::Const) are skipped — they have no SSA varnode entries
- Float vs Double determined by Varnode.size: 4 -> Float, anything else -> Double
- Had to fix pre-existing compile error in dce.rs (VarnodeSlot not Copy — needed clone())
- Also had to fix pre-existing duplicate `pub mod pass;` in lib.rs
- 11 tests: int_add, load_addr_ptr, cbranch_bool, float_add, float_double, bool_ops, comparison_bool, store_ptr, call_const, callind_ptr, lattice_join

## [Task 14] Constant Folding + Copy Propagation
- `trait Pass: Send + Sync { fn name(&self) -> &str; fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError>; }` in pass.rs
- `PassError` enum with variants: MissingBlock, ArityMismatch, InvariantViolation
- `run_to_fixedpoint(passes: &[&dyn Pass], func: &mut SsaFunction) -> Result<usize, PassError>` loops all passes until no changes
- **ConstantFoldPass** (const_fold.rs): walks all instructions in all blocks; for instructions with all-Const inputs, evaluates the operation and replaces with `COPY <computed_constant>`
  - Handles: INT_ADD/SUB/MULT/DIV/SDIV/REM/SREM, INT_NEGATE/2COMP/ZEXT/SEXT, INT_AND/OR/XOR/LEFT/RIGHT/SRIGHT, all INT comparisons, INT_CARRY/SCARRY/SBORROW, BOOL_NEGATE/AND/OR/XOR
  - Does NOT fold: float ops (IEEE semantics too complex for MVP), control flow, memory, pseudo ops
  - Respects Varnode.size via `mask_for_size()`: 32-bit ADD wraps at 2^32
  - Sign-extend helper for signed ops: `sign_extend(val, size)` shifts left then arithmetic-right to propagate sign
  - Division by zero returns None (skip fold); INT_MIN/-1 also skipped for SDIV/SREM
  - INT_CARRY uses wrapping add + comparison to detect unsigned overflow
  - INT_SCARRY/SBORROW use the bitwise signed-overflow formula: `(a ^ result) & (b ^ result) < 0`
- **CopyPropagationPass** (copy_prop.rs): builds BTreeMap of `output -> source` from all COPY instructions, chases chains to root, replaces inputs in instructions and phi node inputs
  - Chain resolution: follows COPY chains (v3->v2->v1) with depth limit to handle cycles
  - Also propagates through phi_map inputs (separate from function.blocks iteration)
  - Const-space outputs are skipped (constants are never COPY targets in well-formed IR)
- smallvec added to unlace-passes/Cargo.toml dependencies (needed for IrInsn construction in const_fold)
- 14 new tests: const_fold (int_add, int_sub, bool_and, wrapping_32bit, no_change_on_non_const, div_by_zero, int_negate, bool_or, int_carry), copy_prop (simple, chain, no_change), fixedpoint (iteration, terminates_no_change)
- Total: 29 tests pass (14 new + 4 DCE + 11 type inference)
- BTreeMap only — no HashMap, lint-determinism passes
- This task set the Pass trait pattern used by Tasks 15 (DCE) and 16 (type inference) which were already implemented

## [Task 15] DCE
- `DeadCodeElimPass` struct in unlace-passes/src/dce.rs implements `Pass` trait
- Single linear sweep: builds `BTreeSet<SsaVarnode>` use-set from all instruction inputs + phi node inputs, then removes instructions with unused output and no side effects
- Side-effecting opcodes (never removed): STORE, CALL, CALLIND, RETURN, BRANCH, CBRANCH, BRANCHIND, NEW, CALLOTHER, CPOOLREF, INDIRECT, LOAD (LOAD treated as side-effecting for MVP due to volatile/MMIO)
- Phi nodes (MULTIEQUAL) are left untouched in MVP
- Returns `Ok(true)` if any instruction was removed; external fixed-point runner handles cascading
- var_map compaction: when instructions are removed, remaining entries are re-keyed to new indices; stale entries beyond new block length are purged via BTreeMap range scan
- `DominatorTree::new()` constructor added to unlace-ir/src/ssa.rs for test construction
- `pub mod dce` and `pub use dce::DeadCodeElimPass` added to lib.rs alongside existing pass modules
- 4 tests: remove_unused_add, preserve_store, preserve_call, cascade (3-pass fixed-point)
- BTreeSet for use-set, no HashMap — lint-determinism passes

## [Task 20] CFG dot
- `emit_cfg_dot(func: &SsaFunction) -> String` in unlace-output/src/cfg_dot.rs
- Richer than Task 12's `dot_export(cfg)`: operates on SsaFunction, shows IR instructions in node labels, colors entry/exit/loop-header blocks
- Node labels: BlockId + up to 5 IR instructions, left-aligned with `\l` DOT escape
- Edge labels: T/F/fallthrough/indirect/call/return; Unconditional gets no label
- Fill colors: entry=lightgreen, exit(RETURN)=lightcoral, loop header=lightblue; entry takes precedence over loop header
- Loop header detection: walk incoming edges, check if target dominates source via idom chain walk
- Synthetic exit/unknown blocks are excluded from DOT output; RETURN blocks detected via EdgeKind::Return edge presence
- All iteration uses BTreeMap key order (BlockId sorted), edges sorted by (source, target, kind) — deterministic
- DOT escape handles: `"`, `\`, `<`, `>`, `{`, `}`, `|`
- 5 tests: test_dot_basic, test_dot_diamond, test_dot_loop, test_dot_renders (conditional on `dot` binary), test_dot_deterministic
- smallvec added to dev-dependencies for test helpers
- lint-determinism passes

## [Task 17] Control Flow Structuring
- New module files in `crates/unlace-struct/src/`: lib.rs (re-exports), hir.rs (HIR types), structurer.rs (algorithm + tests)
- `HirNode` enum: Block, Statement, If, While, DoWhile, Switch, Return, Goto, Label — covers all structured constructs + goto fallback
- `HirFunction { name, params, return_type, body, addr }` — structured function container
- `LabelId(u32)` newtype for goto/label pairs; `SwitchCase` enum with Value and Range variants
- `pub fn structure(func: &SsaFunction) -> Result<HirFunction, StructureError>` — main entry point
- Algorithm: StructureCtx does pre-order dominator tree walk with pattern matching:
  - Back-edge detection: edge (src → tgt) where tgt dominates src → identifies natural loops and loop headers
  - While: loop header has CBRANCH (exit test at top), body is the dominated successor, exit is the non-dominated successor
  - DoWhile: header has no CBRANCH, single latch block has CBRANCH (exit test at bottom)
  - If/else: CBRANCH block with ConditionalTrue/False edges; join point found by BFS reachability intersection (max depth 16)
  - Fallback: unstructured loops emit `while(true)` with gotos; irreducible CFGs handled gracefully via emitted-set dedup
- `dominates(dom_tree, a, b)` helper walks idom chain from b upward to check if a is an ancestor
- `classify_loop_edges` uses domination to distinguish body-entry from exit successor
- `find_join_point` uses bounded BFS from both branches to find first common reachable block (simple post-dominator proxy)
- `emitted: BTreeSet<BlockId>` prevents double-emission of blocks; `block_labels: BTreeMap` tracks goto targets
- CBRANCH condition resolved from var_map at input slot 1 (P-code CBRANCH convention); falls back to synthetic constant if not found
- Control-flow terminators (Branch, Cbranch, Branchind) are skipped during statement emission — handled structurally
- 4 tests: test_structure_linear (statements + return, no control flow), test_structure_if_else (diamond → If node), test_structure_while (back-edge → While node), test_structure_irreducible_goto (cycle without domination → must not panic)
- BTreeMap/BTreeSet throughout — no HashMap, lint-determinism passes
- smallvec added to dev-dependencies for test construction helpers
- Cargo.toml already had unlace-ir, unlace-passes, thiserror, tracing dependencies
