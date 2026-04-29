// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B650
// Name:            .get_max_strlit_length
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B650 jmp     cs:off_4BFB10
//
// Resolved target: get_max_strlit_length
// Target address:  0x4C3010
// GOT/IAT slot:    0x4BFB10
// Slot symbol:     off_4BFB10
// Target type:     <no type info>
// ============================================================

void .get_max_strlit_length(/* see target signature */)
{
    // Tail-call to get_max_strlit_length via GOT/IAT indirection
    return get_max_strlit_length(/* forwarded args */);
}

