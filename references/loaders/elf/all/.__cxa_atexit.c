// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9520
// Name:            .__cxa_atexit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9520 jmp     cs:off_89278
//
// Resolved target: __cxa_atexit
// Target address:  0x8C580
// GOT/IAT slot:    0x89278
// Slot symbol:     off_89278
// Target type:     int(void (*lpfunc)(void *), void *obj, void *lpdso_handle)
// ============================================================

/* see target sig */ .__cxa_atexit(/* see target signature */)
{
    // Tail-call to __cxa_atexit via GOT/IAT indirection
    return __cxa_atexit(/* forwarded args */);
}

