// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD230
// Name:            .qthread_free
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD230 jmp     cs:off_2C7C100
//
// Resolved target: qthread_free
// Target address:  0x842370
// GOT/IAT slot:    0x2C7C100
// Slot symbol:     off_2C7C100
// Target type:     int(pthread_t th)
// ============================================================

/* see target sig */ .qthread_free(/* see target signature */)
{
    // Tail-call to qthread_free via GOT/IAT indirection
    return qthread_free(/* forwarded args */);
}

