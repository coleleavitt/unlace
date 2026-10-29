// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC1B0
// Name:            .get_first_fcref_to
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC1B0 jmp     cs:off_2C7B8C0
//
// Resolved target: get_first_fcref_to
// Target address:  0x3E2100
// GOT/IAT slot:    0x2C7B8C0
// Slot symbol:     off_2C7B8C0
// Target type:     <no type info>
// ============================================================

void .get_first_fcref_to(/* see target signature */)
{
    // Tail-call to get_first_fcref_to via GOT/IAT indirection
    return get_first_fcref_to(/* forwarded args */);
}

