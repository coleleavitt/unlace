// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5600
// Name:            .check_for_table_jump
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5600 jmp     cs:off_152E8
//
// Resolved target: check_for_table_jump
// Target address:  0x16388
// GOT/IAT slot:    0x152E8
// Slot symbol:     off_152E8
// Target type:     <no type info>
// ============================================================

void .check_for_table_jump(/* see target signature */)
{
    // Tail-call to check_for_table_jump via GOT/IAT indirection
    return check_for_table_jump(/* forwarded args */);
}

