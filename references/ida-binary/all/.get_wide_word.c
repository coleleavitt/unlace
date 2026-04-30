// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116D30
// Name:            .get_wide_word
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116D30 jmp     cs:get_wide_word_ptr
//
// Resolved target: get_wide_word
// Target address:  0x8D6C20
// GOT/IAT slot:    0x8A2338
// Slot symbol:     get_wide_word_ptr
// Target type:     <no type info>
// ============================================================

void .get_wide_word(/* see target signature */)
{
    // Tail-call to get_wide_word via GOT/IAT indirection
    return get_wide_word(/* forwarded args */);
}

