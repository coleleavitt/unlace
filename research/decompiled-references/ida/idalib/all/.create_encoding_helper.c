// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC3D0
// Name:            .create_encoding_helper
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC3D0 jmp     cs:off_2C7B9D0
//
// Resolved target: create_encoding_helper
// Target address:  0x63DA50
// GOT/IAT slot:    0x2C7B9D0
// Slot symbol:     off_2C7B9D0
// Target type:     <no type info>
// ============================================================

void .create_encoding_helper(/* see target signature */)
{
    // Tail-call to create_encoding_helper via GOT/IAT indirection
    return create_encoding_helper(/* forwarded args */);
}

