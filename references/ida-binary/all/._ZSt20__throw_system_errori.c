// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112EC0
// Name:            ._ZSt20__throw_system_errori
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112EC0 jmp     cs:_ZSt20__throw_system_errori_ptr
//
// Resolved target: _ZSt20__throw_system_errori
// Target address:  0x8D4448
// GOT/IAT slot:    0x8A0400
// Slot symbol:     _ZSt20__throw_system_errori_ptr
// Target type:     void __noreturn(int)
// ============================================================

/* see target sig */ ._ZSt20__throw_system_errori(/* see target signature */)
{
    // Tail-call to _ZSt20__throw_system_errori via GOT/IAT indirection
    return _ZSt20__throw_system_errori(/* forwarded args */);
}

