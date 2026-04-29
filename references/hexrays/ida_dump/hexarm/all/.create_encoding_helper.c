// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2F060
// Name:            .create_encoding_helper
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2F060 jmp     cs:off_4EA018
//
// Resolved target: create_encoding_helper
// Target address:  0x4ECA68
// GOT/IAT slot:    0x4EA018
// Slot symbol:     off_4EA018
// Target type:     <no type info>
// ============================================================

void .create_encoding_helper(/* see target signature */)
{
    // Tail-call to create_encoding_helper via GOT/IAT indirection
    return create_encoding_helper(/* forwarded args */);
}

