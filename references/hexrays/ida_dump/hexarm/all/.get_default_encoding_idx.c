// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D210
// Name:            .get_default_encoding_idx
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D210 jmp     cs:off_4E90F0
//
// Resolved target: get_default_encoding_idx
// Target address:  0x4EBAE0
// GOT/IAT slot:    0x4E90F0
// Slot symbol:     off_4E90F0
// Target type:     <no type info>
// ============================================================

void .get_default_encoding_idx(/* see target signature */)
{
    // Tail-call to get_default_encoding_idx via GOT/IAT indirection
    return get_default_encoding_idx(/* forwarded args */);
}

