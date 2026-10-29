// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC580
// Name:            .get_utf8_char
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC580 jmp     cs:off_2C7BAA8
//
// Resolved target: get_utf8_char
// Target address:  0x82CB10
// GOT/IAT slot:    0x2C7BAA8
// Slot symbol:     off_2C7BAA8
// Target type:     <no type info>
// ============================================================

void .get_utf8_char(/* see target signature */)
{
    // Tail-call to get_utf8_char via GOT/IAT indirection
    return get_utf8_char(/* forwarded args */);
}

