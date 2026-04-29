// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19CC0
// Name:            .__cxa_guard_acquire
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19CC0 jmp     cs:off_75648
//
// Resolved target: __cxa_guard_acquire
// Target address:  0x75EB0
// GOT/IAT slot:    0x75648
// Slot symbol:     off_75648
// Target type:     int(__guard *)
// ============================================================

/* see target sig */ .__cxa_guard_acquire(/* see target signature */)
{
    // Tail-call to __cxa_guard_acquire via GOT/IAT indirection
    return __cxa_guard_acquire(/* forwarded args */);
}

