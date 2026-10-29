// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA9A0
// Name:            .patch_word
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA9A0 jmp     cs:off_2C7ACB8
//
// Resolved target: patch_word
// Target address:  0x59AF40
// GOT/IAT slot:    0x2C7ACB8
// Slot symbol:     off_2C7ACB8
// Target type:     <no type info>
// ============================================================

void .patch_word(/* see target signature */)
{
    // Tail-call to patch_word via GOT/IAT indirection
    return patch_word(/* forwarded args */);
}

