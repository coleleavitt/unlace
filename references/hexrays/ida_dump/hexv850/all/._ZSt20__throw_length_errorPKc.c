// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A860
// Name:            ._ZSt20__throw_length_errorPKc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A860 jmp     cs:off_4C0418
//
// Resolved target: _ZSt20__throw_length_errorPKc
// Target address:  0x4C33E0
// GOT/IAT slot:    0x4C0418
// Slot symbol:     off_4C0418
// Target type:     void __noreturn(const char *)
// ============================================================

/* see target sig */ ._ZSt20__throw_length_errorPKc(/* see target signature */)
{
    // Tail-call to _ZSt20__throw_length_errorPKc via GOT/IAT indirection
    return _ZSt20__throw_length_errorPKc(/* forwarded args */);
}

