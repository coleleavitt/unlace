// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x90C0
// Name:            .put_word
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x90C0 jmp     cs:off_89048
//
// Resolved target: put_word
// Target address:  0x8C348
// GOT/IAT slot:    0x89048
// Slot symbol:     off_89048
// Target type:     <no type info>
// ============================================================

void .put_word(/* see target signature */)
{
    // Tail-call to put_word via GOT/IAT indirection
    return put_word(/* forwarded args */);
}

