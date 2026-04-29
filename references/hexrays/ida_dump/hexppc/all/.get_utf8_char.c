// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B280
// Name:            .get_utf8_char
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B280 jmp     cs:off_4DA928
//
// Resolved target: get_utf8_char
// Target address:  0x4DD328
// GOT/IAT slot:    0x4DA928
// Slot symbol:     off_4DA928
// Target type:     <no type info>
// ============================================================

void .get_utf8_char(/* see target signature */)
{
    // Tail-call to get_utf8_char via GOT/IAT indirection
    return get_utf8_char(/* forwarded args */);
}

