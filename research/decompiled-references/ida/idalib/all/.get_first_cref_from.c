// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9300
// Name:            .get_first_cref_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9300 jmp     cs:off_2C7A168
//
// Resolved target: get_first_cref_from
// Target address:  0x3E30E0
// GOT/IAT slot:    0x2C7A168
// Slot symbol:     off_2C7A168
// Target type:     <no type info>
// ============================================================

void .get_first_cref_from(/* see target signature */)
{
    // Tail-call to get_first_cref_from via GOT/IAT indirection
    return get_first_cref_from(/* forwarded args */);
}

