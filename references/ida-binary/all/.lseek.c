// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112480
// Name:            .lseek
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112480 jmp     cs:lseek_ptr
//
// Resolved target: lseek
// Target address:  0x8D3DB8
// GOT/IAT slot:    0x89FEE0
// Slot symbol:     lseek_ptr
// Target type:     __off_t(int fd, __off_t offset, int whence)
// ============================================================

/* see target sig */ .lseek(/* see target signature */)
{
    // Tail-call to lseek via GOT/IAT indirection
    return lseek(/* forwarded args */);
}

