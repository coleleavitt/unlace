// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6220
// Name:            ._ZSt20__throw_length_errorPKc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6220 jmp     cs:off_8D0F8
//
// Resolved target: _ZSt20__throw_length_errorPKc
// Target address:  0x8D678
// GOT/IAT slot:    0x8D0F8
// Slot symbol:     off_8D0F8
// Target type:     void __noreturn(const char *)
// ============================================================

/* see target sig */ ._ZSt20__throw_length_errorPKc(/* see target signature */)
{
    // Tail-call to _ZSt20__throw_length_errorPKc via GOT/IAT indirection
    return _ZSt20__throw_length_errorPKc(/* forwarded args */);
}

