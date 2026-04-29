// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D170
// Name:            .create_encoding_helper
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D170 jmp     cs:off_4EE0A0
//
// Resolved target: create_encoding_helper
// Target address:  0x4F23F0
// GOT/IAT slot:    0x4EE0A0
// Slot symbol:     off_4EE0A0
// Target type:     <no type info>
// ============================================================

void .create_encoding_helper(/* see target signature */)
{
    // Tail-call to create_encoding_helper via GOT/IAT indirection
    return create_encoding_helper(/* forwarded args */);
}

