// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2140
// Name:            .get_first_fcref_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2140 jmp     cs:off_A088
//
// Resolved target: get_first_fcref_from
// Target address:  0xB358
// GOT/IAT slot:    0xA088
// Slot symbol:     off_A088
// Target type:     <no type info>
// ============================================================

void .get_first_fcref_from(/* see target signature */)
{
    // Tail-call to get_first_fcref_from via GOT/IAT indirection
    return get_first_fcref_from(/* forwarded args */);
}

