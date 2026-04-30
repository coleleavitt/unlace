// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113BD0
// Name:            ._ZSt20__throw_length_errorPKc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113BD0 jmp     cs:_ZSt20__throw_length_errorPKc_ptr
//
// Resolved target: _ZSt20__throw_length_errorPKc
// Target address:  0x8D4CB8
// GOT/IAT slot:    0x8A0A88
// Slot symbol:     _ZSt20__throw_length_errorPKc_ptr
// Target type:     void __noreturn(const char *)
// ============================================================

/* see target sig */ ._ZSt20__throw_length_errorPKc(/* see target signature */)
{
    // Tail-call to _ZSt20__throw_length_errorPKc via GOT/IAT indirection
    return _ZSt20__throw_length_errorPKc(/* forwarded args */);
}

