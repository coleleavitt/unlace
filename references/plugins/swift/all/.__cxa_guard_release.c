// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4320
// Name:            .__cxa_guard_release
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4320 jmp     cs:off_28178
//
// Resolved target: __cxa_guard_release
// Target address:  0x29B10
// GOT/IAT slot:    0x28178
// Slot symbol:     off_28178
// Target type:     void(__guard *)
// ============================================================

/* see target sig */ .__cxa_guard_release(/* see target signature */)
{
    // Tail-call to __cxa_guard_release via GOT/IAT indirection
    return __cxa_guard_release(/* forwarded args */);
}

