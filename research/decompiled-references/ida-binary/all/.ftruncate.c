// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116A00
// Name:            .ftruncate
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116A00 jmp     cs:ftruncate_ptr
//
// Resolved target: ftruncate
// Target address:  0x8D6A28
// GOT/IAT slot:    0x8A21A0
// Slot symbol:     ftruncate_ptr
// Target type:     int(int fd, __off_t length)
// ============================================================

/* see target sig */ .ftruncate(/* see target signature */)
{
    // Tail-call to ftruncate via GOT/IAT indirection
    return ftruncate(/* forwarded args */);
}

