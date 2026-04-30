# Phase 7 Learnings

## BLOCKER: branches.elf hang after CMOVcc fix

### Status
- CMOVcc fix (CBRANCH + COPY split) is in the working tree but NOT committed
- The fix makes debug_calls.elf produce 3 if-branches (was 0) — SUCCESS
- BUT branches.elf hangs during decompilation — REGRESSION
- cli_smoke tests `all_fixtures_exit_zero` and `branches_fixture_has_output` hang

### Root Cause (suspected)
The CMOVcc at 0x115d in branches.elf's `classify` function emits:
- Record at 0x115d: CBRANCH targeting 0x1160 (next instruction = RET)
- Record at 0x115e: COPY (synthetic address)

The hang is likely in:
1. SSA construction (build_ssa) — cyclic CFG from synthetic block
2. OR pass pipeline (fixedpoint loop) — SCCP/CSE on broken SSA
3. OR structurer — cycle in block traversal

### Debug Commands Added
```bash
RUST_LOG=debug ./target/debug/unlace decompile fixtures/branches.elf 2>&1 | head -100
RUST_LOG=trace ./target/debug/unlace decompile --function classify fixtures/branches.elf 2>&1
```

Pipeline stages logged: STAGE 1/6 through STAGE 6/6
Each pass logged individually in run_passes
Block starts logged with addresses

### What Needs to Happen
1. User runs debug commands to find exact hang location
2. Fix the hang (likely in split_intra_branch or build_function_from_insns)
3. Then commit CMOVcc fix + hang fix together
4. Update golden tests
5. Continue with remaining Phase 7 tasks

### Workaround Options
- Revert CMOVcc changes and continue with other Phase 7 tasks
- OR fix the hang first, then continue
