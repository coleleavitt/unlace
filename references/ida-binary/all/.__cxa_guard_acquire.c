// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117E30
// Name:            .__cxa_guard_acquire
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117E30 jmp     cs:__cxa_guard_acquire_ptr
//
// Resolved target: __cxa_guard_acquire
// Target address:  0x8D76E8
// GOT/IAT slot:    0x8A2BB8
// Slot symbol:     __cxa_guard_acquire_ptr
// Target type:     int(__guard *)
// ============================================================

/* see target sig */ .__cxa_guard_acquire(/* see target signature */)
{
    // Tail-call to __cxa_guard_acquire via GOT/IAT indirection
    return __cxa_guard_acquire(/* forwarded args */);
}

