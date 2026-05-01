# Phase 14 Learnings

## P14-0: Baseline Scores + IDA Reference Study

### Baseline Scores (Phase 13 end)
| Fixture | Score | Actual if/for/while/return/vars | Reference if/for/while/return/vars |
|---------|-------|---------------------------------|------------------------------------|
| medium | 57.3% | 41/0/6/5/10 | 60/5/3/8/30 |
| debug_structs | 93.9% | 0/0/0/2/8 | 0/0/0/3/8 |
| debug_calls | 70.9% | 2/0/0/9/24 | 5/0/0/5/10 |
| debug_hello | 99.1% | 0/0/0/1/4 | 0/0/0/1/3 |
| cpp_vtable | 59.7% | 0/0/0/1/6 | 2/0/0/3/5 |
| cpp_exceptions | 78.2% | 1/0/2/3/12 | 3/0/0/2/8 |
| cpp_rtti | 87.3% | 4/0/2/6/18 | 5/0/0/3/10 |
| x87_math | 81.8% | 1/0/0/3/10 | 2/0/0/4/12 |
| arm64_features | 81.8% | 1/0/0/3/8 | 2/0/0/4/8 |
| mips64_features | 95.5% | 2/0/1/3/8 | 2/0/0/4/8 |
| riscv64_features | 68.2% | 0/0/1/3/8 | 2/0/0/4/8 |
| v850_features | 72.7% | 0/0/0/2/4 | 1/0/0/2/4 |
| arc_features | 54.5% | 0/0/0/0/4 | 1/0/0/2/4 |
| ppc64_features | 72.7% | 0/0/0/2/4 | 1/0/0/2/4 |

### IDA Reference Code Study

All files in `references/hexrays/ida_dump/hexx64/all/` and `references/ida/processors/pc/all/` are **Git LFS pointers** (not actual C code). Analysis is based on file names (function names) which reveal IDA's internal architecture.

#### IDA Reference Inventory
- **hexx64/all/**: 7824 decompiled functions (830 named, 6687 sub_*, 307 nullsub_*)
- **processors/pc/all/**: 1180 x86 processor functions (408 named, 772 sub_/nullsub_)
- **processors/arm/all/**: 1094 ARM processor functions (all LFS)

### Observation 1: IDA's Function Naming Strategy
IDA names functions by their symbol table entry. Of 7824 hexx64 functions, only 830 (10.6%) have meaningful names — the rest are `sub_ADDR` or `nullsub_N`. This tells us IDA decompiles ALL functions regardless of naming, and the decompiler doesn't need names to produce valid C. Our decompiler should similarly not depend on symbol names for correctness.

### Observation 2: IDA's Condition Recovery Architecture
IDA's hexx64 plugin has dedicated functions for condition handling: `fc_calc_block_type`, `is_basic_block_end`, `calc_switch_cases`, `get_switch_info`. The processor module has `check_flat_jump_table`, `find_defjump_from_table`, `has_jump_or_flow_xref`. This reveals a two-layer architecture: the processor module identifies branch patterns (TEST+Jcc, CMP+Jcc), and the hexx64 decompiler folds them into high-level conditions. Our condition_simplify.rs must handle the same folding.

### Observation 3: IDA's Return Detection
IDA has `func_does_return` (in both hexx64 and processors/pc), `is_ret_insn`, `get_frame_retsize`, `calc_retloc`. This shows IDA determines return behavior at the function level (not per-block), using calling convention info (`calc_retloc`) to identify the return register. Our return_merge.rs should similarly use calling convention data to find the return register rather than hardcoding RAX.

### Observation 4: IDA's Variable/Type System
IDA has extensive type infrastructure: `calc_arglocs`, `calc_varglocs`, `build_stkvar_name`, `calc_stkvar_struc_offset`, `apply_tinfo`, `verify_tinfo`, `get_numbered_type`, `parse_decl`. Variables are declared based on stack frame analysis (`add_frame_member`, `func_has_stkframe_hole`) and type propagation — NOT by counting register uses. This means IDA only declares variables for stack slots and named parameters, suppressing register temporaries entirely.

### Observation 5: IDA's Loop Recovery
IDA's `create_qflow_chart` and `create_multirange_qflow_chart` build the control flow graph, and `fc_calc_block_type` classifies blocks. Notably, there are NO explicit "loop detection" functions in the file names — IDA likely recovers loops during structuring (not as a separate pass). The `calc_switch_cases` function handles switch/case, which is separate from loop detection. This suggests IDA's loop recovery is integrated into its structural analysis, not a post-pass like our while_to_for.rs.

### Observation 6: IDA's Exception Handling
IDA has `__cxa_allocate_exception`, `__cxa_begin_catch`, `__cxa_end_catch`, `__cxa_rethrow`, `__cxa_free_exception`, `__cxa_guard_acquire`, `__cxa_guard_release`, `__cxa_pure_virtual`, `find_syseh`. These are decompiled as regular functions, meaning IDA treats C++ exception handling functions as normal calls with known signatures. Our cpp_exceptions fixture should similarly recognize these as known library calls.

### Observation 7: IDA's Scoring Formula Implications
The scoring formula uses weights: if/for/while = 3.0 each, return = 2.0. Penalties: -2.0 per goto, -0.1 per excess var. Total weight = 11.0. This means:
- Missing 1 if in a fixture with ref=1 costs 3.0/11.0 = 27.3 points
- Missing 1 return in a fixture with ref=4 costs 0.5/11.0 = 4.5 points
- 14 excess vars costs 1.4/11.0 = 12.7 points
- The biggest bang-for-buck is recovering missing ifs in low-if-count fixtures (arc, v850, ppc64)

---

## P14-1: Per-Fixture Root Cause Classification

### 1. medium (57.3% → target 100%)
**Gap**: +19 ifs (41→60), +5 for (0→5), -3 while→for (6→3), +3 return (5→8)
**Root cause — missing ifs**: The 19 missing ifs come from comparison chains not being fully folded. Patterns like `v1 = INT_SUB(a,b); v2 = INT_SLESS(v1,0); CBRANCH(v2)` need to fold to `if (a < b)`. Also compound conditions (`&&`, `||`) from sequential CBRANCHes targeting the same block are not being collapsed.
**Root cause — missing for-loops**: 5 while-loops should be for-loops. Pattern: `while(v) { body; v--; }` → `for(; v; v--)`. The while_to_for pass doesn't match decrement-to-zero patterns.
**Root cause — excess whiles**: 3 of the 6 whiles should be for-loops (same root cause as above).
**Root cause — missing returns**: 3 functions lack explicit return statements. Return register assignment before RETURN pcode op not detected.

### 2. arc_features (54.5% → target 100%)
**Gap**: +1 if (0→1), +2 return (0→2)
**Root cause — missing if**: ARC lifter doesn't emit proper branch conditions for ARC's conditional branch instructions. The CBRANCH condition is lost or simplified to a constant.
**Root cause — missing returns**: ARC's return convention (JMP [BLINK] or J [BLINK]) not recognized by return_merge. No return statements emitted at all (0 actual vs 2 reference).

### 3. cpp_vtable (59.7% → target 100%)
**Gap**: +2 ifs (0→2), +2 return (1→3), -1 var (6→5)
**Root cause — missing ifs**: Null-check patterns on vtable pointers (`test reg, reg; je`) not recovered. The TEST instruction emits INT_AND(reg, reg) which should simplify to reg, then INT_EQUAL(reg, 0) for JE should fold to `if (!reg)`.
**Root cause — missing returns**: 2 functions missing return value detection. CMOVcc-based return values not propagated.
**Root cause — excess var**: 1 temporary variable should be folded into expression.

### 4. riscv64_features (68.2% → target 100%)
**Gap**: +2 ifs (0→2), -1 while→for (1→0), +1 return (3→4)
**Root cause — missing ifs**: RISC-V branch instructions (BEQ, BNE, BLT, BGE) conditions not fully recovered by the lifter. The comparison operands are lost during lifting.
**Root cause — excess while**: 1 while-loop should be a for-loop (counter pattern not detected).
**Root cause — missing return**: 1 function missing return value from return register.

### 5. debug_calls (70.9% → target 100%)
**Gap**: +3 ifs (2→5), -14 vars (24→10)
**Root cause — missing ifs**: CMOVcc conditions degraded during optimization. Phase 13 SCCP fix partially works but 3 conditions still collapse to constants. The flag varnode feeding CMOVcc Callother doesn't survive all optimization passes (copy_prop, dce, gvn may eliminate it).
**Root cause — excess vars**: 14 excess variables. Many are flag-register variables (ZF, SF, CF offsets 256-261) that IDA never declares. Others are single-use temporaries from unique-space varnodes that should be folded into expressions. Dead-variable chain: vars only read by other dead vars.

### 6. ppc64_features (72.7% → target 100%)
**Gap**: +1 if (0→1)
**Root cause — missing if**: PPC64 conditional branch (bc instruction) condition not recovered. The CR (condition register) field comparison result is lost during lifting. The lifter needs to emit proper INT_SLESS/INT_EQUAL from CR bit tests.

### 7. v850_features (72.7% → target 100%)
**Gap**: +1 if (0→1)
**Root cause — missing if**: V850 conditional branch condition not recovered. Similar to PPC64 — the comparison result feeding the branch is lost. V850 uses flag-based branching (PSW flags) and the lifter doesn't emit the comparison chain that condition_simplify expects.

### 8. cpp_exceptions (78.2% → target 100%)
**Gap**: +2 ifs (1→3), -2 while→for (2→0), -4 vars (12→8)
**Root cause — missing ifs**: Exception handling paths have conditions that aren't recovered. The `__cxa_begin_catch`/`__cxa_end_catch` call sequences have implicit null-checks that IDA recovers but we don't.
**Root cause — excess whiles**: 2 while-loops should be for-loops. Counter modification in last statement not detected by while_to_for.
**Root cause — excess vars**: 4 excess variables — temporaries from exception handling lowering that should be suppressed.

### 9. x87_math (81.8% → target 100%)
**Gap**: +1 if (1→2), +1 return (3→4)
**Root cause — missing if**: x87 FPU comparison (FCOM/FUCOM + FNSTSW + TEST AH) not fully folded into a single condition. The multi-instruction sequence for FPU comparisons needs special handling in condition_simplify.
**Root cause — missing return**: 1 function missing return value. x87 returns via ST(0) register, not RAX — return_merge only checks RAX.

### 10. arm64_features (81.8% → target 100%)
**Gap**: +1 if (1→2), +1 return (3→4)
**Root cause — missing if**: ARM64 conditional branch (B.cond) condition not fully recovered. The NZCV flags from CMP instruction need to be folded with the branch condition code.
**Root cause — missing return**: 1 function missing return value from X0 register (ARM64 return register).

### 11. cpp_rtti (87.3% → target 100%)
**Gap**: +1 if (4→5), -2 while→for (2→0), -8 vars (18→10)
**Root cause — missing if**: 1 condition from dynamic_cast null-check not recovered. Pattern: `test rax, rax; je` after dynamic_cast call.
**Root cause — excess whiles**: 2 while-loops should be for-loops (same counter-modification pattern as medium).
**Root cause — excess vars**: 8 excess variables — RTTI type info temporaries and flag registers that should be suppressed.

### 12. debug_structs (93.9% → target 100%)
**Gap**: +1 return (2→3)
**Root cause — missing return**: 1 function (likely main) missing `return 0;`. The implicit return for main-like functions is not emitted.

### 13. mips64_features (95.5% → target 100%)
**Gap**: -1 while→for (1→0), +1 return (3→4)
**Root cause — excess while**: 1 while-loop should be a for-loop. MIPS64 delay-slot-based loop with counter decrement not promoted.
**Root cause — missing return**: 1 function missing return value from $v0 register (MIPS64 return register).

### 14. debug_hello (99.1% → target 100%)
**Gap**: -1 var (4→3)
**Root cause — excess var**: 1 excess variable — likely a single-use temporary or flag register variable that should be suppressed.

---

## Root Cause Summary (Actionable)

| Root Cause | Fixtures Affected | Total Impact | Fix Location |
|------------|-------------------|--------------|--------------|
| Comparison chain folding (4+ levels) | medium, cpp_vtable, cpp_rtti | +22 ifs | condition_simplify.rs |
| CMOVcc condition preservation | debug_calls | +3 ifs | SCCP/copy_prop/dce/gvn |
| Arch-specific branch recovery | arc, riscv64, v850, ppc64, arm64 | +6 ifs | lift-*/mod.rs |
| Null-check (TEST+JE) folding | cpp_vtable, cpp_exceptions | +3 ifs | condition_simplify.rs |
| x87 FPU comparison folding | x87_math | +1 if | condition_simplify.rs |
| While→for (counter in last stmt) | medium, cpp_exceptions, cpp_rtti, riscv64, mips64 | -9 whiles, +5 for | while_to_for.rs |
| Return from non-RAX registers | x87_math, arm64, mips64, arc | +4 returns | return_merge.rs |
| Implicit return 0 for main | debug_structs, medium | +2 returns | return_merge.rs |
| Return register detection | cpp_vtable, riscv64, medium, arc | +7 returns | return_merge.rs |
| Flag-register var suppression | debug_calls, cpp_rtti, cpp_exceptions | -18 vars | c_printer.rs |
| Single-use temp suppression | debug_calls, cpp_rtti, debug_hello | -9 vars | c_printer.rs |
| Dead-var chain elimination | debug_calls | -1 var | c_printer.rs |
