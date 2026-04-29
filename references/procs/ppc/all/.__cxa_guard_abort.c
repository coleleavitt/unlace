// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20530
// Name:            .__cxa_guard_abort
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20530 jmp     cs:off_95280
//
// Resolved target: __cxa_guard_abort
// Target address:  0x95CB8
// GOT/IAT slot:    0x95280
// Slot symbol:     off_95280
// Target type:     void(__guard *)
// ============================================================

/* see target sig */ .__cxa_guard_abort(/* see target signature */)
{
    // Tail-call to __cxa_guard_abort via GOT/IAT indirection
    return __cxa_guard_abort(/* forwarded args */);
}

