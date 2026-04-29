// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BFC0
// Name:            .set_database_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BFC0 jmp     cs:off_4CDFC8
//
// Resolved target: set_database_flag
// Target address:  0x4D0A18
// GOT/IAT slot:    0x4CDFC8
// Slot symbol:     off_4CDFC8
// Target type:     <no type info>
// ============================================================

void .set_database_flag(/* see target signature */)
{
    // Tail-call to set_database_flag via GOT/IAT indirection
    return set_database_flag(/* forwarded args */);
}

