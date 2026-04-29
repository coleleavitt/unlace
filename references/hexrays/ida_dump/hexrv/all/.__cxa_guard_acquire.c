// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BF60
// Name:            .__cxa_guard_acquire
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BF60 jmp     cs:off_4BFF98
//
// Resolved target: __cxa_guard_acquire
// Target address:  0x4C34C0
// GOT/IAT slot:    0x4BFF98
// Slot symbol:     off_4BFF98
// Target type:     int(__guard *)
// ============================================================

/* see target sig */ .__cxa_guard_acquire(/* see target signature */)
{
    // Tail-call to __cxa_guard_acquire via GOT/IAT indirection
    return __cxa_guard_acquire(/* forwarded args */);
}

