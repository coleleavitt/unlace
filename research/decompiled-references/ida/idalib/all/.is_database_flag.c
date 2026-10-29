// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD300
// Name:            .is_database_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD300 jmp     cs:off_2C7C168
//
// Resolved target: is_database_flag
// Target address:  0x591180
// GOT/IAT slot:    0x2C7C168
// Slot symbol:     off_2C7C168
// Target type:     <no type info>
// ============================================================

void .is_database_flag(/* see target signature */)
{
    // Tail-call to is_database_flag via GOT/IAT indirection
    return is_database_flag(/* forwarded args */);
}

