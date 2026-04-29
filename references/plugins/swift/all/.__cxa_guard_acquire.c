// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x47E0
// Name:            .__cxa_guard_acquire
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x47E0 jmp     cs:off_283D8
//
// Resolved target: __cxa_guard_acquire
// Target address:  0x29D90
// GOT/IAT slot:    0x283D8
// Slot symbol:     off_283D8
// Target type:     int(__guard *)
// ============================================================

/* see target sig */ .__cxa_guard_acquire(/* see target signature */)
{
    // Tail-call to __cxa_guard_acquire via GOT/IAT indirection
    return __cxa_guard_acquire(/* forwarded args */);
}

