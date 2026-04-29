// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3220
// Name:            .get_first_dref_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3220 jmp     cs:off_200F8
//
// Resolved target: get_first_dref_from
// Target address:  0x21A08
// GOT/IAT slot:    0x200F8
// Slot symbol:     off_200F8
// Target type:     <no type info>
// ============================================================

void .get_first_dref_from(/* see target signature */)
{
    // Tail-call to get_first_dref_from via GOT/IAT indirection
    return get_first_dref_from(/* forwarded args */);
}

