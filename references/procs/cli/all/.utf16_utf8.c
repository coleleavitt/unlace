// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x33F0
// Name:            .utf16_utf8
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x33F0 jmp     cs:off_1A1E0
//
// Resolved target: utf16_utf8
// Target address:  0x1A4B8
// GOT/IAT slot:    0x1A1E0
// Slot symbol:     off_1A1E0
// Target type:     <no type info>
// ============================================================

void .utf16_utf8(/* see target signature */)
{
    // Tail-call to utf16_utf8 via GOT/IAT indirection
    return utf16_utf8(/* forwarded args */);
}

