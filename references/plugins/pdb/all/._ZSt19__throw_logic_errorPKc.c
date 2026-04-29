// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D440
// Name:            ._ZSt19__throw_logic_errorPKc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D440 jmp     cs:off_B3208
//
// Resolved target: _ZSt19__throw_logic_errorPKc
// Target address:  0xB39A8
// GOT/IAT slot:    0xB3208
// Slot symbol:     off_B3208
// Target type:     void __noreturn(const char *)
// ============================================================

/* see target sig */ ._ZSt19__throw_logic_errorPKc(/* see target signature */)
{
    // Tail-call to _ZSt19__throw_logic_errorPKc via GOT/IAT indirection
    return _ZSt19__throw_logic_errorPKc(/* forwarded args */);
}

