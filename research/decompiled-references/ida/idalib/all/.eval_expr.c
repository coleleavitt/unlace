// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ADB30
// Name:            .eval_expr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ADB30 jmp     cs:off_2C7C580
//
// Resolved target: eval_expr
// Target address:  0x78AAA0
// GOT/IAT slot:    0x2C7C580
// Slot symbol:     off_2C7C580
// Target type:     <no type info>
// ============================================================

void .eval_expr(/* see target signature */)
{
    // Tail-call to eval_expr via GOT/IAT indirection
    return eval_expr(/* forwarded args */);
}

