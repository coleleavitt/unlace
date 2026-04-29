// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1050
// Name:            .put_word
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1050 jmp     cs:off_5010
//
// Resolved target: put_word
// Target address:  0x5148
// GOT/IAT slot:    0x5010
// Slot symbol:     off_5010
// Target type:     <no type info>
// ============================================================

void .put_word(/* see target signature */)
{
    // Tail-call to put_word via GOT/IAT indirection
    return put_word(/* forwarded args */);
}

