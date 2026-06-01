// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC5F0
// Name:            .get_next_cref_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC5F0 jmp     cs:off_2C7BAE0
//
// Resolved target: get_next_cref_from
// Target address:  0x3E3160
// GOT/IAT slot:    0x2C7BAE0
// Slot symbol:     off_2C7BAE0
// Target type:     <no type info>
// ============================================================

void .get_next_cref_from(/* see target signature */)
{
    // Tail-call to get_next_cref_from via GOT/IAT indirection
    return get_next_cref_from(/* forwarded args */);
}

