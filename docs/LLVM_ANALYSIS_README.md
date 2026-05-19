# LLVM vs Unlace: Complete Optimization Pass Analysis

**Date**: 2026-05-18  
**Scope**: 319 LLVM optimization pass files across 5 categories  
**Purpose**: Comprehensive gap analysis for decompiler parity  

---

## Documents in This Analysis

### 1. **LLVM_PASSES_CATALOG.md** (973 lines)
**The Complete Reference**

Exhaustive catalog of all 150+ LLVM optimization passes with:
- What each pass does (compiler direction)
- What the decompiler must recover (reverse direction)
- Implementation priority (HIGH/MEDIUM/LOW)
- Organized by category (Scalar, InstCombine, IPO, AggressiveInstCombine, Utils)

**Use this when**: You need detailed information about a specific pass or category.

### 2. **LLVM_DECOMPILER_GAP_ANALYSIS.md** (371 lines)
**The Strategic Plan**

High-level gap analysis with:
- Executive summary of findings
- Critical gaps by category (loops, expressions, control flow, functions, memory)
- Implementation priority matrix (Phase 1/2/3)
- Specific recommendations for each gap
- Metrics for success

**Use this when**: Planning implementation strategy or understanding what's missing.

### 3. **LLVM_PASSES_QUICK_REFERENCE.md** (248 lines)
**The Cheat Sheet**

Quick lookup guide with:
- All passes organized by category
- All passes organized by priority
- Implementation roadmap (30-week plan)
- Key patterns to implement
- Testing strategy

**Use this when**: You need a quick lookup or high-level overview.

---

## Key Findings

### Total Passes Analyzed
- **Scalar Passes**: 82 files
- **InstCombine Passes**: 15 files
- **IPO Passes**: 48 files
- **AggressiveInstCombine**: 2 files
- **Utils Passes**: 30+ files
- **Total**: 319 files

### Priority Breakdown
- **HIGH Priority**: 20 passes (critical for parity)
- **MEDIUM Priority**: 49 passes (important for quality)
- **LOW Priority**: 67 passes (nice to have)

### Coverage by Category
- **Scalar Passes**: ~40% implemented in unlace
- **InstCombine Passes**: ~20% implemented
- **IPO Passes**: ~10% implemented
- **AggressiveInstCombine**: ~0% implemented
- **Utils Passes**: ~50% implemented

---

## Critical Gaps (Must Implement)

### 1. Loop Recovery (8 passes)
- LICM (Loop Invariant Code Motion)
- LoopUnrollPass (Loop Unrolling)
- IndVarSimplify (Induction Variable Simplification)
- LoopStrengthReduce (Loop Strength Reduction)
- LoopRotation, LoopFlatten, SimpleLoopUnswitch, LoopFuse

**Impact**: Unlace's loop structuring doesn't handle optimized forms well.

### 2. Expression Recovery (15 passes)
- GVN/NewGVN (Global Value Numbering)
- SCCP (Sparse Conditional Constant Propagation)
- Reassociate (Expression Reassociation)
- InstCombine (all 15 variants)
- AggressiveInstCombine

**Impact**: InstCombine is a massive peephole optimizer; Unlace misses many patterns.

### 3. Control Flow Recovery (8 passes)
- SimplifyCFGPass (CFG Simplification)
- StructurizeCFG (CFG Structuring)
- JumpTableToSwitch (Jump Table Conversion)
- JumpThreading, DFAJumpThreading, FlattenCFGPass, SpeculativeExecution

**Impact**: Unlace doesn't handle jump threading or complex switch patterns.

### 4. Function Recovery (6 passes)
- AlwaysInliner, Inliner, ModuleInliner (Function Inlining)
- WholeProgramDevirt (Virtual Call Devirtualization)
- TailRecursionElimination (Tail Recursion)
- PartialInlining

**Impact**: Unlace doesn't detect inlined functions or restore original calls.

### 5. Memory & SSA Recovery (4 passes)
- DeadStoreElimination (Dead Store Elimination)
- PromoteMemoryToRegister (SSA Promotion)
- DCE/ADCE (Dead Code Elimination)
- GVN (Redundant Load Elimination)

**Impact**: Unlace's SSA recovery doesn't handle all promotion/demotion patterns.

---

## Implementation Roadmap

### Phase 1: Critical (40-60 person-weeks)
**Must implement for 100% parity on narrow metrics**

1. LICM - Loop invariant code motion reversal
2. GVN/NewGVN - Expression deduplication
3. SCCP - Constant propagation reversal
4. DCE/ADCE - Dead code recovery
5. DeadStoreElimination - Memory operation recovery
6. Reassociate - Expression structure recovery
7. SimplifyCFGPass - CFG recovery
8. JumpTableToSwitch - Switch recovery
9. StructurizeCFG - Control flow structuring
10. TailRecursionElimination - Recursion recovery
11. LoopUnrollPass - Loop structure recovery
12. IndVarSimplify - Induction variable recovery
13. LoopStrengthReduce - Loop variable expression recovery
14. InstCombine (all) - Expression combination reversal
15. Inlining (3 passes) - Function recovery
16. WholeProgramDevirt - Virtual call recovery
17. PromoteMemoryToRegister - SSA recovery

### Phase 2: High-Impact (30-40 person-weeks)
**Implement after Phase 1 for broader corpus parity**

- Loop optimizations (Rotation, Flatten, Fuse, etc.)
- Expression recovery (NaryReassociate, DivRemPairs, etc.)
- Memory operations (MemCpyOptimizer, MergedLoadStoreMotion, etc.)
- Control flow (JumpThreading, DFAJumpThreading, etc.)
- Function optimization (ArgumentPromotion, FunctionAttrs, etc.)

### Phase 3: Polish (20-30 person-weeks)
**Implement for comprehensive coverage**

- All remaining MEDIUM-priority passes
- Selected LOW-priority passes based on corpus analysis

---

## How to Use This Analysis

### For Implementation Planning
1. Read **LLVM_DECOMPILER_GAP_ANALYSIS.md** for strategic overview
2. Use **LLVM_PASSES_QUICK_REFERENCE.md** for implementation roadmap
3. Reference **LLVM_PASSES_CATALOG.md** for detailed pass information

### For Specific Pass Information
1. Search **LLVM_PASSES_CATALOG.md** for the pass name
2. Find the category (Scalar, InstCombine, IPO, etc.)
3. Read the description and decompiler reverse operation

### For Priority Decisions
1. Check **LLVM_PASSES_QUICK_REFERENCE.md** for priority levels
2. Review **LLVM_DECOMPILER_GAP_ANALYSIS.md** for impact analysis
3. Use the implementation roadmap to sequence work

### For Testing
1. Reference **LLVM_PASSES_QUICK_REFERENCE.md** for testing strategy
2. Create test fixtures for each pass category
3. Measure parity improvement against golden corpus

---

## Key Metrics

### Current State
- **Narrow Metric**: 100% on 14 internal fixtures
- **Broad Metric**: Unknown on 150 x86_64 golden files
- **Quality Metric**: Unknown on expression/loop/CFG/function recovery

### Target State (Phase 1)
- **Narrow Metric**: 100% on 14 internal fixtures (maintained)
- **Broad Metric**: 90%+ on 150 x86_64 golden files
- **Quality Metric**: 85%+ on expression/loop/CFG/function recovery

### Target State (Phase 3)
- **Narrow Metric**: 100% on 14 internal fixtures (maintained)
- **Broad Metric**: 95%+ on 150 x86_64 golden files
- **Quality Metric**: 95%+ on expression/loop/CFG/function recovery

---

## Next Steps

1. **Audit current unlace passes** against this catalog
2. **Prioritize Phase 1 passes** by impact on golden corpus
3. **Create test fixtures** for each pass category
4. **Implement pattern matchers** for each pass
5. **Integrate into pipeline** and measure parity improvement
6. **Iterate on Phase 2** passes based on corpus analysis

---

## References

### Documents
- Full catalog: `LLVM_PASSES_CATALOG.md`
- Gap analysis: `LLVM_DECOMPILER_GAP_ANALYSIS.md`
- Quick reference: `LLVM_PASSES_QUICK_REFERENCE.md`

### Source Code
- LLVM Transforms: `/home/cole/CLionProjects/forks/llvm-project/llvm/lib/Transforms/`
- Unlace passes: `crates/unlace-passes/src/`
- Unlace structuring: `crates/unlace-struct/src/`

### Related Documentation
- `docs/PARITY_PLAN.md` - Broad roadmap
- `docs/determinism.md` - Deterministic output rules
- `crates/unlace-output/src/COVERAGE.md` - C emitter support

---

## Analysis Methodology

This analysis was generated by:

1. **Enumeration**: Listed all 319 .cpp files in LLVM Transforms directories
2. **Categorization**: Organized by directory (Scalar, InstCombine, IPO, AggressiveInstCombine, Utils)
3. **Documentation**: Read header comments from each pass file
4. **Mapping**: Mapped each pass to decompiler reverse operation
5. **Prioritization**: Assigned priority based on impact on decompilation quality
6. **Validation**: Cross-referenced with CLAUDE.md project context

---

## Questions?

Refer to the specific document for your question:

- **"What does pass X do?"** → LLVM_PASSES_CATALOG.md
- **"What should we implement first?"** → LLVM_DECOMPILER_GAP_ANALYSIS.md
- **"What's the quick overview?"** → LLVM_PASSES_QUICK_REFERENCE.md
- **"How do I implement pass X?"** → LLVM_PASSES_CATALOG.md (decompiler reverse section)
- **"What's the implementation plan?"** → LLVM_PASSES_QUICK_REFERENCE.md (roadmap section)

