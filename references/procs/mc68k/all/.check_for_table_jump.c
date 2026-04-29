// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x65E0
// Name:            .check_for_table_jump
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x65E0 jmp     cs:off_1D2D8
//
// Resolved target: check_for_table_jump
// Target address:  0x1D7D8
// GOT/IAT slot:    0x1D2D8
// Slot symbol:     off_1D2D8
// Target type:     <no type info>
// ============================================================

void .check_for_table_jump(/* see target signature */)
{
    // Tail-call to check_for_table_jump via GOT/IAT indirection
    return check_for_table_jump(/* forwarded args */);
}

