// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6140
// Name:            .get_first_dref_to
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6140 jmp     cs:off_2D088
//
// Resolved target: get_first_dref_to
// Target address:  0x2D588
// GOT/IAT slot:    0x2D088
// Slot symbol:     off_2D088
// Target type:     <no type info>
// ============================================================

void .get_first_dref_to(/* see target signature */)
{
    // Tail-call to get_first_dref_to via GOT/IAT indirection
    return get_first_dref_to(/* forwarded args */);
}

