// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E050
// Name:            .set_hexdsp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E050 jmp     cs:off_4E9810
//
// Resolved target: set_hexdsp
// Target address:  0x4EC228
// GOT/IAT slot:    0x4E9810
// Slot symbol:     off_4E9810
// Target type:     <no type info>
// ============================================================

void .set_hexdsp(/* see target signature */)
{
    // Tail-call to set_hexdsp via GOT/IAT indirection
    return set_hexdsp(/* forwarded args */);
}

