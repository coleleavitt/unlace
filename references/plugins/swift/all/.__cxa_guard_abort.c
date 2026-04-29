// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4310
// Name:            .__cxa_guard_abort
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4310 jmp     cs:off_28170
//
// Resolved target: __cxa_guard_abort
// Target address:  0x29B08
// GOT/IAT slot:    0x28170
// Slot symbol:     off_28170
// Target type:     void(__guard *)
// ============================================================

/* see target sig */ .__cxa_guard_abort(/* see target signature */)
{
    // Tail-call to __cxa_guard_abort via GOT/IAT indirection
    return __cxa_guard_abort(/* forwarded args */);
}

