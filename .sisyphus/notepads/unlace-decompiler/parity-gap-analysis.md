# unlace Full Parity Gap Analysis — Findings

## Status: 6 explore agents dispatched, 2 completed, 4 pending

---

## Agent 1: Hex-Rays Decompiler Core (COMPLETE)

### CRITICAL Missing Passes (unlace has 6, hex-rays has 20+):
1. **Value Range Analysis** — track min/max bounds for optimization
2. **Alias Analysis** — determine pointer overlap for correctness
3. **Idiom Recognition** — detect rotate/abs/min/max/memcpy patterns
4. **Dead Flag Elimination** — remove unused CPU flags
5. **Condition Simplification** — boolean expression reduction
6. **Global Optimization (GLBOPT1/2/3)** — cross-block transformations
7. **SSA-to-C Variable Merging** — combine SSA versions into single C variable
8. **Multi-tier Decompilation** — 3 tiers with fallback to raw disassembly

### CRITICAL Missing Type Recovery:
1. **Struct field access detection** — offset patterns → struct members
2. **VTable recognition** — C++ virtual function table identification
3. **Function pointer table recovery**
4. **Array stride detection** — multiplication patterns → array indexing
5. **Union discrimination** — which union member is active
6. **Type propagation through pointer chains**
7. **Bitfield detection**

### CRITICAL Missing Expression Folding:
- Current C printer: one statement per IR instruction
- Hex-Rays: multi-op expressions (a + b * c from separate ADD/MUL)
- Need: Expression tree building before C emission
- Need: Ternary operator generation (if/else → ?:)
- Need: Common subexpression elimination

### Missing Control Flow:
1. **Exception handling** (try/catch/throw)
2. **setjmp/longjmp** detection
3. **Tail call** detection
4. **noreturn** function marking
5. **Computed goto** recognition

---

## Agent 2: IDA SDK API Surface (COMPLETE)

### P0 CRITICAL Gaps (3):
1. **Cross-reference system** — no xref database at all (8 IDA functions)
2. **Netnode metadata DB** — no persistent metadata store (18 IDA functions)
3. **Type Library (TIL)** — no named type registry (40+ IDA functions)

### P1 IMPORTANT Gaps (5):
4. **Segment model** — no segment registers/selectors (11 functions)
5. **Name management** — no auto-naming system (10 functions)
6. **Auto-analysis** — no incremental re-analysis (6 functions)
7. **Function frame model** — limited stack analysis (12 functions)
8. **Reference/offset tracking** — no struct offset paths (16 functions)

### P2 Enhancement Gaps (2):
9. **Plugin communication** — no plugin system (7 functions)
10. **Calling convention** — basic exists but needs enhancement (16 functions)

---

## Agent 3: Language Plugin Capabilities (COMPLETE)

### Rust Plugin (unlace has: demangling only)
MISSING:
1. **Panic path detection** — identify rust_panic/rust_begin_unwind call chains
2. **Enum layout recovery** — discriminant patterns, niche optimization (Option<NonZeroU32>)
3. **Trait object detection** — (vtable_ptr, data_ptr) tuple patterns
4. **Async state machine recognition** — Future impl, state machines
5. **Generic specialization tracking** — monomorphized instances

### Swift Plugin (unlace has: demangling only)
MISSING:
1. **Swift metadata parsing** — __swift5_types, __swift5_proto sections
2. **Protocol witness tables** — conformance table reconstruction
3. **Value witness tables** — copy/destroy/assign semantics
4. **Type metadata reconstruction** — full Swift type hierarchies

### Go Plugin (unlace has: nothing)
MISSING:
1. **gopclntab parsing** — function recovery from Go's line table (CRITICAL for Go binaries)
2. **Interface table (itab) recovery** — method dispatch resolution
3. **Goroutine detection** — stack frame identification
4. **Defer/panic handling** — defer chain tracking
5. **Type descriptor parsing** — Go runtime type system

### ObjC Plugin (unlace has: nothing)
MISSING:
1. **objc_msgSend resolution** — selector dispatch at X0/R0+X1/R1
2. **Class hierarchy from __objc_classlist** — inheritance trees
3. **Category merging** — merge categories into base classes
4. **Block literal detection** — ObjC closures
5. **ARC pattern recognition** — retain/release/autorelease tracking

### C++ RTTI (unlace has: nothing)
MISSING:
1. **type_info vtable scanning** — locate and parse RTTI structures
2. **Class hierarchy reconstruction** — inheritance chains from RTTI
3. **Virtual method table recovery** — vtable → method addresses
4. **Exception specification parsing** — throw() specs

### Exception Handling (eh34 + eh_parse) (unlace has: nothing)
MISSING:
1. **Unwind table parsing** — .eh_frame + .eh_frame_hdr
2. **Catch clause extraction** — try/catch block identification
3. **Cleanup handler detection** — destructor/cleanup code paths
4. **DWARF CFI parsing** — CIE/FDE for stack unwinding

---

## Agent 4: Processor Module Features (COMPLETE)

### x86-64 Lifter: 56 mnemonics vs 300+ missing
CRITICAL GAPS:
1. **SSE/AVX/AVX-512** (~200+ instructions) — vectorized code entirely unlifted
2. **String ops** (REP MOVSB/STOSB/SCASB etc.) — string/memory processing missing
3. **Atomic/LOCK** (CMPXCHG, XADD, LOCK prefix) — concurrency not lifted
4. **x87 FPU** (FLD, FADD, FMUL etc.) — legacy float missing
5. **BMI/BMI2** (ANDN, BEXTR, LZCNT, TZCNT, POPCNT) — bit manipulation missing
6. **Conditional SET** (SETcc family) — not lifted
7. **BSWAP, ENTER, LEAVE, LOOP** — misc instructions missing
8. **Crypto** (AES-NI, SHA) — crypto instructions missing

### ARM64 Lifter: 36 instructions vs 100+ missing
CRITICAL GAPS:
1. **NEON/SVE** (128-bit+ SIMD) — vectorized code missing
2. **Thumb/Thumb2 mode** — 32-bit ARM code completely missing
3. **IT block handling** — conditional execution missing
4. **CSEL/CSINC/CSNEG** — conditional select missing
5. **TLS access patterns** (TPIDR_EL0) — thread-local missing
6. **PLT/GOT resolution** — dynamic linking missing

### ALL Lifters Missing:
- Stack frame analysis (ESP/RSP delta tracking)
- Segment override handling
- Thunk function recognition
- Register tracking across basic blocks

---

## Agent 5: Loader & Debug Info Gaps (COMPLETE)

### ELF Loader (unlace ~100 funcs vs IDA 786 = 12% coverage)
CRITICAL:
1. **Relocation processing** — ALL reloc types (R_X86_64_*, R_ARM_*, etc.)
2. **Dynamic linking** — PLT/GOT wiring, lazy binding, symbol resolution
3. **TLS sections** — thread-local storage handling
4. **GNU IFUNC** — indirect function resolution
5. **Split DWARF** (.dwo/.dwp files)
6. **Compressed debug** (.zdebug_* sections)
7. **Core dumps** — crash analysis
8. **Android features** — packed relocations, .note.android.ident

### PE Loader (unlace ~150 funcs vs IDA 308 = 49% coverage)
MISSING:
1. **Delay-loaded imports**
2. **Base relocation (.reloc)** — ASLR support
3. **SEH/EH exception tables** (.pdata/.xdata)
4. **Resource directory**
5. **CFG tables** (.gfids)
6. **Rich header** — build tool metadata

### DWARF Parser (unlace ~200 funcs vs IDA 1465 = 14% coverage)
CRITICAL:
1. **Struct/enum/union recovery** from DW_TAG_structure_type etc.
2. **Class hierarchy** from DW_TAG_class_type + DW_TAG_inheritance
3. **Template instantiation** from DW_TAG_template_type_parameter
4. **DWARF expression evaluation** (DW_OP_* opcodes for variable locations)
5. **Inline function detection** from DW_TAG_inlined_subroutine
6. **Location lists** for variables at different code ranges
7. **DWARF 5 advanced features**

### PDB Parser (unlace ~150 funcs vs IDA 1427 = 11% coverage)
CRITICAL:
1. **TPI stream** — full C++ type reconstruction
2. **UDT parsing** — structs, classes, templates from PDB
3. **Cross-module type merging**
4. **FPO data** — Frame Pointer Omission for stack analysis
5. **Inlinee tracking**

---

## Agent 6: Utility Plugin Gaps (PARTIAL — agent had issues)

Based on what we know from prior analysis:
1. **FLIRT signatures** (makesig) — function recognition from patterns
2. **dyld shared cache** (dscu) — macOS/iOS shared cache unpacking
3. **Binary matching** (goomba) — cross-binary function matching
4. **Clang integration** (idaclang) — C/C++ header import for type info
5. **Pattern finding** (patfind) — instruction pattern matching
6. **Xref graph** (xref_graph) — cross-reference visualization

---

## Preliminary Priority Matrix

| Feature | Impact | Effort | Priority |
|---------|--------|--------|----------|
| Expression tree building | HUGE (output quality) | MEDIUM | P0 |
| SSA→C variable merging | HUGE (readability) | MEDIUM | P0 |
| Struct field recovery | HUGE (type accuracy) | HIGH | P0 |
| Cross-reference database | HIGH (analysis quality) | HIGH | P0 |
| Type library system | HIGH (type accuracy) | VERY HIGH | P1 |
| Idiom recognition | MEDIUM (output quality) | MEDIUM | P1 |
| Exception handling | MEDIUM (correctness) | HIGH | P1 |
| VTable recognition | MEDIUM (C++ support) | MEDIUM | P1 |
| Value range analysis | MEDIUM (optimization) | HIGH | P2 |
| Alias analysis | MEDIUM (correctness) | VERY HIGH | P2 |
| Metadata persistence | LOW (workflow) | MEDIUM | P2 |
| Plugin system | LOW (extensibility) | HIGH | P3 |
