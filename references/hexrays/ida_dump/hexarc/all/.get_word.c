// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29130
// Name:            .get_word
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29130 jmp     cs:off_4B9080
//
// Resolved target: get_word
// Target address:  0x4BBA50
// GOT/IAT slot:    0x4B9080
// Slot symbol:     off_4B9080
// Target type:     <no type info>
// ============================================================

void .get_word(/* see target signature */)
{
    // Tail-call to get_word via GOT/IAT indirection
    return get_word(/* forwarded args */);
}

