# LLVM vs Unlace Analysis Mapping

**Purpose**: Detailed gap analysis showing which LLVM analyses unlace needs to implement for full parity.

---

## CONTROL FLOW ANALYSES

| LLVM Analysis | What it does | Unlace Status | Priority | Gap |
|---|---|---|---|---|
| DominatorTree | Dominance relationships | ✓ Implemented | CRITICAL | None |
| PostDominatorTree | Post-dominance relationships | ✓ Implemented | CRITICAL | None |
| DominanceFrontier | Dominance frontier blocks | ✗ Not implemented | MEDIUM | Useful for SSA construction |
| IteratedDominanceFrontier | Iterated dominance frontier | ✗ Not implemented | MEDIUM | Needed for SSA phi placement |
| RegionInfo | SESE regions in CFG | ✗ Not implemented | MEDIUM | Could improve structuring |
| CycleAnalysis | Cycle information (generalization) | ✗ Not implemented | MEDIUM | Handles irreducible CFGs |
| CFG | Basic CFG utilities | ✓ Implemented | CRITICAL | None |
| DomConditionCache | Cached dominating conditions | ✗ Not implemented | LOW | Useful for condition analysis |

---

## LOOP ANALYSES

| LLVM Analysis | What it does | Unlace Status | Priority | Gap |
|---|---|---|---|---|
| LoopInfo | Natural loop detection | ✓ Implemented | CRITICAL | None |
| LoopAccessAnalysis | Memory access patterns in loops | ✗ Not implemented | HIGH | Needed for loop optimization |
| IVDescriptors | Induction variable patterns | ✗ Not implemented | HIGH | CRITICAL for IV recovery |
| IVUsers | Uses of induction variables | ✗ Not implemented | HIGH | Useful for IV simplification |
| LoopNestAnalysis | Nested loop structure | ✗ Not implemented | MEDIUM | Useful for nested loops |
| LoopCacheAnalysis | Cache behavior analysis | ✗ Not implemented | LOW | Not critical for decompilation |
| LoopUnrollAnalyzer | Loop unroll cost estimation | ✗ Not implemented | MEDIUM | Useful for unrolled loop detection |

---

## SCALAR EVOLUTION ANALYSES

| LLVM Analysis | What it does | Unlace Status | Priority | Gap |
|---|---|---|---|---|
| ScalarEvolution | Symbolic expressions in loops | ✗ Not implemented | CRITICAL | **MAJOR GAP** - Essential for IV analysis |
| ScalarEvolutionAliasAnalysis | Alias analysis using SCEV | ✗ Not implemented | MEDIUM | Depends on ScalarEvolution |
| ScalarEvolutionDivision | Division in SCEV expressions | ✗ Not implemented | MEDIUM | Depends on ScalarEvolution |
| ScalarEvolutionNormalization | SCEV normalization | ✗ Not implemented | MEDIUM | Depends on ScalarEvolution |
| ScalarEvolutionPatternMatch | Pattern matching on SCEV | ✗ Not implemented | MEDIUM | Depends on ScalarEvolution |

---

## ALIAS ANALYSIS

| LLVM Analysis | What it does | Unlace Status | Priority | Gap |
|---|---|---|---|---|
| AliasAnalysis | Generic alias interface | ✓ Partial | CRITICAL | Needs improvement |
| BasicAliasAnalysis | Stateless local alias analysis | ✓ Partial | CRITICAL | Needs improvement |
| TypeBasedAliasAnalysis | Type-based alias analysis | ✗ Not implemented | HIGH | Useful for type recovery |
| ScopedNoAliasAA | Noalias metadata analysis | ✗ Not implemented | MEDIUM | Useful for pointer analysis |
| ObjCARCAliasAnalysis | Objective-C ARC alias analysis | ✗ Not implemented | LOW | Language-specific |
| AliasSetTracker | Groups memory locations | ✗ Not implemented | MEDIUM | Useful for memory analysis |
| AliasAnalysisEvaluator | Evaluates alias analysis | ✗ Not implemented | LOW | Testing tool only |

---

## MEMORY ANALYSES

| LLVM Analysis | What it does | Unlace Status | Priority | Gap |
|---|---|---|---|---|
| MemorySSA | SSA form for memory ops | ✓ Partial | CRITICAL | Needs completion |
| MemorySSAUpdater | Incremental MemorySSA updates | ✗ Not implemented | MEDIUM | Useful for pass infrastructure |
| MemoryDependenceAnalysis | Memory dependencies | ✗ Not implemented | HIGH | **MAJOR GAP** - Essential for memory analysis |
| MemoryLocation | Memory location representation | ✓ Implemented | CRITICAL | None |
| MemoryBuiltins | Malloc/free/new/delete recognition | ✗ Not implemented | HIGH | Useful for memory analysis |
| MemoryProfileInfo | Memory access profiling | ✗ Not implemented | LOW | Runtime data only |
| InterestingMemoryOperand | Interesting memory operands | ✗ Not implemented | MEDIUM | Useful for memory analysis |

---

## CALL GRAPH ANALYSES

| LLVM Analysis | What it does | Unlace Status | Priority | Gap |
|---|---|---|---|---|
| CallGraph | Module-level call graph | ✓ Implemented | CRITICAL | None |
| LazyCallGraph | Lazy call graph construction | ✗ Not implemented | MEDIUM | Useful for large binaries |
| IndirectCallPromotionAnalysis | Indirect call promotion | ✗ Not implemented | MEDIUM | Useful for call resolution |
| IndirectCallVisitor | Indirect call visitor | ✗ Not implemented | MEDIUM | Useful for call analysis |

---

## VALUE ANALYSIS

| LLVM Analysis | What it does | Unlace Status | Priority | Gap |
|---|---|---|---|---|
| ValueTracking | Value properties (bits, sign, range) | ✓ Partial | CRITICAL | Needs improvement |
| LazyValueInfo | Lazy value constraint analysis | ✗ Not implemented | HIGH | **MAJOR GAP** - Needed for constant propagation |
| ValueLattice | Lattice values for propagation | ✗ Not implemented | MEDIUM | Useful for constant propagation |
| ValueLatticeUtils | Lattice utilities | ✗ Not implemented | MEDIUM | Useful for constant propagation |
| PhiValues | Phi node value analysis | ✗ Not implemented | MEDIUM | Useful for SSA analysis |
| CaptureTracking | Pointer capture analysis | ✗ Not implemented | HIGH | Useful for pointer analysis |
| EphemeralValuesCache | Ephemeral value caching | ✗ Not implemented | LOW | Useful for condition analysis |
| InstructionPrecedenceTracking | Instruction ordering | ✗ Not implemented | LOW | Useful for instruction analysis |

---

## INSTRUCTION ANALYSIS

| LLVM Analysis | What it does | Unlace Status | Priority | Gap |
|---|---|---|---|---|
| InstructionSimplify | Instruction simplification | ✓ Partial | CRITICAL | Needs improvement |
| ConstantFolding | Constant folding | ✓ Partial | CRITICAL | Needs improvement |
| SimplifyQuery | Simplification context | ✓ Partial | CRITICAL | Needs improvement |
| InstSimplifyFolder | Simplification folder | ✗ Not implemented | MEDIUM | Useful for simplification |
| CmpInstAnalysis | Comparison instruction analysis | ✗ Not implemented | MEDIUM | Useful for condition analysis |
| OverflowInstAnalysis | Overflow instruction analysis | ✗ Not implemented | MEDIUM | Useful for arithmetic analysis |
| FloatingPointPredicateUtils | FP predicate analysis | ✗ Not implemented | MEDIUM | Useful for FP analysis |

---

## PROFILE ANALYSES

| LLVM Analysis | What it does | Unlace Status | Priority | Gap |
|---|---|---|---|---|
| BranchProbabilityInfo | Branch probability estimation | ✗ Not implemented | MEDIUM | Useful for annotation |
| BlockFrequencyInfo | Block frequency estimation | ✗ Not implemented | MEDIUM | Useful for annotation |
| LazyBlockFrequencyInfo | Lazy block frequency | ✗ Not implemented | LOW | Useful for large functions |
| LazyBranchProbabilityInfo | Lazy branch probability | ✗ Not implemented | LOW | Useful for large functions |
| ProfileSummaryInfo | Global profile summary | ✗ Not implemented | LOW | Useful for annotation |
| StaticDataProfileInfo | Static profile information | ✗ Not implemented | LOW | Not critical |
| HeatUtils | Heat map utilities | ✗ Not implemented | LOW | Visualization only |

---

## TYPE ANALYSES

| LLVM Analysis | What it does | Unlace Status | Priority | Gap |
|---|---|---|---|---|
| TargetLibraryInfo | Library function signatures | ✗ Not implemented | CRITICAL | **MAJOR GAP** - Essential for function recovery |
| TypeMetadataUtils | Type metadata utilities | ✗ Not implemented | MEDIUM | Useful for type recovery |
| ObjCARCAnalysisUtils | Objective-C ARC utilities | ✗ Not implemented | LOW | Language-specific |
| ObjCARCInstKind | Objective-C ARC instruction classification | ✗ Not implemented | LOW | Language-specific |
| ObjCARCUtil | Objective-C ARC utilities | ✗ Not implemented | LOW | Language-specific |

---

## TARGET INFORMATION

| LLVM Analysis | What it does | Unlace Status | Priority | Gap |
|---|---|---|---|---|
| TargetTransformInfo | Target-specific cost information | ✗ Not implemented | MEDIUM | Useful for architecture-specific analysis |
| CostModel | Instruction cost estimation | ✗ Not implemented | LOW | Not critical |
| InlineCost | Inlining cost estimation | ✗ Not implemented | MEDIUM | Useful for inlining detection |
| TargetFolder | Target-aware constant folding | ✗ Not implemented | MEDIUM | Useful for simplification |

---

## VECTOR ANALYSES

| LLVM Analysis | What it does | Unlace Status | Priority | Gap |
|---|---|---|---|---|
| VectorUtils | Vector function database | ✗ Not implemented | MEDIUM | Useful for SIMD analysis |

---

## DEPENDENCE ANALYSES

| LLVM Analysis | What it does | Unlace Status | Priority | Gap |
|---|---|---|---|---|
| DependenceAnalysis | Memory dependence analysis | ✗ Not implemented | MEDIUM | **MEDIUM GAP** - Useful for loop analysis |
| DependenceGraphBuilder | Dependence graph construction | ✗ Not implemented | MEDIUM | Depends on DependenceAnalysis |
| Delinearization | Array subscript delinearization | ✗ Not implemented | MEDIUM | **MEDIUM GAP** - Useful for array recovery |

---

## UTILITY ANALYSES

| LLVM Analysis | What it does | Unlace Status | Priority | Gap |
|---|---|---|---|---|
| AssumptionCache | Caches @llvm.assume intrinsics | ✗ Not implemented | MEDIUM | Useful for constraint propagation |
| AssumeBundleQueries | Assume bundle queries | ✗ Not implemented | MEDIUM | Useful for constraint analysis |
| DemandedBits | Bit usage analysis | ✗ Not implemented | HIGH | Useful for expression simplification |
| CodeMetrics | Code metrics | ✗ Not implemented | LOW | Not critical |
| InstCount | Instruction counting | ✗ Not implemented | LOW | Not critical |
| Lint | IR correctness verification | ✗ Not implemented | LOW | Useful for validation |
| Loads | Load instruction analysis | ✗ Not implemented | MEDIUM | Useful for memory analysis |
| MustExecute | Must-execute analysis | ✗ Not implemented | MEDIUM | Useful for control flow analysis |
| GuardUtils | Guard intrinsic utilities | ✗ Not implemented | LOW | Not critical |
| ConstraintSystem | Linear constraint solver | ✗ Not implemented | MEDIUM | Useful for range analysis |
| SparsePropagation | Sparse conditional constant propagation | ✗ Not implemented | MEDIUM | Useful for simplification |
| PHITransAddr | Address translation through phis | ✗ Not implemented | MEDIUM | Useful for memory analysis |
| PtrUseVisitor | Pointer use visitor | ✗ Not implemented | MEDIUM | Useful for pointer analysis |
| StackLifetime | Stack variable lifetime analysis | ✗ Not implemented | CRITICAL | **MAJOR GAP** - Essential for local variable recovery |
| StackSafetyAnalysis | Stack safety analysis | ✗ Not implemented | MEDIUM | Useful for safety analysis |
| FunctionPropertiesAnalysis | Function properties | ✗ Not implemented | LOW | Not critical |
| ModuleSummaryAnalysis | Module summary | ✗ Not implemented | LOW | Not critical |
| OptimizationRemarkEmitter | Optimization remarks | ✗ Not implemented | LOW | Not critical |
| RuntimeLibcallInfo | Runtime library call info | ✗ Not implemented | MEDIUM | Useful for function recognition |
| StructuralHash | Structural hash of IR | ✗ Not implemented | LOW | Not critical |
| SyntheticCountsUtils | Synthetic profile utilities | ✗ Not implemented | LOW | Not critical |
| UniformityAnalysis | GPU uniformity analysis | ✗ Not implemented | LOW | GPU-specific |
| KernelInfo | GPU kernel information | ✗ Not implemented | LOW | GPU-specific |
| CtxProfAnalysis | Contextual profile info | ✗ Not implemented | LOW | Not critical |
| LastRunTrackingAnalysis | Last run tracking | ✗ Not implemented | LOW | Not critical |
| DDG | Data Dependence Graph | ✗ Not implemented | MEDIUM | Useful for dependence analysis |
| HashRecognize | Hash function recognition | ✗ Not implemented | MEDIUM | Useful for idiom recognition |
| IR2Vec | IR to vector embedding | ✗ Not implemented | LOW | ML-related |
| IRSimilarityIdentifier | IR similarity detection | ✗ Not implemented | MEDIUM | Useful for code clone detection |
| InlineAdvisor | Inlining decisions | ✗ Not implemented | MEDIUM | Useful for function recovery |
| InlineModelFeatureMaps | Inlining ML features | ✗ Not implemented | LOW | ML-related |
| InlineOrder | Inlining order | ✗ Not implemented | LOW | Not critical |
| MLInlineAdvisor | ML-based inlining | ✗ Not implemented | LOW | ML-related |
| MLModelRunner | ML model runner | ✗ Not implemented | LOW | ML-related |
| ModelUnderTrainingRunner | ML training runner | ✗ Not implemented | LOW | ML-related |
| NoInferenceModelRunner | No-op ML runner | ✗ Not implemented | LOW | ML-related |
| ReleaseModeModelRunner | Release ML runner | ✗ Not implemented | LOW | ML-related |
| InteractiveModelRunner | Interactive ML runner | ✗ Not implemented | LOW | ML-related |
| ReplayInlineAdvisor | Inlining replay | ✗ Not implemented | LOW | Not critical |
| DXILMetadataAnalysis | DXIL metadata analysis | ✗ Not implemented | LOW | DXIL-specific |
| DXILResource | DXIL resource info | ✗ Not implemented | LOW | DXIL-specific |
| EHUtils | Exception handling utilities | ✗ Not implemented | MEDIUM | Useful for exception recovery |
| TensorSpec | ML tensor specs | ✗ Not implemented | LOW | ML-related |
| Trace | Execution trace analysis | ✗ Not implemented | LOW | Not critical |

---

## PASS INFRASTRUCTURE

| LLVM Analysis | What it does | Unlace Status | Priority | Gap |
|---|---|---|---|---|
| CallGraphSCCPass | Call graph SCC pass manager | ✗ Not implemented | MEDIUM | Useful for pass infrastructure |
| LoopPass | Loop pass manager | ✗ Not implemented | MEDIUM | Useful for pass infrastructure |
| RegionPass | Region pass manager | ✗ Not implemented | MEDIUM | Useful for pass infrastructure |
| LoopAnalysisManager | Loop analysis manager | ✗ Not implemented | MEDIUM | Useful for pass infrastructure |
| CGSCCPassManager | Call graph SCC pass manager | ✗ Not implemented | MEDIUM | Useful for pass infrastructure |
| GenericDomTreeUpdater | Generic dominator tree updater | ✗ Not implemented | MEDIUM | Useful for pass infrastructure |
| DomTreeUpdater | Dominator tree updater | ✗ Not implemented | MEDIUM | Useful for pass infrastructure |
| Passes | Pass registration | ✗ Not implemented | MEDIUM | Useful for pass infrastructure |

---

## PRINTERS & VISUALIZATION

| LLVM Analysis | What it does | Unlace Status | Priority | Gap |
|---|---|---|---|---|
| CFGPrinter | CFG visualization | ✗ Not implemented | LOW | Debugging only |
| CFGSCCPrinter | CFG SCC visualization | ✗ Not implemented | LOW | Debugging only |
| CallPrinter | Call graph visualization | ✗ Not implemented | LOW | Debugging only |
| DomPrinter | Dominator tree visualization | ✗ Not implemented | LOW | Debugging only |
| RegionPrinter | Region visualization | ✗ Not implemented | LOW | Debugging only |
| DDGPrinter | DDG visualization | ✗ Not implemented | LOW | Debugging only |
| MemDerefPrinter | Memory dereference visualization | ✗ Not implemented | LOW | Debugging only |
| ModuleDebugInfoPrinter | Debug info visualization | ✗ Not implemented | LOW | Debugging only |
| DOTGraphTraitsPass | DOT graph traits | ✗ Not implemented | LOW | Visualization only |

---

## GLOBAL ANALYSES

| LLVM Analysis | What it does | Unlace Status | Priority | Gap |
|---|---|---|---|---|
| GlobalsModRef | Global variable mod/ref analysis | ✗ Not implemented | MEDIUM | Useful for global analysis |

---

## SUMMARY STATISTICS

### Implementation Status
- **Fully Implemented**: 7 analyses (5%)
- **Partially Implemented**: 5 analyses (4%)
- **Not Implemented**: 123 analyses (91%)

### Priority Distribution
- **CRITICAL**: 10 analyses (7%)
  - 7 already implemented/partial
  - 3 major gaps: ScalarEvolution, TargetLibraryInfo, StackLifetime
- **HIGH**: 10 analyses (7%)
  - 0 implemented
  - All needed for core functionality
- **MEDIUM**: 40+ analyses (30%)
  - 0 implemented
  - Useful for optimization and quality
- **LOW**: 70+ analyses (52%)
  - 0 implemented
  - Optional or specialized

### Critical Gaps (Must Implement)
1. **ScalarEvolution** - Induction variable analysis
2. **TargetLibraryInfo** - Function signature database
3. **StackLifetime** - Local variable lifetime analysis
4. **LazyValueInfo** - Value range analysis
5. **MemoryDependenceAnalysis** - Memory dependence tracking

### Medium Gaps (Should Implement)
1. **DependenceAnalysis** - Memory dependence analysis
2. **Delinearization** - Array subscript recovery
3. **RegionInfo** - SESE region analysis
4. **CycleAnalysis** - Irreducible CFG handling
5. **DemandedBits** - Bit usage analysis

### Low Priority (Can Defer)
1. Profile analyses (ProfileSummaryInfo, etc.)
2. ML-related analyses (MLInlineAdvisor, etc.)
3. GPU-specific analyses (UniformityAnalysis, etc.)
4. DXIL-specific analyses
5. Visualization/printer passes

---

## IMPLEMENTATION PRIORITY ROADMAP

### Phase 1: Foundation (DONE)
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
1. **DependenceAnalysis** - Memory dependence analysis
2. **Delinearization** - Array subscript recovery
3. **RegionInfo** - SESE region analysis
4. **CycleAnalysis** - Irreducible CFG handling
5. **DemandedBits** - Bit usage analysis

### Phase 4: Optimization (FUTURE)
1. Profile analyses - Branch probability, block frequency
2. Inlining detection - InlineCost, InlineAdvisor
3. Code clone detection - IRSimilarityIdentifier
4. Exception handling - EHUtils

---

## DECOMPILER PARITY CHECKLIST

### Must Have (10/10)
- [x] DominatorTree / PostDominatorTree
- [x] LoopInfo
- [x] CallGraph
- [x] MemorySSA (partial)
- [x] ValueTracking (partial)
- [x] InstructionSimplify (partial)
- [x] ConstantFolding (partial)
- [ ] ScalarEvolution
- [ ] TargetLibraryInfo
- [ ] StackLifetime

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

