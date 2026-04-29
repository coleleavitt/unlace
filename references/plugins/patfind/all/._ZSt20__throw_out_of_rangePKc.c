// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2280
// Name:            ._ZSt20__throw_out_of_rangePKc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2280 jmp     cs:off_13128
//
// Resolved target: _ZSt20__throw_out_of_rangePKc
// Target address:  0x133C0
// GOT/IAT slot:    0x13128
// Slot symbol:     off_13128
// Target type:     void __noreturn(const char *)
// ============================================================

/* see target sig */ ._ZSt20__throw_out_of_rangePKc(/* see target signature */)
{
    // Tail-call to _ZSt20__throw_out_of_rangePKc via GOT/IAT indirection
    return _ZSt20__throw_out_of_rangePKc(/* forwarded args */);
}

