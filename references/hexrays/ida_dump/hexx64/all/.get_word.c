// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B130
// Name:            .get_word
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B130 jmp     cs:off_4ED080
//
// Resolved target: get_word
// Target address:  0x4F1378
// GOT/IAT slot:    0x4ED080
// Slot symbol:     off_4ED080
// Target type:     <no type info>
// ============================================================

void .get_word(/* see target signature */)
{
    // Tail-call to get_word via GOT/IAT indirection
    return get_word(/* forwarded args */);
}

