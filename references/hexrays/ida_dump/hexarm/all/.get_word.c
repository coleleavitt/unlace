// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D130
// Name:            .get_word
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D130 jmp     cs:off_4E9080
//
// Resolved target: get_word
// Target address:  0x4EBA70
// GOT/IAT slot:    0x4E9080
// Slot symbol:     off_4E9080
// Target type:     <no type info>
// ============================================================

void .get_word(/* see target signature */)
{
    // Tail-call to get_word via GOT/IAT indirection
    return get_word(/* forwarded args */);
}

