// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACD60
// Name:            .sem_post
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACD60 jmp     cs:off_2C7BE98
//
// Resolved target: sem_post
// Target address:  0x2D11EF0
// GOT/IAT slot:    0x2C7BE98
// Slot symbol:     off_2C7BE98
// Target type:     int(sem_t *sem)
// ============================================================

/* see target sig */ .sem_post(/* see target signature */)
{
    // Tail-call to sem_post via GOT/IAT indirection
    return sem_post(/* forwarded args */);
}

