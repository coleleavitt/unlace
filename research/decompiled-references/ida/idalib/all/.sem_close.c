// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A83C0
// Name:            .sem_close
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A83C0 jmp     cs:off_2C799C8
//
// Resolved target: sem_close
// Target address:  0x2D11578
// GOT/IAT slot:    0x2C799C8
// Slot symbol:     off_2C799C8
// Target type:     int(sem_t *sem)
// ============================================================

/* see target sig */ .sem_close(/* see target signature */)
{
    // Tail-call to sem_close via GOT/IAT indirection
    return sem_close(/* forwarded args */);
}

