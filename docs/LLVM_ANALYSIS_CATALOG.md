# LLVM Analysis Subsystem - Comprehensive Catalog

**Purpose**: Complete inventory of LLVM's Analysis passes for decompiler gap analysis.

**Total Analyses**: 143 headers, 125 implementations

---

## CONTROL FLOW ANALYSES

### 1. **DominatorTree** (IR/Dominators.h - in IR, not Analysis)
- **What it computes**: Dominance relationships between basic blocks
- **Decompiler analog**: Essential for control-flow structuring, identifying immediate dominators
- **Unlace need**: Already implemented in `unlace-struct` for structuring

### 2. **PostDominatorTree** (PostDominators.h)
- **What it computes**: Post-dominance relationships (reverse dominance)
- **Decompiler analog**: Needed for identifying exit nodes, loop exits, return paths
- **Unlace need**: Required for proper loop/if-else recovery

### 3. **DominanceFrontier** (DominanceFrontier.h)
- **What it computes**: Dominance frontier - blocks where dominance ends
- **Decompiler analog**: Used for SSA phi placement, identifying join points
- **Unlace need**: Deprecated in LLVM but useful for SSA construction

### 4. **IteratedDominanceFrontier** (IteratedDominanceFrontier.h)
- **What it computes**: Iterated dominance frontier for SSA phi placement
- **Decompiler analog**: Critical for SSA form construction
- **Unlace need**: Needed for proper SSA phi insertion

### 5. **RegionInfo** (RegionInfo.h)
- **What it computes**: Single-Entry-Single-Exit (SESE) regions in CFG
- **Decompiler analog**: Hierarchical control-flow structure, useful for structuring
- **Unlace need**: Could improve structuring quality

### 6. **CycleAnalysis** (CycleAnalysis.h)
- **What it computes**: Cycle information (generalization of loops)
- **Decompiler analog**: Loop detection and classification
- **Unlace need**: Alternative to LoopInfo for irreducible CFGs

### 7. **CFG** (CFG.h)
- **What it computes**: Basic CFG utilities (predecessors, successors, reachability)
- **Decompiler analog**: Fundamental CFG traversal
- **Unlace need**: Already implemented

### 8. **DomConditionCache** (DomConditionCache.h)
- **What it computes**: Caches conditions that dominate a block
- **Decompiler analog**: Condition propagation for branch simplification
- **Unlace need**: Useful for condition-based simplification

---

## LOOP ANALYSES

### 9. **LoopInfo** (LoopInfo.h)
- **What it computes**: Natural loop detection and hierarchy
- **Decompiler analog**: Loop recovery, loop nesting
- **Unlace need**: Critical for loop structuring

### 10. **LoopAccessAnalysis** (LoopAccessAnalysis.h)
- **What it computes**: Memory access patterns in loops, dependence analysis
- **Decompiler analog**: Loop-carried dependencies, memory access patterns
- **Unlace need**: Useful for loop optimization and recovery

### 11. **IVDescriptors** (IVDescriptors.h)
- **What it computes**: Induction variable patterns (add, mul, sub, recurrences)
- **Decompiler analog**: Induction variable recovery, loop counter identification
- **Unlace need**: Critical for loop variable recovery

### 12. **IVUsers** (IVUsers.h)
- **What it computes**: Uses of induction variables
- **Decompiler analog**: Tracking IV usage for strength reduction
- **Unlace need**: Useful for IV simplification

### 13. **LoopNestAnalysis** (LoopNestAnalysis.h)
- **What it computes**: Nested loop structure and properties
- **Decompiler analog**: Multi-level loop recovery
- **Unlace need**: Useful for nested loop structuring

### 14. **LoopCacheAnalysis** (LoopCacheAnalysis.h)
- **What it computes**: Cache behavior of loop memory accesses
- **Decompiler analog**: Performance annotation (not critical for decompilation)
- **Unlace need**: Low priority

### 15. **LoopUnrollAnalyzer** (LoopUnrollAnalyzer.h)
- **What it computes**: Loop unroll cost estimation
- **Decompiler analog**: Detecting unrolled loops
- **Unlace need**: Useful for recognizing unrolled patterns

---

## SCALAR EVOLUTION ANALYSES

### 16. **ScalarEvolution** (ScalarEvolution.h)
- **What it computes**: Symbolic expressions for scalar values in loops
- **Decompiler analog**: Induction variable analysis, trip count computation
- **Unlace need**: Critical for loop analysis and IV recovery

### 17. **ScalarEvolutionAliasAnalysis** (ScalarEvolutionAliasAnalysis.h)
- **What it computes**: Alias analysis using SCEV information
- **Decompiler analog**: Pointer disambiguation using loop structure
- **Unlace need**: Useful for memory analysis

### 18. **ScalarEvolutionDivision** (ScalarEvolutionDivision.h)
- **What it computes**: Division operations in SCEV expressions
- **Decompiler analog**: Simplifying division patterns
- **Unlace need**: Useful for expression simplification

### 19. **ScalarEvolutionNormalization** (ScalarEvolutionNormalization.h)
- **What it computes**: Normalization of SCEV expressions
- **Decompiler analog**: Canonical form for expressions
- **Unlace need**: Useful for expression comparison

### 20. **ScalarEvolutionPatternMatch** (ScalarEvolutionPatternMatch.h)
- **What it computes**: Pattern matching on SCEV expressions
- **Decompiler analog**: Recognizing common patterns
- **Unlace need**: Useful for idiom recognition

---

## ALIAS ANALYSIS

### 21. **AliasAnalysis** (AliasAnalysis.h)
- **What it computes**: Generic alias analysis interface (MustAlias, MayAlias, NoAlias)
- **Decompiler analog**: Pointer disambiguation, memory access analysis
- **Unlace need**: Critical for memory analysis

### 22. **BasicAliasAnalysis** (BasicAliasAnalysis.h)
- **What it computes**: Stateless local alias analysis (TBAA, offset-based)
- **Decompiler analog**: Basic pointer analysis
- **Unlace need**: Useful for pointer disambiguation

### 23. **TypeBasedAliasAnalysis** (TypeBasedAliasAnalysis.h)
- **What it computes**: Alias analysis using type information
- **Decompiler analog**: Type-based pointer analysis
- **Unlace need**: Useful for type recovery

### 24. **ScopedNoAliasAA** (ScopedNoAliasAA.h)
- **What it computes**: Alias analysis using noalias metadata
- **Decompiler analog**: Recognizing non-aliasing pointers
- **Unlace need**: Useful for pointer analysis

### 25. **ObjCARCAliasAnalysis** (ObjCARCAliasAnalysis.h)
- **What it computes**: Alias analysis for Objective-C ARC
- **Decompiler analog**: Language-specific pointer analysis
- **Unlace need**: Low priority (Objective-C specific)

### 26. **AliasSetTracker** (AliasSetTracker.h)
- **What it computes**: Groups memory locations into alias sets
- **Decompiler analog**: Memory location grouping
- **Unlace need**: Useful for memory analysis

### 27. **AliasAnalysisEvaluator** (AliasAnalysisEvaluator.h)
- **What it computes**: Evaluates accuracy of alias analysis
- **Decompiler analog**: Testing/validation tool
- **Unlace need**: Low priority

---

## MEMORY ANALYSES

### 28. **MemorySSA** (MemorySSA.h)
- **What it computes**: SSA form for memory operations (MemoryDef, MemoryUse, MemoryPhi)
- **Decompiler analog**: Memory SSA form, critical for memory analysis
- **Unlace need**: Critical - already partially implemented in unlace-ir

### 29. **MemorySSAUpdater** (MemorySSAUpdater.h)
- **What it computes**: Incremental updates to MemorySSA
- **Decompiler analog**: Maintaining memory SSA during transformations
- **Unlace need**: Useful for pass infrastructure

### 30. **MemoryDependenceAnalysis** (MemoryDependenceAnalysis.h)
- **What it computes**: Memory dependencies (load-store, store-store, etc.)
- **Decompiler analog**: Memory dependence tracking
- **Unlace need**: Useful for memory analysis

### 31. **MemoryLocation** (MemoryLocation.h)
- **What it computes**: Representation of memory locations (pointer + size)
- **Decompiler analog**: Memory location abstraction
- **Unlace need**: Already implemented

### 32. **MemoryBuiltins** (MemoryBuiltins.h)
- **What it computes**: Recognition of memory allocation/deallocation functions
- **Decompiler analog**: Malloc/free/new/delete recognition
- **Unlace need**: Useful for memory analysis

### 33. **MemoryProfileInfo** (MemoryProfileInfo.h)
- **What it computes**: Memory access profiling information
- **Decompiler analog**: Runtime memory access patterns
- **Unlace need**: Low priority (runtime data)

### 34. **InterestingMemoryOperand** (InterestingMemoryOperand.h)
- **What it computes**: Identifies interesting memory operands for analysis
- **Decompiler analog**: Memory operand classification
- **Unlace need**: Useful for memory analysis

---

## CALL GRAPH ANALYSES

### 35. **CallGraph** (CallGraph.h)
- **What it computes**: Module-level call graph with external nodes
- **Decompiler analog**: Function call relationships
- **Unlace need**: Critical for interprocedural analysis

### 36. **LazyCallGraph** (LazyCallGraph.h)
- **What it computes**: Lazy call graph construction
- **Decompiler analog**: On-demand call graph
- **Unlace need**: Useful for large binaries

### 37. **IndirectCallPromotionAnalysis** (IndirectCallPromotionAnalysis.h)
- **What it computes**: Identifies indirect calls that can be promoted
- **Decompiler analog**: Indirect call resolution
- **Unlace need**: Useful for call resolution

### 38. **IndirectCallVisitor** (IndirectCallVisitor.h)
- **What it computes**: Visitor for indirect call sites
- **Decompiler analog**: Indirect call traversal
- **Unlace need**: Useful for call analysis

---

## VALUE ANALYSIS

### 39. **ValueTracking** (ValueTracking.h)
- **What it computes**: Properties of values (known bits, sign, range, etc.)
- **Decompiler analog**: Value property inference
- **Unlace need**: Critical for expression simplification

### 40. **LazyValueInfo** (LazyValueInfo.h)
- **What it computes**: Lazy value constraint analysis (ranges, constants)
- **Decompiler analog**: Value range analysis
- **Unlace need**: Useful for constant propagation

### 41. **ValueLattice** (ValueLattice.h)
- **What it computes**: Lattice values for constant propagation
- **Decompiler analog**: Constant propagation lattice
- **Unlace need**: Useful for constant propagation

### 42. **ValueLatticeUtils** (ValueLatticeUtils.h)
- **What it computes**: Utilities for value lattice operations
- **Decompiler analog**: Lattice utilities
- **Unlace need**: Useful for constant propagation

### 43. **PhiValues** (PhiValues.h)
- **What it computes**: Phi node value analysis
- **Decompiler analog**: Phi node simplification
- **Unlace need**: Useful for SSA analysis

### 44. **CaptureTracking** (CaptureTracking.h)
- **What it computes**: Determines if pointers are captured
- **Decompiler analog**: Pointer escape analysis
- **Unlace need**: Useful for pointer analysis

### 45. **EphemeralValuesCache** (EphemeralValuesCache.h)
- **What it computes**: Caches ephemeral values (values used only in conditions)
- **Decompiler analog**: Condition-only value tracking
- **Unlace need**: Useful for condition analysis

### 46. **InstructionPrecedenceTracking** (InstructionPrecedenceTracking.h)
- **What it computes**: Instruction execution order
- **Decompiler analog**: Instruction ordering
- **Unlace need**: Useful for instruction analysis

---

## INSTRUCTION ANALYSIS

### 47. **InstructionSimplify** (InstructionSimplify.h)
- **What it computes**: Simplifies instructions without creating new ones
- **Decompiler analog**: Expression simplification
- **Unlace need**: Critical for output quality

### 48. **ConstantFolding** (ConstantFolding.h)
- **What it computes**: Folds constant expressions
- **Decompiler analog**: Constant folding
- **Unlace need**: Critical for output quality

### 49. **SimplifyQuery** (SimplifyQuery.h)
- **What it computes**: Query object for simplification context
- **Decompiler analog**: Simplification context
- **Unlace need**: Useful for simplification

### 50. **InstSimplifyFolder** (InstSimplifyFolder.h)
- **What it computes**: Folder using instruction simplification
- **Decompiler analog**: Simplification folder
- **Unlace need**: Useful for simplification

### 51. **CmpInstAnalysis** (CmpInstAnalysis.h)
- **What it computes**: Analysis of comparison instructions
- **Decompiler analog**: Comparison simplification
- **Unlace need**: Useful for condition analysis

### 52. **OverflowInstAnalysis** (OverflowInstAnalysis.h)
- **What it computes**: Analysis of overflow checking instructions
- **Decompiler analog**: Overflow detection
- **Unlace need**: Useful for arithmetic analysis

### 53. **FloatingPointPredicateUtils** (FloatingPointPredicateUtils.h)
- **What it computes**: Floating-point predicate analysis
- **Decompiler analog**: FP comparison analysis
- **Unlace need**: Useful for FP analysis

---

## PROFILE ANALYSES

### 54. **BranchProbabilityInfo** (BranchProbabilityInfo.h)
- **What it computes**: Branch probability estimation
- **Decompiler analog**: Branch likelihood annotation
- **Unlace need**: Useful for output annotation

### 55. **BlockFrequencyInfo** (BlockFrequencyInfo.h)
- **What it computes**: Basic block execution frequency
- **Decompiler analog**: Block frequency annotation
- **Unlace need**: Useful for output annotation

### 56. **LazyBlockFrequencyInfo** (LazyBlockFrequencyInfo.h)
- **What it computes**: Lazy block frequency computation
- **Decompiler analog**: On-demand frequency
- **Unlace need**: Useful for large functions

### 57. **LazyBranchProbabilityInfo** (LazyBranchProbabilityInfo.h)
- **What it computes**: Lazy branch probability computation
- **Decompiler analog**: On-demand probability
- **Unlace need**: Useful for large functions

### 58. **ProfileSummaryInfo** (ProfileSummaryInfo.h)
- **What it computes**: Global profile summary (hot/cold counts)
- **Decompiler analog**: Profile-based hotness
- **Unlace need**: Useful for annotation

### 59. **StaticDataProfileInfo** (StaticDataProfileInfo.h)
- **What it computes**: Static profile information
- **Decompiler analog**: Static profile data
- **Unlace need**: Low priority

### 60. **HeatUtils** (HeatUtils.h)
- **What it computes**: Heat map utilities for profiling
- **Decompiler analog**: Heat visualization
- **Unlace need**: Low priority

---

## TYPE ANALYSES

### 61. **TargetLibraryInfo** (TargetLibraryInfo.h)
- **What it computes**: Library function signatures and properties
- **Decompiler analog**: Function signature database
- **Unlace need**: Critical for function signature recovery

### 62. **TypeMetadataUtils** (TypeMetadataUtils.h)
- **What it computes**: Type metadata utilities
- **Decompiler analog**: Type metadata handling
- **Unlace need**: Useful for type recovery

### 63. **ObjCARCAnalysisUtils** (ObjCARCAnalysisUtils.h)
- **What it computes**: Objective-C ARC analysis utilities
- **Decompiler analog**: Language-specific type analysis
- **Unlace need**: Low priority

### 64. **ObjCARCInstKind** (ObjCARCInstKind.h)
- **What it computes**: Classification of Objective-C ARC instructions
- **Decompiler analog**: Language-specific instruction classification
- **Unlace need**: Low priority

### 65. **ObjCARCUtil** (ObjCARCUtil.h)
- **What it computes**: Objective-C ARC utilities
- **Decompiler analog**: Language-specific utilities
- **Unlace need**: Low priority

---

## TARGET INFORMATION

### 66. **TargetTransformInfo** (TargetTransformInfo.h)
- **What it computes**: Target-specific cost information
- **Decompiler analog**: Architecture-specific properties
- **Unlace need**: Useful for architecture-specific analysis

### 67. **CostModel** (CostModel.h)
- **What it computes**: Instruction cost estimation
- **Decompiler analog**: Instruction cost
- **Unlace need**: Low priority

### 68. **InlineCost** (InlineCost.h)
- **What it computes**: Inlining cost estimation
- **Decompiler analog**: Function inlining detection
- **Unlace need**: Useful for recognizing inlined functions

### 69. **TargetFolder** (TargetFolder.h)
- **What it computes**: Constant folding using target information
- **Decompiler analog**: Target-aware folding
- **Unlace need**: Useful for simplification

---

## VECTOR ANALYSES

### 70. **VectorUtils** (VectorUtils.h)
- **What it computes**: Vector function database and utilities
- **Decompiler analog**: SIMD function recognition
- **Unlace need**: Useful for SIMD analysis

---

## DEPENDENCE ANALYSES

### 71. **DependenceAnalysis** (DependenceAnalysis.h)
- **What it computes**: Memory dependence between instructions
- **Decompiler analog**: Memory dependence tracking
- **Unlace need**: Useful for memory analysis

### 72. **DependenceGraphBuilder** (DependenceGraphBuilder.h)
- **What it computes**: Builds dependence graphs
- **Decompiler analog**: Dependence graph construction
- **Unlace need**: Useful for dependence analysis

### 73. **Delinearization** (Delinearization.h)
- **What it computes**: Delinearizes array subscripts
- **Decompiler analog**: Multi-dimensional array recovery
- **Unlace need**: Useful for array analysis

---

## UTILITY ANALYSES

### 74. **AssumptionCache** (AssumptionCache.h)
- **What it computes**: Caches @llvm.assume intrinsics
- **Decompiler analog**: Assumption tracking
- **Unlace need**: Useful for constraint propagation

### 75. **AssumeBundleQueries** (AssumeBundleQueries.h)
- **What it computes**: Queries assume bundles
- **Decompiler analog**: Assumption queries
- **Unlace need**: Useful for constraint analysis

### 76. **DemandedBits** (DemandedBits.h)
- **What it computes**: Determines which bits are used
- **Decompiler analog**: Bit usage analysis
- **Unlace need**: Useful for expression simplification

### 77. **CodeMetrics** (CodeMetrics.h)
- **What it computes**: Code size and complexity metrics
- **Decompiler analog**: Code metrics
- **Unlace need**: Low priority

### 78. **InstCount** (InstCount.h)
- **What it computes**: Counts instructions
- **Decompiler analog**: Instruction counting
- **Unlace need**: Low priority

### 79. **Lint** (Lint.h)
- **What it computes**: Verifies IR correctness
- **Decompiler analog**: IR validation
- **Unlace need**: Useful for validation

### 80. **Loads** (Loads.h)
- **What it computes**: Load instruction analysis
- **Decompiler analog**: Load analysis
- **Unlace need**: Useful for memory analysis

### 81. **MustExecute** (MustExecute.h)
- **What it computes**: Determines if instructions must execute
- **Decompiler analog**: Instruction execution analysis
- **Unlace need**: Useful for control flow analysis

### 82. **GuardUtils** (GuardUtils.h)
- **What it computes**: Guard intrinsic utilities
- **Decompiler analog**: Guard analysis
- **Unlace need**: Low priority

### 83. **ConstraintSystem** (ConstraintSystem.h)
- **What it computes**: Linear constraint system solver
- **Decompiler analog**: Constraint solving
- **Unlace need**: Useful for range analysis

### 84. **SparsePropagation** (SparsePropagation.h)
- **What it computes**: Sparse conditional constant propagation
- **Decompiler analog**: Constant propagation
- **Unlace need**: Useful for simplification

### 85. **PHITransAddr** (PHITransAddr.h)
- **What it computes**: Translates addresses through phi nodes
- **Decompiler analog**: Phi node address analysis
- **Unlace need**: Useful for memory analysis

### 86. **PtrUseVisitor** (PtrUseVisitor.h)
- **What it computes**: Visitor for pointer uses
- **Decompiler analog**: Pointer use tracking
- **Unlace need**: Useful for pointer analysis

### 87. **StackLifetime** (StackLifetime.h)
- **What it computes**: Stack variable lifetime analysis
- **Decompiler analog**: Local variable lifetime
- **Unlace need**: Critical for local variable recovery

### 88. **StackSafetyAnalysis** (StackSafetyAnalysis.h)
- **What it computes**: Stack safety analysis
- **Decompiler analog**: Stack safety checking
- **Unlace need**: Useful for safety analysis

### 89. **FunctionPropertiesAnalysis** (FunctionPropertiesAnalysis.h)
- **What it computes**: Function properties (size, complexity, etc.)
- **Decompiler analog**: Function metrics
- **Unlace need**: Low priority

### 90. **ModuleSummaryAnalysis** (ModuleSummaryAnalysis.h)
- **What it computes**: Module-level summary information
- **Decompiler analog**: Module summary
- **Unlace need**: Low priority

### 91. **OptimizationRemarkEmitter** (OptimizationRemarkEmitter.h)
- **What it computes**: Emits optimization remarks
- **Decompiler analog**: Diagnostic output
- **Unlace need**: Low priority

### 92. **RuntimeLibcallInfo** (RuntimeLibcallInfo.h)
- **What it computes**: Runtime library call information
- **Decompiler analog**: Runtime function recognition
- **Unlace need**: Useful for function recognition

### 93. **StructuralHash** (StructuralHash.h)
- **What it computes**: Structural hash of IR
- **Decompiler analog**: IR fingerprinting
- **Unlace need**: Low priority

### 94. **SyntheticCountsUtils** (SyntheticCountsUtils.h)
- **What it computes**: Synthetic profile count utilities
- **Decompiler analog**: Synthetic profiling
- **Unlace need**: Low priority

### 95. **UniformityAnalysis** (UniformityAnalysis.h)
- **What it computes**: Uniformity analysis for GPU kernels
- **Decompiler analog**: GPU kernel analysis
- **Unlace need**: Low priority (GPU specific)

### 96. **KernelInfo** (KernelInfo.h)
- **What it computes**: GPU kernel information
- **Decompiler analog**: GPU kernel metadata
- **Unlace need**: Low priority (GPU specific)

### 97. **CtxProfAnalysis** (CtxProfAnalysis.h)
- **What it computes**: Contextual profile information
- **Decompiler analog**: Context-aware profiling
- **Unlace need**: Low priority

### 98. **LastRunTrackingAnalysis** (LastRunTrackingAnalysis.h)
- **What it computes**: Tracks last run of analysis
- **Decompiler analog**: Analysis caching
- **Unlace need**: Low priority

### 99. **DDG** (DDG.h)
- **What it computes**: Data Dependence Graph
- **Decompiler analog**: Dependence graph
- **Unlace need**: Useful for dependence analysis

### 100. **HashRecognize** (HashRecognize.h)
- **What it computes**: Hash function recognition
- **Decompiler analog**: Hash function detection
- **Unlace need**: Useful for idiom recognition

### 101. **IR2Vec** (IR2Vec.h)
- **What it computes**: IR to vector embedding
- **Decompiler analog**: IR embedding
- **Unlace need**: Low priority (ML-related)

### 102. **IRSimilarityIdentifier** (IRSimilarityIdentifier.h)
- **What it computes**: Identifies similar IR sequences
- **Decompiler analog**: Code similarity detection
- **Unlace need**: Useful for code clone detection

### 103. **InlineAdvisor** (InlineAdvisor.h)
- **What it computes**: Inlining decisions
- **Decompiler analog**: Inlining detection
- **Unlace need**: Useful for function recovery

### 104. **InlineModelFeatureMaps** (InlineModelFeatureMaps.h)
- **What it computes**: Feature maps for inlining ML model
- **Decompiler analog**: Inlining features
- **Unlace need**: Low priority (ML-related)

### 105. **InlineOrder** (InlineOrder.h)
- **What it computes**: Inlining order
- **Decompiler analog**: Inlining order
- **Unlace need**: Low priority

### 106. **MLInlineAdvisor** (MLInlineAdvisor.h)
- **What it computes**: ML-based inlining advisor
- **Decompiler analog**: ML inlining
- **Unlace need**: Low priority (ML-related)

### 107. **MLModelRunner** (MLModelRunner.h)
- **What it computes**: ML model runner interface
- **Decompiler analog**: ML inference
- **Unlace need**: Low priority (ML-related)

### 108. **ModelUnderTrainingRunner** (ModelUnderTrainingRunner.h)
- **What it computes**: ML model training runner
- **Decompiler analog**: ML training
- **Unlace need**: Low priority (ML-related)

### 109. **NoInferenceModelRunner** (NoInferenceModelRunner.h)
- **What it computes**: No-op ML model runner
- **Decompiler analog**: ML stub
- **Unlace need**: Low priority (ML-related)

### 110. **ReleaseModeModelRunner** (ReleaseModeModelRunner.h)
- **What it computes**: Release mode ML model runner
- **Decompiler analog**: ML inference
- **Unlace need**: Low priority (ML-related)

### 111. **InteractiveModelRunner** (InteractiveModelRunner.h)
- **What it computes**: Interactive ML model runner
- **Decompiler analog**: ML inference
- **Unlace need**: Low priority (ML-related)

### 112. **ReplayInlineAdvisor** (ReplayInlineAdvisor.h)
- **What it computes**: Replays inlining decisions
- **Decompiler analog**: Inlining replay
- **Unlace need**: Low priority

### 113. **DXILMetadataAnalysis** (DXILMetadataAnalysis.h)
- **What it computes**: DirectX IL metadata analysis
- **Decompiler analog**: DXIL metadata
- **Unlace need**: Low priority (DXIL specific)

### 114. **DXILResource** (DXILResource.h)
- **What it computes**: DXIL resource information
- **Decompiler analog**: DXIL resources
- **Unlace need**: Low priority (DXIL specific)

### 115. **EHUtils** (EHUtils.h)
- **What it computes**: Exception handling utilities
- **Decompiler analog**: Exception handling analysis
- **Unlace need**: Useful for exception recovery

### 116. **TensorSpec** (TensorSpec.h)
- **What it computes**: Tensor specifications for ML
- **Decompiler analog**: ML tensor specs
- **Unlace need**: Low priority (ML-related)

### 117. **Trace** (Trace.h)
- **What it computes**: Execution trace analysis
- **Decompiler analog**: Trace analysis
- **Unlace need**: Low priority

---

## PASS INFRASTRUCTURE

### 118. **CallGraphSCCPass** (CallGraphSCCPass.h)
- **What it computes**: Pass manager for call graph SCC traversal
- **Decompiler analog**: Interprocedural pass ordering
- **Unlace need**: Useful for pass infrastructure

### 119. **LoopPass** (LoopPass.h)
- **What it computes**: Pass manager for loop traversal
- **Decompiler analog**: Loop pass infrastructure
- **Unlace need**: Useful for pass infrastructure

### 120. **RegionPass** (RegionPass.h)
- **What it computes**: Pass manager for region traversal
- **Decompiler analog**: Region pass infrastructure
- **Unlace need**: Useful for pass infrastructure

### 121. **LoopAnalysisManager** (LoopAnalysisManager.h)
- **What it computes**: Analysis manager for loops
- **Decompiler analog**: Loop analysis management
- **Unlace need**: Useful for pass infrastructure

### 122. **CGSCCPassManager** (CGSCCPassManager.h)
- **What it computes**: Pass manager for call graph SCC
- **Decompiler analog**: Interprocedural pass management
- **Unlace need**: Useful for pass infrastructure

### 123. **GenericDomTreeUpdater** (GenericDomTreeUpdater.h)
- **What it computes**: Generic dominator tree updater
- **Decompiler analog**: Dominator tree maintenance
- **Unlace need**: Useful for pass infrastructure

### 124. **DomTreeUpdater** (DomTreeUpdater.h)
- **What it computes**: Dominator tree updater
- **Decompiler analog**: Dominator tree maintenance
- **Unlace need**: Useful for pass infrastructure

### 125. **Passes** (Passes.h)
- **What it computes**: Pass registration
- **Decompiler analog**: Pass infrastructure
- **Unlace need**: Useful for pass infrastructure

---

## PRINTERS & UTILITIES

### 126. **CFGPrinter** (CFGPrinter.h)
- **What it computes**: CFG visualization
- **Decompiler analog**: CFG output
- **Unlace need**: Useful for debugging

### 127. **CFGSCCPrinter** (CFGSCCPrinter.h)
- **What it computes**: CFG SCC visualization
- **Decompiler analog**: SCC visualization
- **Unlace need**: Useful for debugging

### 128. **CallPrinter** (CallPrinter.h)
- **What it computes**: Call graph visualization
- **Decompiler analog**: Call graph output
- **Unlace need**: Useful for debugging

### 129. **DomPrinter** (DomPrinter.h)
- **What it computes**: Dominator tree visualization
- **Decompiler analog**: Dominator tree output
- **Unlace need**: Useful for debugging

### 130. **RegionPrinter** (RegionPrinter.h)
- **What it computes**: Region visualization
- **Decompiler analog**: Region output
- **Unlace need**: Useful for debugging

### 131. **DDGPrinter** (DDGPrinter.h)
- **What it computes**: Data dependence graph visualization
- **Decompiler analog**: DDG output
- **Unlace need**: Useful for debugging

### 132. **MemDerefPrinter** (MemDerefPrinter.h)
- **What it computes**: Memory dereference visualization
- **Decompiler analog**: Memory access output
- **Unlace need**: Useful for debugging

### 133. **ModuleDebugInfoPrinter** (ModuleDebugInfoPrinter.h)
- **What it computes**: Debug info visualization
- **Decompiler analog**: Debug info output
- **Unlace need**: Useful for debugging

### 134. **DOTGraphTraitsPass** (DOTGraphTraitsPass.h)
- **What it computes**: DOT graph traits
- **Decompiler analog**: Graph visualization
- **Unlace need**: Useful for visualization

---

## GLOBAL ANALYSES

### 135. **GlobalsModRef** (GlobalsModRef.h)
- **What it computes**: Global variable mod/ref analysis
- **Decompiler analog**: Global variable analysis
- **Unlace need**: Useful for global analysis

---

## SUMMARY BY PRIORITY FOR DECOMPILER

### CRITICAL (Must Have)
1. DominatorTree / PostDominatorTree - Control flow structuring
2. LoopInfo - Loop recovery
3. ScalarEvolution - Induction variable analysis
4. CallGraph - Function relationships
5. MemorySSA - Memory analysis
6. AliasAnalysis - Pointer disambiguation
7. ValueTracking - Value property inference
8. InstructionSimplify - Expression simplification
9. ConstantFolding - Constant evaluation
10. TargetLibraryInfo - Function signatures

### HIGH PRIORITY (Should Have)
1. IVDescriptors - Induction variable patterns
2. LoopAccessAnalysis - Loop memory analysis
3. LazyValueInfo - Value range analysis
4. MemoryDependenceAnalysis - Memory dependencies
5. BranchProbabilityInfo - Branch likelihood
6. BlockFrequencyInfo - Block frequency
7. RegionInfo - SESE regions
8. DemandedBits - Bit usage analysis
9. StackLifetime - Local variable lifetime
10. CaptureTracking - Pointer escape analysis

### MEDIUM PRIORITY (Nice to Have)
1. DominanceFrontier / IteratedDominanceFrontier - SSA construction
2. CycleAnalysis - Irreducible CFG handling
3. DependenceAnalysis - Memory dependence
4. Delinearization - Array subscript recovery
5. LoopNestAnalysis - Nested loop structure
6. LoopUnrollAnalyzer - Unrolled loop detection
7. InlineCost - Inlining detection
8. VectorUtils - SIMD function recognition
9. EHUtils - Exception handling
10. IRSimilarityIdentifier - Code clone detection

### LOW PRIORITY (Optional)
1. Profile analyses (ProfileSummaryInfo, StaticDataProfileInfo, etc.)
2. ML-related analyses (MLInlineAdvisor, IR2Vec, etc.)
3. GPU-specific analyses (UniformityAnalysis, KernelInfo)
4. DXIL-specific analyses
5. Objective-C specific analyses
6. Metrics and counting analyses
7. Visualization/printer passes

---

## DECOMPILER IMPLEMENTATION ROADMAP

### Phase 1: Foundation (Already Mostly Done)
- [x] DominatorTree / PostDominatorTree
- [x] LoopInfo
- [x] CallGraph
- [x] MemorySSA (partial)
- [x] ValueTracking (partial)
- [x] InstructionSimplify (partial)
- [x] ConstantFolding (partial)

### Phase 2: Core Analysis (In Progress)
- [ ] ScalarEvolution (full implementation)
- [ ] IVDescriptors (full implementation)
- [ ] AliasAnalysis (improve)
- [ ] MemoryDependenceAnalysis
- [ ] LazyValueInfo
- [ ] StackLifetime

### Phase 3: Advanced Analysis (Future)
- [ ] DependenceAnalysis
- [ ] Delinearization
- [ ] RegionInfo
- [ ] CycleAnalysis
- [ ] LoopAccessAnalysis
- [ ] DemandedBits

### Phase 4: Optimization (Future)
- [ ] Profile analyses
- [ ] Inlining detection
- [ ] Code clone detection
- [ ] Exception handling recovery

