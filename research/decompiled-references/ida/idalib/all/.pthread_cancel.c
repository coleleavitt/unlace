// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8A60
// Name:            .pthread_cancel
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8A60 jmp     cs:off_2C79D18
//
// Resolved target: pthread_cancel
// Target address:  0x2D11660
// GOT/IAT slot:    0x2C79D18
// Slot symbol:     off_2C79D18
// Target type:     int(pthread_t th)
// ============================================================

/* see target sig */ .pthread_cancel(/* see target signature */)
{
    // Tail-call to pthread_cancel via GOT/IAT indirection
    return pthread_cancel(/* forwarded args */);
}

