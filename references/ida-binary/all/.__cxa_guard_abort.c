// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112C90
// Name:            .__cxa_guard_abort
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112C90 jmp     cs:__cxa_guard_abort_ptr
//
// Resolved target: __cxa_guard_abort
// Target address:  0x8D42E0
// GOT/IAT slot:    0x8A02E8
// Slot symbol:     __cxa_guard_abort_ptr
// Target type:     void(__guard *)
// ============================================================

/* see target sig */ .__cxa_guard_abort(/* see target signature */)
{
    // Tail-call to __cxa_guard_abort via GOT/IAT indirection
    return __cxa_guard_abort(/* forwarded args */);
}

