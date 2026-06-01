// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC180
// Name:            .ftruncate64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC180 jmp     cs:off_2C7B8A8
//
// Resolved target: ftruncate64
// Target address:  0x2D11D28
// GOT/IAT slot:    0x2C7B8A8
// Slot symbol:     off_2C7B8A8
// Target type:     int(int fd, __off64_t length)
// ============================================================

/* see target sig */ .ftruncate64(/* see target signature */)
{
    // Tail-call to ftruncate64 via GOT/IAT indirection
    return ftruncate64(/* forwarded args */);
}

