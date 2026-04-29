// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E2C0
// Name:            .get_utf8_char
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E2C0 jmp     cs:off_4E9948
//
// Resolved target: get_utf8_char
// Target address:  0x4EC368
// GOT/IAT slot:    0x4E9948
// Slot symbol:     off_4E9948
// Target type:     <no type info>
// ============================================================

void .get_utf8_char(/* see target signature */)
{
    // Tail-call to get_utf8_char via GOT/IAT indirection
    return get_utf8_char(/* forwarded args */);
}

