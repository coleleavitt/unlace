// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B000
// Name:            .create_encoding_helper
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B000 jmp     cs:off_4B9FE8
//
// Resolved target: create_encoding_helper
// Target address:  0x4BCA18
// GOT/IAT slot:    0x4B9FE8
// Slot symbol:     off_4B9FE8
// Target type:     <no type info>
// ============================================================

void .create_encoding_helper(/* see target signature */)
{
    // Tail-call to create_encoding_helper via GOT/IAT indirection
    return create_encoding_helper(/* forwarded args */);
}

