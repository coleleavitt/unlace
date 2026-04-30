# Phase 5 Root Cause Analysis

## THE SMOKING GUN: 10,766 Unlifted Instructions

Current lifter handles 98.6% of instructions (749,604 / 760,370) but the 1.4% that are
MISSING are disproportionately impactful because they sit in critical code paths.

### Top Unlifted Instructions by Frequency

| Instruction | Count | Category | Impact |
|-------------|-------|----------|--------|
| MOVUPS | 1,057 | SSE Move | FP data flow broken |
| UD2 | 988 | Trap | Control flow incomplete |
| SETE | 952 | SETcc | Conditional assignments GONE |
| MOVAPS | 835 | SSE Move | FP data flow broken |
| SETNE | 704 | SETcc | Conditional assignments GONE |
| CLTQ | 467 | Sign Ext | Division operands wrong |
| SBB | 298 | Carry Arith | Multi-precision broken |
| SETA | 246 | SETcc | Conditional assignments GONE |
| SETB | 157 | SETcc | Conditional assignments GONE |
| SETG | 103 | SETcc | Conditional assignments GONE |

### Why SETcc Is The #1 Priority

SETcc instructions (SETE, SETNE, SETB, SETA, SETBE, SETG, SETL, SETGE, SETLE) total
**3,746 occurrences**. They convert flag conditions to 0/1 byte values:

```asm
cmp rax, rbx
sete al          ; AL = (rax == rbx) ? 1 : 0
```

When these are `Unimplemented`, the decompiler:
1. Loses the conditional assignment → if-branch count drops
2. Loses the condition → call arguments wrong
3. Loses data flow → variables become disconnected

This DIRECTLY explains why `if-branches` scores 0.297 avg (IDA=59, unlace=0 for sub_1e2580).

### Impact Projection

| Fix | Instructions Recovered | Expected Parity Impact |
|-----|----------------------|----------------------|
| SETcc family | 3,746 | +10-15% (if-branches) |
| MOVAPS/MOVUPS/MOVSD | 1,931 | +3-5% (calls, data flow) |
| CLTQ/CLTD/CQTO | 619 | +2-3% (arithmetic) |
| ADC/SBB | 339 | +1-2% (multi-precision) |
| BT/BSR | 94 | +0.5% (bit ops) |
| UD2 | 988 | +1% (control flow) |
| TOTAL | 10,766 | +17-26% projected |

52.3% + 17-26% = **69-78% projected after instruction coverage fix alone**

### Other Parity Gaps (from per-function analysis)

1. Structurer: loop detection misses back-edges → while-loops score 0.588
2. Structurer: else-branch recovery weak → else-branches score 0.418
3. Parameter inference: has-params scores 0.036 → needs register usage analysis
4. Prologue/epilogue still visible in output → adds noise
5. Short-circuit boolean recovery missing: `if (a && b)` not recovered
