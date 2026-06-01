// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118F00
// Name:            .eval_idc_expr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118F00 jmp     cs:eval_idc_expr_ptr
//
// Resolved target: eval_idc_expr
// Target address:  0x8D8120
// GOT/IAT slot:    0x8A3420
// Slot symbol:     eval_idc_expr_ptr
// Target type:     <no type info>
// ============================================================

void .eval_idc_expr(/* see target signature */)
{
    // Tail-call to eval_idc_expr via GOT/IAT indirection
    return eval_idc_expr(/* forwarded args */);
}

