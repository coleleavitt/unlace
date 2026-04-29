// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D940
// Name:            .get_next_dref_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D940 jmp     cs:off_4E9488
//
// Resolved target: get_next_dref_from
// Target address:  0x4EBE90
// GOT/IAT slot:    0x4E9488
// Slot symbol:     off_4E9488
// Target type:     <no type info>
// ============================================================

void .get_next_dref_from(/* see target signature */)
{
    // Tail-call to get_next_dref_from via GOT/IAT indirection
    return get_next_dref_from(/* forwarded args */);
}

