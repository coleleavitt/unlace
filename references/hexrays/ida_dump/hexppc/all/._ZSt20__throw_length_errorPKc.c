// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A860
// Name:            ._ZSt20__throw_length_errorPKc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A860 jmp     cs:off_4DA418
//
// Resolved target: _ZSt20__throw_length_errorPKc
// Target address:  0x4DCDE8
// GOT/IAT slot:    0x4DA418
// Slot symbol:     off_4DA418
// Target type:     void __noreturn(const char *)
// ============================================================

/* see target sig */ ._ZSt20__throw_length_errorPKc(/* see target signature */)
{
    // Tail-call to _ZSt20__throw_length_errorPKc via GOT/IAT indirection
    return _ZSt20__throw_length_errorPKc(/* forwarded args */);
}

