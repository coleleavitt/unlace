# Address Resolution & C Output Gaps — Detailed Audit

## From: Explore Address Resolution Gaps (bg_478331ba)

### STATUS TABLE

| Feature           | Status     | Quality | Location |
| ----------------- | ---------- | ------- | -------- |
| Symbol Resolution | ❌ MISSING | 0%      | c_printer.rs:91 — always `sub_XXXX` |
| String Recovery   | ❌ MISSING | 0%      | No .rodata scanning at all |
| Global Variables  | ❌ MISSING | 0%      | Raw pointers only |
| Jump Tables       | ✅ WORKING | 90%     | structurer.rs + switch_recovery.rs |
| SUBPIECE Macros   | ⚠️ PARTIAL | 70%     | Emits bit shifts, not LOBYTE/HIDWORD |
| Ternary Operators | ✅ WORKING | 95%     | ternary_recovery.rs |
| IDA Typedefs      | ✅ WORKING | 100%    | c_printer.rs |
| Pointer Casts     | ✅ WORKING | 100%    | c_printer.rs |

### CRITICAL: Symbol Resolution (EASIEST WIN)

**Problem**: c_printer.rs:91 always formats CALL targets as `sub_{:x}` — never looks up symbols.

**Data already available**: 
- `BinaryImage.plt_symbols: BTreeMap<u64, String>` — PLT stub → name (e.g., 0x402000 → "printf")
- `BinaryImage.relocations: Vec<Relocation>` — with `sym_name` field
- Pipeline discovers functions from symbols but DOESN'T PASS symbol table to decompiler

**Fix**: Pass BinaryImage (or symbol table extract) through to c_printer. On CALL to address X:
1. Check plt_symbols[X] → emit `printf(...)` 
2. Check symbols[X] → emit `my_func(...)`
3. Fallback → emit `sub_X(...)`

### CRITICAL: String Literal Recovery

**Problem**: Zero string recovery infrastructure. No .rodata scanning, no string table, no inlining.

**Current**: `printf(*(char*)0x402000)` instead of `printf("hello")`

**Fix**: 
1. In loader: scan .rodata/.data sections for null-terminated UTF-8 strings
2. Build `BTreeMap<u64, String>` of address → string content
3. In c_printer: when LOAD from constant address that's in string table, emit `"string"` instead of `*(char*)addr`

### CRITICAL: Global Variable Naming

**Problem**: All absolute address LOAD/STORE emit raw pointer casts.

**Current**: `*((_DWORD *)(0x604000)) = 42` instead of `dword_604000 = 42`

**Fix**:
1. Collect all absolute address LOAD/STORE targets during analysis
2. Assign names based on access size: `byte_X`, `word_X`, `dword_X`, `qword_X`
3. Emit named globals in C output

### MEDIUM: SUBPIECE → IDA Macros

**Current**: `(x) >> 8` for SUBPIECE(x, 1)
**IDA**: `BYTE1(x)`, `LOBYTE(x)`, `HIDWORD(x)`, etc.

Mapping:
- SUBPIECE(x, 0) size=1 → `LOBYTE(x)`
- SUBPIECE(x, 1) size=1 → `BYTE1(x)`
- SUBPIECE(x, 2) size=1 → `BYTE2(x)`
- SUBPIECE(x, 0) size=2 → `LOWORD(x)`
- SUBPIECE(x, 2) size=2 → `HIWORD(x)`
- SUBPIECE(x, 0) size=4 → `LODWORD(x)`
- SUBPIECE(x, 4) size=4 → `HIDWORD(x)`

### LOW: Compound Assignment / Increment

**Current**: `i = i + 1` instead of `i++` or `i += 1`
**Fix**: Post-pass on C AST to detect `x = x OP const` → `x OP= const` → `x++`/`x--`
