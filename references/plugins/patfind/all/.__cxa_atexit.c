// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2190
// Name:            .__cxa_atexit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2190 jmp     cs:off_130B0
//
// Resolved target: __cxa_atexit
// Target address:  0x13348
// GOT/IAT slot:    0x130B0
// Slot symbol:     off_130B0
// Target type:     int(void (*lpfunc)(void *), void *obj, void *lpdso_handle)
// ============================================================

/* see target sig */ .__cxa_atexit(/* see target signature */)
{
    // Tail-call to __cxa_atexit via GOT/IAT indirection
    return __cxa_atexit(/* forwarded args */);
}

