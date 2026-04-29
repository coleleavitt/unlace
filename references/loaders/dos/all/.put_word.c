// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20A0
// Name:            .put_word
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20A0 jmp     cs:off_B038
//
// Resolved target: put_word
// Target address:  0xB4D0
// GOT/IAT slot:    0xB038
// Slot symbol:     off_B038
// Target type:     <no type info>
// ============================================================

void .put_word(/* see target signature */)
{
    // Tail-call to put_word via GOT/IAT indirection
    return put_word(/* forwarded args */);
}

