// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABD50
// Name:            .dup2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABD50 jmp     cs:off_2C7B690
//
// Resolved target: dup2
// Target address:  0x2D11CB0
// GOT/IAT slot:    0x2C7B690
// Slot symbol:     off_2C7B690
// Target type:     int(int fd, int fd2)
// ============================================================

/* see target sig */ .dup2(/* see target signature */)
{
    // Tail-call to dup2 via GOT/IAT indirection
    return dup2(/* forwarded args */);
}

