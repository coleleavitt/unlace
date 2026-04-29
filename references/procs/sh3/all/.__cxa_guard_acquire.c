// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x56C0
// Name:            .__cxa_guard_acquire
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x56C0 jmp     cs:off_15348
//
// Resolved target: __cxa_guard_acquire
// Target address:  0x163F0
// GOT/IAT slot:    0x15348
// Slot symbol:     off_15348
// Target type:     int(__guard *)
// ============================================================

/* see target sig */ .__cxa_guard_acquire(/* see target signature */)
{
    // Tail-call to __cxa_guard_acquire via GOT/IAT indirection
    return __cxa_guard_acquire(/* forwarded args */);
}

