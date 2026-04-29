// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A020
// Name:            .set_hexdsp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A020 jmp     cs:off_4B97F8
//
// Resolved target: set_hexdsp
// Target address:  0x4BC1F0
// GOT/IAT slot:    0x4B97F8
// Slot symbol:     off_4B97F8
// Target type:     <no type info>
// ============================================================

void .set_hexdsp(/* see target signature */)
{
    // Tail-call to set_hexdsp via GOT/IAT indirection
    return set_hexdsp(/* forwarded args */);
}

