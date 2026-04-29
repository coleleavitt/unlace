// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D870
// Name:            ._ZSt20__throw_length_errorPKc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D870 jmp     cs:off_4E9420
//
// Resolved target: _ZSt20__throw_length_errorPKc
// Target address:  0x4EBE10
// GOT/IAT slot:    0x4E9420
// Slot symbol:     off_4E9420
// Target type:     void __noreturn(const char *)
// ============================================================

/* see target sig */ ._ZSt20__throw_length_errorPKc(/* see target signature */)
{
    // Tail-call to _ZSt20__throw_length_errorPKc via GOT/IAT indirection
    return _ZSt20__throw_length_errorPKc(/* forwarded args */);
}

