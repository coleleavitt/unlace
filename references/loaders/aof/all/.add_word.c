// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2140
// Name:            .add_word
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2140 jmp     cs:off_7088
//
// Resolved target: add_word
// Target address:  0x7240
// GOT/IAT slot:    0x7088
// Slot symbol:     off_7088
// Target type:     <no type info>
// ============================================================

void .add_word(/* see target signature */)
{
    // Tail-call to add_word via GOT/IAT indirection
    return add_word(/* forwarded args */);
}

