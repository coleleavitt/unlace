// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3560
// Name:            .get_max_strlit_length
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3560 jmp     cs:off_28298
//
// Resolved target: get_max_strlit_length
// Target address:  0x28748
// GOT/IAT slot:    0x28298
// Slot symbol:     off_28298
// Target type:     <no type info>
// ============================================================

void .get_max_strlit_length(/* see target signature */)
{
    // Tail-call to get_max_strlit_length via GOT/IAT indirection
    return get_max_strlit_length(/* forwarded args */);
}

