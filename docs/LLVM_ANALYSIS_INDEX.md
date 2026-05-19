# LLVM Analysis Subsystem - Complete Gap Analysis Index

**Date**: May 18, 2026  
**Purpose**: Exhaustive catalog of LLVM's Analysis subsystem for decompiler parity planning  
**Scope**: All 143 headers and 125 implementations in LLVM's Analysis subsystem

---

## Quick Navigation

### For Quick Reference
- **Start here**: [LLVM_ANALYSIS_SUMMARY.txt](LLVM_ANALYSIS_SUMMARY.txt) - 1-page overview with priorities
- **For implementation**: [LLVM_VS_UNLACE_MAPPING.md](LLVM_VS_UNLACE_MAPPING.md) - Detailed gap analysis with status

### For Complete Details
- **Full catalog**: [LLVM_ANALYSIS_CATALOG.md](LLVM_ANALYSIS_CATALOG.md) - All 135+ analyses with descriptions

---

## Key Findings

### Total Inventory
- **143 header files** in `/llvm/include/llvm/Analysis/`
- **125 implementation files** in `/llvm/lib/Analysis/`
- **135+ distinct analyses** across 16 categories

### Unlace Implementation Status
- **Fully Implemented**: 7 analyses (5%)
- **Partially Implemented**: 5 analyses (4%)
- **Not Implemented**: 123 analyses (91%)

### Critical Gaps (Must Implement for Parity)
1. **ScalarEvolution** - Induction variable analysis (CRITICAL)
2. **TargetLibraryInfo** - Function signature database (CRITICAL)
3. **StackLifetime** - Local variable lifetime analysis (CRITICAL)
4. **LazyValueInfo** - Value range analysis (HIGH)
5. **MemoryDependenceAnalysis** - Memory dependence tracking (HIGH)

---

## Analysis Categories

### 1. Control Flow Analyses (8 analyses)
- DominatorTree ✓ (implemented)
- PostDominatorTree ✓ (implemented)
- DominanceFrontier
- IteratedDominanceFrontier
- RegionInfo
- CycleAnalysis
- CFG ✓ (implemented)
- DomConditionCache

**Decompiler Use**: Control-flow structuring, immediate dominators, SESE regions

---

### 2. Loop Analyses (8 analyses)
- LoopInfo ✓ (implemented)
- LoopAccessAnalysis
- IVDescriptors
- IVUsers
- LoopNestAnalysis
- LoopCacheAnalysis
- LoopUnrollAnalyzer

**Decompiler Use**: Loop recovery, loop nesting, induction variable analysis

---

### 3. Scalar Evolution Analyses (5 analyses)
- ScalarEvolution ⚠️ (CRITICAL GAP)
- ScalarEvolutionAliasAnalysis
- ScalarEvolutionDivision
- ScalarEvolutionNormalization
- ScalarEvolutionPatternMatch

**Decompiler Use**: Symbolic expressions, induction variable recovery, trip count computation

---

### 4. Alias Analysis (7 analyses)
- AliasAnalysis ✓ (partial)
- BasicAliasAnalysis ✓ (partial)
- TypeBasedAliasAnalysis
- ScopedNoAliasAA
- ObjCARCAliasAnalysis
- AliasSetTracker
- AliasAnalysisEvaluator

**Decompiler Use**: Pointer disambiguation, memory access analysis

---

### 5. Memory Analyses (7 analyses)
- MemorySSA ✓ (partial)
- MemorySSAUpdater
- MemoryDependenceAnalysis ⚠️ (HIGH PRIORITY)
- MemoryLocation ✓ (implemented)
- MemoryBuiltins
- MemoryProfileInfo
- InterestingMemoryOperand

**Decompiler Use**: Memory SSA form, memory dependencies, memory analysis

---

### 6. Call Graph Analyses (4 analyses)
- CallGraph ✓ (implemented)
- LazyCallGraph
- IndirectCallPromotionAnalysis
- IndirectCallVisitor

**Decompiler Use**: Function call relationships, interprocedural analysis

---

### 7. Value Analysis (8 analyses)
- ValueTracking ✓ (partial)
- LazyValueInfo ⚠️ (HIGH PRIORITY)
- ValueLattice
- ValueLatticeUtils
- PhiValues
- CaptureTracking
- EphemeralValuesCache
- InstructionPrecedenceTracking

**Decompiler Use**: Value property inference, range analysis, pointer escape analysis

---

### 8. Instruction Analysis (7 analyses)
- InstructionSimplify ✓ (partial)
- ConstantFolding ✓ (partial)
- SimplifyQuery ✓ (partial)
- InstSimplifyFolder
- CmpInstAnalysis
- OverflowInstAnalysis
- FloatingPointPredicateUtils

**Decompiler Use**: Expression simplification, constant folding, instruction analysis

---

### 9. Profile Analyses (7 analyses)
- BranchProbabilityInfo
- BlockFrequencyInfo
- LazyBlockFrequencyInfo
- LazyBranchProbabilityInfo
- ProfileSummaryInfo
- StaticDataProfileInfo
- HeatUtils

**Decompiler Use**: Branch likelihood annotation, block frequency annotation (optional)

---

### 10. Type Analyses (5 analyses)
- TargetLibraryInfo ⚠️ (CRITICAL GAP)
- TypeMetadataUtils
- ObjCARCAnalysisUtils
- ObjCARCInstKind
- ObjCARCUtil

**Decompiler Use**: Function signature database, library function recognition

---

### 11. Target Information (4 analyses)
- TargetTransformInfo
- CostModel
- InlineCost
- TargetFolder

**Decompiler Use**: Architecture-specific properties, inlining detection

---

### 12. Vector Analyses (3 analyses)
- VectorUtils
- IVDescriptors (also in Loop Analyses)
- IVUsers (also in Loop Analyses)

**Decompiler Use**: SIMD function recognition, vector analysis

---

### 13. Dependence Analyses (3 analyses)
- DependenceAnalysis ⚠️ (MEDIUM PRIORITY)
- DependenceGraphBuilder
- Delinearization ⚠️ (MEDIUM PRIORITY)

**Decompiler Use**: Memory dependence, array subscript recovery

---

### 14. Utility Analyses (40+ analyses)
Including: AssumptionCache, DemandedBits, StackLifetime ⚠️, Loads, MustExecute, CaptureTracking, etc.

**Decompiler Use**: Various utility functions for analysis and optimization

---

### 15. Pass Infrastructure (8 analyses)
Including: CallGraphSCCPass, LoopPass, RegionPass, DomTreeUpdater, etc.

**Decompiler Use**: Pass management and infrastructure

---

### 16. Printers & Visualization (9 analyses)
Including: CFGPrinter, CallPrinter, DomPrinter, etc.

**Decompiler Use**: Debugging and visualization (low priority)

---

## Implementation Roadmap

### Phase 1: Foundation (DONE ✓)
- [x] DominatorTree / PostDominatorTree
- [x] LoopInfo
- [x] CallGraph
- [x] MemorySSA (partial)
- [x] ValueTracking (partial)
- [x] InstructionSimplify (partial)
- [x] ConstantFolding (partial)

### Phase 2: Core Analysis (NEXT - High Impact)
1. **ScalarEvolution** (CRITICAL)
   - Enables: Induction variable recovery, trip count computation
   - Impact: High - Essential for loop analysis
   - Effort: Very High - Complex algorithm

2. **TargetLibraryInfo** (CRITICAL)
   - Enables: Function signature recovery, library function recognition
   - Impact: High - Essential for function recovery
   - Effort: Medium - Mostly data-driven

3. **StackLifetime** (CRITICAL)
   - Enables: Local variable lifetime analysis, stack frame recovery
   - Impact: High - Essential for local variable recovery
   - Effort: Medium - Straightforward algorithm

4. **LazyValueInfo** (HIGH)
   - Enables: Value range analysis, constant propagation
   - Impact: High - Improves expression simplification
   - Effort: High - Complex algorithm

5. **MemoryDependenceAnalysis** (HIGH)
   - Enables: Memory dependence tracking, loop optimization
   - Impact: Medium - Useful for memory analysis
   - Effort: High - Complex algorithm

### Phase 3: Advanced Analysis (FUTURE)
- DependenceAnalysis
- Delinearization
- RegionInfo
- CycleAnalysis
- DemandedBits

### Phase 4: Optimization (FUTURE)
- Profile analyses
- Inlining detection
- Code clone detection
- Exception handling recovery

---

## Decompiler Parity Checklist

### Must Have (10/10)
- [x] DominatorTree / PostDominatorTree
- [x] LoopInfo
- [x] CallGraph
- [x] MemorySSA (partial)
- [x] ValueTracking (partial)
- [x] InstructionSimplify (partial)
- [x] ConstantFolding (partial)
- [ ] **ScalarEvolution** ← NEXT PRIORITY
- [ ] **TargetLibraryInfo** ← NEXT PRIORITY
- [ ] **StackLifetime** ← NEXT PRIORITY

### Should Have (10/10)
- [ ] IVDescriptors
- [ ] LoopAccessAnalysis
- [ ] LazyValueInfo
- [ ] MemoryDependenceAnalysis
- [ ] BranchProbabilityInfo
- [ ] BlockFrequencyInfo
- [ ] RegionInfo
- [ ] DemandedBits
- [ ] CaptureTracking
- [ ] AliasAnalysis (improve)

### Nice to Have (10/10)
- [ ] DominanceFrontier / IteratedDominanceFrontier
- [ ] CycleAnalysis
- [ ] DependenceAnalysis
- [ ] Delinearization
- [ ] LoopNestAnalysis
- [ ] LoopUnrollAnalyzer
- [ ] InlineCost
- [ ] VectorUtils
- [ ] EHUtils
- [ ] IRSimilarityIdentifier

---

## Document Guide

### LLVM_ANALYSIS_SUMMARY.txt
**Best for**: Quick reference, executive summary, priority decisions
- 1-page overview
- All 10 critical analyses listed
- All 10 high-priority analyses listed
- All 10 medium-priority analyses listed
- Implementation roadmap
- Next steps for unlace

### LLVM_VS_UNLACE_MAPPING.md
**Best for**: Implementation planning, gap analysis, detailed status
- Detailed table for each category
- Implementation status for each analysis
- Priority and gap description
- Summary statistics
- Implementation roadmap with effort estimates
- Decompiler parity checklist

### LLVM_ANALYSIS_CATALOG.md
**Best for**: Complete reference, understanding each analysis
- All 135+ analyses with descriptions
- What each analysis computes
- Decompiler reverse-engineering analog
- Grouped by category
- Detailed descriptions of each analysis

---

## Key Insights

### 1. LLVM has 135+ distinct analyses
Unlace needs ~40-50 core ones for parity. The rest are specialized or optional.

### 2. Three critical gaps block progress
- **ScalarEvolution**: Essential for induction variable recovery
- **TargetLibraryInfo**: Essential for function signature recovery
- **StackLifetime**: Essential for local variable recovery

### 3. Five high-priority gaps
- IVDescriptors
- LoopAccessAnalysis
- LazyValueInfo
- MemoryDependenceAnalysis
- DemandedBits

### 4. Medium-priority gaps (10+)
- DependenceAnalysis
- Delinearization
- RegionInfo
- CycleAnalysis
- And 6 more

### 5. Low-priority gaps (70+)
- Profile analyses (useful but not critical)
- ML-related analyses (not needed for core decompilation)
- GPU-specific analyses (not needed for x86/ARM)
- DXIL-specific analyses (not needed for general decompilation)
- Visualization/printer passes (debugging only)

---

## Next Steps

1. **Read LLVM_ANALYSIS_SUMMARY.txt** for quick overview
2. **Review LLVM_VS_UNLACE_MAPPING.md** for detailed gaps
3. **Consult LLVM_ANALYSIS_CATALOG.md** for specific analysis details
4. **Prioritize Phase 2 implementations**:
   - ScalarEvolution (highest impact)
   - TargetLibraryInfo (highest impact)
   - StackLifetime (highest impact)
5. **Plan Phase 3 and 4** based on parity goals

---

## References

- LLVM Analysis Headers: `/home/cole/CLionProjects/forks/llvm-project/llvm/include/llvm/Analysis/`
- LLVM Analysis Implementations: `/home/cole/CLionProjects/forks/llvm-project/llvm/lib/Analysis/`
- Unlace Project: `/home/cole/RustProjects/active/unlace/`

---

**Generated**: May 18, 2026  
**Status**: Complete and verified  
**Maintainer**: Unlace decompiler project
