// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1DC60
// Name:            .utf16_utf8
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1DC60 jmp     cs:off_B3618
//
// Resolved target: utf16_utf8
// Target address:  0xB3DF8
// GOT/IAT slot:    0xB3618
// Slot symbol:     off_B3618
// Target type:     <no type info>
// ============================================================

void .utf16_utf8(/* see target signature */)
{
    // Tail-call to utf16_utf8 via GOT/IAT indirection
    return utf16_utf8(/* forwarded args */);
}

