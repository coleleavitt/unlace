// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D540
// Name:            ._ZSt25__throw_bad_function_callv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D540 jmp     cs:off_4E9288
//
// Resolved target: _ZSt25__throw_bad_function_callv
// Target address:  0x4EBC78
// GOT/IAT slot:    0x4E9288
// Slot symbol:     off_4E9288
// Target type:     void __noreturn()
// ============================================================

/* see target sig */ ._ZSt25__throw_bad_function_callv(/* see target signature */)
{
    // Tail-call to _ZSt25__throw_bad_function_callv via GOT/IAT indirection
    return _ZSt25__throw_bad_function_callv(/* forwarded args */);
}

