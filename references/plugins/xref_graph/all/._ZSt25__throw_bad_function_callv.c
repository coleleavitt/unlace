// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16B00
// Name:            ._ZSt25__throw_bad_function_callv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16B00 jmp     cs:off_4F568
//
// Resolved target: _ZSt25__throw_bad_function_callv
// Target address:  0x507A8
// GOT/IAT slot:    0x4F568
// Slot symbol:     off_4F568
// Target type:     void __noreturn()
// ============================================================

/* see target sig */ ._ZSt25__throw_bad_function_callv(/* see target signature */)
{
    // Tail-call to _ZSt25__throw_bad_function_callv via GOT/IAT indirection
    return _ZSt25__throw_bad_function_callv(/* forwarded args */);
}

