// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9170
// Name:            ._ZSt25__throw_bad_function_callv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9170 jmp     cs:off_2E0A0
//
// Resolved target: _ZSt25__throw_bad_function_callv
// Target address:  0x2E710
// GOT/IAT slot:    0x2E0A0
// Slot symbol:     off_2E0A0
// Target type:     void __noreturn()
// ============================================================

/* see target sig */ ._ZSt25__throw_bad_function_callv(/* see target signature */)
{
    // Tail-call to _ZSt25__throw_bad_function_callv via GOT/IAT indirection
    return _ZSt25__throw_bad_function_callv(/* forwarded args */);
}

