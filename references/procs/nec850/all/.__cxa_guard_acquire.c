// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9950
// Name:            .__cxa_guard_acquire
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9950 jmp     cs:off_2E490
//
// Resolved target: __cxa_guard_acquire
// Target address:  0x2EB18
// GOT/IAT slot:    0x2E490
// Slot symbol:     off_2E490
// Target type:     int(__guard *)
// ============================================================

/* see target sig */ .__cxa_guard_acquire(/* see target signature */)
{
    // Tail-call to __cxa_guard_acquire via GOT/IAT indirection
    return __cxa_guard_acquire(/* forwarded args */);
}

