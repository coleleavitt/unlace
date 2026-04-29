// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20E80
// Name:            .__cxa_guard_acquire
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20E80 jmp     cs:off_95728
//
// Resolved target: __cxa_guard_acquire
// Target address:  0x96178
// GOT/IAT slot:    0x95728
// Slot symbol:     off_95728
// Target type:     int(__guard *)
// ============================================================

/* see target sig */ .__cxa_guard_acquire(/* see target signature */)
{
    // Tail-call to __cxa_guard_acquire via GOT/IAT indirection
    return __cxa_guard_acquire(/* forwarded args */);
}

