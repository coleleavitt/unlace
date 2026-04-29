// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20080
// Name:            .get_word
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20080 jmp     cs:off_95028
//
// Resolved target: get_word
// Target address:  0x95A58
// GOT/IAT slot:    0x95028
// Slot symbol:     off_95028
// Target type:     <no type info>
// ============================================================

void .get_word(/* see target signature */)
{
    // Tail-call to get_word via GOT/IAT indirection
    return get_word(/* forwarded args */);
}

