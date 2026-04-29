// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C020
// Name:            .__cxa_atexit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C020 jmp     cs:off_4ED7F8
//
// Resolved target: __cxa_atexit
// Target address:  0x4F1B08
// GOT/IAT slot:    0x4ED7F8
// Slot symbol:     off_4ED7F8
// Target type:     int(void (*lpfunc)(void *), void *obj, void *lpdso_handle)
// ============================================================

/* see target sig */ .__cxa_atexit(/* see target signature */)
{
    // Tail-call to __cxa_atexit via GOT/IAT indirection
    return __cxa_atexit(/* forwarded args */);
}

