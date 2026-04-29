// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x73F0
// Name:            .__cxa_guard_acquire
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x73F0 jmp     cs:off_1D1E0
//
// Resolved target: __cxa_guard_acquire
// Target address:  0x1D528
// GOT/IAT slot:    0x1D1E0
// Slot symbol:     off_1D1E0
// Target type:     int(__guard *)
// ============================================================

/* see target sig */ .__cxa_guard_acquire(/* see target signature */)
{
    // Tail-call to __cxa_guard_acquire via GOT/IAT indirection
    return __cxa_guard_acquire(/* forwarded args */);
}

