// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB410
// Name:            .put_utf8_char
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB410 jmp     cs:off_2C7B1F0
//
// Resolved target: put_utf8_char
// Target address:  0x82CDD0
// GOT/IAT slot:    0x2C7B1F0
// Slot symbol:     off_2C7B1F0
// Target type:     <no type info>
// ============================================================

void .put_utf8_char(/* see target signature */)
{
    // Tail-call to put_utf8_char via GOT/IAT indirection
    return put_utf8_char(/* forwarded args */);
}

