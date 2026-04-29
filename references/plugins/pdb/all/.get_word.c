// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D030
// Name:            .get_word
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D030 jmp     cs:off_B3000
//
// Resolved target: get_word
// Target address:  0xB3770
// GOT/IAT slot:    0xB3000
// Slot symbol:     off_B3000
// Target type:     <no type info>
// ============================================================

void .get_word(/* see target signature */)
{
    // Tail-call to get_word via GOT/IAT indirection
    return get_word(/* forwarded args */);
}

