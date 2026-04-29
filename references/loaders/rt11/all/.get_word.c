// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1060
// Name:            .get_word
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1060 jmp     cs:off_5018
//
// Resolved target: get_word
// Target address:  0x5198
// GOT/IAT slot:    0x5018
// Slot symbol:     off_5018
// Target type:     <no type info>
// ============================================================

void .get_word(/* see target signature */)
{
    // Tail-call to get_word via GOT/IAT indirection
    return get_word(/* forwarded args */);
}

