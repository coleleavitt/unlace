// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x99E0
// Name:            .__cxa_guard_acquire
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x99E0 jmp     cs:off_894D8
//
// Resolved target: __cxa_guard_acquire
// Target address:  0x8C808
// GOT/IAT slot:    0x894D8
// Slot symbol:     off_894D8
// Target type:     int(__guard *)
// ============================================================

/* see target sig */ .__cxa_guard_acquire(/* see target signature */)
{
    // Tail-call to __cxa_guard_acquire via GOT/IAT indirection
    return __cxa_guard_acquire(/* forwarded args */);
}

