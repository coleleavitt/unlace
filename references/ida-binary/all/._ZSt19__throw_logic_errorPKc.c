// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116D80
// Name:            ._ZSt19__throw_logic_errorPKc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116D80 jmp     cs:_ZSt19__throw_logic_errorPKc_ptr
//
// Resolved target: _ZSt19__throw_logic_errorPKc
// Target address:  0x8D6C48
// GOT/IAT slot:    0x8A2360
// Slot symbol:     _ZSt19__throw_logic_errorPKc_ptr
// Target type:     void __noreturn(const char *)
// ============================================================

/* see target sig */ ._ZSt19__throw_logic_errorPKc(/* see target signature */)
{
    // Tail-call to _ZSt19__throw_logic_errorPKc via GOT/IAT indirection
    return _ZSt19__throw_logic_errorPKc(/* forwarded args */);
}

