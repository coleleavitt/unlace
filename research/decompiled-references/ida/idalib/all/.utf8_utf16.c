// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA6F0
// Name:            .utf8_utf16
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA6F0 jmp     cs:off_2C7AB60
//
// Resolved target: utf8_utf16
// Target address:  0x82D880
// GOT/IAT slot:    0x2C7AB60
// Slot symbol:     off_2C7AB60
// Target type:     <no type info>
// ============================================================

void .utf8_utf16(/* see target signature */)
{
    // Tail-call to utf8_utf16 via GOT/IAT indirection
    return utf8_utf16(/* forwarded args */);
}

