// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA490
// Name:            ._ZSt25__throw_bad_function_callv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA490 jmp     cs:off_48248
//
// Resolved target: _ZSt25__throw_bad_function_callv
// Target address:  0x48528
// GOT/IAT slot:    0x48248
// Slot symbol:     off_48248
// Target type:     void __noreturn()
// ============================================================

/* see target sig */ ._ZSt25__throw_bad_function_callv(/* see target signature */)
{
    // Tail-call to _ZSt25__throw_bad_function_callv via GOT/IAT indirection
    return _ZSt25__throw_bad_function_callv(/* forwarded args */);
}

