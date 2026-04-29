// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7750
// Name:            .__cxa_guard_acquire
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7750 jmp     cs:off_19390
//
// Resolved target: __cxa_guard_acquire
// Target address:  0x198D8
// GOT/IAT slot:    0x19390
// Slot symbol:     off_19390
// Target type:     int(__guard *)
// ============================================================

/* see target sig */ .__cxa_guard_acquire(/* see target signature */)
{
    // Tail-call to __cxa_guard_acquire via GOT/IAT indirection
    return __cxa_guard_acquire(/* forwarded args */);
}

