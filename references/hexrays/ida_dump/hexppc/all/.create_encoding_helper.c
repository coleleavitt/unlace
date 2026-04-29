// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C020
// Name:            .create_encoding_helper
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C020 jmp     cs:off_4DAFF8
//
// Resolved target: create_encoding_helper
// Target address:  0x4DDA28
// GOT/IAT slot:    0x4DAFF8
// Slot symbol:     off_4DAFF8
// Target type:     <no type info>
// ============================================================

void .create_encoding_helper(/* see target signature */)
{
    // Tail-call to create_encoding_helper via GOT/IAT indirection
    return create_encoding_helper(/* forwarded args */);
}

