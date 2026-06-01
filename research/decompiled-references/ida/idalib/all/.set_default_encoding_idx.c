// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC210
// Name:            .set_default_encoding_idx
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC210 jmp     cs:off_2C7B8F0
//
// Resolved target: set_default_encoding_idx
// Target address:  0x5AAFB0
// GOT/IAT slot:    0x2C7B8F0
// Slot symbol:     off_2C7B8F0
// Target type:     <no type info>
// ============================================================

void .set_default_encoding_idx(/* see target signature */)
{
    // Tail-call to set_default_encoding_idx via GOT/IAT indirection
    return set_default_encoding_idx(/* forwarded args */);
}

