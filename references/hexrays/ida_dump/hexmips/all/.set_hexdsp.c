// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B030
// Name:            .set_hexdsp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B030 jmp     cs:off_4CD800
//
// Resolved target: set_hexdsp
// Target address:  0x4D0218
// GOT/IAT slot:    0x4CD800
// Slot symbol:     off_4CD800
// Target type:     <no type info>
// ============================================================

void .set_hexdsp(/* see target signature */)
{
    // Tail-call to set_hexdsp via GOT/IAT indirection
    return set_hexdsp(/* forwarded args */);
}

