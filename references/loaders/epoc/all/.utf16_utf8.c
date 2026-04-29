// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3500
// Name:            .utf16_utf8
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3500 jmp     cs:off_13268
//
// Resolved target: utf16_utf8
// Target address:  0x13978
// GOT/IAT slot:    0x13268
// Slot symbol:     off_13268
// Target type:     <no type info>
// ============================================================

void .utf16_utf8(/* see target signature */)
{
    // Tail-call to utf16_utf8 via GOT/IAT indirection
    return utf16_utf8(/* forwarded args */);
}

