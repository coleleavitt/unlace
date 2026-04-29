// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C0B0
// Name:            .set_hexdsp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C0B0 jmp     cs:off_4ED840
//
// Resolved target: set_hexdsp
// Target address:  0x4F1B50
// GOT/IAT slot:    0x4ED840
// Slot symbol:     off_4ED840
// Target type:     <no type info>
// ============================================================

void .set_hexdsp(/* see target signature */)
{
    // Tail-call to set_hexdsp via GOT/IAT indirection
    return set_hexdsp(/* forwarded args */);
}

