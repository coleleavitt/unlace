// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ADA40
// Name:            .get_offset_expr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ADA40 jmp     cs:off_2C7C508
//
// Resolved target: get_offset_expr
// Target address:  0x4E5090
// GOT/IAT slot:    0x2C7C508
// Slot symbol:     off_2C7C508
// Target type:     <no type info>
// ============================================================

void .get_offset_expr(/* see target signature */)
{
    // Tail-call to get_offset_expr via GOT/IAT indirection
    return get_offset_expr(/* forwarded args */);
}

