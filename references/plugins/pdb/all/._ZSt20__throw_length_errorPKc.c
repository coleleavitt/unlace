// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D2A0
// Name:            ._ZSt20__throw_length_errorPKc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D2A0 jmp     cs:off_B3138
//
// Resolved target: _ZSt20__throw_length_errorPKc
// Target address:  0xB38C0
// GOT/IAT slot:    0xB3138
// Slot symbol:     off_B3138
// Target type:     void __noreturn(const char *)
// ============================================================

/* see target sig */ ._ZSt20__throw_length_errorPKc(/* see target signature */)
{
    // Tail-call to _ZSt20__throw_length_errorPKc via GOT/IAT indirection
    return _ZSt20__throw_length_errorPKc(/* forwarded args */);
}

