// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6690
// Name:            .__cxa_guard_acquire
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6690 jmp     cs:off_1D330
//
// Resolved target: __cxa_guard_acquire
// Target address:  0x1D838
// GOT/IAT slot:    0x1D330
// Slot symbol:     off_1D330
// Target type:     int(__guard *)
// ============================================================

/* see target sig */ .__cxa_guard_acquire(/* see target signature */)
{
    // Tail-call to __cxa_guard_acquire via GOT/IAT indirection
    return __cxa_guard_acquire(/* forwarded args */);
}

