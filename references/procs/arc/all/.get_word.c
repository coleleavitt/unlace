// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8060
// Name:            .get_word
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8060 jmp     cs:off_2A018
//
// Resolved target: get_word
// Target address:  0x2BA28
// GOT/IAT slot:    0x2A018
// Slot symbol:     off_2A018
// Target type:     <no type info>
// ============================================================

void .get_word(/* see target signature */)
{
    // Tail-call to get_word via GOT/IAT indirection
    return get_word(/* forwarded args */);
}

