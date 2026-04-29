// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA510
// Name:            ._ZSt19__throw_logic_errorPKc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA510 jmp     cs:off_48288
//
// Resolved target: _ZSt19__throw_logic_errorPKc
// Target address:  0x48558
// GOT/IAT slot:    0x48288
// Slot symbol:     off_48288
// Target type:     void __noreturn(const char *)
// ============================================================

/* see target sig */ ._ZSt19__throw_logic_errorPKc(/* see target signature */)
{
    // Tail-call to _ZSt19__throw_logic_errorPKc via GOT/IAT indirection
    return _ZSt19__throw_logic_errorPKc(/* forwarded args */);
}

