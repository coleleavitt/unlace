// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11ADF0
// Name:            .is_database_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11ADF0 jmp     cs:is_database_flag_ptr
//
// Resolved target: is_database_flag
// Target address:  0x8D94F0
// GOT/IAT slot:    0x8A4398
// Slot symbol:     is_database_flag_ptr
// Target type:     <no type info>
// ============================================================

void .is_database_flag(/* see target signature */)
{
    // Tail-call to is_database_flag via GOT/IAT indirection
    return is_database_flag(/* forwarded args */);
}

