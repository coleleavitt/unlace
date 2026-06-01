// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A910
// Name:            .get_word
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A910 jmp     cs:get_word_ptr
//
// Resolved target: get_word
// Target address:  0x8D9200
// GOT/IAT slot:    0x8A4128
// Slot symbol:     get_word_ptr
// Target type:     <no type info>
// ============================================================

void .get_word(/* see target signature */)
{
    // Tail-call to get_word via GOT/IAT indirection
    return get_word(/* forwarded args */);
}

