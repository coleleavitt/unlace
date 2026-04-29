// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9050
// Name:            .get_word
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9050 jmp     cs:off_89010
//
// Resolved target: get_word
// Target address:  0x8C310
// GOT/IAT slot:    0x89010
// Slot symbol:     off_89010
// Target type:     <no type info>
// ============================================================

void .get_word(/* see target signature */)
{
    // Tail-call to get_word via GOT/IAT indirection
    return get_word(/* forwarded args */);
}

