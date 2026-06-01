// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD350
// Name:            .sem_wait
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD350 jmp     cs:off_2C7C190
//
// Resolved target: sem_wait
// Target address:  0x2D11F98
// GOT/IAT slot:    0x2C7C190
// Slot symbol:     off_2C7C190
// Target type:     int(sem_t *sem)
// ============================================================

/* see target sig */ .sem_wait(/* see target signature */)
{
    // Tail-call to sem_wait via GOT/IAT indirection
    return sem_wait(/* forwarded args */);
}

