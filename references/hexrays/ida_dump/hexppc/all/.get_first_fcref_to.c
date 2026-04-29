// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A4D0
// Name:            .get_first_fcref_to
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A4D0 jmp     cs:off_4DA250
//
// Resolved target: get_first_fcref_to
// Target address:  0x4DCC20
// GOT/IAT slot:    0x4DA250
// Slot symbol:     off_4DA250
// Target type:     <no type info>
// ============================================================

void .get_first_fcref_to(/* see target signature */)
{
    // Tail-call to get_first_fcref_to via GOT/IAT indirection
    return get_first_fcref_to(/* forwarded args */);
}

