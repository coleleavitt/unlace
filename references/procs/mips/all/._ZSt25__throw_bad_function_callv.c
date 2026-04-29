// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x191F0
// Name:            ._ZSt25__throw_bad_function_callv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x191F0 jmp     cs:off_750E0
//
// Resolved target: _ZSt25__throw_bad_function_callv
// Target address:  0x75930
// GOT/IAT slot:    0x750E0
// Slot symbol:     off_750E0
// Target type:     void __noreturn()
// ============================================================

/* see target sig */ ._ZSt25__throw_bad_function_callv(/* see target signature */)
{
    // Tail-call to _ZSt25__throw_bad_function_callv via GOT/IAT indirection
    return _ZSt25__throw_bad_function_callv(/* forwarded args */);
}

