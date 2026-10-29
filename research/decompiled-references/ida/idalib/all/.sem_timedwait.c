// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA8F0
// Name:            .sem_timedwait
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA8F0 jmp     cs:off_2C7AC60
//
// Resolved target: sem_timedwait
// Target address:  0x2D119C0
// GOT/IAT slot:    0x2C7AC60
// Slot symbol:     off_2C7AC60
// Target type:     int(sem_t *sem, const struct timespec *abstime)
// ============================================================

/* see target sig */ .sem_timedwait(/* see target signature */)
{
    // Tail-call to sem_timedwait via GOT/IAT indirection
    return sem_timedwait(/* forwarded args */);
}

