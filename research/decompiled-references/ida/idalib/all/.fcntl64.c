// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A76C0
// Name:            .fcntl64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A76C0 jmp     cs:off_2C79348
//
// Resolved target: fcntl64
// Target address:  0x2D113F8
// GOT/IAT slot:    0x2C79348
// Slot symbol:     off_2C79348
// Target type:     <no type info>
// ============================================================

void .fcntl64(/* see target signature */)
{
    // Tail-call to fcntl64 via GOT/IAT indirection
    return fcntl64(/* forwarded args */);
}

