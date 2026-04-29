// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4250
// Name:            ._ZSt20__throw_length_errorPKc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4250 jmp     cs:off_28110
//
// Resolved target: _ZSt20__throw_length_errorPKc
// Target address:  0x29AA8
// GOT/IAT slot:    0x28110
// Slot symbol:     off_28110
// Target type:     void __noreturn(const char *)
// ============================================================

/* see target sig */ ._ZSt20__throw_length_errorPKc(/* see target signature */)
{
    // Tail-call to _ZSt20__throw_length_errorPKc via GOT/IAT indirection
    return _ZSt20__throw_length_errorPKc(/* forwarded args */);
}

