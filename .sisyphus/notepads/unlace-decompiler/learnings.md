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

## [Task 19] IR dump
- `pub fn dump_ir(func: &SsaFunction) -> String` in unlace-output/src/ir_dump.rs
- Produces canonical text form per IR spec §2: `func <name> @ 0x<addr> { ... }`
- Block headers: `BB_<id> [annotations]:` with annotations in spec order: entry, loop_header, unreachable, exit
- Instructions: 2-space indent, `<output>:<type> = <OPCODE> <inputs>` or `<OPCODE> <inputs>`
- Phi nodes: `<output>:<type> = MULTIEQUAL <input>:<type>(BB_<pred>), ...` — emitted before regular instructions per block
- SSA varnodes rendered as `v<id>` (version 0) or `v<id>#<version>` (version > 0)
- Varnode ID encoding: register offsets pass through, unique/ram/stack use disjoint ranges (0x10000, 0x100000, 0x200000)
- Branch targets resolved to `@BB_<n>` by matching Const-space offset against block first-instruction addresses
- Non-SSA varnodes fall back to raw literals: r<offset>, m0x<hex>, c0x<hex>/c<dec>, u<offset>, s<signed>
- Type tags derived from `IrOp::type_family()` and `IrOp::input_type_family(index)` — i/f/b prefix + bit-width
- Loop header detection: back-edge heuristic (predecessor BlockId > current BlockId in RPO numbering)
- Exit detection: block ends in RETURN, or has no successors and no branch/call terminator
- Deterministic: BTreeMap iteration for blocks (sorted by BlockId), no HashMap, no pointer addresses
- SpaceId is `#[non_exhaustive]` — wildcard arms needed in match expressions in external crates
- 8 tests: simple_function, with_phi, deterministic, canonical_form, branch_target_resolution, multiple_blocks_sorted, varnode_spaces, empty_function
- `pub use ir_dump::dump_ir` re-exported from lib.rs alongside existing `cfg_dot::emit_cfg_dot`
- lint-determinism passes

## [Task 18] C printer
- `pub fn print_c(func: &HirFunction) -> String` in unlace-output/src/c_printer.rs
- Produces valid C syntax that passes `gcc -fsyntax-only -x c - -std=c11`
- Variables named `v1, v2, ...` via monotonic counter in `PrintCtx`; assigned in pre-walk order (deterministic)
- Variable names stored in `BTreeMap<SsaVarnode, String>` — no HashMap
- Two-pass approach: `collect_varnodes` pre-walks HIR to assign names + infer types; then `emit_nodes` does the actual printing
- Type mapping: PrimitiveType → C types: Bool→`_Bool`, Int(1)→`signed char`, Int(2)→`short`, Int(4)→`int`, Int(8)→`long long`, UnsignedInt(N)→`unsigned {char,short,int,long long}`, Float→`float`, Double→`double`, Ptr→`void *`, Unknown→`int`
- Heuristic type inference from IrOp::type_family(): `'b'`→Bool, `'f'`→Float/Double (by size), `'i'`→Int with size; special cases for Ptradd/Load→Ptr, IntDiv/IntRem→UnsignedInt
- 4-space indentation per nesting level via `indent(depth, out)` helper
- Expression emission: recursive on IrOp — binary ops, unary ops, casts (IntZext/IntSext/Cast), function calls (FloatAbs→`fabs()`, Popcount→`__builtin_popcount()`), Piece/Subpiece
- Statement emission: assignments for instructions with output; STORE → `*(void **)(<addr>) = <val>`; Call/Callind → `<target>()`
- Constants: small values as decimal, large/negative-looking values as `0x...ULL`
- Labels emit as `label_N:;` (empty statement after colon for valid C)
- Switch uses GCC case-range extension for `SwitchCase::Range`
- INT_SCARRY/INT_SBORROW approximated as `0` (no clean C equivalent)
- IrInsn inputs in HIR use version=0 SsaVarnode wrappers (structurer output convention)
- unlace-struct was already in Cargo.toml dependencies (no change needed)
- 10 tests: simple, if_else, while, deterministic, compiles (gcc), goto_label, do_while, types, indentation, params
- `pub use c_printer::print_c` re-exported from lib.rs
- lint-determinism passes

## [Task 21] CLI

### Pipeline Wiring
- Full pipeline: ElfLoader::load → discover_functions → lift_function → build_ssa → run_passes → emit_output
- `unlace-lift` facade was missing X86 in get_lifter() — added `ArchId::X86 | ArchId::X86_64 => Box::new(X86Lifter::new())`
- Block splitting: two-pass algorithm — pass 1 identifies block starts (after terminators + at branch targets), pass 2 populates blocks with instructions and wires successor edges
- Cbranch fall-through successor requires special handling — must compute position of next instruction after the cbranch in the instruction stream

### TypeInferPass Divergence Bug
- TypeInferPass has an internal `while changed` loop that diverges on real-world IR from the x86 lifter
- Root cause likely: bidirectional type propagation in COPY handling + complex flag computations create oscillation
- Workaround: bounded type inference in CLI pipeline using `entry().or_insert()` (monotonic insertion, no updates)
- The workaround runs up to 50 iterations of forward-only type assignment
- run_to_fixedpoint is used for fold/prop/dce; TypeInfer runs separately after

### CLI Structure
- `args.rs`: clap derive with `#[derive(Parser)]`, `#[derive(Subcommand)]`, `#[derive(ValueEnum)]`
- `pipeline.rs`: function discovery, lifting, block splitting, pass execution, output emission
- `main.rs`: argument parsing, tracing init, decompile orchestration
- Binary name: `unlace` (configured via `[[bin]]` in Cargo.toml)
- Doc comments on clap args are functional (used as --help text)

### Function Discovery
- Iterates symbols with `SymbolKind::Function` and `size > 0`
- Fallback for stripped binaries: decompile entry point as "entry"
- Filter by name or hex address (`0x...` prefix)

### Dependencies Added
- tracing-subscriber (with env-filter feature) for `-v` verbosity
- smallvec (for SmallVec in IR types)
- All workspace crates except test-harness

### Tests
- 9 integration tests in tests/cli_smoke.rs using std::process::Command
- Tests: version, emit ir/c/cfg-dot, hex addr filter, nonexistent function, arch mismatch, invalid file, output to file

## [Task 22] Pipeline hardening

### Prologue-Scan Function Discovery
- For stripped binaries (no function symbols), scan .text section for x86-64 prologue patterns
- Three patterns detected (1-byte incremental scan): `endbr64` [0xf3, 0x0f, 0x1e, 0xfa], `push rbp; mov rbp, rsp` [0x55, 0x48, 0x89, 0xe5], `sub rsp, imm8` [0x48, 0x83, 0xec]
- BTreeSet used for deduplication of discovered addresses
- Function sizes computed from gap between consecutive discovered addresses; last function extends to end of .text
- Functions named `sub_{addr:x}` (hex address, no 0x prefix) matching IDA/Ghidra convention
- Discovery order: symbol table first → prologue scan if no symbols → entry point fallback if scan finds nothing
- stripped.elf discovers 8 functions via prologue scan vs 1 ("entry") previously

### Per-Function Timeout
- `--timeout <secs>` CLI flag (default: 30), backed by `std::time::Instant` deadline
- `PipelineConfig { timeout: Duration }` struct passed through pipeline
- `check_timeout(deadline, func_name)` called at 3 checkpoints: after lift, after SSA construction, after passes
- Timeout=0 immediately fails every function (useful for testing failure path)

### Graceful Per-Function Failure
- `decompile_function()` encapsulates the full per-function pipeline (lift → SSA → passes → emit)
- On failure, main loop emits `/* decompilation failed for '<name>': <reason> */` and continues
- Process exits 0 even when individual functions fail — only binary-level errors (bad file, arch mismatch) cause non-zero exit

### IR Size Warning
- `warn_if_large_ir()` checks instruction count after SSA construction
- Threshold: 100,000 IR nodes (configurable via `IR_NODE_WARN_THRESHOLD` const)
- Emits tracing::warn with function name, node count, and threshold

### TypeInferPass Divergence Fix
- Added `max_iterations = 100` bound to the `while changed` loop in TypeInferPass::run()
- Emits tracing::warn when iteration limit is hit, indicating possible oscillation
- Root cause remains: bidirectional COPY propagation in type_infer.rs lines 340-352 can oscillate
- The bounded CLI workaround (`run_type_infer_bounded`, 50 iterations, monotonic-only) remains as defense-in-depth

### Integration Tests Added
- 6 new tests (total 15): stripped_binary_discovers_functions_via_prologue_scan, timeout_zero_emits_failure_comments, timeout_flag_accepts_custom_value, all_fixtures_exit_zero, branches_fixture_has_output, loops_fixture_has_output
- `all_fixtures_exit_zero` tests all 7 fixtures in a single test for comprehensive coverage
- `timeout_zero_emits_failure_comments` verifies the failure comment format

### Key Design Decisions
- No external timeout crates — `std::time::Instant` only, as specified
- No HashMap — BTreeSet for prologue scan deduplication, BTreeMap for block construction
- `sub rsp, imm8` prologue included as third pattern — catches functions without frame pointer that start with stack allocation
- PipelineConfig uses Default trait for ergonomic construction with overrides

## [Task 24] Benchmarks
- Benchmark file: `crates/unlace-cli/benches/decompile_medium.rs` with `criterion = "0.5"` (html_reports feature)
- `[[bench]] name = "decompile_medium", harness = false` in unlace-cli Cargo.toml
- Two criterion groups: `per_stage` (6 benches: load, lift, ssa, passes, structure, output) and `end_to_end` (1 bench: decompile_medium_e2e)
- Per-stage benches isolate each pipeline phase; passes bench includes SSA rebuild per iteration since SsaFunction doesn't derive Clone
- Pipeline logic inlined in bench file because unlace-cli is a binary crate (can't link against its modules from a bench)
- Sample size = 10, measurement time = 30s, warm up = 3s (configured per group)
- Memory budget: CI uses `/usr/bin/time -v` on release binary to measure RSS; warns if >= 2GB (2,097,152 KB)
- CI job: `.github/workflows/ci.yml` `bench` job after `test`, `continue-on-error: true` so regressions don't block the pipeline
- medium.elf is 15KB with ~3 functions; E2E decompiles in ~13ms on dev machine (well under 60s budget)
- No HashMap — BTreeMap/BTreeSet used in inlined pipeline helpers

## [Task 23] Golden test suite: x86-64
- Test file: `crates/unlace-test-harness/tests/golden_x86_64.rs` — 160 tests, 0 ignored, all pass
- Three test layers:
  1. Golden corpus integrity: 150 self-parse tests (one per golden .c file) + 1 bulk scan — validates corpus not corrupted and tree-sitter-c handles Hex-Rays dialect
  2. E2E fixture decompilation: 7 tests invoking `unlace decompile --emit c` on each fixture ELF, verifying output parses as valid C
  3. Harness validation: 2 tests confirming ast_equiv match/divergence detection works
- KEY LIMITATION: No golden-vs-actual AST comparison — the golden .c files came from IDA/Hex-Rays on binaries we don't redistribute; our fixtures are different binaries from different source code; no function-address correspondence exists
- Binary resolution: `unlace_bin()` finds the binary via CARGO_TARGET_DIR or workspace_root/target/debug/unlace; requires `cargo build -p unlace-cli` before running tests
- Path resolution: `workspace_root()` computed from CARGO_MANIFEST_DIR (crates/unlace-test-harness → workspace root); `golden_dir()` returns absolute path to tests/golden/x86_64/
- Previous Task 10 stub had 150 `#[ignore]`d self-compare tests — all replaced with real non-ignored tests
- `CARGO_BIN_EXE_unlace` env var not available because unlace-cli has no lib target; binary located via filesystem path instead
- To enable true golden comparison, need to compile each reference function to an ELF and decompile it

## [Task 25] Error handling + graceful degradation
- Production code had 19 `.unwrap()` calls across 5 files: cfg.rs (7, writeln to String), cfg_dot.rs (12, writeln to String), dce.rs (1, logic invariant), structurer.rs (2, logic invariants)
- `writeln!` to `String` is infallible (`fmt::Write` impl for `String` never errors) — replaced with `let _ = writeln!(...)` pattern
- Logic-invariant `.unwrap()` in `Option`-returning methods replaced with `.expect("descriptive message")` — using `?` would silently propagate `None` with wrong semantics
- Production `.unwrap()` in `Result`-returning `dce.rs` function replaced with `.ok_or_else(|| PassError::InvariantViolation {...})?`
- Test code `.unwrap()` (46 calls across 11 files) replaced with `.expect("descriptive")` for better panic messages
- `IrOp::Unimplemented` now emits `__unknown_insn_0x{ADDR}()` in C output (both statement and expression position) instead of silent `/* UNIMPLEMENTED */` comment
- CLI `main()` changed from `fn main() -> Result<()>` to explicit error handling with `eprintln!`/`process::exit(1)` to suppress anyhow backtraces
- `/dev/null` produces: `Error: '/dev/null' is not a valid ELF binary` with exit 1, no panic, no backtrace
- Missing file produces: `Error: failed to read '...': No such file or directory` with exit 1
- Timeout comment format: `/* decompilation failed for 'FUNCNAME': timeout exceeded for function 'FUNCNAME' */` (from Task 22)
- Error type coverage: unlace-ir (LiftError via thiserror), unlace-loader (LoadError), unlace-passes (PassError), unlace-struct (StructureError) — all already existed before this task
- Stub lifters (ARM, RISC-V, MIPS, PPC, V850, ARC) don't need own Error types — they use `LiftError` from unlace-ir
- Created missing bench stub `crates/unlace-cli/benches/decompile_medium.rs` to fix build

## Task 26: ARM/AArch64 Lifter via Capstone
- capstone `Capstone` type is `!Send + !Sync` (contains raw `*mut c_void`); cannot be stored in struct implementing `Lifter: Send + Sync`. Solution: create `Capstone` per `lift_insn` call.
- Capstone ARM64 register IDs from capstone-sys: X0=218, X28=246, FP(X29)=2, LR(X30)=3, SP=5, XZR=9, WZR=8, W0=187, W28=215, W29=216, W30=217. These differ from intuitive numbering.
- ARM64 XZR/WZR (zero registers) must be modeled as constant-0 varnodes, not register-space varnodes, since writes are discarded.
- ARM64 condition flags: C flag for SUB is inverted vs x86 (C = NOT borrow). The `IntLess` + `BoolNegate` pattern is required.
- `Arm64Shift` in capstone 0.14 is an enum (`Lsl(u32)`, `Msl(u32)`, etc.), not a struct.
- Capstone's `insn_detail().arch_detail().arm64().cc()` provides the condition code for B.cond instructions (both B and B.cond have `ARM64_INS_B` as their ID).
- STP/LDP pair instructions: capstone reports operands as [reg1, reg2, mem]. Second store/load at base+size offset.
- The `Arm64Insn::from(insn.id().0)` conversion maps capstone instruction IDs to the typed enum.

## Task 30: PowerPC PPC64 Lifter via Capstone
- Capstone PPC Mode64 with big-endian: `Capstone::new().ppc().mode(ArchMode::Mode64).endian(Endian::Big).detail(true).build()`.
- Capstone `Capstone` is `!Send + !Sync` (same as ARM task 26) — must create per `lift_insn` call, not store in struct.
- PPC register IDs: r0=87..r31=118 (contiguous), LR=5, CTR=3, CR0=12..CR7=19 in capstone-sys.
- `PpcOperand` variants: `Reg(RegId)`, `Imm(i64)`, `Mem(PpcOpMem { base: RegId, disp: i32 })`, `Crx(PpcOpCrx)`, `Invalid`.
- Capstone aliases SPR instructions: `mflr r3` decodes as `PPC_INS_MFLR` (not `PPC_INS_MFSPR`), with only 1 operand (the GPR). Similarly `mtlr`→`PPC_INS_MTLR`, `mfctr`→`PPC_INS_MFCTR`, `mtctr`→`PPC_INS_MTCTR`.
- `PpcInsn::PPC_INS_NOP` corresponds to `ori r0, r0, 0` (0x60000000). Capstone recognizes this as a distinct instruction ID.
- `PpcInsn::PPC_INS_SUB` is a simplified mnemonic (rD = rA - rB); `PPC_INS_SUBF` is the real instruction (rD = rB - rA, reversed operands). Both need handling.
- `PpcInsn::PPC_INS_MR` is the `or rA, rS, rS` alias. Capstone decodes it as a separate instruction ID.
- CMPW/CMPLW: capstone may emit 2 or 3 operands depending on whether CR field is explicit or CR0 is implied.
- LIS/ADDIS shift the 16-bit immediate left by 16 before use. LI is just ADDI with rA=0.
- PPC is fixed-width 4-byte instruction set; `bytes.len() < 4` → `LiftError::ShortBuffer`.
- LWZ (load word and zero) requires `IntZext` from 4→8 bytes; LD loads full 8 bytes directly.
- STW requires `Subpiece` to truncate 8→4 bytes before storing; STD stores full 8 bytes.
- BL writes return address (addr+4) to LR before calling; BLR returns via LR; BCTR branches indirect via CTR.
- BC (conditional branch) CR field decoding is complex; simplified with placeholder condition for now — full CR bit extraction deferred.
- `DetailsArchInsn` trait must be imported for `.operands()` on `PpcInsnDetail`.

## Task 31: V850 Lifter (Custom Decoder)
- No Rust crate exists for V850 decoding — must write custom byte-level decoder.
- V850 is little-endian, 32-bit architecture with variable-length instructions (16-bit and 32-bit, some 48-bit).
- Instruction length detection: bits[10:5] of first halfword = 0x3F → extended 32-bit; bits[10:7] >= 0b1100 → 32-bit format; else → 16-bit.
- Primary dispatch key: bits[10:7] (4 bits) and bits[6:5] (2 bits) of hw0 form a 6-bit opcode index for base instructions.
- Format I (16-bit reg-reg): [15:11]=reg2, [10:5]=opcode, [4:0]=reg1.
- Format II (16-bit imm5-reg): [15:11]=reg2, [10:5]=opcode, [4:0]=imm5 (sign-extended).
- Format III (16-bit Bcond): [15:11]=disp[7:3], [10:7]=0b1011, [6:4]=disp[2:0], [3:0]=cond. Displacement bit0 always 0.
- Format VI (32-bit imm16): hw0=[reg2|opcode|reg1], hw1=imm16. ADDI/MOVEA sign-extend; ANDI/ORI/XORI zero-extend.
- Format VII (32-bit load/store): hw1 bit0 distinguishes halfword vs word: 0=LD.H/ST.H, 1=LD.W/ST.W. LD.B uses full 16-bit displacement.
- Format V (32-bit jump): [15:11]=reg2, [10:6]=opcode, [5:0]=disp[21:16], hw1=disp[15:0]. reg2=0→JR, reg2≠0→JARL.
- r0 is hardwired zero: reads return constant(0), writes are silently discarded (reg_write returns None).
- JMP [r31] is the standard V850 return sequence — lifted as IrOp::Return.
- JARL (jump and link): saves PC+4 into link register (reg2), then calls target — V850 call convention uses register (not stack) for return address.
- V850 PSW flags modeled as separate 1-byte varnodes: ZF(272), SF(280), OVF(288), CYF(296), SATF(304) — after r0-r31(0-248), PC(256), PSW(264).
- 16 branch conditions (Bcond) map to PSW flag combinations: V/NV(OV), L/NL(CY), E/NE(Z), NH/H(CY||Z), N/P(S), LT/GE(S^OV), LE/GT(Z||(S^OV)), SA(SAT), R(always).
- MVP implements ~30 instructions: MOV, MOV imm5, MOVEA, MOVHI, NOT, ADD, ADD imm5, ADDI, SUB, SUBR, CMP, CMP imm5, MULH, MULH imm5, AND, ANDI, OR, ORI, XOR, XORI, TST, SHL, SHR, SAR, LD.B/H/W, ST.B/H/W, JMP, JR, JARL, Bcond(all 16), ZXB, ZXH, SXB, SXH, NOP.
- Extended opcodes (bits[10:5]=0x3F) and Format IV (short ep-relative loads/stores) emit Unimplemented for now.
- Reference: Athrill V850E2M simulator (github.com/toppers/athrill-target-v850e2m) has complete opcode dispatch tables in C.
- 74 tests total: 28 decoder tests + 46 lifter tests covering all implemented instructions.

## Task 29: MIPS64 Lifter via Capstone
- `Capstone::new().mips().mode(ArchMode::Mips64).endian(Endian::Big).detail(true).build()` for MIPS64 big-endian.
- Capstone `Capstone` is `!Send + !Sync` — wrapped in `Mutex<SendCapstone>` with `unsafe impl Send for SendCapstone` to satisfy `Lifter: Send + Sync` trait bounds. Each call locks the mutex.
- MIPS register IDs in capstone-sys: MIPS_REG_0=2, MIPS_REG_1=3, ..., MIPS_REG_31=33 (contiguous, starting at 2). MIPS_REG_INVALID=0.
- `MipsOperand` variants: `Reg(RegId)`, `Imm(i64)`, `Mem(MipsOpMem { base: RegId, disp: i64 })`, `Invalid`.
- Capstone normalizes pseudo-instructions: `BEQ rs, $zero, target` → `BEQZ rs, target` (MIPS_INS_BEQZ=135), `BNE rs, $zero, target` → `BNEZ rs, target` (MIPS_INS_BNEZ=137), `BEQ $zero, $zero, target` → `B target` (MIPS_INS_B=136). Must handle all alias IDs.
- Additional pseudo-IDs: `NEGU` (MIPS_INS_NEGU=623), `BAL` (MIPS_INS_BAL=44), `BGEZAL` (MIPS_INS_BGEZAL=83), `BLTZAL` (MIPS_INS_BLTZAL=106).
- Register file: 35 registers — $zero-$ra at offsets 0-248 (step 8), HI at 256, LO at 264, PC at 272. All 8-byte wide (MIPS64).
- $zero register hardwired to zero: reads return `Varnode::constant(0, 8)`, writes return `None` (silently discarded).
- MULT/MULTU write result to LO only (simplified — full 128-bit result into HI:LO deferred). DIV/DIVU write quotient to LO, remainder to HI.
- MFHI/MFLO read from HI/LO register-space varnodes.
- LUI lifts as `IntLeft(imm, 16)` — shift immediate left by 16 bits.
- SLT/SLTU lift as comparison (`IntSless`/`IntLess`) → `IntZext` to 8 bytes (result is 0 or 1 in GP register).
- Load instructions (LW/LD/LH/LB etc.) use `IntZext` for sub-8-byte loads. Store instructions use `Subpiece` to truncate.
- JR $ra specifically maps to `IrOp::Return`; other JR targets map to `IrOp::Branchind`.
- JAL/JALR write return address (addr+8, accounting for delay slot) to $ra before call.
- Delay slots: MVP lifts sequentially (each instruction independently, len=4). Full delay-slot semantics deferred.
- NOR lifted as `IntOr` followed by `IntNegate` (bitwise NOT of OR result).
- Dispatch uses `insn.id().0` matched against `MipsInsn::MIPS_INS_*` constants cast to u32.
- Source layout: lib.rs (re-exports), lift.rs (MipsLifter + LiftCtx + dispatch + tests), register_file.rs (offsets + capstone reg mapping), ops/{mod,arithmetic,bitwise,control_flow,data_move,memory}.rs.
- 19 tests: arch_id, register_file, short_buffer, nop, addiu, addu, lw, sw, beq, j, jal, jr_ra, lui, and, sll, slt, mult, zero_hardwired, unknown_insn.
- Facade test `test_all_stubs_produce_unimplemented` was outdated — ARM, RISC-V, PPC, V850 lifters were all already implemented. Reduced to only ARC stub.

## Task 27: ARM Golden Suite
- Created `crates/unlace-test-harness/tests/golden_arm.rs` mirroring the x86-64 golden suite structure.
- 25 ARM golden .c files in `tests/golden/arm/` — all 25 self-parse as valid C via tree-sitter.
- Complexity breakdown: 8 trivial, 8 simple, 5 branchy, 4 complex.
- Added `unlace-lift-arm` and `unlace-ir` as dev-dependencies to `unlace-test-harness`.
- Synthetic ARM lifter smoke tests: `mov x0, #42` (0xD2800540) and `ret` (0xD65F03C0) both lift successfully.
- No ARM ELF fixtures exist yet — end-to-end decompilation tests blocked on fixture availability.
- 30 tests total: 25 per-file self-parse + 1 bulk corpus scan + 3 lifter smoke + 1 harness validation.
- Pass rate: 30/30 (100%). All ARM golden files parse cleanly with tree-sitter-c.

## Task 35: C++/Rust/Swift Demangling via symbolic-demangle
- New module: `crates/unlace-output/src/demangle.rs` — public module (`pub mod demangle;` in lib.rs)
- `symbolic-demangle = "12"` already in workspace deps with all default features (cpp, msvc, rust, swift) enabled.
- `symbolic-demangle` re-exports only `Demangle` trait, `DemangleOptions`, and `demangle()` fn — does NOT re-export `symbolic_common::Name` or `Language`. To avoid adding `symbolic-common` as an explicit dependency, use `symbolic_demangle::demangle()` convenience function and custom prefix-based language detection.
- `pub fn demangle(name: &str) -> Option<DemangleResult>` returns `DemangleResult { short_name, full_signature, language: SymbolLanguage }`.
- `SymbolLanguage` enum: Cpp, Rust, Swift, ObjC.
- Language detection by mangled symbol prefix: `?` → MSVC (Cpp), `$s`/`$S`/`_$s`/`_$S`/`_T` → Swift, `_R[A-Z]` → Rust v0, `_ZN`/`__ZN` with `17h...E` → Rust legacy, `_Z`/`__Z` → Itanium C++.
- `extract_short_name()` strips parameters from demangled full signature by finding first `(` and taking everything before it, then stripping return type by rfind on space.
- `sanitize_for_c()` converts demangled names to valid C identifiers by replacing non-alnum/underscore chars with `_`, collapsing runs, handling digit-start and empty-string edge cases.
- Integration in `c_printer.rs::print_c()`: if `demangle(&func.name)` returns `Some(dr)`, prepends `// <full_signature>` comment and uses `sanitize_for_c(&dr.short_name)` as the emitted function name. Unmangled names pass through unchanged.
- 8 unit tests: demangle_cpp_itanium, demangle_rust_v0 (legacy `_ZN...17h...E` form), demangle_msvc (`?foo@bar@@YAHXZ`), demangle_swift (gracefully skips if cc build dep unavailable), demangle_not_mangled, demangle_invalid_mangled, sanitize_cpp_name, sanitize_edge_cases.
- Pre-existing issue: `SsaFunction` gained `calling_convention: CallingConvention` field (from another task) that `ir_dump.rs` test helper was missing. Fixed by adding the field with `CallingConvention::Unknown`.
- Total: 31 tests pass in unlace-output (8 new demangle + 10 c_printer + 5 cfg_dot + 8 ir_dump).

## Task 33: PE Loader via `object` crate
- New file: `crates/unlace-loader/src/pe.rs` — `PeLoader` struct implementing `Loader` trait.
- Handles both PE32 (32-bit, `ImageNtHeaders32`) and PE32+ (64-bit, `ImageNtHeaders64`) via generic `load_pe::<Pe: ImageNtHeaders>()`.
- `can_load()` checks: DOS magic "MZ" at offset 0, reads `e_lfanew` at offset 0x3C, verifies "PE\0\0" signature at NT headers offset.
- PE32 vs PE32+ dispatch: reads optional header magic at nt_offset+24 — `IMAGE_NT_OPTIONAL_HDR64_MAGIC` (0x020B) vs `IMAGE_NT_OPTIONAL_HDR32_MAGIC` (0x010B).
- Arch mapping: `IMAGE_FILE_MACHINE_AMD64` → X86_64, `IMAGE_FILE_MACHINE_I386` → X86, `IMAGE_FILE_MACHINE_ARM64`/`ARM64EC` → AArch64, `IMAGE_FILE_MACHINE_ARMNT`/`ARM` → Arm, `IMAGE_FILE_MACHINE_RISCV64` → RiscV64, `IMAGE_FILE_MACHINE_POWERPC`/`POWERPCFP`/`POWERPCBE` → Ppc, MIPS variants → Mips, others → `Unknown(machine)`.
- PE is always little-endian — hardcoded `Endian::Little`.
- Section flags: `SectionFlags::Coff { characteristics }` — maps `IMAGE_SCN_MEM_READ/WRITE/EXECUTE` to `SectionFlags::READ/WRITE/EXEC`.
- Symbols from 3 sources: COFF symbol table (via `file.symbol_table()`), PE exports (via `file.exports()`), PE imports (via `file.imports()`).
- Exports carry fully-resolved VAs (image_base + RVA), matching `object` crate's `Export.address()` semantics.
- Imports stored at address 0 with DLL-qualified names (`dll!function`) — true IAT addresses depend on runtime loader.
- Machine field access: `file.nt_headers().file_header().machine.get(LittleEndian)` — returns raw u16.
- Entry point from `file.entry()` is absolute VA (image_base + AddressOfEntryPoint).
- `object` crate v0.39 includes PE support in default features — no feature flag change needed.
- No PE fixture binaries — tests construct minimal PE32/PE32+ binaries inline (hand-crafted byte arrays).
- Minimal PE structure: DOS header (64 bytes) + NT headers at 0x80 + COFF file header + optional header + 1 section header + section data at 0x200.
- PE32+ optional header size: 112 bytes (minimum without data directories); PE32: 96 bytes.
- 7 PE tests: can_load, load_pe64, reject_non_pe, section_flags, entry_is_absolute_va, load_pe32, sections_have_data.
- Total: 12 tests pass (5 ELF + 7 PE). `cargo check --workspace` clean.
- `pub mod pe; pub use pe::PeLoader;` added to lib.rs alongside ElfLoader.
