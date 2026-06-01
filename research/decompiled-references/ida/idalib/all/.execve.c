// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD410
// Name:            .execve
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD410 jmp     cs:off_2C7C1F0
//
// Resolved target: execve
// Target address:  0x2D11FC0
// GOT/IAT slot:    0x2C7C1F0
// Slot symbol:     off_2C7C1F0
// Target type:     int(const char *path, char *const argv[], char *const envp[])
// ============================================================

/* see target sig */ .execve(/* see target signature */)
{
    // Tail-call to execve via GOT/IAT indirection
    return execve(/* forwarded args */);
}

