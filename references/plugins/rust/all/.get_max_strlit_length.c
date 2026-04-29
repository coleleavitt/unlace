// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2250
// Name:            .get_max_strlit_length
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2250 jmp     cs:off_A110
//
// Resolved target: get_max_strlit_length
// Target address:  0xB3E0
// GOT/IAT slot:    0xA110
// Slot symbol:     off_A110
// Target type:     <no type info>
// ============================================================

void .get_max_strlit_length(/* see target signature */)
{
    // Tail-call to get_max_strlit_length via GOT/IAT indirection
    return get_max_strlit_length(/* forwarded args */);
}

