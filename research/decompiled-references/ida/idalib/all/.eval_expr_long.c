// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB460
// Name:            .eval_expr_long
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB460 jmp     cs:off_2C7B218
//
// Resolved target: eval_expr_long
// Target address:  0x78AB90
// GOT/IAT slot:    0x2C7B218
// Slot symbol:     off_2C7B218
// Target type:     <no type info>
// ============================================================

void .eval_expr_long(/* see target signature */)
{
    // Tail-call to eval_expr_long via GOT/IAT indirection
    return eval_expr_long(/* forwarded args */);
}

