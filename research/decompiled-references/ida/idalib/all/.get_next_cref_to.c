// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACC40
// Name:            .get_next_cref_to
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACC40 jmp     cs:off_2C7BE08
//
// Resolved target: get_next_cref_to
// Target address:  0x3E3430
// GOT/IAT slot:    0x2C7BE08
// Slot symbol:     off_2C7BE08
// Target type:     <no type info>
// ============================================================

void .get_next_cref_to(/* see target signature */)
{
    // Tail-call to get_next_cref_to via GOT/IAT indirection
    return get_next_cref_to(/* forwarded args */);
}

