// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2070
// Name:            .put_word
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2070 jmp     cs:off_B020
//
// Resolved target: put_word
// Target address:  0xB2B8
// GOT/IAT slot:    0xB020
// Slot symbol:     off_B020
// Target type:     <no type info>
// ============================================================

void .put_word(/* see target signature */)
{
    // Tail-call to put_word via GOT/IAT indirection
    return put_word(/* forwarded args */);
}

