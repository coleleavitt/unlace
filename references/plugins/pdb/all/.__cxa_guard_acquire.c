// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1DB50
// Name:            .__cxa_guard_acquire
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1DB50 jmp     cs:off_B3590
//
// Resolved target: __cxa_guard_acquire
// Target address:  0xB3D60
// GOT/IAT slot:    0xB3590
// Slot symbol:     off_B3590
// Target type:     int(__guard *)
// ============================================================

/* see target sig */ .__cxa_guard_acquire(/* see target signature */)
{
    // Tail-call to __cxa_guard_acquire via GOT/IAT indirection
    return __cxa_guard_acquire(/* forwarded args */);
}

