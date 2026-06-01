// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113780
// Name:            .get_original_word
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113780 jmp     cs:get_original_word_ptr
//
// Resolved target: get_original_word
// Target address:  0x8D49F8
// GOT/IAT slot:    0x8A0860
// Slot symbol:     get_original_word_ptr
// Target type:     <no type info>
// ============================================================

void .get_original_word(/* see target signature */)
{
    // Tail-call to get_original_word via GOT/IAT indirection
    return get_original_word(/* forwarded args */);
}

