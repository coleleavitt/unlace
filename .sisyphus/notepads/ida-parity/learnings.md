## [2026-05-03] IDA HexRays C Printer System — Complete Reverse Engineering

### C Printer Architecture (from hexx64.so decompiled dump)
- Entry: sub_258030 (cfunc_t::get_pseudocode) → sub_268FA0 (function printer)
- Pipeline: prepare names → prepare labels → emit signature → emit "{" → emit declarations → emit body → emit "}"
- Statement printer: sub_268570 (286L) — dispatches cit_xxx opcodes 70-84
- Expression printer: sub_2662B0 (889L) — dispatches cot_xxx opcodes 0-69
- Variable naming: sub_2112D0 (271L) — a%d for args, v%d for locals, "result" for return

### Operator Precedence Table (off_4E0320 — INVERTED from C standard)
- 0 = Leaf (literals, vars)
- 1 = Postfix (call, index, member)
- 2 = Unary prefix (!, ~, -, *, &, ++, --, cast)
- 3 = Multiplicative (*, /, %)
- 4 = Additive (+, -)
- 5 = Shift (<<, >>)
- 6 = Relational (<, <=, >, >=)
- 7 = Equality (==, !=)
- 8 = Bitwise AND
- 9 = Bitwise XOR
- 10 = Bitwise OR
- 11 = Logical AND
- 12 = Logical OR
- 13 = Ternary
- 14 = Assignment
- 15 = Comma

### Parenthesization Rules (sub_25F3C0)
- Parent lower prec than child → always parens
- Same prec + comparison ops → always parens
- Same prec + right child + non-associative → parens
- Associative ops (=, ||, &&, |, ^, &, +, fadd) → never parens at same level
- Division/modulo → parens on right child (a / b / c ≠ a / (b / c))

### Key Findings for unlace
1. LOBYTE/HIDWORD macros are ctree expression nodes (cot_helper), NOT printer-level transforms
2. Variable naming: args first (a1,a2...), then locals (v1,v2...), skip flag 0x4 (named) and 0x20000 (temps)
3. Cast of 0 → NULL/nullptr (special case in expression printer)
4. Line-break threshold: 20 chars minimum remaining width
5. Expression width pre-measurement before deciding multi-line layout
6. switch_recovery is NOT in unlace's pipeline — only in tests (Task 3 finding)

### HexRays Pipeline (sub_14B8B0, 358L)
MMAT_ZERO → GENERATED → PREOPTIMIZED → LOCOPT → CALLS → GLBOPT1 → GLBOPT2 → GLBOPT3 → LVARS → FINAL
- Fixed-point iteration: if types change at step 9 (sub_F9180), re-run from step 1
- Global opt loop (sub_14A660): block merging → SSA opt → control flow opt → repeat
- Lvar allocation: SSA-to-lvar (1480L) → interference graph (11,008L!) → stack layout (18,825L) → naming (271L)
