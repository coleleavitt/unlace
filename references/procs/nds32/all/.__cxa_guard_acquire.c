// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x87A0
// Name:            .__cxa_guard_acquire
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x87A0 jmp     cs:off_2A3B8
//
// Resolved target: __cxa_guard_acquire
// Target address:  0x2A940
// GOT/IAT slot:    0x2A3B8
// Slot symbol:     off_2A3B8
// Target type:     int(__guard *)
// ============================================================

/* see target sig */ .__cxa_guard_acquire(/* see target signature */)
{
    // Tail-call to __cxa_guard_acquire via GOT/IAT indirection
    return __cxa_guard_acquire(/* forwarded args */);
}

