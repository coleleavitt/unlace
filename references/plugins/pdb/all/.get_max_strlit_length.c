// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D810
// Name:            .get_max_strlit_length
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D810 jmp     cs:off_B33F0
//
// Resolved target: get_max_strlit_length
// Target address:  0xB3B90
// GOT/IAT slot:    0xB33F0
// Slot symbol:     off_B33F0
// Target type:     <no type info>
// ============================================================

void .get_max_strlit_length(/* see target signature */)
{
    // Tail-call to get_max_strlit_length via GOT/IAT indirection
    return get_max_strlit_length(/* forwarded args */);
}

