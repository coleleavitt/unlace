// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x67F0
// Name:            .__cxa_guard_acquire
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x67F0 jmp     cs:off_243E0
//
// Resolved target: __cxa_guard_acquire
// Target address:  0x261D0
// GOT/IAT slot:    0x243E0
// Slot symbol:     off_243E0
// Target type:     int(__guard *)
// ============================================================

/* see target sig */ .__cxa_guard_acquire(/* see target signature */)
{
    // Tail-call to __cxa_guard_acquire via GOT/IAT indirection
    return __cxa_guard_acquire(/* forwarded args */);
}

