// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BC30
// Name:            .get_next_cref_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BC30 jmp     cs:off_4BFE00
//
// Resolved target: get_next_cref_from
// Target address:  0x4C3318
// GOT/IAT slot:    0x4BFE00
// Slot symbol:     off_4BFE00
// Target type:     <no type info>
// ============================================================

void .get_next_cref_from(/* see target signature */)
{
    // Tail-call to get_next_cref_from via GOT/IAT indirection
    return get_next_cref_from(/* forwarded args */);
}

