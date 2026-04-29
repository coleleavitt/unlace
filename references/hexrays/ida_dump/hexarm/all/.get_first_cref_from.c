// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DDC0
// Name:            .get_first_cref_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DDC0 jmp     cs:off_4E96C8
//
// Resolved target: get_first_cref_from
// Target address:  0x4EC0E0
// GOT/IAT slot:    0x4E96C8
// Slot symbol:     off_4E96C8
// Target type:     <no type info>
// ============================================================

void .get_first_cref_from(/* see target signature */)
{
    // Tail-call to get_first_cref_from via GOT/IAT indirection
    return get_first_cref_from(/* forwarded args */);
}

