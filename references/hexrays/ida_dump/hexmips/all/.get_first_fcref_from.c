// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC30
// Name:            .get_first_fcref_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC30 jmp     cs:off_4CD600
//
// Resolved target: get_first_fcref_from
// Target address:  0x4D0018
// GOT/IAT slot:    0x4CD600
// Slot symbol:     off_4CD600
// Target type:     <no type info>
// ============================================================

void .get_first_fcref_from(/* see target signature */)
{
    // Tail-call to get_first_fcref_from via GOT/IAT indirection
    return get_first_fcref_from(/* forwarded args */);
}

