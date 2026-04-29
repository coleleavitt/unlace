// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9740
// Name:            .get_max_strlit_length
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9740 jmp     cs:off_89388
//
// Resolved target: get_max_strlit_length
// Target address:  0x8C698
// GOT/IAT slot:    0x89388
// Slot symbol:     off_89388
// Target type:     <no type info>
// ============================================================

void .get_max_strlit_length(/* see target signature */)
{
    // Tail-call to get_max_strlit_length via GOT/IAT indirection
    return get_max_strlit_length(/* forwarded args */);
}

