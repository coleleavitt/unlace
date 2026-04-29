// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x63C0
// Name:            .get_first_cref_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x63C0 jmp     cs:off_2F1C8
//
// Resolved target: get_first_cref_from
// Target address:  0x2F838
// GOT/IAT slot:    0x2F1C8
// Slot symbol:     off_2F1C8
// Target type:     <no type info>
// ============================================================

void .get_first_cref_from(/* see target signature */)
{
    // Tail-call to get_first_cref_from via GOT/IAT indirection
    return get_first_cref_from(/* forwarded args */);
}

