// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20120
// Name:            .put_word
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20120 jmp     cs:off_95078
//
// Resolved target: put_word
// Target address:  0x95AA8
// GOT/IAT slot:    0x95078
// Slot symbol:     off_95078
// Target type:     <no type info>
// ============================================================

void .put_word(/* see target signature */)
{
    // Tail-call to put_word via GOT/IAT indirection
    return put_word(/* forwarded args */);
}

