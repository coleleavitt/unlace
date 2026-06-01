// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119210
// Name:            .set_default_encoding_idx
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119210 jmp     cs:set_default_encoding_idx_ptr
//
// Resolved target: set_default_encoding_idx
// Target address:  0x8D8310
// GOT/IAT slot:    0x8A35A8
// Slot symbol:     set_default_encoding_idx_ptr
// Target type:     <no type info>
// ============================================================

void .set_default_encoding_idx(/* see target signature */)
{
    // Tail-call to set_default_encoding_idx via GOT/IAT indirection
    return set_default_encoding_idx(/* forwarded args */);
}

