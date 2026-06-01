// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113C50
// Name:            .add_encoding
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113C50 jmp     cs:add_encoding_ptr
//
// Resolved target: add_encoding
// Target address:  0x8D4D20
// GOT/IAT slot:    0x8A0AC8
// Slot symbol:     add_encoding_ptr
// Target type:     <no type info>
// ============================================================

void .add_encoding(/* see target signature */)
{
    // Tail-call to add_encoding via GOT/IAT indirection
    return add_encoding(/* forwarded args */);
}

