// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2050
// Name:            .put_word
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2050 jmp     cs:off_B010
//
// Resolved target: put_word
// Target address:  0xB2B8
// GOT/IAT slot:    0xB010
// Slot symbol:     off_B010
// Target type:     <no type info>
// ============================================================

void .put_word(/* see target signature */)
{
    // Tail-call to put_word via GOT/IAT indirection
    return put_word(/* forwarded args */);
}

