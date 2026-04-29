// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6710
// Name:            .get_offset_expression
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6710 jmp     cs:off_1D370
//
// Resolved target: get_offset_expression
// Target address:  0x1D880
// GOT/IAT slot:    0x1D370
// Slot symbol:     off_1D370
// Target type:     <no type info>
// ============================================================

void .get_offset_expression(/* see target signature */)
{
    // Tail-call to get_offset_expression via GOT/IAT indirection
    return get_offset_expression(/* forwarded args */);
}

