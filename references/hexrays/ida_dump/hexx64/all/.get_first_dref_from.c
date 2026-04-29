// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BB60
// Name:            .get_first_dref_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BB60 jmp     cs:off_4ED598
//
// Resolved target: get_first_dref_from
// Target address:  0x4F18A0
// GOT/IAT slot:    0x4ED598
// Slot symbol:     off_4ED598
// Target type:     <no type info>
// ============================================================

void .get_first_dref_from(/* see target signature */)
{
    // Tail-call to get_first_dref_from via GOT/IAT indirection
    return get_first_dref_from(/* forwarded args */);
}

