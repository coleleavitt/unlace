// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2130
// Name:            ._ZSt24__throw_invalid_argumentPKc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2130 jmp     cs:off_13080
//
// Resolved target: _ZSt24__throw_invalid_argumentPKc
// Target address:  0x13318
// GOT/IAT slot:    0x13080
// Slot symbol:     off_13080
// Target type:     _QWORD(const char *)
// ============================================================

/* see target sig */ ._ZSt24__throw_invalid_argumentPKc(/* see target signature */)
{
    // Tail-call to _ZSt24__throw_invalid_argumentPKc via GOT/IAT indirection
    return _ZSt24__throw_invalid_argumentPKc(/* forwarded args */);
}

