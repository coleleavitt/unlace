// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C340
// Name:            .get_utf8_char
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C340 jmp     cs:off_4ED988
//
// Resolved target: get_utf8_char
// Target address:  0x4F1CA8
// GOT/IAT slot:    0x4ED988
// Slot symbol:     off_4ED988
// Target type:     <no type info>
// ============================================================

void .get_utf8_char(/* see target signature */)
{
    // Tail-call to get_utf8_char via GOT/IAT indirection
    return get_utf8_char(/* forwarded args */);
}

