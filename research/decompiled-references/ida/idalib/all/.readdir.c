// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC6E0
// Name:            .readdir
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC6E0 jmp     cs:off_2C7BB58
//
// Resolved target: readdir
// Target address:  0x2D11DE8
// GOT/IAT slot:    0x2C7BB58
// Slot symbol:     off_2C7BB58
// Target type:     struct dirent *(DIR *dirp)
// ============================================================

/* see target sig */ .readdir(/* see target signature */)
{
    // Tail-call to readdir via GOT/IAT indirection
    return readdir(/* forwarded args */);
}

