// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DB30
// Name:            .get_first_dref_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DB30 jmp     cs:off_4E9580
//
// Resolved target: get_first_dref_from
// Target address:  0x4EBF90
// GOT/IAT slot:    0x4E9580
// Slot symbol:     off_4E9580
// Target type:     <no type info>
// ============================================================

void .get_first_dref_from(/* see target signature */)
{
    // Tail-call to get_first_dref_from via GOT/IAT indirection
    return get_first_dref_from(/* forwarded args */);
}

