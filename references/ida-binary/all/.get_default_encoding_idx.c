// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AE70
// Name:            .get_default_encoding_idx
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AE70 jmp     cs:get_default_encoding_idx_ptr
//
// Resolved target: get_default_encoding_idx
// Target address:  0x8D9548
// GOT/IAT slot:    0x8A43D8
// Slot symbol:     get_default_encoding_idx_ptr
// Target type:     <no type info>
// ============================================================

void .get_default_encoding_idx(/* see target signature */)
{
    // Tail-call to get_default_encoding_idx via GOT/IAT indirection
    return get_default_encoding_idx(/* forwarded args */);
}

