// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACFB0
// Name:            .get_word
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACFB0 jmp     cs:off_2C7BFC0
//
// Resolved target: get_word
// Target address:  0x3BEED0
// GOT/IAT slot:    0x2C7BFC0
// Slot symbol:     off_2C7BFC0
// Target type:     <no type info>
// ============================================================

void .get_word(/* see target signature */)
{
    // Tail-call to get_word via GOT/IAT indirection
    return get_word(/* forwarded args */);
}

