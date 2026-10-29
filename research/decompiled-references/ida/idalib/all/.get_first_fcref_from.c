// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A90B0
// Name:            .get_first_fcref_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A90B0 jmp     cs:off_2C7A040
//
// Resolved target: get_first_fcref_from
// Target address:  0x3E1DA0
// GOT/IAT slot:    0x2C7A040
// Slot symbol:     off_2C7A040
// Target type:     <no type info>
// ============================================================

void .get_first_fcref_from(/* see target signature */)
{
    // Tail-call to get_first_fcref_from via GOT/IAT indirection
    return get_first_fcref_from(/* forwarded args */);
}

