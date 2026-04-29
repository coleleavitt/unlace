// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ADA0
// Name:            .get_first_cref_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ADA0 jmp     cs:off_4C06B8
//
// Resolved target: get_first_cref_from
// Target address:  0x4C36A8
// GOT/IAT slot:    0x4C06B8
// Slot symbol:     off_4C06B8
// Target type:     <no type info>
// ============================================================

void .get_first_cref_from(/* see target signature */)
{
    // Tail-call to get_first_cref_from via GOT/IAT indirection
    return get_first_cref_from(/* forwarded args */);
}

