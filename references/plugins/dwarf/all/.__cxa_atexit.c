// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA640
// Name:            .__cxa_atexit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA640 jmp     cs:off_CA308
//
// Resolved target: __cxa_atexit
// Target address:  0xD0C40
// GOT/IAT slot:    0xCA308
// Slot symbol:     off_CA308
// Target type:     int(void (*lpfunc)(void *), void *obj, void *lpdso_handle)
// ============================================================

/* see target sig */ .__cxa_atexit(/* see target signature */)
{
    // Tail-call to __cxa_atexit via GOT/IAT indirection
    return __cxa_atexit(/* forwarded args */);
}

