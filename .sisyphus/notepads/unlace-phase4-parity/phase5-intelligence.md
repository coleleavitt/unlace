# Phase 5 Intelligence Summary

## Root Cause Chain (CONFIRMED)
```
Unlifted instructions (10,766 total: SETcc 3746, MOVAPS/MOVUPS 1931, CLTQ 619, ADC/SBB 339)
→ IrOp::Unimplemented in code paths
  → Missing basic blocks in CFG
    → Broken control flow structure
      → Wrong if-branch, loop, call counts
        → 52% parity instead of 90%+
```

## IDA's Algorithm (from decompiled source study)

### Structurer (6 phases)
1. Dominance + post-dominance trees
2. Natural loop detection via back edges
3. Region hierarchy (acyclic/cyclic regions)
4. Interval analysis
5. Structure recovery (pattern matching)
6. Goto elimination (optional, controlled by "fast structural analysis" flag)

Key: IDA uses POST-DOMINATOR for join point detection, not depth-limited heuristic.
unlace uses depth-16 BFS heuristic — this causes incorrect if/else structuring.

### Optimization Pipeline (6 passes)
1. Pre-optimization (operand propagation)
2. Local DCE
3. Expression simplification (1311 lines of pattern matching!)
4. Global propagation (cross-block value flow)
5. Global DCE
6. Jump table simplification

### Key IDA Features We're Missing
1. Post-dominator tree for if/else join detection
2. Short-circuit boolean recovery (a && b, a || b)
3. Identity element elimination (x+0→x, x*1→x, x-x→0, x^x→0)
4. Algebraic simplification (136 Rule subclasses in Ghidra equivalent)
5. Expression tree folding (suppress single-use temporaries from output)
6. Prologue/epilogue elimination
7. Stack canary detection and suppression

## Phase 5 Priority (Data-Driven)

### Tier 1: Instruction Coverage (projected +17-26% parity)
- SETcc family (all 16): 3,746 instructions, ~50 lines of Rust
- MOVAPS/MOVUPS/MOVSD: 1,931 instructions, ~30 lines
- CLTQ/CLTD/CQTO: 619 instructions, ~20 lines
- ADC/SBB: 339 instructions, ~40 lines
- ROL/ROR: common in crypto, ~30 lines
- BT/BSF/BSR: 94 instructions, ~40 lines

### Tier 2: Structurer Improvements (projected +5-10% parity)
- Post-dominator tree for join detection (replace depth-16 heuristic)
- Short-circuit boolean recovery (a && b, a || b)
- Better loop detection (back-edge based, matching IDA's algorithm)

### Tier 3: Expression Quality (projected +3-5% parity)
- Identity element elimination pass
- Prologue/epilogue suppression
- Expression tree folding (suppress single-use temps)
- Stack canary detection

### Tier 4: Advanced (projected +2-3% parity)
- Function discovery (recursive descent + prologue scan)
- FLIRT-style library function recognition
- Value range analysis for dead branch elimination
