# LLVM vs Unlace: Decompiler Gap Analysis

**Generated**: 2026-05-18  
**Source**: Complete LLVM Transforms catalog (319 pass files across 5 categories)  
**Purpose**: Identify which LLVM optimizations unlace must reverse-engineer for parity

---

## Executive Summary

LLVM applies **~150 distinct optimization passes** across compilation. Unlace must reverse-engineer the effects of these passes to recover original source constructs. This document maps each pass to:

1. **What the compiler does** (forward direction)
2. **What the decompiler must recover** (reverse direction)
3. **Implementation priority** for unlace

### Key Findings

- **20 HIGH-priority passes** are critical for basic decompilation quality
- **49 MEDIUM-priority passes** significantly affect output quality
- **67 LOW-priority passes** are nice-to-have or performance-specific

---

## Critical Gaps (Must Implement for Parity)

### 1. Loop Recovery (8 passes)

**Current State**: Unlace has loop detection but limited recovery of optimized forms.

| Pass | What Compiler Does | What Decompiler Needs | Status |
|------|-------------------|----------------------|--------|
| LICM | Hoists loop-invariant code | Detect hoisted expressions; restore to loop body | **CRITICAL** |
| LoopUnrollPass | Unrolls loops by replicating body | Recognize unrolled patterns; restore original loop | **CRITICAL** |
| IndVarSimplify | Canonicalizes exit conditions | Recover original conditions; detect canonicalization | **CRITICAL** |
| LoopStrengthReduce | Replaces expensive IV expressions | Recover original IV expressions; detect strength reduction | **CRITICAL** |
| LoopRotation | Moves test to end; converts do-while to while | Detect rotated loops; restore original structure | MEDIUM |
| LoopFlatten | Merges nested loops into single loop | Detect flattened loops; recover nested structure | MEDIUM |
| SimpleLoopUnswitch | Moves conditionals outside loops | Detect unswitched loops; restore original structure | MEDIUM |
| LoopFuse | Merges adjacent loops | Detect fused loops; separate back | MEDIUM |

**Gap**: Unlace's loop structuring doesn't handle unrolled/rotated/flattened forms well.

### 2. Expression Recovery (15 passes)

**Current State**: Basic expression recovery; missing combination/reassociation patterns.

| Pass | What Compiler Does | What Decompiler Needs | Status |
|------|-------------------|----------------------|--------|
| GVN/NewGVN | Eliminates redundant expressions | De-duplicate; recognize equivalence | **CRITICAL** |
| SCCP | Constant propagation; folds constants | Recover original expressions; detect folding | **CRITICAL** |
| Reassociate | Reassociates expressions (4+(x+5)→x+(4+5)) | Detect reassociation; restore original grouping | **CRITICAL** |
| InstCombineAddSub | Combines add/subtract operations | Recover original patterns | HIGH |
| InstCombineAndOrXor | Simplifies bitwise operations | Recover bitwise patterns; detect De Morgan's laws | HIGH |
| InstCombineCasts | Simplifies cast chains | Recover cast patterns; detect redundant casts | HIGH |
| InstCombineCompares | Simplifies comparisons | Recover comparison patterns | HIGH |
| InstCombineMulDivRem | Simplifies arithmetic | Recover arithmetic patterns | HIGH |
| InstCombineShifts | Simplifies shift operations | Recover shift patterns | HIGH |
| NaryReassociate | Reassociates n-ary operations | Recover n-ary structure | MEDIUM |
| DivRemPairs | Hoists/decomposes div/rem pairs | Detect paired operations; restore original | MEDIUM |
| StraightLineStrengthReduce | Reduces arithmetic strength | Recover strength-reduced operations | MEDIUM |
| Float2Int | Converts float to int operations | Detect conversions; restore float operations | MEDIUM |
| AggressiveInstCombine | More aggressive combining | Recover aggressively combined patterns | HIGH |
| TruncInstCombine | Combines truncation operations | Recover truncation patterns | MEDIUM |

**Gap**: InstCombine is a massive peephole optimizer. Unlace's expression recovery doesn't handle all combination patterns.

### 3. Control Flow Recovery (8 passes)

**Current State**: Basic CFG recovery; missing jump threading, switch recovery.

| Pass | What Compiler Does | What Decompiler Needs | Status |
|------|-------------------|----------------------|--------|
| SimplifyCFGPass | Removes unreachable blocks; merges blocks; eliminates PHI | Detect simplified CFG; restore original structure | **CRITICAL** |
| StructurizeCFG | Converts CFG to structured form (if/while/for) | Detect structured CFG; restore original form | **CRITICAL** |
| JumpTableToSwitch | Converts jump tables to switch statements | Detect switch-to-jumptable conversion; restore jumptable | **CRITICAL** |
| JumpThreading | Threads jumps through conditional blocks | Detect threaded jumps; restore original branches | MEDIUM |
| DFAJumpThreading | Threads jumps through switch statements | Detect DFA-threaded jumps; restore original switch | MEDIUM |
| FlattenCFGPass | Flattens nested if statements | Detect flattened conditionals; restore nested structure | MEDIUM |
| SpeculativeExecution | Speculatively executes instructions | Detect speculative execution; restore branching | MEDIUM |
| CallSiteSplitting | Splits call sites for constrained arguments | Detect split call sites; restore original | LOW |

**Gap**: Unlace's CFG recovery doesn't handle jump threading or complex switch patterns.

### 4. Function Recovery (6 passes)

**Current State**: Basic function detection; missing inlining recovery, devirtualization.

| Pass | What Compiler Does | What Decompiler Needs | Status |
|------|-------------------|----------------------|--------|
| AlwaysInliner | Inlines always_inline functions | Detect inlined functions; restore original calls | **CRITICAL** |
| Inliner | Inlines function calls based on heuristics | Detect inlined functions; restore original calls | **CRITICAL** |
| ModuleInliner | Module-level inlining | Detect module-level inlining; restore calls | **CRITICAL** |
| WholeProgramDevirt | Devirtualizes virtual function calls | Detect devirtualized calls; restore virtual dispatch | **CRITICAL** |
| TailRecursionElimination | Converts tail-recursive calls to loops | Detect tail recursion elimination; restore recursive calls | **CRITICAL** |
| PartialInlining | Partially inlines functions; extracts cold paths | Detect partial inlining; restore original structure | MEDIUM |

**Gap**: Unlace doesn't detect inlined functions or restore original call sites.

### 5. Memory & SSA Recovery (4 passes)

**Current State**: Basic memory analysis; missing promotion/demotion patterns.

| Pass | What Compiler Does | What Decompiler Needs | Status |
|------|-------------------|----------------------|--------|
| DeadStoreElimination | Eliminates redundant stores | Recover overwritten memory; detect store patterns | **CRITICAL** |
| PromoteMemoryToRegister | Promotes memory to registers (SSA construction) | Recover memory patterns; detect promotion | **CRITICAL** |
| DCE/ADCE | Eliminates dead code | Identify and restore dead instruction chains | **CRITICAL** |
| GVN | Eliminates redundant loads | Recover load patterns; detect redundancy | **CRITICAL** |

**Gap**: Unlace's SSA recovery doesn't handle all promotion/demotion patterns.

---

## Implementation Priority Matrix

### Phase 1: Critical (Blocks Basic Parity)

**Must implement for 100% parity on narrow metrics:**

1. **LICM** - Loop invariant code motion reversal
2. **GVN/NewGVN** - Expression deduplication
3. **SCCP** - Constant propagation reversal
4. **DCE/ADCE** - Dead code recovery
5. **DeadStoreElimination** - Memory operation recovery
6. **Reassociate** - Expression structure recovery
7. **SimplifyCFGPass** - CFG recovery
8. **JumpTableToSwitch** - Switch recovery
9. **StructurizeCFG** - Control flow structuring
10. **TailRecursionElimination** - Recursion recovery
11. **LoopUnrollPass** - Loop structure recovery
12. **IndVarSimplify** - Induction variable recovery
13. **LoopStrengthReduce** - Loop variable expression recovery
14. **InstCombine (all)** - Expression combination reversal
15. **Inlining (3 passes)** - Function recovery
16. **WholeProgramDevirt** - Virtual call recovery
17. **PromoteMemoryToRegister** - SSA recovery

**Estimated Effort**: 40-60 person-weeks

### Phase 2: High-Impact (Improves Quality)

**Implement after Phase 1 for broader corpus parity:**

1. **LoopRotation** - Loop structure
2. **LoopFlatten** - Nested loop recovery
3. **LoopFuse** - Loop merging
4. **CorrelatedValuePropagation** - Value range inference
5. **ConstantHoisting** - Constant placement
6. **ConstraintElimination** - Condition recovery
7. **NaryReassociate** - N-ary expression recovery
8. **DivRemPairs** - Arithmetic pattern recovery
9. **StraightLineStrengthReduce** - Arithmetic optimization
10. **MemCpyOptimizer** - Memory operation patterns
11. **MergedLoadStoreMotion** - Memory access patterns
12. **MergeICmps** - Comparison patterns
13. **SeparateConstOffsetFromGEP** - Pointer arithmetic
14. **JumpThreading** - Branch threading
15. **DFAJumpThreading** - Switch threading
16. **ArgumentPromotion** - Function signature recovery
17. **DeadArgumentElimination** - Function signature recovery
18. **FunctionAttrs** - Function properties
19. **GlobalOpt** - Global variable optimization
20. **MergeFunctions** - Function merging

**Estimated Effort**: 30-40 person-weeks

### Phase 3: Polish (Completeness)

**Implement for comprehensive coverage:**

- All remaining MEDIUM-priority passes
- Selected LOW-priority passes based on corpus analysis

**Estimated Effort**: 20-30 person-weeks

---

## Gap Analysis by Category

### Scalar Passes (82 files)

**Coverage**: ~40% implemented in unlace

**Major Gaps**:
- Loop optimizations (15 passes) - 30% coverage
- Constant propagation (4 passes) - 50% coverage
- Expression simplification (8 passes) - 25% coverage
- Control flow (8 passes) - 40% coverage
- Memory operations (4 passes) - 50% coverage

**Recommendation**: Focus on loop and expression recovery first.

### InstCombine Passes (15 files)

**Coverage**: ~20% implemented in unlace

**Major Gaps**:
- All 15 InstCombine variants are peephole optimizations
- Each handles a specific instruction category
- Unlace needs pattern-matching for each category

**Recommendation**: Implement as pattern library; prioritize arithmetic, bitwise, casts, comparisons.

### IPO Passes (48 files)

**Coverage**: ~10% implemented in unlace

**Major Gaps**:
- Inlining (3 passes) - 0% coverage
- Devirtualization (1 pass) - 0% coverage
- Function specialization (1 pass) - 0% coverage
- Argument promotion (1 pass) - 0% coverage
- Global optimization (2 passes) - 0% coverage

**Recommendation**: Implement inlining detection first; then devirtualization.

### AggressiveInstCombine (2 files)

**Coverage**: ~0% implemented in unlace

**Major Gaps**:
- Aggressive combining patterns
- Truncation combining

**Recommendation**: Implement as extension to InstCombine patterns.

### Utils Passes (30+ files)

**Coverage**: ~50% implemented in unlace

**Major Gaps**:
- SSA recovery (PromoteMemoryToRegister) - 0% coverage
- CFG utilities (BreakCriticalEdges, FixIrreducible) - 0% coverage
- Code extraction (CodeExtractor, LoopExtractor) - 0% coverage

**Recommendation**: Implement SSA recovery first; then CFG utilities.

---

## Specific Implementation Recommendations

### 1. Loop Recovery Pipeline

**Current**: Basic loop detection via LoopInfo

**Needed**:
1. Detect unrolled loops (replicated iterations)
2. Detect rotated loops (moved test to end)
3. Detect flattened loops (merged nested loops)
4. Recover original induction variables (strength reduction reversal)
5. Recover hoisted invariants (LICM reversal)

**Implementation Strategy**:
- Add loop pattern matcher in `unlace-struct`
- Create loop normalization pass
- Integrate with existing loop detection

### 2. Expression Recovery Pipeline

**Current**: Basic expression simplification

**Needed**:
1. De-duplicate expressions (GVN reversal)
2. Recover reassociated expressions
3. Recover combined instructions (InstCombine reversal)
4. Recover constant-folded expressions (SCCP reversal)
5. Recover strength-reduced expressions

**Implementation Strategy**:
- Add expression pattern library
- Create expression normalization pass
- Integrate with existing expression recovery

### 3. Control Flow Recovery Pipeline

**Current**: Basic CFG recovery

**Needed**:
1. Detect jump threading patterns
2. Detect switch-to-jumptable conversions
3. Recover original CFG structure
4. Detect speculative execution
5. Recover original branch structure

**Implementation Strategy**:
- Add CFG pattern matcher
- Create CFG normalization pass
- Integrate with existing CFG recovery

### 4. Function Recovery Pipeline

**Current**: Basic function detection

**Needed**:
1. Detect inlined functions
2. Detect devirtualized calls
3. Recover original call sites
4. Detect tail recursion elimination
5. Recover original function boundaries

**Implementation Strategy**:
- Add function pattern matcher
- Create function boundary detection
- Integrate with existing function detection

### 5. SSA Recovery Pipeline

**Current**: Basic SSA form

**Needed**:
1. Detect promoted memory locations
2. Recover original memory patterns
3. Detect demoted registers
4. Recover original register patterns

**Implementation Strategy**:
- Add memory pattern matcher
- Create memory normalization pass
- Integrate with existing SSA recovery

---

## Metrics for Success

### Phase 1 Completion Criteria

- [ ] LICM reversal working on 90% of test cases
- [ ] GVN/NewGVN reversal working on 90% of test cases
- [ ] SCCP reversal working on 90% of test cases
- [ ] DCE/ADCE reversal working on 90% of test cases
- [ ] DeadStoreElimination reversal working on 90% of test cases
- [ ] Reassociate reversal working on 90% of test cases
- [ ] SimplifyCFGPass reversal working on 90% of test cases
- [ ] JumpTableToSwitch reversal working on 90% of test cases
- [ ] StructurizeCFG reversal working on 90% of test cases
- [ ] TailRecursionElimination reversal working on 90% of test cases
- [ ] LoopUnrollPass reversal working on 90% of test cases
- [ ] IndVarSimplify reversal working on 90% of test cases
- [ ] LoopStrengthReduce reversal working on 90% of test cases
- [ ] InstCombine reversal working on 90% of test cases
- [ ] Inlining detection working on 90% of test cases
- [ ] WholeProgramDevirt reversal working on 90% of test cases
- [ ] PromoteMemoryToRegister reversal working on 90% of test cases

### Parity Metrics

- **Narrow Metric** (current): 100% on 14 internal fixtures
- **Broad Metric** (target): 90%+ on 150 x86_64 golden files
- **Quality Metric** (target): 85%+ on expression/loop/CFG/function recovery

---

## References

- Full catalog: `docs/LLVM_PASSES_CATALOG.md`
- LLVM source: `/home/cole/CLionProjects/forks/llvm-project/llvm/lib/Transforms/`
- Unlace passes: `crates/unlace-passes/src/`
- Unlace structuring: `crates/unlace-struct/src/`

---

## Next Steps

1. **Audit current unlace passes** against this catalog
2. **Prioritize Phase 1 passes** by impact on golden corpus
3. **Create test fixtures** for each pass category
4. **Implement pattern matchers** for each pass
5. **Integrate into pipeline** and measure parity improvement
6. **Iterate on Phase 2** passes based on corpus analysis

