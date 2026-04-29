// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4830
// Name:            ._ZSt20__throw_out_of_rangePKc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4830 jmp     cs:off_4E400
//
// Resolved target: _ZSt20__throw_out_of_rangePKc
// Target address:  0x4FA20
// GOT/IAT slot:    0x4E400
// Slot symbol:     off_4E400
// Target type:     void __noreturn(const char *)
// ============================================================

/* see target sig */ ._ZSt20__throw_out_of_rangePKc(/* see target signature */)
{
    // Tail-call to _ZSt20__throw_out_of_rangePKc via GOT/IAT indirection
    return _ZSt20__throw_out_of_rangePKc(/* forwarded args */);
}

