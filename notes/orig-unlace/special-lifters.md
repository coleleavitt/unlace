# Original unlace hand-written lifters: techniques main lacks

Scope: the ten hand-written lifters on origin/master (`unlace-lift-evm`, `-lua`, `-sass`, `-amdgpu`, `-agx`, `-appleagx`, `-spirv`, `-ebpf`, `-sbpf`, `-wasm`). Main lifts all of these through SLEIGH or the loader, so only the semantic idioms are compared, not the decoders. Main status is checked by grep and by reading the SLEIGH specs and the named source. Read `notes/archived-master-inventory.md` first: it already records these lifters as skipped as a whole. This table adds the per-technique view.

Result: most of the ten are covered or superseded on main. Real gaps are (a) Solidity-level recovery in EVM (no keccak-256, no selector naming, no revert, event or storage recognition) and (b) Lua chunk-container parsing, which main does not have at all. The AGX and AppleAgx encodings are invented pseudo-encodings and SPIR-V is a language main does not have, so neither is worth porting.

Ranked table. Original line numbers are in origin/master; main paths are in the current worktree.

| # | Technique | origin/master (what it does) | Main status | Port? | Size |
|---|---|---|---|---|---|
| 1 | Solidity dispatcher: `PUSH4 sel; EQ; PUSH2 target; JUMPI` gives an entry point, named from a caller-supplied signature table | `unlace-lift-evm/src/solidity.rs:242` analyse, `:267` dispatcher scan (nearest PUSH4 before each EQ), `:132` selector | **Missing.** No selector or signature code in `crates/`. EVM internal calls are recovered (`crates/unlace-lift/src/p2_lift/evmcalls.rs`, `phases.toml:2500`), but dispatch entries are not named | **Yes.** Every public function of a solc contract prints as a bare jump or `sub_`; the name is the first thing a reader needs. Behind a `phases.toml` option | M |
| 2 | Keccak-256 sponge with `selector(sig)` and `event_topic(sig)` (self-contained, no crate) | `solidity.rs:56` keccak_f1600, `:92` keccak256, `:132` selector, `:138` event_topic; known-answer tests near `:485` | **Missing.** `grep -r keccak crates --include=*.rs` finds nothing | **Yes**, as the enabler for rows 1, 3 and 4. Standard function, checked against published vectors | S |
| 3 | `require` / `Error(string)` revert: a REVERT preceded by a push of selector `0x08c379a0` | `solidity.rs:373` (pattern block), test near `:590` | **Missing.** `phases.toml:2519` (`wideconst`) only prints the selector as a shift chain | Yes, after row 2. Small, low risk | S |
| 4 | Event emission: `LOG0`..`LOG4` with topic 0 named from its signature | `solidity.rs` EventEmission (`:~221`), test near `:566` | **Missing.** LOG lifts through SLEIGH and the topic prints as a wide-constant chain (`phases.toml:2519`) | Yes, after row 2. Needs the signature table from row 1 | S |
| 5 | Storage access: `SLOAD`/`SSTORE` with a constant slot versus a slot computed by `SHA3` (mapping or dynamic array), tracked over a short window | `solidity.rs:146-199` (StorageAccess, StorageSlotKind), `:461` window_has_sha3, tests near `:538` and `:552` | **Missing.** No sload/sstore recognition in `crates/` | Yes, opt-in only. The SHA3 window is a heuristic and can misfire on non-mapping hashes | M |
| 6 | Proxy marker: `DELEGATECALL` reported as a proxy pattern | `solidity.rs:211-214` (pattern variant), test near `:579` | **Missing.** No delegatecall handling in `crates/` | Yes, but low value: a one-line flag | S |
| 7 | SafeMath overflow check: arithmetic, compare, conditional revert | `solidity.rs:13`, `:389-404` | **Missing** | **No.** It is an ordinary compare and revert, which the structurer already prints. A window match adds false positives and no new information | — |
| 8 | Lua `luac` container parser, 5.1 to 5.4: header and version, constant pool, upvalues, nested prototypes in DFS order, debug names | `unlace-lift-lua/src/chunk.rs:298` Chunk::parse; `lib.rs:19` lift_lua_bytecode | **Missing.** No Lua signature or chunk parser in `crates/` or `crates/unlace-analysis/src/loader/format/`. Main only lifts a raw code array (`--raw-image`, `crates/unlace-cli/tests/lua54.rs`, `processors.toml:2930`) | **Yes**, as a loader in `unlace-analysis` (`loader/format/lua.rs`), not as a lifter. SLEIGH stays the lifter. It is the prerequisite for row 9 | M-L |
| 9 | Lua stdlib naming: a GETTABUP or GETGLOBAL of a known name, followed by a CALL, names the call (`print`, `string.format`) | `stdlib.rs:180` from_name, `:263` detect_stdlib_calls | **Missing.** Output keeps indices: `luaGetGlobal(K5)`, `luaCall(luaGetTable(U0,K1),...)` (`lua54.rs`, `processors.toml:2930` family) | Yes, after row 8. Annotation only: the IR keeps string constants as pool indices (`ir_lift.rs:12`), so names must come from parsed constants | S |
| 10 | sBPF: every instruction lifts to Unimplemented | `unlace-lift-sbpf/src/lib.rs` (whole file, 102 lines) | **Have, ahead.** Syscall labels by murmur3 (`crates/unlace-cli/tests/sbpf.rs:39-44`) | No | — |
| 11 | WASM: call, return, block, loop, br, br_if; locals as registers | `unlace-lift-wasm/src/lib.rs:236-278` | **Have, ahead.** `crates/unlace-analysis/src/loader/wasmlower.rs` (1424 lines, `br_table` at `:548`); names from name, export or import (`loadimage_wasm.rs:17-18`) | No | — |
| 12 | EVM STOP, RETURN, REVERT end the path (no fallthrough) | `unlace-lift-evm/src/lib.rs:778` op_stop_yields_return | **Have.** `specs/Ghidra/Processors/EVM/data/languages/evm.slaspec:296-298` (STOP) and `:684-690` (RETURN). Internal-function returns come from `evmcalls.rs` | No | — |
| 13 | Wide PUSH32 immediates | `unlace-lift-evm/src/lib.rs` header: only the low 128 bits are kept | **Have, ahead.** `wideconst` (`phases.toml:2519`) prints the full value | No | — |
| 14 | eBPF: `EXIT` returns r0; `CALL` with imm is a helper id | `unlace-lift-ebpf/src/lib.rs:295`, `:303` | **Have** through SLEIGH. Helper ids print as numbers; main has no helper-name table, and neither does origin/master | No here (see adjacent gaps) | — |
| 15 | AMDGPU: `s_endpgm` is a return | `unlace-lift-amdgpu/src/lib.rs:928` | **Have.** `specs/Ghidra/Processors/AMDGPU/data/languages/amdgcn_gfx9.slaspec:956` `return [PC]` (gfx10 to gfx12 specs not checked line by line) | No | — |
| 16 | SASS: RET and EXIT return | `unlace-lift-sass/src/lib.rs:341`, `:345` | **Have.** `sass_SM70.sinc:15574` and siblings `return [RETPC]`. The original bit layout is an invented MVP, so nothing to take | No | — |
| 17 | AGX: CALLOTHER families for texture, barrier, atomic, lane shuffle, vector ALU | `unlace-lift-agx/src/lib.rs:58-66` | **Missing.** No AGX language under `specs/Ghidra/Processors/` and no crate. The header calls the encoding a `conservative` core with `pseudo-encodings` | **No.** There is no published ISA to check the encodings against, so porting them would port guesses. Revisit only with a documented source | — |
| 18 | AppleAgx: CALLOTHER tags for texture, barrier, wait, discard | `unlace-lift-appleagx/src/lib.rs:38-44` | **Missing** (same as row 17) | **No**, same reason | — |
| 19 | SPIR-V: SSA result ids as unique varnodes; OpReturn, OpBranch, OpFunctionCall | `unlace-lift-spirv/src/lib.rs:193`, `:331` | **Missing.** No SPIR-V language, spec or crate | **No.** That would be a new language and loader, not a technique. The original ignores OpSelectionMerge and OpLoopMerge, so it offers no structuring hint either | — |

## Adjacent gaps (not in origin/master)

- eBPF helper ids: a `CALL` with a helper id could print the helper's name (the uapi `bpf.h` enum). Neither side does it.
- AMDGPU kernel descriptor: wave size, kernarg size and register counts. `crates/unlace-analysis/src/loader/elfmachinetarget.rs:12-13` mentions that wave32 comes from the kernel descriptor, but nothing parses it (no `amdhsa` or `kernel_code` in `crates/`).

## Suggested issues

1. Selector naming for the EVM dispatcher, with keccak-256 (rows 1 and 2).
2. A Lua `luac` container loader for 5.1 to 5.4 (row 8).
3. EVM storage slot and mapping-key recovery (row 5).
