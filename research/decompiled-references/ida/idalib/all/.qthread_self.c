// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABA80
// Name:            .qthread_self
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABA80 jmp     cs:off_2C7B528
//
// Resolved target: qthread_self
// Target address:  0x842330
// GOT/IAT slot:    0x2C7B528
// Slot symbol:     off_2C7B528
// Target type:     pthread_t(void)
// ============================================================

/* see target sig */ .qthread_self(/* see target signature */)
{
    // Tail-call to qthread_self via GOT/IAT indirection
    return qthread_self(/* forwarded args */);
}

