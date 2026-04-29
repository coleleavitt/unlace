// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA740
// Name:            ._ZNSt11logic_errorC1EPKc_0
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA740 jmp     cs:off_483A0
//
// Resolved target: _ZNSt11logic_errorC1EPKc
// Target address:  0x33160
// GOT/IAT slot:    0x483A0
// Slot symbol:     off_483A0
// Target type:     _QWORD(std::logic_error *__hidden this, const char *)
// ============================================================

/* see target sig */ ._ZNSt11logic_errorC1EPKc_0(/* see target signature */)
{
    // Tail-call to _ZNSt11logic_errorC1EPKc via GOT/IAT indirection
    return _ZNSt11logic_errorC1EPKc(/* forwarded args */);
}

