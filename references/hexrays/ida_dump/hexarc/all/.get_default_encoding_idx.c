// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29210
// Name:            .get_default_encoding_idx
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29210 jmp     cs:off_4B90F0
//
// Resolved target: get_default_encoding_idx
// Target address:  0x4BBAC0
// GOT/IAT slot:    0x4B90F0
// Slot symbol:     off_4B90F0
// Target type:     <no type info>
// ============================================================

void .get_default_encoding_idx(/* see target signature */)
{
    // Tail-call to get_default_encoding_idx via GOT/IAT indirection
    return get_default_encoding_idx(/* forwarded args */);
}

