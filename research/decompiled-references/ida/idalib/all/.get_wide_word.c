// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAA80
// Name:            .get_wide_word
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAA80 jmp     cs:off_2C7AD28
//
// Resolved target: get_wide_word
// Target address:  0x3BF2D0
// GOT/IAT slot:    0x2C7AD28
// Slot symbol:     off_2C7AD28
// Target type:     <no type info>
// ============================================================

void .get_wide_word(/* see target signature */)
{
    // Tail-call to get_wide_word via GOT/IAT indirection
    return get_wide_word(/* forwarded args */);
}

