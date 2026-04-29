// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A210
// Name:            .get_default_encoding_idx
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A210 jmp     cs:off_4BF0F0
//
// Resolved target: get_default_encoding_idx
// Target address:  0x4C25B8
// GOT/IAT slot:    0x4BF0F0
// Slot symbol:     off_4BF0F0
// Target type:     <no type info>
// ============================================================

void .get_default_encoding_idx(/* see target signature */)
{
    // Tail-call to get_default_encoding_idx via GOT/IAT indirection
    return get_default_encoding_idx(/* forwarded args */);
}

