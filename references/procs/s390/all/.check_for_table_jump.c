// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x102C0
// Name:            .check_for_table_jump
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x102C0 jmp     cs:off_2E148
//
// Resolved target: check_for_table_jump
// Target address:  0x36DD0
// GOT/IAT slot:    0x2E148
// Slot symbol:     off_2E148
// Target type:     <no type info>
// ============================================================

void .check_for_table_jump(/* see target signature */)
{
    // Tail-call to check_for_table_jump via GOT/IAT indirection
    return check_for_table_jump(/* forwarded args */);
}

