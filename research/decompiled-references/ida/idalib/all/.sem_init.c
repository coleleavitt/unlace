// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC2F0
// Name:            .sem_init
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC2F0 jmp     cs:off_2C7B960
//
// Resolved target: sem_init
// Target address:  0x2D11D58
// GOT/IAT slot:    0x2C7B960
// Slot symbol:     off_2C7B960
// Target type:     int(sem_t *sem, int pshared, unsigned int value)
// ============================================================

/* see target sig */ .sem_init(/* see target signature */)
{
    // Tail-call to sem_init via GOT/IAT indirection
    return sem_init(/* forwarded args */);
}

