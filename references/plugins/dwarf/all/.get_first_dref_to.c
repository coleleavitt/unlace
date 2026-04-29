// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA1F0
// Name:            .get_first_dref_to
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA1F0 jmp     cs:off_CA0E0
//
// Resolved target: get_first_dref_to
// Target address:  0xD0A10
// GOT/IAT slot:    0xCA0E0
// Slot symbol:     off_CA0E0
// Target type:     <no type info>
// ============================================================

void .get_first_dref_to(/* see target signature */)
{
    // Tail-call to get_first_dref_to via GOT/IAT indirection
    return get_first_dref_to(/* forwarded args */);
}

