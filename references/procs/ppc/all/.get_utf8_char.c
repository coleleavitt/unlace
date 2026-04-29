// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20940
// Name:            .get_utf8_char
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20940 jmp     cs:off_95488
//
// Resolved target: get_utf8_char
// Target address:  0x95EC0
// GOT/IAT slot:    0x95488
// Slot symbol:     off_95488
// Target type:     <no type info>
// ============================================================

void .get_utf8_char(/* see target signature */)
{
    // Tail-call to get_utf8_char via GOT/IAT indirection
    return get_utf8_char(/* forwarded args */);
}

