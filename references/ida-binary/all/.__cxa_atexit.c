// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114DC0
// Name:            .__cxa_atexit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114DC0 jmp     cs:__cxa_atexit_ptr
//
// Resolved target: __cxa_atexit
// Target address:  0x8D5878
// GOT/IAT slot:    0x8A1380
// Slot symbol:     __cxa_atexit_ptr
// Target type:     int(void (*lpfunc)(void *), void *obj, void *lpdso_handle)
// ============================================================

/* see target sig */ .__cxa_atexit(/* see target signature */)
{
    // Tail-call to __cxa_atexit via GOT/IAT indirection
    return __cxa_atexit(/* forwarded args */);
}

