// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA9C0
// Name:            .__cxa_guard_acquire
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA9C0 jmp     cs:off_354C8
//
// Resolved target: __cxa_guard_acquire
// Target address:  0x35B30
// GOT/IAT slot:    0x354C8
// Slot symbol:     off_354C8
// Target type:     int(__guard *)
// ============================================================

/* see target sig */ .__cxa_guard_acquire(/* see target signature */)
{
    // Tail-call to __cxa_guard_acquire via GOT/IAT indirection
    return __cxa_guard_acquire(/* forwarded args */);
}

