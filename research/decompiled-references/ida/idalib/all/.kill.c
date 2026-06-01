// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACB80
// Name:            .kill
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACB80 jmp     cs:off_2C7BDA8
//
// Resolved target: kill
// Target address:  0x2D11EA0
// GOT/IAT slot:    0x2C7BDA8
// Slot symbol:     off_2C7BDA8
// Target type:     int(__pid_t pid, int sig)
// ============================================================

/* see target sig */ .kill(/* see target signature */)
{
    // Tail-call to kill via GOT/IAT indirection
    return kill(/* forwarded args */);
}

