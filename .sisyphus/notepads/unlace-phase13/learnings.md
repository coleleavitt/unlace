# Phase 13 Learnings

## P13-1: Missing ifs in medium.c (41 actual vs 60 IDA reference = 19 gap)

### Per-function breakdown

| Function | Cond. branches (objdump) | Our ifs | IDA ifs (est.) | Gap |
|---|---|---|---|---|
| main | 32 | 27 | ~32 | ~5 |
| f_ackermann | 35 | 1 | ~15 | ~14 |
| f_rec_fib | 26 | 5 | ~10 | ~5 |
| f_rec_power.constprop.0 | 8 | 8 | ~8 | 0 |
| _start | 6 | 0 | ~0 | 0 |

**Total gap: ~19 missing ifs** (concentrated in f_ackermann and f_rec_fib)

### Gap 1: f_ackermann — unrolled recursion not recovering if chains (14 missing ifs)

The compiler deeply unrolled the Ackermann recursion into repeated `test reg, reg` / `jne`
pairs. Each unrolled iteration has 2 conditional branches (test eax + test counter_reg).
Our structuring pass collapses the entire unrolled body into a single `if (v6)` block,
losing ~14 conditional branches that should each be separate `if` statements.

**Pattern**: `test %eax,%eax; jne` followed by `test %r12d,%r12d; je` repeated 8+ times.
Each pair is an independent condition check on a different unrolled iteration variable.

**Root cause**: The flag chain folding pass doesn't recognize that each `test+jne` in the
unrolled sequence is a distinct condition — it merges them into one region. The structuring
algorithm then sees one large region with one entry condition instead of many nested ifs.

### Gap 2: f_rec_fib — loop back-edges misclassified, flag conditions lost (5 missing ifs)

f_rec_fib has 26 conditional branches but we only emit 5 ifs. The function has a
`while (v8)` loop containing conditional logic, but many of the inner conditional
branches are being absorbed into the loop body without generating `if` statements.

**Pattern**: Inside the recursive Fibonacci unrolling, `test` instructions set flags that
are consumed by later `jne`/`je` instructions across basic block boundaries. Our flag
chain analysis doesn't propagate flag definitions across loop back-edges, so conditions
that depend on flags set in a previous iteration are lost.

**Root cause**: Flag chain unfold doesn't track flag defs across loop back-edges. When a
`test` in block A sets ZF, and a `je` in block C (after looping back through B→A→C)
consumes it, we fail to create the `if` because the flag def is in a "previous" iteration.

### Gap 3: main — compound conditions and cmov patterns not folded (5 missing ifs)

main has 32 conditional branches but only 27 ifs. The 5 missing ifs come from:

1. **Constant-condition ifs degraded**: Patterns like `if (0) { 1 = 3; }` appear 4 times.
   These are flag chain artifacts where `test` with immediate 0 produces a constant
   condition. IDA would fold these into proper comparisons against variables, but our
   flag chain pass emits the raw constant.

2. **SSE comparison branches lost**: The `_mm_add_epi32` / `_mm_load_si128` sequences
   in the SIMD loop have associated conditional branches (`if (v10)`) that test packed
   integer results. Some branches after SIMD operations are not being recovered because
   the flag-setting instruction is an SSE comparison (`pcmpeqd`, `pmovmskb`) that our
   lifter doesn't model as flag-producing.

3. **Stack canary check branch**: The `__readfsqword(0x28)` canary check at function
   epilog has a `test`+`jne` to `__stack_chk_fail`. We emit this as `if (v38) {}` but
   IDA may count additional related branches we miss.

### Summary of root causes

| Root cause | Missing ifs | Fix approach |
|---|---|---|
| Unrolled recursion not recovering nested ifs (f_ackermann) | ~14 | Structuring: detect repeated test+branch patterns in unrolled code |
| Flag chain unfold across loop back-edges (f_rec_fib) | ~5 | Flag analysis: propagate flag defs across loop iterations |
| SSE/SIMD comparison branches not modeled (main) | ~3 | Lifter: model pcmpeqd/pmovmskb as flag-producing |
| Constant-folded conditions (main) | ~2 | Flag chain: fold `test reg, imm0` into proper comparisons |
