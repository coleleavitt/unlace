// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3510
// Name:            .__cxa_guard_acquire
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3510 jmp     cs:off_29270
//
// Resolved target: __cxa_guard_acquire
// Target address:  0x29638
// GOT/IAT slot:    0x29270
// Slot symbol:     off_29270
// Target type:     int(__guard *)
// ============================================================

/* see target sig */ .__cxa_guard_acquire(/* see target signature */)
{
    // Tail-call to __cxa_guard_acquire via GOT/IAT indirection
    return __cxa_guard_acquire(/* forwarded args */);
}

