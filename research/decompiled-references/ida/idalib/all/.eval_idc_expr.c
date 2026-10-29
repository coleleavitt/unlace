// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABFD0
// Name:            .eval_idc_expr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABFD0 jmp     cs:off_2C7B7D0
//
// Resolved target: eval_idc_expr
// Target address:  0x78A4C0
// GOT/IAT slot:    0x2C7B7D0
// Slot symbol:     off_2C7B7D0
// Target type:     <no type info>
// ============================================================

void .eval_idc_expr(/* see target signature */)
{
    // Tail-call to eval_idc_expr via GOT/IAT indirection
    return eval_idc_expr(/* forwarded args */);
}

