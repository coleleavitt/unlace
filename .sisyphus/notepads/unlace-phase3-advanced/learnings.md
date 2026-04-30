# Learnings — Phase 3 unlace-phase3-advanced

## Wave 1 Findings (P3-1, P3-3, P3-4, P3-5, P3-6)

### Conventions discovered
- Crate uses `BTreeMap`/`BTreeSet`/`IndexMap` only — never `HashMap`/`HashSet`. Lint enforces via `cargo xtask lint-determinism`.
- Pass trait pattern: `pub trait Pass { fn run(&self, function: &mut SsaFunction); }` — see `dce.rs`, `const_fold.rs`.
- Test convention: `#[cfg(test)] mod tests { use super::*; ... }` at end of file with `#[test] fn test_*` per case.
- Section separator comments (`// ── Pattern: ...`) follow `idiom_recognition.rs` style.
- IR ops naming: `IntMult`, `IntRight` (logical shr), `IntSright` (arithmetic shr), `IntDiv` (unsigned), `IntSdiv` (signed), `IntMod`, `IntSrem`, `IntAnd`, `IntSub`, `Load`, `Store`, `Call`, `Callind`.

### IR/SSA structure
- `SsaFunction` has `function.blocks` (raw IR insns, NOT renamed by SSA), `cfg`, `phi_map: BTreeMap<BlockId, Vec<PhiNode>>`, `var_map`.
- Key insight: SSA renaming stores versioned vars in `var_map` separately — the actual `IrInsn::output` and `IrInsn::inputs` in blocks remain pre-SSA. So pattern matching can use raw Varnode equality.
- Phi node: `PhiNode { output: SsaVarnode, inputs: Vec<(BlockId, SsaVarnode)> }`.
- CFG edges: `successors[0]` = ConditionalTrue target, `successors[1]` = ConditionalFalse target.
- CBRANCH: `input[0]` = target address, `input[1]` = boolean condition.

### Division-by-magic-constant math (P3-1)
- Formula is `N = round(2^shift / magic)` — shift in IR already includes the widening (NOT `2^(bits+shift)`).
- Common magic constants:
  - 0xAAAAAAAB shift 33 → div by 3 (unsigned 32-bit)
  - 0xCCCCCCCD shift 34 → div by 5
  - 0xCCCCCCCD shift 35 → div by 10
  - 0x24924925 shift 32 → div by 7
  - 0x55555556 shift 32 → signed div by 3
  - 0x66666667 shift 33 → signed div by 5
- Verification: test candidate N over representative values (0, 1, N-1, N, N+1, N*2, N*100, UINT_MAX) before accepting match.

### SCCP (P3-4)
- External SSA inputs (registers/RAM never defined in function = function parameters) MUST be initialized to `Bottom`, NOT `Top`. Otherwise CBRANCH waits forever.
- Solver borrow split: extract owned `SccpResults { values, reachable }` before rewrite phase to escape immutable borrow on func.
- Use `BTreeMap<SsaVarnode, LatticeValue>` and `BTreeSet<BlockId>`.

### C printer findings (P3-5, P3-6)
- IDA typedefs prelude: `_BYTE _WORD _DWORD _QWORD __int8 __int16 __int32 __int64`
- LOAD output type changed from `Ptr` to `UnsignedInt(size)` — load reads VALUE not pointer, fixes gcc compile.
- Negative const heuristics: never normalize 1-byte constants. 2-byte only if abs ≤ 128. 4/8-byte normalize when MSB set in signed context. Bitwise ops (`&`, `|`, `^`, shifts) always keep hex.
- INT_ADD with negative const → render as subtraction: `v1 - 8` not `v1 + -8`.

## Gotchas

### Cargo incremental compilation gotcha
- After editing source, `cargo test` may use stale binary even on touched files. Workaround: also touch `lib.rs` to force module-tree rebuild, or run `cargo clean` if desperate.

### Race conditions between background agents
- Multiple agents in same crate can race on `lib.rs` edits — one agent's edit gets overwritten when another agent rewrites the file. Workaround: write full file content with all needed entries, not piecemeal Edit calls.
- One commit may bundle other agents' staged files. Resolution: use `git reset HEAD~1`, then `git add` ONLY your specific files, recommit. (P3-1 commit grabbed sccp.rs incorrectly — was fixed.)
- HEAD commit messages may misattribute work (P3-5 commit included P3-6 changes). Solution: commit evidence file with proper scope even if code already merged elsewhere.

### Background agent dispatch
- 6th concurrent task() call blocks for 60+ seconds and times out. Throttle to 5 concurrent background agents.
- Use `run_in_background=true` only for exploration or independent code work — wait for completion notifications, don't poll.

## Inherited Wisdom for Wave 2+
- Wave 2 (P3-2, P3-7 to P3-11) all touch different files — safe to parallelize 5-way.
- Modulo idiom (P3-2) depends on division_idiom which is committed — IR ops `IntDiv`, `IntSdiv`, `IntMod`, `IntSrem`, `IntAnd` all exist.
- Structuring tasks (P3-7 do/while, P3-9 continue) edit `crates/unlace-struct/src/structurer.rs` — likely conflict if parallel. Sequence them.
- For-loop (P3-7) extends existing while-loop logic.
- CSE (P3-11) builds on SCCP infrastructure (lattice, dataflow).
- Variable coalescence (P3-10) extends `crates/unlace-passes/src/variable_merge.rs`.
