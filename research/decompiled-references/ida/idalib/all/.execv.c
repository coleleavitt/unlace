// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9B00
// Name:            .execv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9B00 jmp     cs:off_2C7A568
//
// Resolved target: execv
// Target address:  0x2D11840
// GOT/IAT slot:    0x2C7A568
// Slot symbol:     off_2C7A568
// Target type:     int(const char *path, char *const argv[])
// ============================================================

/* see target sig */ .execv(/* see target signature */)
{
    // Tail-call to execv via GOT/IAT indirection
    return execv(/* forwarded args */);
}

