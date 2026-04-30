# IDA Parity Gap Analysis — Phase 4 Candidates

## From: Explore IDA Reference Output Patterns (bg_183b3a84)

### CRITICAL GAPS (High frequency in IDA output, missing in unlace)

#### 1. LODWORD/HIDWORD/BYTE1/LOBYTE Macros
- IDA uses extensively: `BYTE1(v4)`, `LOBYTE(v4)`, `HIDWORD(v167)`, `LODWORD(v3)`, `LOWORD(v)`, `HIWORD(v)`
- These map to SUBPIECE operations in IR
- Currently unlace likely emits raw shifts/masks instead
- **Priority: P0** — appears in nearly every function

#### 2. Switch/Case Recovery
- IDA recovers full switch/case from jump tables: sub_6D170.c shows 18 cases with default
- Case labels with `case 0LL:`, string returns in cases
- unlace currently emits if-else chains for indirect branches
- **Priority: P0** — major structural difference

#### 3. String Literal Inlining
- IDA inlines string constants: `"none"`, `"block"`, `"if-then"`, `"switch"`
- unlace likely outputs address references: `*(char *)0x402000`
- Requires .rodata section scanning + string detection
- **Priority: P0** — huge readability impact

#### 4. Ternary Operator Recovery
- IDA emits: `v5 == 0 ? -1 : 1`, `strcmp(s1, "TEAMS") == 0 ? 0x1A : 0`
- unlace emits if-else for these patterns
- Pattern: if (c) x = a; else x = b; → x = c ? a : b
- **Priority: P1** — common in real code

#### 5. Global Variable Naming
- IDA names globals: `dword_604000`, `off_4DD208`, `unk_4DD1D0`
- unlace outputs raw addresses
- **Priority: P1** — readability

#### 6. Array Indexing Recovery
- IDA: `*(_DWORD *)(v6 + 4 * v9)` → could be `v6[v9]` with stride detection
- IDA also uses: `a2[1]`, `a1[2]`, `v119[5]`
- Pattern: `*(base + index * stride)` → `base[index]`
- **Priority: P1** — readability

#### 7. Calling Convention Annotations
- IDA: `__int64 __fastcall sub_1DB100(...)`, `void __noreturn sub_F5300()`
- unlace doesn't annotate calling conventions in output
- **Priority: P2** — informational

#### 8. Compound Assignment / Increment
- IDA: `i++`, `v3 += 4`, `LOBYTE(v4) = v4 | 0x80`
- unlace: `i = i + 1`, `v3 = v3 + 4`
- **Priority: P2** — polish

#### 9. Register/Stack Comments
- IDA: `v1 // rax`, `v38 // [rsp+0h] [rbp-138h]`
- Helps reverse engineers map variables to registers
- **Priority: P2** — informational

#### 10. Function Pointer Types
- IDA: `__int64 (__fastcall *v11)()`, `((void (__fastcall *)(...))v17)(...)`
- Complex function pointer type inference
- **Priority: P3** — advanced

### Reference File Stats
- hexx64/all: 8,398 files (primary x64 test set)
- hexarm/all: 7,793 files
- hexmips/all: 7,674 files
- hexppc/all: 7,735 files
- hexrv/all: 7,635 files
- hexarc/all: 7,617 files
- hexv850/all: 7,647 files
- Total: ~55,000 reference functions across 7 architectures
