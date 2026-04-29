// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x43D0
// Name:            ._ZSt19__throw_logic_errorPKc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x43D0 jmp     cs:off_4E1D0
//
// Resolved target: _ZSt19__throw_logic_errorPKc
// Target address:  0x4F7E0
// GOT/IAT slot:    0x4E1D0
// Slot symbol:     off_4E1D0
// Target type:     void __noreturn(const char *)
// ============================================================

/* see target sig */ ._ZSt19__throw_logic_errorPKc(/* see target signature */)
{
    // Tail-call to _ZSt19__throw_logic_errorPKc via GOT/IAT indirection
    return _ZSt19__throw_logic_errorPKc(/* forwarded args */);
}

