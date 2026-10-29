// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA770
// Name:            .sem_open
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA770 jmp     cs:off_2C7ABA0
//
// Resolved target: sem_open
// Target address:  0x2D11998
// GOT/IAT slot:    0x2C7ABA0
// Slot symbol:     off_2C7ABA0
// Target type:     sem_t *(const char *name, int oflag, ...)
// ============================================================

/* see target sig */ .sem_open(/* see target signature */)
{
    // Tail-call to sem_open via GOT/IAT indirection
    return sem_open(/* forwarded args */);
}

