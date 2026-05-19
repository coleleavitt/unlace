# LLVM Optimization Passes → Decompiler Reverse Operations

## SCALAR PASSES (82 files)

### Dead Code Elimination & Simplification

#### ADCE (Aggressive Dead Code Elimination)
- **Compiler**: Optimistically assumes all instructions dead until proven otherwise; eliminates dead computations in loops
- **Decompiler Reverse**: Recognize and restore dead-code-eliminated computations; detect loop-invariant expressions that were removed
- **Priority**: HIGH - Critical for recovering original loop logic

#### DCE (Dead Code Elimination)
- **Compiler**: Single pass removing obviously dead instructions; rechecks instructions used by removed ones
- **Decompiler Reverse**: Identify and restore dead instruction chains; track data dependencies to recover removed computations
- **Priority**: HIGH - Essential for expression recovery

#### BDCE (Bit-Tracking Dead Code Elimination)
- **Compiler**: Tracks dead bits in shifts/ands/ors; removes instructions computing only dead bits; simplifies sext to zext
- **Decompiler Reverse**: Recover bit-width information; restore sign-extension patterns; detect bit-manipulation simplifications
- **Priority**: MEDIUM - Affects type inference and bit operations

#### DeadStoreElimination (DSE)
- **Compiler**: Uses MemorySSA to find clobbering stores; eliminates redundant stores that are completely overwritten
- **Decompiler Reverse**: Recover overwritten memory locations; detect partial/full store patterns; restore memory write sequences
- **Priority**: HIGH - Critical for stack variable and memory recovery

### Value Numbering & Redundancy Elimination

#### GVN (Global Value Numbering)
- **Compiler**: Eliminates fully redundant instructions via value numbering; performs simple dead load elimination
- **Decompiler Reverse**: De-duplicate expressions; recognize when multiple expressions compute the same value; restore expression reuse
- **Priority**: HIGH - Essential for expression simplification and CSE reversal

#### NewGVN (New Global Value Numbering)
- **Compiler**: Improved GVN using congruence classes; better redundancy detection
- **Decompiler Reverse**: Same as GVN but with better congruence tracking; recognize complex equivalence patterns
- **Priority**: HIGH - Modern replacement for GVN

#### GVNHoist (GVN Hoisting)
- **Compiler**: Hoists redundant computations to earlier blocks where they're guaranteed to execute
- **Decompiler Reverse**: Detect hoisted expressions; restore them to their original locations in control flow
- **Priority**: MEDIUM - Affects CFG reconstruction

#### GVNSink (GVN Sinking)
- **Compiler**: Sinks redundant computations to later blocks where they're actually needed
- **Decompiler Reverse**: Recognize sunk expressions; restore them to original execution points
- **Priority**: MEDIUM - Affects CFG and expression placement

#### EarlyCSE (Early Common Subexpression Elimination)
- **Compiler**: Simple CSE pass that runs early; eliminates redundant expressions within basic blocks
- **Decompiler Reverse**: Recover CSE'd expressions; detect when same computation appears multiple times
- **Priority**: HIGH - Early-stage optimization affects downstream passes

### Loop Optimizations

#### LICM (Loop Invariant Code Motion)
- **Compiler**: Hoists loop-invariant code to preheader; sinks code to exit blocks; promotes loop-invariant memory to registers
- **Decompiler Reverse**: Detect hoisted invariants; restore code to loop body; recover scalar promotion patterns; identify loop-invariant expressions
- **Priority**: HIGH - Critical for loop recovery and expression placement

#### LoopUnrollPass (Loop Unrolling)
- **Compiler**: Unrolls loops by replicating loop body; reduces loop overhead; enables further optimizations
- **Decompiler Reverse**: Detect unrolled loop patterns; recognize replicated iterations; restore original loop structure
- **Priority**: HIGH - Affects loop reconstruction and CFG

#### LoopRotation (Loop Rotation)
- **Compiler**: Rotates loop to move test to end; converts do-while to while; enables other optimizations
- **Decompiler Reverse**: Detect rotated loops; restore original loop structure; recognize do-while vs while patterns
- **Priority**: MEDIUM - Affects loop structure recovery

#### LoopDeletion (Loop Deletion)
- **Compiler**: Removes loops that don't contribute to function result; eliminates dead loops
- **Decompiler Reverse**: Detect deleted loops; recognize when loop was removed; restore loop structure if needed
- **Priority**: MEDIUM - Affects loop presence detection

#### LoopStrengthReduce (LSR)
- **Compiler**: Replaces expensive induction variable expressions with cheaper ones; uses scaled-index addressing
- **Decompiler Reverse**: Recover original induction variable expressions; detect strength-reduced patterns; restore loop variable relationships
- **Priority**: HIGH - Critical for loop variable recovery

#### IndVarSimplify (Induction Variable Simplification)
- **Compiler**: Canonicalizes loop exit conditions; simplifies induction variable uses; computes trip counts
- **Decompiler Reverse**: Recover original exit conditions; detect canonicalized forms; restore induction variable patterns
- **Priority**: HIGH - Essential for loop analysis

#### LoopFlatten (Loop Flattening)
- **Compiler**: Merges nested loops into single loop (e.g., 2D array access into 1D)
- **Decompiler Reverse**: Detect flattened loops; recover nested loop structure; restore multi-dimensional indexing
- **Priority**: MEDIUM - Affects nested loop recovery

#### LoopFuse (Loop Fusion)
- **Compiler**: Merges adjacent loops with compatible iteration spaces
- **Decompiler Reverse**: Detect fused loops; separate back into original loops; restore loop boundaries
- **Priority**: MEDIUM - Affects loop structure

#### LoopInterchange (Loop Interchange)
- **Compiler**: Reorders nested loops for better cache locality
- **Decompiler Reverse**: Detect interchanged loops; restore original loop order
- **Priority**: LOW - Affects performance but not semantics

#### LoopLoadElimination (Loop Load Elimination)
- **Compiler**: Eliminates redundant loads in loops by promoting to registers
- **Decompiler Reverse**: Recover loop load patterns; detect promotion; restore memory access sequences
- **Priority**: MEDIUM - Affects memory access recovery

#### LoopPredication (Loop Predication)
- **Compiler**: Converts loop bounds checks into predicates; enables vectorization
- **Decompiler Reverse**: Detect predicated loops; restore original bounds checks
- **Priority**: MEDIUM - Affects loop condition recovery

#### LoopSink (Loop Sinking)
- **Compiler**: Sinks instructions out of loops to reduce live ranges
- **Decompiler Reverse**: Detect sunk instructions; restore to loop body
- **Priority**: MEDIUM - Affects instruction placement

#### SimpleLoopUnswitch (Loop Unswitching)
- **Compiler**: Moves conditional branches outside loops; creates separate loop copies for each branch
- **Decompiler Reverse**: Detect unswitched loops; recognize duplicated loop copies; restore original conditional structure
- **Priority**: MEDIUM - Affects loop CFG recovery

#### LoopVersioningLICM (Loop Versioning for LICM)
- **Compiler**: Creates loop versions to enable LICM by removing aliasing constraints
- **Decompiler Reverse**: Detect versioned loops; recognize aliasing assumptions; restore original loop
- **Priority**: LOW - Affects optimization but not core semantics

#### LoopBoundSplit (Loop Bound Split)
- **Compiler**: Splits loops at bounds to enable optimizations
- **Decompiler Reverse**: Detect split loops; restore original bounds
- **Priority**: LOW - Affects loop structure

#### LoopTermFold (Loop Termination Folding)
- **Compiler**: Folds loop termination conditions
- **Decompiler Reverse**: Detect folded conditions; restore original form
- **Priority**: LOW - Affects loop conditions

#### LoopDataPrefetch (Loop Data Prefetch)
- **Compiler**: Inserts prefetch instructions for loop data
- **Decompiler Reverse**: Recognize prefetch patterns; remove prefetch instructions
- **Priority**: LOW - Performance optimization, not semantic

#### LoopDistribute (Loop Distribution)
- **Compiler**: Splits loops into multiple loops for better optimization
- **Decompiler Reverse**: Detect distributed loops; merge back into original loop
- **Priority**: MEDIUM - Affects loop structure

#### LoopInstSimplify (Loop Instruction Simplification)
- **Compiler**: Simplifies instructions within loops
- **Decompiler Reverse**: Recover simplified expressions; restore original forms
- **Priority**: MEDIUM - Affects expression recovery

#### LoopSimplifyCFG (Loop Simplify CFG)
- **Compiler**: Simplifies loop CFG structure
- **Decompiler Reverse**: Detect simplified CFG; restore original structure
- **Priority**: MEDIUM - Affects CFG recovery

#### InductiveRangeCheckElimination (IRCE)
- **Compiler**: Eliminates range checks by proving they're always true/false
- **Decompiler Reverse**: Recover range checks; detect when eliminated; restore bounds checking
- **Priority**: MEDIUM - Affects bounds check recovery

### Constant & Value Propagation

#### SCCP (Sparse Conditional Constant Propagation)
- **Compiler**: Assumes values constant unless proven otherwise; replaces with constants; proves branches unconditional
- **Decompiler Reverse**: Recover constant propagation; detect when values were folded; restore original expressions
- **Priority**: HIGH - Critical for expression recovery

#### CorrelatedValuePropagation (CVP)
- **Compiler**: Propagates value constraints from control flow; narrows value ranges
- **Decompiler Reverse**: Recover value constraints; detect range narrowing; restore original value ranges
- **Priority**: MEDIUM - Affects type and range inference

#### ConstantHoisting (Constant Hoisting)
- **Compiler**: Hoists expensive constants to reduce code size; coalesces constants
- **Decompiler Reverse**: Detect hoisted constants; restore to original locations; recover constant expressions
- **Priority**: MEDIUM - Affects constant recovery

#### ConstraintElimination (Constraint Elimination)
- **Compiler**: Eliminates conditions based on dominating constraints
- **Decompiler Reverse**: Recover eliminated conditions; detect constraint relationships; restore original checks
- **Priority**: MEDIUM - Affects condition recovery

### Arithmetic & Expression Simplification

#### Reassociate (Reassociation)
- **Compiler**: Reassociates expressions (e.g., 4 + (x + 5) → x + (4 + 5)); enables constant folding
- **Decompiler Reverse**: Detect reassociated expressions; restore original grouping; recover expression structure
- **Priority**: HIGH - Affects expression recovery

#### NaryReassociate (N-ary Reassociation)
- **Compiler**: Reassociates n-ary operations for better optimization
- **Decompiler Reverse**: Recover n-ary expression structure; detect reassociation patterns
- **Priority**: MEDIUM - Affects expression recovery

#### DivRemPairs (Division/Remainder Pairs)
- **Compiler**: Hoists/decomposes div/rem pairs; reuses results
- **Decompiler Reverse**: Detect div/rem patterns; recover original operations; restore paired operations
- **Priority**: MEDIUM - Affects arithmetic operation recovery

#### StraightLineStrengthReduce (SLSR)
- **Compiler**: Reduces strength of arithmetic operations in straight-line code
- **Decompiler Reverse**: Recover strength-reduced operations; restore original arithmetic
- **Priority**: MEDIUM - Affects arithmetic recovery

#### Float2Int (Float to Integer Conversion)
- **Compiler**: Converts floating-point operations to integer when safe
- **Decompiler Reverse**: Detect float-to-int conversions; restore original float operations
- **Priority**: MEDIUM - Affects type recovery

### Memory & Alias Analysis

#### MemCpyOptimizer (MemCpy Optimization)
- **Compiler**: Optimizes memcpy/memset/memmove operations; combines/eliminates redundant operations
- **Decompiler Reverse**: Recover memcpy patterns; detect optimization; restore original memory operations
- **Priority**: MEDIUM - Affects memory operation recovery

#### MergedLoadStoreMotion (Merged Load/Store Motion)
- **Compiler**: Merges loads/stores across branches
- **Decompiler Reverse**: Detect merged operations; restore original load/store locations
- **Priority**: MEDIUM - Affects memory access recovery

#### MergeICmps (Merge Integer Comparisons)
- **Compiler**: Merges multiple integer comparisons into single operation
- **Decompiler Reverse**: Detect merged comparisons; restore original comparison sequence
- **Priority**: MEDIUM - Affects comparison recovery

#### SeparateConstOffsetFromGEP (Separate Const Offset from GEP)
- **Compiler**: Separates constant offsets from GEP operations
- **Decompiler Reverse**: Recover GEP structure; detect offset separation; restore original GEP
- **Priority**: MEDIUM - Affects pointer arithmetic recovery

### Control Flow

#### SimplifyCFGPass (Simplify CFG)
- **Compiler**: Removes unreachable blocks; merges blocks; eliminates PHI nodes; combines conditionals
- **Decompiler Reverse**: Detect simplified CFG; restore original block structure; recover merged blocks
- **Priority**: HIGH - Critical for CFG recovery

#### FlattenCFGPass (Flatten CFG)
- **Compiler**: Flattens nested if statements into single block
- **Decompiler Reverse**: Detect flattened conditionals; restore nested structure
- **Priority**: MEDIUM - Affects control flow structure

#### JumpThreading (Jump Threading)
- **Compiler**: Threads jumps through conditional blocks; eliminates redundant branches
- **Decompiler Reverse**: Detect threaded jumps; restore original branch structure
- **Priority**: MEDIUM - Affects CFG recovery

#### DFAJumpThreading (DFA Jump Threading)
- **Compiler**: Threads jumps through switch statements using DFA analysis
- **Decompiler Reverse**: Detect DFA-threaded jumps; restore original switch structure
- **Priority**: MEDIUM - Affects switch recovery

#### JumpTableToSwitch (Jump Table to Switch)
- **Compiler**: Converts jump tables to switch statements
- **Decompiler Reverse**: Detect switch-to-jumptable conversion; restore jump table structure
- **Priority**: HIGH - Critical for switch recovery

#### StructurizeCFG (Structurize CFG)
- **Compiler**: Converts CFG to structured form (if/while/for)
- **Decompiler Reverse**: Detect structured CFG; restore original CFG form
- **Priority**: HIGH - Critical for control flow recovery

#### CallSiteSplitting (Call Site Splitting)
- **Compiler**: Splits call sites to pass more constrained arguments
- **Decompiler Reverse**: Detect split call sites; restore original call
- **Priority**: LOW - Affects call optimization

#### SpeculativeExecution (Speculative Execution)
- **Compiler**: Speculatively executes instructions to reduce branches
- **Decompiler Reverse**: Detect speculative execution; restore original branching
- **Priority**: MEDIUM - Affects branch recovery

### Intrinsics & Special Operations

#### LowerAtomicPass (Lower Atomic)
- **Compiler**: Lowers atomic operations to non-atomic equivalents or library calls
- **Decompiler Reverse**: Recover atomic operations; detect lowering; restore original atomics
- **Priority**: MEDIUM - Affects concurrency semantics

#### LowerConstantIntrinsics (Lower Constant Intrinsics)
- **Compiler**: Lowers constant intrinsics to simpler operations
- **Decompiler Reverse**: Recover intrinsic operations; detect lowering
- **Priority**: LOW - Affects intrinsic recovery

#### LowerExpectIntrinsic (Lower Expect Intrinsic)
- **Compiler**: Lowers expect intrinsics (branch hints)
- **Decompiler Reverse**: Recover branch hints; detect expect patterns
- **Priority**: LOW - Affects branch hints

#### LowerGuardIntrinsic (Lower Guard Intrinsic)
- **Compiler**: Lowers guard intrinsics to explicit checks
- **Decompiler Reverse**: Recover guard patterns; detect lowering
- **Priority**: MEDIUM - Affects guard recovery

#### LowerMatrixIntrinsics (Lower Matrix Intrinsics)
- **Compiler**: Lowers matrix operations to scalar operations
- **Decompiler Reverse**: Recover matrix operations; detect lowering
- **Priority**: LOW - Affects matrix operation recovery

#### LowerWidenableCondition (Lower Widenable Condition)
- **Compiler**: Lowers widenable condition intrinsics
- **Decompiler Reverse**: Recover widenable conditions
- **Priority**: LOW - Affects condition recovery

#### ScalarizeMaskedMemIntrin (Scalarize Masked Memory Intrinsics)
- **Compiler**: Converts masked memory intrinsics to scalar operations
- **Decompiler Reverse**: Recover masked operations; detect scalarization
- **Priority**: MEDIUM - Affects SIMD recovery

#### Scalarizer (Scalarizer)
- **Compiler**: Converts vector operations to scalar operations
- **Decompiler Reverse**: Recover vector operations; detect scalarization
- **Priority**: MEDIUM - Affects SIMD recovery

#### GuardWidening (Guard Widening)
- **Compiler**: Widens guard conditions to cover more cases
- **Decompiler Reverse**: Detect widened guards; restore original conditions
- **Priority**: LOW - Affects guard recovery

#### MakeGuardsExplicit (Make Guards Explicit)
- **Compiler**: Converts implicit guards to explicit checks
- **Decompiler Reverse**: Recover implicit guards; detect conversion
- **Priority**: LOW - Affects guard recovery

#### DropUnnecessaryAssumes (Drop Unnecessary Assumes)
- **Compiler**: Removes redundant assume intrinsics
- **Decompiler Reverse**: Recover assume patterns; detect when removed
- **Priority**: LOW - Affects assume recovery

### Miscellaneous

#### TailRecursionElimination (Tail Recursion Elimination)
- **Compiler**: Converts tail-recursive calls to loops
- **Decompiler Reverse**: Detect tail recursion elimination; restore recursive calls
- **Priority**: HIGH - Critical for recursion recovery

#### Sink (Instruction Sinking)
- **Compiler**: Sinks instructions to later blocks to reduce live ranges
- **Decompiler Reverse**: Detect sunk instructions; restore to original locations
- **Priority**: MEDIUM - Affects instruction placement

#### InferAddressSpaces (Infer Address Spaces)
- **Compiler**: Infers address space information for pointers
- **Decompiler Reverse**: Recover address space information; detect inference
- **Priority**: LOW - Affects address space recovery

#### InferAlignment (Infer Alignment)
- **Compiler**: Infers alignment information for pointers
- **Decompiler Reverse**: Recover alignment information; detect inference
- **Priority**: MEDIUM - Affects type and alignment recovery

#### AlignmentFromAssumptions (Alignment from Assumptions)
- **Compiler**: Sets alignment from assume intrinsics
- **Decompiler Reverse**: Recover alignment assumptions; detect patterns
- **Priority**: LOW - Affects alignment recovery

#### PartiallyInlineLibCalls (Partially Inline Library Calls)
- **Compiler**: Partially inlines library calls for optimization
- **Decompiler Reverse**: Detect partially inlined calls; restore original calls
- **Priority**: MEDIUM - Affects library call recovery

#### Reg2Mem (Register to Memory)
- **Compiler**: Converts registers to memory (demotes SSA)
- **Decompiler Reverse**: Recover SSA form; detect register-to-memory conversion
- **Priority**: LOW - Affects SSA recovery

#### RewriteStatepointsForGC (Rewrite Statepoints for GC)
- **Compiler**: Rewrites statepoints for garbage collection
- **Decompiler Reverse**: Recover statepoint patterns; detect GC rewriting
- **Priority**: LOW - Affects GC semantics

#### PlaceSafepoints (Place Safepoints)
- **Compiler**: Inserts safepoints for garbage collection
- **Decompiler Reverse**: Recognize safepoint patterns; remove if needed
- **Priority**: LOW - Affects GC semantics

#### AnnotationRemarks (Annotation Remarks)
- **Compiler**: Generates remarks for annotated instructions
- **Decompiler Reverse**: Recover annotation information
- **Priority**: LOW - Affects annotation recovery

#### WarnMissedTransforms (Warn Missed Transforms)
- **Compiler**: Warns about missed optimization opportunities
- **Decompiler Reverse**: N/A - diagnostic pass
- **Priority**: N/A

---

## INSTCOMBINE PASSES (15 files)

InstCombine is a peephole optimizer that combines instructions. Each file handles a category:

#### InstCombineAddSub (Add/Subtract Combinations)
- **Compiler**: Combines add/subtract operations; simplifies expressions like (a+b)+(c+d)
- **Decompiler Reverse**: Recover original add/subtract patterns; detect combinations
- **Priority**: HIGH - Affects arithmetic recovery

#### InstCombineAndOrXor (Bitwise AND/OR/XOR Combinations)
- **Compiler**: Simplifies bitwise operations; applies De Morgan's laws; combines masks
- **Decompiler Reverse**: Recover bitwise patterns; detect simplifications; restore original operations
- **Priority**: HIGH - Affects bitwise operation recovery

#### InstCombineCasts (Cast Combinations)
- **Compiler**: Simplifies cast chains; removes redundant casts; combines casts
- **Decompiler Reverse**: Recover cast patterns; detect redundant casts; restore original type conversions
- **Priority**: HIGH - Critical for type recovery

#### InstCombineCompares (Comparison Combinations)
- **Compiler**: Simplifies comparisons; combines comparison chains; optimizes conditional logic
- **Decompiler Reverse**: Recover comparison patterns; detect combinations; restore original comparisons
- **Priority**: HIGH - Critical for condition recovery

#### InstCombineLoadStoreAlloca (Load/Store/Alloca Combinations)
- **Compiler**: Simplifies memory operations; combines loads/stores; optimizes allocations
- **Decompiler Reverse**: Recover memory operation patterns; detect combinations; restore original operations
- **Priority**: HIGH - Critical for memory recovery

#### InstCombineMulDivRem (Multiply/Divide/Remainder Combinations)
- **Compiler**: Simplifies arithmetic operations; combines mul/div/rem; optimizes strength
- **Decompiler Reverse**: Recover arithmetic patterns; detect combinations; restore original operations
- **Priority**: HIGH - Affects arithmetic recovery

#### InstCombineShifts (Shift Combinations)
- **Compiler**: Simplifies shift operations; combines shift chains; optimizes bit operations
- **Decompiler Reverse**: Recover shift patterns; detect combinations; restore original shifts
- **Priority**: HIGH - Affects bitwise operation recovery

#### InstCombineSelect (Select/Ternary Combinations)
- **Compiler**: Simplifies select operations; combines selects; optimizes conditional expressions
- **Decompiler Reverse**: Recover select patterns; detect combinations; restore ternary operations
- **Priority**: HIGH - Critical for ternary/conditional recovery

#### InstCombinePHI (PHI Node Combinations)
- **Compiler**: Simplifies PHI nodes; combines PHI operations; optimizes control flow merges
- **Decompiler Reverse**: Recover PHI patterns; detect combinations; restore original merges
- **Priority**: HIGH - Critical for CFG recovery

#### InstCombineVectorOps (Vector Operation Combinations)
- **Compiler**: Simplifies vector operations; combines vector instructions
- **Decompiler Reverse**: Recover vector patterns; detect combinations; restore original operations
- **Priority**: MEDIUM - Affects SIMD recovery

#### InstCombineCalls (Call Combinations)
- **Compiler**: Simplifies function calls; inlines known functions; optimizes call patterns
- **Decompiler Reverse**: Recover call patterns; detect inlining; restore original calls
- **Priority**: HIGH - Critical for call recovery

#### InstCombineAtomicRMW (Atomic RMW Combinations)
- **Compiler**: Simplifies atomic read-modify-write operations
- **Decompiler Reverse**: Recover atomic patterns; detect simplifications
- **Priority**: MEDIUM - Affects atomic operation recovery

#### InstCombineSimplifyDemanded (Simplify Demanded Bits)
- **Compiler**: Simplifies operations based on demanded bits; removes unnecessary operations
- **Decompiler Reverse**: Recover demanded bit patterns; detect simplifications
- **Priority**: MEDIUM - Affects bit operation recovery

#### InstCombineNegator (Negation Combinations)
- **Compiler**: Simplifies negation operations; combines negations
- **Decompiler Reverse**: Recover negation patterns; detect combinations
- **Priority**: MEDIUM - Affects arithmetic recovery

#### InstructionCombining (Main InstCombine Pass)
- **Compiler**: Orchestrates all instruction combining passes
- **Decompiler Reverse**: Recognize all combined patterns; restore original instructions
- **Priority**: HIGH - Orchestrator for all InstCombine operations

---

## IPO PASSES (Inter-Procedural Optimization) (48 files)

#### AlwaysInliner (Always Inline)
- **Compiler**: Inlines functions marked with always_inline attribute
- **Decompiler Reverse**: Detect inlined functions; restore original function calls
- **Priority**: HIGH - Critical for function recovery

#### Inliner (Function Inlining)
- **Compiler**: Inlines function calls based on heuristics; replaces call with function body
- **Decompiler Reverse**: Detect inlined functions; restore original calls; identify inlining boundaries
- **Priority**: HIGH - Critical for function recovery

#### ModuleInliner (Module-level Inlining)
- **Compiler**: Inlines functions at module level
- **Decompiler Reverse**: Detect module-level inlining; restore original calls
- **Priority**: HIGH - Critical for function recovery

#### PartialInlining (Partial Inlining)
- **Compiler**: Partially inlines functions; extracts cold paths
- **Decompiler Reverse**: Detect partial inlining; restore original function structure
- **Priority**: MEDIUM - Affects function structure recovery

#### ArgumentPromotion (Argument Promotion)
- **Compiler**: Promotes aggregate arguments to individual elements
- **Decompiler Reverse**: Detect promoted arguments; restore original aggregate parameters
- **Priority**: MEDIUM - Affects function signature recovery

#### DeadArgumentElimination (Dead Argument Elimination)
- **Compiler**: Removes unused function arguments
- **Decompiler Reverse**: Detect removed arguments; restore original signatures
- **Priority**: MEDIUM - Affects function signature recovery

#### FunctionAttrs (Function Attributes)
- **Compiler**: Infers function attributes (pure, readonly, etc.)
- **Decompiler Reverse**: Recover function attributes; detect inference
- **Priority**: MEDIUM - Affects function property recovery

#### FunctionSpecialization (Function Specialization)
- **Compiler**: Creates specialized versions of functions for specific argument values
- **Decompiler Reverse**: Detect specialized functions; restore original generic function
- **Priority**: MEDIUM - Affects function recovery

#### GlobalOpt (Global Optimization)
- **Compiler**: Optimizes global variables; converts to local; removes unused globals
- **Decompiler Reverse**: Recover global variable patterns; detect optimization
- **Priority**: MEDIUM - Affects global variable recovery

#### GlobalDCE (Global Dead Code Elimination)
- **Compiler**: Removes unused functions and global variables
- **Decompiler Reverse**: Detect removed functions/globals; restore if needed
- **Priority**: MEDIUM - Affects function/global recovery

#### ConstantMerge (Constant Merging)
- **Compiler**: Merges identical constants into single global
- **Decompiler Reverse**: Detect merged constants; restore original constants
- **Priority**: LOW - Affects constant recovery

#### MergeFunctions (Merge Functions)
- **Compiler**: Merges identical functions into single implementation
- **Decompiler Reverse**: Detect merged functions; restore original functions
- **Priority**: MEDIUM - Affects function recovery

#### CalledValuePropagation (Called Value Propagation)
- **Compiler**: Propagates information about called functions
- **Decompiler Reverse**: Recover called function information; detect propagation
- **Priority**: MEDIUM - Affects call resolution

#### WholeProgramDevirt (Whole Program Devirtualization)
- **Compiler**: Devirtualizes virtual function calls using whole-program analysis
- **Decompiler Reverse**: Detect devirtualized calls; restore virtual dispatch
- **Priority**: HIGH - Critical for virtual call recovery

#### LowerTypeTests (Lower Type Tests)
- **Compiler**: Lowers type tests for virtual calls
- **Decompiler Reverse**: Recover type test patterns; detect lowering
- **Priority**: MEDIUM - Affects type test recovery

#### CrossDSOCFI (Cross-DSO CFI)
- **Compiler**: Implements cross-DSO control flow integrity
- **Decompiler Reverse**: Recover CFI patterns; detect cross-DSO checks
- **Priority**: LOW - Affects CFI semantics

#### ForceFunctionAttrs (Force Function Attributes)
- **Compiler**: Forces function attributes based on configuration
- **Decompiler Reverse**: Recover forced attributes; detect patterns
- **Priority**: LOW - Affects attribute recovery

#### InferFunctionAttrs (Infer Function Attributes)
- **Compiler**: Infers function attributes from library information
- **Decompiler Reverse**: Recover inferred attributes; detect patterns
- **Priority**: MEDIUM - Affects function property recovery

#### Internalize (Internalize)
- **Compiler**: Marks external functions as internal
- **Decompiler Reverse**: Detect internalized functions; restore visibility
- **Priority**: LOW - Affects visibility recovery

#### StripDeadPrototypes (Strip Dead Prototypes)
- **Compiler**: Removes unused function prototypes
- **Decompiler Reverse**: Detect removed prototypes; restore if needed
- **Priority**: LOW - Affects prototype recovery

#### StripSymbols (Strip Symbols)
- **Compiler**: Removes debug symbols and metadata
- **Decompiler Reverse**: Recover symbol information from other sources
- **Priority**: LOW - Affects symbol recovery

#### ElimAvailExtern (Eliminate Available Externally)
- **Compiler**: Removes functions available externally
- **Decompiler Reverse**: Detect removed external functions
- **Priority**: LOW - Affects external function recovery

#### ExpandVariadics (Expand Variadics)
- **Compiler**: Expands variadic function calls
- **Decompiler Reverse**: Detect expanded variadics; restore original calls
- **Priority**: MEDIUM - Affects variadic call recovery

#### FunctionImport (Function Import)
- **Compiler**: Imports functions from other modules (ThinLTO)
- **Decompiler Reverse**: Detect imported functions; restore original module boundaries
- **Priority**: LOW - Affects module structure

#### HotColdSplitting (Hot/Cold Splitting)
- **Compiler**: Splits hot and cold code paths
- **Decompiler Reverse**: Detect split paths; restore original function
- **Priority**: MEDIUM - Affects function structure

#### IROutliner (IR Outlining)
- **Compiler**: Outlines similar code sequences into separate functions
- **Decompiler Reverse**: Detect outlined functions; restore original code
- **Priority**: MEDIUM - Affects function recovery

#### LoopExtractor (Loop Extractor)
- **Compiler**: Extracts loops into separate functions
- **Decompiler Reverse**: Detect extracted loops; restore original function
- **Priority**: MEDIUM - Affects loop recovery

#### OpenMPOpt (OpenMP Optimization)
- **Compiler**: Optimizes OpenMP constructs
- **Decompiler Reverse**: Recover OpenMP patterns; detect optimization
- **Priority**: LOW - Affects OpenMP recovery

#### SampleProfile (Sample Profile)
- **Compiler**: Uses sample profiling information for optimization
- **Decompiler Reverse**: Recover profile information; detect patterns
- **Priority**: LOW - Affects profiling recovery

#### SampleProfileProbe (Sample Profile Probe)
- **Compiler**: Inserts probes for sample profiling
- **Decompiler Reverse**: Recognize probe patterns; remove if needed
- **Priority**: LOW - Affects profiling recovery

#### SampleProfileMatcher (Sample Profile Matcher)
- **Compiler**: Matches sample profiles to IR
- **Decompiler Reverse**: Recover profile matching information
- **Priority**: LOW - Affects profiling recovery

#### SampleContextTracker (Sample Context Tracker)
- **Compiler**: Tracks context for sample profiling
- **Decompiler Reverse**: Recover context information
- **Priority**: LOW - Affects profiling recovery

#### MemProfContextDisambiguation (MemProf Context Disambiguation)
- **Compiler**: Disambiguates memory profiling contexts
- **Decompiler Reverse**: Recover context information
- **Priority**: LOW - Affects profiling recovery

#### Annotation2Metadata (Annotation to Metadata)
- **Compiler**: Converts annotations to metadata
- **Decompiler Reverse**: Recover annotation patterns; detect conversion
- **Priority**: LOW - Affects annotation recovery

#### BarrierNoopPass (Barrier Noop Pass)
- **Compiler**: Inserts barrier operations
- **Decompiler Reverse**: Recognize barrier patterns
- **Priority**: LOW - Affects barrier recovery

#### BlockExtractor (Block Extractor)
- **Compiler**: Extracts basic blocks into separate functions
- **Decompiler Reverse**: Detect extracted blocks; restore original function
- **Priority**: LOW - Affects block extraction

#### ExtractGV (Extract Global Variables)
- **Compiler**: Extracts global variables
- **Decompiler Reverse**: Detect extracted globals; restore original
- **Priority**: LOW - Affects global recovery

#### EmbedBitcodePass (Embed Bitcode)
- **Compiler**: Embeds LLVM bitcode in binary
- **Decompiler Reverse**: Extract embedded bitcode if needed
- **Priority**: LOW - Affects bitcode recovery

#### FatLTOCleanup (Fat LTO Cleanup)
- **Compiler**: Cleans up fat LTO objects
- **Decompiler Reverse**: Recover LTO information
- **Priority**: LOW - Affects LTO recovery

#### ThinLTOBitcodeWriter (ThinLTO Bitcode Writer)
- **Compiler**: Writes ThinLTO bitcode
- **Decompiler Reverse**: Recover ThinLTO information
- **Priority**: LOW - Affects ThinLTO recovery

#### GlobalSplit (Global Split)
- **Compiler**: Splits global variables
- **Decompiler Reverse**: Detect split globals; restore original
- **Priority**: LOW - Affects global recovery

---

## AGGRESSIVEINSTCOMBINE PASSES (2 files)

#### AggressiveInstCombine (Aggressive Instruction Combining)
- **Compiler**: More aggressive instruction combining than standard InstCombine
- **Decompiler Reverse**: Recover aggressively combined patterns; restore original instructions
- **Priority**: HIGH - Affects expression recovery

#### TruncInstCombine (Truncation Instruction Combining)
- **Compiler**: Combines truncation operations with other instructions
- **Decompiler Reverse**: Recover truncation patterns; detect combinations
- **Priority**: MEDIUM - Affects type conversion recovery

---

## UTILS PASSES (Utility/Infrastructure Passes)

These are typically not optimization passes but infrastructure/utility passes:

#### AddDiscriminators
- **Compiler**: Adds discriminators to debug info for line disambiguation
- **Decompiler Reverse**: Recover discriminator information
- **Priority**: LOW - Affects debug info

#### BreakCriticalEdges
- **Compiler**: Breaks critical edges in CFG
- **Decompiler Reverse**: Detect broken edges; restore original CFG
- **Priority**: MEDIUM - Affects CFG structure

#### BypassSlowDivision
- **Compiler**: Bypasses slow division with faster alternatives
- **Decompiler Reverse**: Detect bypassed division; restore original
- **Priority**: MEDIUM - Affects arithmetic recovery

#### CanonicalizeAliases
- **Compiler**: Canonicalizes alias definitions
- **Decompiler Reverse**: Recover alias patterns
- **Priority**: LOW - Affects alias recovery

#### CanonicalizeFreezeInLoops
- **Compiler**: Canonicalizes freeze operations in loops
- **Decompiler Reverse**: Recover freeze patterns
- **Priority**: LOW - Affects freeze recovery

#### CloneFunction
- **Compiler**: Clones functions (utility)
- **Decompiler Reverse**: Detect cloned functions; restore original
- **Priority**: MEDIUM - Affects function recovery

#### CloneModule
- **Compiler**: Clones modules (utility)
- **Decompiler Reverse**: Detect cloned modules
- **Priority**: LOW - Affects module recovery

#### CodeExtractor
- **Compiler**: Extracts code regions into functions
- **Decompiler Reverse**: Detect extracted regions; restore original
- **Priority**: MEDIUM - Affects function recovery

#### CodeLayout
- **Compiler**: Optimizes code layout
- **Decompiler Reverse**: Recover layout information
- **Priority**: LOW - Affects layout recovery

#### CodeMoverUtils
- **Compiler**: Utilities for moving code
- **Decompiler Reverse**: Detect moved code; restore original
- **Priority**: LOW - Affects code placement

#### ControlFlowUtils
- **Compiler**: Control flow utilities
- **Decompiler Reverse**: Recover control flow patterns
- **Priority**: MEDIUM - Affects CFG recovery

#### Debugify
- **Compiler**: Adds debug information for testing
- **Decompiler Reverse**: Recover debug information
- **Priority**: LOW - Affects debug info

#### DemoteRegToStack
- **Compiler**: Demotes registers to stack (converts SSA to memory)
- **Decompiler Reverse**: Recover SSA form; detect demotion
- **Priority**: MEDIUM - Affects SSA recovery

#### Evaluator
- **Compiler**: Evaluates constant expressions
- **Decompiler Reverse**: Recover evaluated expressions
- **Priority**: MEDIUM - Affects constant recovery

#### FixIrreducible
- **Compiler**: Fixes irreducible control flow
- **Decompiler Reverse**: Detect fixed irreducible CFG; restore original
- **Priority**: MEDIUM - Affects CFG recovery

#### FlattenCFG
- **Compiler**: Flattens CFG structure
- **Decompiler Reverse**: Detect flattened CFG; restore original
- **Priority**: MEDIUM - Affects CFG recovery

#### LoopRotationUtils
- **Compiler**: Utilities for loop rotation
- **Decompiler Reverse**: Recover loop rotation patterns
- **Priority**: MEDIUM - Affects loop recovery

#### LoopUtils
- **Compiler**: Loop utilities
- **Decompiler Reverse**: Recover loop patterns
- **Priority**: MEDIUM - Affects loop recovery

#### LoopVersioning
- **Compiler**: Loop versioning utilities
- **Decompiler Reverse**: Detect versioned loops; restore original
- **Priority**: MEDIUM - Affects loop recovery

#### MemoryOpRemark
- **Compiler**: Generates remarks for memory operations
- **Decompiler Reverse**: Recover memory operation information
- **Priority**: LOW - Affects memory operation recovery

#### MetaRenamer
- **Compiler**: Renames values for testing
- **Decompiler Reverse**: Recover original names
- **Priority**: LOW - Affects naming recovery

#### ModuleUtils
- **Compiler**: Module utilities
- **Decompiler Reverse**: Recover module patterns
- **Priority**: LOW - Affects module recovery

#### PromoteMemoryToRegister
- **Compiler**: Promotes memory to registers (SSA construction)
- **Decompiler Reverse**: Recover memory patterns; detect promotion
- **Priority**: HIGH - Critical for SSA recovery

#### SSAUpdater
- **Compiler**: Updates SSA form
- **Decompiler Reverse**: Recover SSA patterns
- **Priority**: MEDIUM - Affects SSA recovery

#### UnifyFunctionExitNodes
- **Compiler**: Unifies function exit nodes
- **Decompiler Reverse**: Detect unified exits; restore original
- **Priority**: MEDIUM - Affects CFG recovery

#### ValueMapper
- **Compiler**: Maps values during transformations
- **Decompiler Reverse**: Recover value mapping information
- **Priority**: LOW - Affects value recovery

---

## SUMMARY BY PRIORITY

### HIGH PRIORITY (Critical for Decompiler)
1. LICM - Loop invariant code motion recovery
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
14. InstCombine (all variants) - Expression combination reversal
15. Inlining (AlwaysInliner, Inliner, ModuleInliner) - Function recovery
16. WholeProgramDevirt - Virtual call recovery
17. PromoteMemoryToRegister - SSA recovery
18. InstCombineCasts - Type conversion recovery
19. InstCombineCompares - Comparison recovery
20. InstCombineLoadStoreAlloca - Memory operation recovery

### MEDIUM PRIORITY (Important for Quality)
1. LoopRotation - Loop structure
2. LoopFlatten - Nested loop recovery
3. LoopFuse - Loop merging
4. LoopInterchange - Loop ordering
5. LoopLoadElimination - Memory access patterns
6. LoopPredication - Loop conditions
7. LoopSink - Instruction placement
8. SimpleLoopUnswitch - Loop branching
9. CorrelatedValuePropagation - Value range inference
10. ConstantHoisting - Constant placement
11. ConstraintElimination - Condition recovery
12. NaryReassociate - N-ary expression recovery
13. DivRemPairs - Arithmetic pattern recovery
14. StraightLineStrengthReduce - Arithmetic optimization
15. Float2Int - Type conversion
16. MemCpyOptimizer - Memory operation patterns
17. MergedLoadStoreMotion - Memory access patterns
18. MergeICmps - Comparison patterns
19. SeparateConstOffsetFromGEP - Pointer arithmetic
20. FlattenCFGPass - CFG structure
21. JumpThreading - Branch threading
22. DFAJumpThreading - Switch threading
23. SpeculativeExecution - Branch speculation
24. LowerAtomicPass - Atomic operations
25. ScalarizeMaskedMemIntrin - SIMD operations
26. Scalarizer - Vector operations
27. ArgumentPromotion - Function signature recovery
28. DeadArgumentElimination - Function signature recovery
29. FunctionAttrs - Function properties
30. FunctionSpecialization - Function variants
31. GlobalOpt - Global variable optimization
32. GlobalDCE - Global removal
33. MergeFunctions - Function merging
34. CalledValuePropagation - Call resolution
35. PartialInlining - Function structure
36. ExpandVariadics - Variadic call recovery
37. HotColdSplitting - Function structure
38. IROutliner - Function extraction
39. LoopExtractor - Loop extraction
40. BreakCriticalEdges - CFG structure
41. BypassSlowDivision - Arithmetic patterns
42. CloneFunction - Function recovery
43. CodeExtractor - Code extraction
44. ControlFlowUtils - CFG patterns
45. DemoteRegToStack - SSA recovery
46. Evaluator - Constant evaluation
47. FixIrreducible - CFG recovery
48. FlattenCFG - CFG structure
49. UnifyFunctionExitNodes - CFG structure

### LOW PRIORITY (Nice to Have)
1. LoopVersioningLICM - Loop optimization
2. LoopBoundSplit - Loop structure
3. LoopTermFold - Loop conditions
4. LoopDataPrefetch - Performance optimization
5. LoopDistribute - Loop structure
6. LoopInstSimplify - Expression simplification
7. LoopSimplifyCFG - CFG structure
8. InductiveRangeCheckElimination - Bounds checking
9. Float2Int - Type conversion
10. GuardWidening - Guard patterns
11. MakeGuardsExplicit - Guard patterns
12. DropUnnecessaryAssumes - Assume patterns
13. Sink - Instruction placement
14. InferAddressSpaces - Address space inference
15. InferAlignment - Alignment inference
16. AlignmentFromAssumptions - Alignment patterns
17. PartiallyInlineLibCalls - Library call optimization
18. Reg2Mem - Register demotion
19. RewriteStatepointsForGC - GC semantics
20. PlaceSafepoints - GC semantics
21. AnnotationRemarks - Annotation recovery
22. WarnMissedTransforms - Diagnostic
23. ConstantMerge - Constant merging
24. Internalize - Visibility
25. StripDeadPrototypes - Prototype removal
26. StripSymbols - Symbol removal
27. ElimAvailExtern - External function removal
28. FunctionImport - Module structure
29. OpenMPOpt - OpenMP optimization
30. SampleProfile - Profiling
31. SampleProfileProbe - Profiling
32. SampleProfileMatcher - Profiling
33. SampleContextTracker - Profiling
34. MemProfContextDisambiguation - Profiling
35. Annotation2Metadata - Annotation conversion
36. BarrierNoopPass - Barrier operations
37. BlockExtractor - Block extraction
38. ExtractGV - Global extraction
39. EmbedBitcodePass - Bitcode embedding
40. FatLTOCleanup - LTO cleanup
41. ThinLTOBitcodeWriter - ThinLTO
42. GlobalSplit - Global splitting
43. CrossDSOCFI - CFI
44. LowerTypeTests - Type tests
45. LowerConstantIntrinsics - Intrinsic lowering
46. LowerExpectIntrinsic - Branch hints
47. LowerGuardIntrinsic - Guard lowering
48. LowerMatrixIntrinsics - Matrix operations
49. LowerWidenableCondition - Condition lowering
50. InstCombineNegator - Negation patterns
51. InstCombineSimplifyDemanded - Bit patterns
52. InstCombineAtomicRMW - Atomic operations
53. InstCombineVectorOps - Vector operations
54. TruncInstCombine - Truncation patterns
55. AggressiveInstCombine - Aggressive combining
56. AddDiscriminators - Debug info
57. CanonicalizeAliases - Alias patterns
58. CanonicalizeFreezeInLoops - Freeze patterns
59. CloneModule - Module cloning
60. CodeLayout - Code layout
61. CodeMoverUtils - Code movement
62. Debugify - Debug info
63. MemoryOpRemark - Memory operation remarks
64. MetaRenamer - Value renaming
65. ModuleUtils - Module utilities
66. SSAUpdater - SSA updating
67. ValueMapper - Value mapping

