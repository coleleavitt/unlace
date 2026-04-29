// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EC70
// Name:            .get_next_cref_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EC70 jmp     cs:off_4E9E20
//
// Resolved target: get_next_cref_from
// Target address:  0x4EC860
// GOT/IAT slot:    0x4E9E20
// Slot symbol:     off_4E9E20
// Target type:     <no type info>
// ============================================================

void .get_next_cref_from(/* see target signature */)
{
    // Tail-call to get_next_cref_from via GOT/IAT indirection
    return get_next_cref_from(/* forwarded args */);
}

