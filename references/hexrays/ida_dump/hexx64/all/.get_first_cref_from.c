// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BE00
// Name:            .get_first_cref_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BE00 jmp     cs:off_4ED6E8
//
// Resolved target: get_first_cref_from
// Target address:  0x4F19F8
// GOT/IAT slot:    0x4ED6E8
// Slot symbol:     off_4ED6E8
// Target type:     <no type info>
// ============================================================

void .get_first_cref_from(/* see target signature */)
{
    // Tail-call to get_first_cref_from via GOT/IAT indirection
    return get_first_cref_from(/* forwarded args */);
}

