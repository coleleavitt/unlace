// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4370
// Name:            ._ZSt19__throw_logic_errorPKc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4370 jmp     cs:off_281A0
//
// Resolved target: _ZSt19__throw_logic_errorPKc
// Target address:  0x29B38
// GOT/IAT slot:    0x281A0
// Slot symbol:     off_281A0
// Target type:     void __noreturn(const char *)
// ============================================================

/* see target sig */ ._ZSt19__throw_logic_errorPKc(/* see target signature */)
{
    // Tail-call to _ZSt19__throw_logic_errorPKc via GOT/IAT indirection
    return _ZSt19__throw_logic_errorPKc(/* forwarded args */);
}

