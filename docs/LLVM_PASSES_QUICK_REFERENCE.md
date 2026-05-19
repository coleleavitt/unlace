# LLVM Passes Quick Reference

**Total Passes Analyzed**: 319 files across 5 categories  
**High Priority**: 20 passes  
**Medium Priority**: 49 passes  
**Low Priority**: 67 passes  

---

## By Category

### Scalar Passes (82 files)

**Dead Code Elimination** (4 passes)
- ADCE, DCE, BDCE, DeadStoreElimination

**Value Numbering** (5 passes)
- GVN, NewGVN, GVNHoist, GVNSink, EarlyCSE

**Loop Optimizations** (23 passes)
- LICM, LoopUnrollPass, LoopRotation, LoopDeletion, LoopStrengthReduce, IndVarSimplify, LoopFlatten, LoopFuse, LoopInterchange, LoopLoadElimination, LoopPredication, LoopSink, SimpleLoopUnswitch, LoopVersioningLICM, LoopBoundSplit, LoopTermFold, LoopDataPrefetch, LoopDistribute, LoopInstSimplify, LoopSimplifyCFG, InductiveRangeCheckElimination, LoopPassManager, IVUsersPrinter

**Constant Propagation** (4 passes)
- SCCP, CorrelatedValuePropagation, ConstantHoisting, ConstraintElimination

**Arithmetic** (5 passes)
- Reassociate, NaryReassociate, DivRemPairs, StraightLineStrengthReduce, Float2Int

**Memory** (4 passes)
- MemCpyOptimizer, MergedLoadStoreMotion, MergeICmps, SeparateConstOffsetFromGEP

**Control Flow** (8 passes)
- SimplifyCFGPass, FlattenCFGPass, JumpThreading, DFAJumpThreading, JumpTableToSwitch, StructurizeCFG, CallSiteSplitting, SpeculativeExecution

**Intrinsics** (13 passes)
- LowerAtomicPass, LowerConstantIntrinsics, LowerExpectIntrinsic, LowerGuardIntrinsic, LowerMatrixIntrinsics, LowerWidenableCondition, ScalarizeMaskedMemIntrin, Scalarizer, GuardWidening, MakeGuardsExplicit, DropUnnecessaryAssumes, AnnotationRemarks, WarnMissedTransforms

**Miscellaneous** (14 passes)
- TailRecursionElimination, Sink, InferAddressSpaces, InferAlignment, AlignmentFromAssumptions, PartiallyInlineLibCalls, Reg2Mem, RewriteStatepointsForGC, PlaceSafepoints, InstSimplifyPass, LoopAccessAnalysisPrinter, Scalar

### InstCombine Passes (15 files)

- InstCombineAddSub
- InstCombineAndOrXor
- InstCombineAtomicRMW
- InstCombineCalls
- InstCombineCasts
- InstCombineCompares
- InstCombineLoadStoreAlloca
- InstCombineMulDivRem
- InstCombineNegator
- InstCombinePHI
- InstCombineSelect
- InstCombineShifts
- InstCombineSimplifyDemanded
- InstCombineVectorOps
- InstructionCombining

### IPO Passes (48 files)

**Inlining** (3 passes)
- AlwaysInliner, Inliner, ModuleInliner

**Function Optimization** (8 passes)
- ArgumentPromotion, DeadArgumentElimination, FunctionAttrs, FunctionSpecialization, PartialInlining, CalledValuePropagation, InferFunctionAttrs, ForceFunctionAttrs

**Global Optimization** (5 passes)
- GlobalOpt, GlobalDCE, ConstantMerge, MergeFunctions, GlobalSplit

**Devirtualization** (2 passes)
- WholeProgramDevirt, LowerTypeTests

**Code Extraction** (3 passes)
- IROutliner, LoopExtractor, BlockExtractor

**Profiling** (5 passes)
- SampleProfile, SampleProfileProbe, SampleProfileMatcher, SampleContextTracker, MemProfContextDisambiguation

**Other** (22 passes)
- Annotation2Metadata, BarrierNoopPass, CrossDSOCFI, ElimAvailExtern, EmbedBitcodePass, ExpandVariadics, ExtractGV, FatLTOCleanup, FunctionImport, HotColdSplitting, Internalize, OpenMPOpt, SCCP, StripDeadPrototypes, StripSymbols, ThinLTOBitcodeWriter, IPO

### AggressiveInstCombine (2 files)

- AggressiveInstCombine
- TruncInstCombine

### Utils Passes (30+ files)

**SSA & Memory**
- PromoteMemoryToRegister, DemoteRegToStack, SSAUpdater, Evaluator

**CFG Utilities**
- BreakCriticalEdges, FixIrreducible, FlattenCFG, UnifyFunctionExitNodes, ControlFlowUtils

**Code Extraction**
- CodeExtractor, CloneFunction, CloneModule

**Loop Utilities**
- LoopRotationUtils, LoopUtils, LoopVersioning

**Other**
- AddDiscriminators, AMDGPUEmitPrintf, ASanStackFrameLayout, AssumeBundleBuilder, BasicBlockUtils, BuildLibCalls, BypassSlowDivision, CallGraphUpdater, CallPromotionUtils, CanonicalizeAliases, CanonicalizeFreezeInLoops, CodeLayout, CodeMoverUtils, CountVisits, CtorUtils, Debugify, DebugSSAUpdater, DeclareRuntimeLibcalls, DXILUpgrade, EntryExitInstrumenter, EscapeEnumerator, MemoryOpRemark, MetaRenamer, ModuleUtils, ValueMapper

---

## By Priority

### HIGH (20 passes) - Critical for Parity

1. LICM - Loop invariant code motion
2. GVN/NewGVN - Expression deduplication
3. SCCP - Constant propagation
4. DCE/ADCE - Dead code elimination
5. DeadStoreElimination - Memory optimization
6. Reassociate - Expression reassociation
7. SimplifyCFGPass - CFG simplification
8. JumpTableToSwitch - Jump table conversion
9. StructurizeCFG - CFG structuring
10. TailRecursionElimination - Tail recursion
11. LoopUnrollPass - Loop unrolling
12. IndVarSimplify - Induction variable simplification
13. LoopStrengthReduce - Loop strength reduction
14. InstCombine (all) - Instruction combining
15. AlwaysInliner/Inliner/ModuleInliner - Function inlining
16. WholeProgramDevirt - Virtual call devirtualization
17. PromoteMemoryToRegister - SSA promotion
18. EarlyCSE - Common subexpression elimination
19. AggressiveInstCombine - Aggressive combining
20. GVNHoist/GVNSink - Value hoisting/sinking

### MEDIUM (49 passes) - Important for Quality

Loop: LoopRotation, LoopFlatten, LoopFuse, LoopInterchange, LoopLoadElimination, LoopPredication, LoopSink, SimpleLoopUnswitch, LoopDistribute, LoopInstSimplify, LoopSimplifyCFG, InductiveRangeCheckElimination

Expression: NaryReassociate, DivRemPairs, StraightLineStrengthReduce, Float2Int, CorrelatedValuePropagation, ConstantHoisting, ConstraintElimination

Memory: MemCpyOptimizer, MergedLoadStoreMotion, MergeICmps, SeparateConstOffsetFromGEP

Control Flow: FlattenCFGPass, JumpThreading, DFAJumpThreading, SpeculativeExecution

Function: ArgumentPromotion, DeadArgumentElimination, FunctionAttrs, FunctionSpecialization, PartialInlining, GlobalOpt, GlobalDCE, MergeFunctions, CalledValuePropagation, ExpandVariadics, HotColdSplitting, IROutliner, LoopExtractor

Intrinsics: LowerAtomicPass, ScalarizeMaskedMemIntrin, Scalarizer

Utils: BreakCriticalEdges, BypassSlowDivision, CloneFunction, CodeExtractor, ControlFlowUtils, DemoteRegToStack, Evaluator, FixIrreducible, FlattenCFG, UnifyFunctionExitNodes

### LOW (67 passes) - Nice to Have

All remaining passes including profiling, LTO, debug info, and specialized optimizations.

---

## Implementation Roadmap

### Phase 1 (Weeks 1-12): Critical Passes

**Week 1-2**: LICM, GVN, SCCP, DCE/ADCE  
**Week 3-4**: DeadStoreElimination, Reassociate, SimplifyCFGPass  
**Week 5-6**: JumpTableToSwitch, StructurizeCFG, TailRecursionElimination  
**Week 7-8**: LoopUnrollPass, IndVarSimplify, LoopStrengthReduce  
**Week 9-10**: InstCombine (all 15 variants)  
**Week 11-12**: Inlining (3 passes), WholeProgramDevirt, PromoteMemoryToRegister  

### Phase 2 (Weeks 13-22): Medium Priority

**Week 13-14**: Loop optimizations (Rotation, Flatten, Fuse, etc.)  
**Week 15-16**: Expression recovery (NaryReassociate, DivRemPairs, etc.)  
**Week 17-18**: Memory operations (MemCpyOptimizer, MergedLoadStoreMotion, etc.)  
**Week 19-20**: Control flow (JumpThreading, DFAJumpThreading, etc.)  
**Week 21-22**: Function optimization (ArgumentPromotion, FunctionAttrs, etc.)  

### Phase 3 (Weeks 23-30): Polish

**Week 23-24**: Remaining loop passes  
**Week 25-26**: Remaining expression passes  
**Week 27-28**: Remaining control flow passes  
**Week 29-30**: Selected low-priority passes based on corpus analysis  

---

## Key Patterns to Implement

### Loop Patterns
- Unrolled loops (replicated iterations)
- Rotated loops (moved test to end)
- Flattened loops (merged nested loops)
- Strength-reduced induction variables
- Hoisted loop-invariant code

### Expression Patterns
- Redundant expressions (GVN)
- Reassociated expressions
- Combined instructions (InstCombine)
- Constant-folded expressions
- Strength-reduced expressions

### Control Flow Patterns
- Jump threading
- Switch-to-jumptable conversion
- Simplified CFG (merged blocks, removed unreachable)
- Speculative execution
- Flattened conditionals

### Function Patterns
- Inlined functions
- Devirtualized calls
- Tail recursion elimination
- Partial inlining
- Function specialization

### Memory Patterns
- Promoted memory locations
- Eliminated redundant stores
- Merged load/store operations
- Optimized memcpy/memset

---

## Testing Strategy

### Unit Tests
- One test per pass category
- Test both forward and reverse operations
- Verify pattern detection accuracy

### Integration Tests
- Test pass combinations
- Verify pipeline correctness
- Check for regressions

### Golden Tests
- Run against 150 x86_64 reference files
- Measure parity improvement
- Track quality metrics

### Corpus Analysis
- Identify most common patterns
- Prioritize high-impact passes
- Measure real-world coverage

---

## References

- Full catalog: `LLVM_PASSES_CATALOG.md`
- Gap analysis: `LLVM_DECOMPILER_GAP_ANALYSIS.md`
- LLVM source: `/home/cole/CLionProjects/forks/llvm-project/llvm/lib/Transforms/`

