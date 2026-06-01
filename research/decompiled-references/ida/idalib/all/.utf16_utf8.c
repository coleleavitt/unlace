// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7E10
// Name:            .utf16_utf8
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7E10 jmp     cs:off_2C796F0
//
// Resolved target: utf16_utf8
// Target address:  0x82D100
// GOT/IAT slot:    0x2C796F0
// Slot symbol:     off_2C796F0
// Target type:     <no type info>
// ============================================================

void .utf16_utf8(/* see target signature */)
{
    // Tail-call to utf16_utf8 via GOT/IAT indirection
    return utf16_utf8(/* forwarded args */);
}

