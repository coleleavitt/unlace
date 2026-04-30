// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118D80
// Name:            .__cxa_guard_release
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118D80 jmp     cs:__cxa_guard_release_ptr
//
// Resolved target: __cxa_guard_release
// Target address:  0x8D8028
// GOT/IAT slot:    0x8A3360
// Slot symbol:     __cxa_guard_release_ptr
// Target type:     void(__guard *)
// ============================================================

/* see target sig */ .__cxa_guard_release(/* see target signature */)
{
    // Tail-call to __cxa_guard_release via GOT/IAT indirection
    return __cxa_guard_release(/* forwarded args */);
}

