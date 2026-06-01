// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8A40
// Name:            .qthread_create
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8A40 jmp     cs:off_2C79D08
//
// Resolved target: qthread_create
// Target address:  0x842C40
// GOT/IAT slot:    0x2C79D08
// Slot symbol:     off_2C79D08
// Target type:     __int64 __fastcall(void *(*start_routine)(void *), void *arg)
// ============================================================

/* see target sig */ .qthread_create(/* see target signature */)
{
    // Tail-call to qthread_create via GOT/IAT indirection
    return qthread_create(/* forwarded args */);
}

