// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB10
// Name:            .get_first_dref_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB10 jmp     cs:off_4C0570
//
// Resolved target: get_first_dref_from
// Target address:  0x4C3558
// GOT/IAT slot:    0x4C0570
// Slot symbol:     off_4C0570
// Target type:     <no type info>
// ============================================================

void .get_first_dref_from(/* see target signature */)
{
    // Tail-call to get_first_dref_from via GOT/IAT indirection
    return get_first_dref_from(/* forwarded args */);
}

