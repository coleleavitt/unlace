// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xACB0
// Name:            .__cxa_guard_acquire
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xACB0 jmp     cs:off_CA640
//
// Resolved target: __cxa_guard_acquire
// Target address:  0xD0FA0
// GOT/IAT slot:    0xCA640
// Slot symbol:     off_CA640
// Target type:     int(__guard *)
// ============================================================

/* see target sig */ .__cxa_guard_acquire(/* see target signature */)
{
    // Tail-call to __cxa_guard_acquire via GOT/IAT indirection
    return __cxa_guard_acquire(/* forwarded args */);
}

