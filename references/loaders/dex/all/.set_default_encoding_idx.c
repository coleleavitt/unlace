// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3170
// Name:            .set_default_encoding_idx
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3170 jmp     cs:off_280A0
//
// Resolved target: set_default_encoding_idx
// Target address:  0x28550
// GOT/IAT slot:    0x280A0
// Slot symbol:     off_280A0
// Target type:     <no type info>
// ============================================================

void .set_default_encoding_idx(/* see target signature */)
{
    // Tail-call to set_default_encoding_idx via GOT/IAT indirection
    return set_default_encoding_idx(/* forwarded args */);
}

