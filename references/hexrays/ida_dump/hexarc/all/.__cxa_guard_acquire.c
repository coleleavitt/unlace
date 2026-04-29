// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AF40
// Name:            .__cxa_guard_acquire
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AF40 jmp     cs:off_4B9F88
//
// Resolved target: __cxa_guard_acquire
// Target address:  0x4BC9B8
// GOT/IAT slot:    0x4B9F88
// Slot symbol:     off_4B9F88
// Target type:     int(__guard *)
// ============================================================

/* see target sig */ .__cxa_guard_acquire(/* see target signature */)
{
    // Tail-call to __cxa_guard_acquire via GOT/IAT indirection
    return __cxa_guard_acquire(/* forwarded args */);
}

