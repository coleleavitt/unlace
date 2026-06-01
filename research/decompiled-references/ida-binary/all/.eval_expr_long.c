// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117E50
// Name:            .eval_expr_long
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117E50 jmp     cs:eval_expr_long_ptr
//
// Resolved target: eval_expr_long
// Target address:  0x8D7718
// GOT/IAT slot:    0x8A2BC8
// Slot symbol:     eval_expr_long_ptr
// Target type:     <no type info>
// ============================================================

void .eval_expr_long(/* see target signature */)
{
    // Tail-call to eval_expr_long via GOT/IAT indirection
    return eval_expr_long(/* forwarded args */);
}

