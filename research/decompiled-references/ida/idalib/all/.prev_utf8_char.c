// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA9F0
// Name:            .prev_utf8_char
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA9F0 jmp     cs:off_2C7ACE0
//
// Resolved target: prev_utf8_char
// Target address:  0x82CCC0
// GOT/IAT slot:    0x2C7ACE0
// Slot symbol:     off_2C7ACE0
// Target type:     <no type info>
// ============================================================

void .prev_utf8_char(/* see target signature */)
{
    // Tail-call to prev_utf8_char via GOT/IAT indirection
    return prev_utf8_char(/* forwarded args */);
}

