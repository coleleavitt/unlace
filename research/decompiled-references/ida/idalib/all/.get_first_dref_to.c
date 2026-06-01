// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9010
// Name:            .get_first_dref_to
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9010 jmp     cs:off_2C79FF0
//
// Resolved target: get_first_dref_to
// Target address:  0x4109F0
// GOT/IAT slot:    0x2C79FF0
// Slot symbol:     off_2C79FF0
// Target type:     <no type info>
// ============================================================

void .get_first_dref_to(/* see target signature */)
{
    // Tail-call to get_first_dref_to via GOT/IAT indirection
    return get_first_dref_to(/* forwarded args */);
}

