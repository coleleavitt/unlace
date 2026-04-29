// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6740
// Name:            .check_for_table_jump
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6740 jmp     cs:off_24388
//
// Resolved target: check_for_table_jump
// Target address:  0x26168
// GOT/IAT slot:    0x24388
// Slot symbol:     off_24388
// Target type:     <no type info>
// ============================================================

void .check_for_table_jump(/* see target signature */)
{
    // Tail-call to check_for_table_jump via GOT/IAT indirection
    return check_for_table_jump(/* forwarded args */);
}

