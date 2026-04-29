// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4270
// Name:            .add_word
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4270 jmp     cs:off_23120
//
// Resolved target: add_word
// Target address:  0x23540
// GOT/IAT slot:    0x23120
// Slot symbol:     off_23120
// Target type:     <no type info>
// ============================================================

void .add_word(/* see target signature */)
{
    // Tail-call to add_word via GOT/IAT indirection
    return add_word(/* forwarded args */);
}

