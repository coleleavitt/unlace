// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA070
// Name:            ._ZSt20__throw_length_errorPKc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA070 jmp     cs:off_48038
//
// Resolved target: _ZSt20__throw_length_errorPKc
// Target address:  0x483D8
// GOT/IAT slot:    0x48038
// Slot symbol:     off_48038
// Target type:     void __noreturn(const char *)
// ============================================================

/* see target sig */ ._ZSt20__throw_length_errorPKc(/* see target signature */)
{
    // Tail-call to _ZSt20__throw_length_errorPKc via GOT/IAT indirection
    return _ZSt20__throw_length_errorPKc(/* forwarded args */);
}

