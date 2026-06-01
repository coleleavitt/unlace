// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113530
// Name:            .set_database_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113530 jmp     cs:set_database_flag_ptr
//
// Resolved target: set_database_flag
// Target address:  0x8D4888
// GOT/IAT slot:    0x8A0738
// Slot symbol:     set_database_flag_ptr
// Target type:     <no type info>
// ============================================================

void .set_database_flag(/* see target signature */)
{
    // Tail-call to set_database_flag via GOT/IAT indirection
    return set_database_flag(/* forwarded args */);
}

