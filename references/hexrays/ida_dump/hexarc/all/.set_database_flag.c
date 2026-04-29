// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AF90
// Name:            .set_database_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AF90 jmp     cs:off_4B9FB0
//
// Resolved target: set_database_flag
// Target address:  0x4BC9E0
// GOT/IAT slot:    0x4B9FB0
// Slot symbol:     off_4B9FB0
// Target type:     <no type info>
// ============================================================

void .set_database_flag(/* see target signature */)
{
    // Tail-call to set_database_flag via GOT/IAT indirection
    return set_database_flag(/* forwarded args */);
}

