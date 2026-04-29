// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6700
// Name:            .add_encoding
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6700 jmp     cs:off_2F368
//
// Resolved target: add_encoding
// Target address:  0x2F9E0
// GOT/IAT slot:    0x2F368
// Slot symbol:     off_2F368
// Target type:     <no type info>
// ============================================================

void .add_encoding(/* see target signature */)
{
    // Tail-call to add_encoding via GOT/IAT indirection
    return add_encoding(/* forwarded args */);
}

