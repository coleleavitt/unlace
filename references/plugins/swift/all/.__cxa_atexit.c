// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4430
// Name:            .__cxa_atexit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4430 jmp     cs:off_28200
//
// Resolved target: __cxa_atexit
// Target address:  0x29B98
// GOT/IAT slot:    0x28200
// Slot symbol:     off_28200
// Target type:     int(void (*lpfunc)(void *), void *obj, void *lpdso_handle)
// ============================================================

/* see target sig */ .__cxa_atexit(/* see target signature */)
{
    // Tail-call to __cxa_atexit via GOT/IAT indirection
    return __cxa_atexit(/* forwarded args */);
}

