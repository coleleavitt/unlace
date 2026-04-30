# LLVM Intelligence for Phase 8 C++ Support

## Source: 5 LLVM exploration agents studying ~/CLionProjects/forks/llvm-project/

### 1. .gcc_except_table Format (from libcxxabi/src/cxa_personality.cpp)

**LSDA Header** (variable size):
- lpStartEncoding (1 byte) + lpStart (encoded)
- ttypeEncoding (1 byte) + classInfoOffset (ULEB128)
- callSiteEncoding (1 byte) + callSiteTableLength (ULEB128)

**Call Site Table entries**:
- start (encoded), length (encoded), landingPad (encoded), actionEntry (ULEB128)

**Action Table entries**:
- ttypeIndex (SLEB128): >0=catch, <0=spec, ==0=cleanup
- actionOffset (SLEB128): offset to next action, 0=end

**Type Table**: REVERSE-INDEXED from classInfo pointer
- classInfo[0] → typeinfo for index 1
- classInfo[-8] → typeinfo for index 2

**Key file**: libcxxabi/src/cxa_personality.cpp lines 650-921

### 2. RTTI Memory Layouts (from libcxxabi/src/private_typeinfo.h)

**__class_type_info** (no inheritance, 16 bytes):
- [0] vtable ptr (8 bytes)
- [8] name ptr → _ZTS* string (8 bytes)

**__si_class_type_info** (single inheritance, 24 bytes):
- [0] vtable ptr (8 bytes)
- [8] name ptr (8 bytes)
- [16] base_type ptr → base _ZTI* (8 bytes)

**__vmi_class_type_info** (multiple/virtual, 24+16*N bytes):
- [0] vtable ptr (8 bytes)
- [8] name ptr (8 bytes)
- [16] flags (4 bytes): bit0=non-diamond, bit1=diamond
- [20] base_count (4 bytes)
- [24+] base_info[N]: each 16 bytes (base_type ptr + offset_flags)
  - offset_flags: (offset << 8) | flags, bit0=virtual, bit1=public

### 3. VTable Layout

**Standard (non-relative)**:
- [-16] offset-to-top (ptrdiff_t, 8 bytes)
- [-8] typeinfo ptr → _ZTI* (8 bytes)
- [0] virtual_func_0 (8 bytes)
- [8] virtual_func_1 (8 bytes)
- ...

### 4. DWARF Features We Should Add (from llvm/lib/DebugInfo/)

Key LLVM DWARF features unlace doesn't use:
- DWARFExpression for variable locations (register + offset)
- DWARFTypePrinter for formatted type output
- .debug_line for source line mapping
- DWARF v5 features (split DWARF, type units)

### 5. LLVM Analysis Passes Relevant to Decompilation

From llvm/lib/Analysis/:
- AliasAnalysis — pointer aliasing (we have none)
- ValueTracking — value range analysis (we have none)
- ScalarEvolution — loop induction variables (we have none)
- MemoryDependenceAnalysis — memory dependency (we have basic DSE)
- InstructionSimplify — 100+ simplification rules (we have ~80)

From llvm/lib/Transforms/Scalar/:
- GVN.cpp — Global Value Numbering (we have basic GVN)
- SCCP.cpp — Sparse Conditional Constant Propagation (we have this)
- LICM.cpp — Loop Invariant Code Motion (we don't have this)
- IndVarSimplify.cpp — Induction Variable Simplification (we don't have this)

### 6. Demangling AST (from llvm/lib/Demangle/)

LLVM's ItaniumDemangle builds a full AST with node types:
- NameType, NestedName, QualifiedName
- FunctionType, PointerType, ReferenceType, ArrayType
- TemplateArgs, TemplateParam
- CtorDtorName, OperatorName
- SpecialName (vtable, typeinfo, guard variable)

This AST enables structured type recovery from mangled names — much richer than string parsing.
