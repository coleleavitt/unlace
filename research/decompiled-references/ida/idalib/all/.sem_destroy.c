// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8670
// Name:            .sem_destroy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8670 jmp     cs:off_2C79B20
//
// Resolved target: sem_destroy
// Target address:  0x2D115C0
// GOT/IAT slot:    0x2C79B20
// Slot symbol:     off_2C79B20
// Target type:     int(sem_t *sem)
// ============================================================

/* see target sig */ .sem_destroy(/* see target signature */)
{
    // Tail-call to sem_destroy via GOT/IAT indirection
    return sem_destroy(/* forwarded args */);
}

