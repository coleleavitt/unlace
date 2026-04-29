// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA040
// Name:            .get_word
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA040 jmp     cs:off_35008
//
// Resolved target: get_word
// Target address:  0x35658
// GOT/IAT slot:    0x35008
// Slot symbol:     off_35008
// Target type:     <no type info>
// ============================================================

void .get_word(/* see target signature */)
{
    // Tail-call to get_word via GOT/IAT indirection
    return get_word(/* forwarded args */);
}

