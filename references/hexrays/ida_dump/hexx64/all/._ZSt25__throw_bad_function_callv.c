// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B540
// Name:            ._ZSt25__throw_bad_function_callv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B540 jmp     cs:off_4ED288
//
// Resolved target: _ZSt25__throw_bad_function_callv
// Target address:  0x4F1580
// GOT/IAT slot:    0x4ED288
// Slot symbol:     off_4ED288
// Target type:     void __noreturn()
// ============================================================

/* see target sig */ ._ZSt25__throw_bad_function_callv(/* see target signature */)
{
    // Tail-call to _ZSt25__throw_bad_function_callv via GOT/IAT indirection
    return _ZSt25__throw_bad_function_callv(/* forwarded args */);
}

