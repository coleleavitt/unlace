// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B660
// Name:            .get_max_strlit_length
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B660 jmp     cs:off_4C0B18
//
// Resolved target: get_max_strlit_length
// Target address:  0x4C3B18
// GOT/IAT slot:    0x4C0B18
// Slot symbol:     off_4C0B18
// Target type:     <no type info>
// ============================================================

void .get_max_strlit_length(/* see target signature */)
{
    // Tail-call to get_max_strlit_length via GOT/IAT indirection
    return get_max_strlit_length(/* forwarded args */);
}

