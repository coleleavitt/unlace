// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9E50
// Name:            .execvp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9E50 jmp     cs:off_2C7A710
//
// Resolved target: execvp
// Target address:  0x2D118C0
// GOT/IAT slot:    0x2C7A710
// Slot symbol:     off_2C7A710
// Target type:     int(const char *file, char *const argv[])
// ============================================================

/* see target sig */ .execvp(/* see target signature */)
{
    // Tail-call to execvp via GOT/IAT indirection
    return execvp(/* forwarded args */);
}

