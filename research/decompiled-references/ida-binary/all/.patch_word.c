// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116B60
// Name:            .patch_word
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116B60 jmp     cs:patch_word_ptr
//
// Resolved target: patch_word
// Target address:  0x8D6B08
// GOT/IAT slot:    0x8A2250
// Slot symbol:     patch_word_ptr
// Target type:     <no type info>
// ============================================================

void .patch_word(/* see target signature */)
{
    // Tail-call to patch_word via GOT/IAT indirection
    return patch_word(/* forwarded args */);
}

