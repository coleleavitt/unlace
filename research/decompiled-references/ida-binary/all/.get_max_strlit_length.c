// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B2A0
// Name:            .get_max_strlit_length
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B2A0 jmp     cs:get_max_strlit_length_ptr
//
// Resolved target: get_max_strlit_length
// Target address:  0x8D97C0
// GOT/IAT slot:    0x8A45F0
// Slot symbol:     get_max_strlit_length_ptr
// Target type:     <no type info>
// ============================================================

void .get_max_strlit_length(/* see target signature */)
{
    // Tail-call to get_max_strlit_length via GOT/IAT indirection
    return get_max_strlit_length(/* forwarded args */);
}

