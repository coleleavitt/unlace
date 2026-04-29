// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9850
// Name:            .check_for_table_jump
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9850 jmp     cs:off_2E410
//
// Resolved target: check_for_table_jump
// Target address:  0x2EA90
// GOT/IAT slot:    0x2E410
// Slot symbol:     off_2E410
// Target type:     <no type info>
// ============================================================

void .check_for_table_jump(/* see target signature */)
{
    // Tail-call to check_for_table_jump via GOT/IAT indirection
    return check_for_table_jump(/* forwarded args */);
}

