// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x73E0
// Name:            .__cxa_atexit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x73E0 jmp     cs:off_191D8
//
// Resolved target: __cxa_atexit
// Target address:  0x19708
// GOT/IAT slot:    0x191D8
// Slot symbol:     off_191D8
// Target type:     int(void (*lpfunc)(void *), void *obj, void *lpdso_handle)
// ============================================================

/* see target sig */ .__cxa_atexit(/* see target signature */)
{
    // Tail-call to __cxa_atexit via GOT/IAT indirection
    return __cxa_atexit(/* forwarded args */);
}

