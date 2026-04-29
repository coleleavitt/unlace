// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4090
// Name:            .put_word
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4090 jmp     cs:off_23030
//
// Resolved target: put_word
// Target address:  0x23450
// GOT/IAT slot:    0x23030
// Slot symbol:     off_23030
// Target type:     <no type info>
// ============================================================

void .put_word(/* see target signature */)
{
    // Tail-call to put_word via GOT/IAT indirection
    return put_word(/* forwarded args */);
}

