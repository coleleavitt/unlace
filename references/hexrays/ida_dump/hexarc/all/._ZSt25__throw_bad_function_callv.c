// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29530
// Name:            ._ZSt25__throw_bad_function_callv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29530 jmp     cs:off_4B9280
//
// Resolved target: _ZSt25__throw_bad_function_callv
// Target address:  0x4BBC50
// GOT/IAT slot:    0x4B9280
// Slot symbol:     off_4B9280
// Target type:     void __noreturn()
// ============================================================

/* see target sig */ ._ZSt25__throw_bad_function_callv(/* see target signature */)
{
    // Tail-call to _ZSt25__throw_bad_function_callv via GOT/IAT indirection
    return _ZSt25__throw_bad_function_callv(/* forwarded args */);
}

