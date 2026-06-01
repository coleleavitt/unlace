// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABDA0
// Name:            .closedir
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABDA0 jmp     cs:off_2C7B6B8
//
// Resolved target: closedir
// Target address:  0x2D11CB8
// GOT/IAT slot:    0x2C7B6B8
// Slot symbol:     off_2C7B6B8
// Target type:     int(DIR *dirp)
// ============================================================

/* see target sig */ .closedir(/* see target signature */)
{
    // Tail-call to closedir via GOT/IAT indirection
    return closedir(/* forwarded args */);
}

