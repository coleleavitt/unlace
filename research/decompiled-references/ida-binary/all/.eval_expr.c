// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11BC00
// Name:            .eval_expr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11BC00 jmp     cs:eval_expr_ptr
//
// Resolved target: eval_expr
// Target address:  0x8D9DB0
// GOT/IAT slot:    0x8A4AA0
// Slot symbol:     eval_expr_ptr
// Target type:     <no type info>
// ============================================================

void .eval_expr(/* see target signature */)
{
    // Tail-call to eval_expr via GOT/IAT indirection
    return eval_expr(/* forwarded args */);
}

