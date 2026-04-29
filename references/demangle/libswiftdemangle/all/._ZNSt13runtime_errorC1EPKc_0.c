// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA4C0
// Name:            ._ZNSt13runtime_errorC1EPKc_0
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA4C0 jmp     cs:off_48260
//
// Resolved target: _ZNSt13runtime_errorC1EPKc
// Target address:  0x332E0
// GOT/IAT slot:    0x48260
// Slot symbol:     off_48260
// Target type:     _QWORD(std::runtime_error *__hidden this, const char *)
// ============================================================

/* see target sig */ ._ZNSt13runtime_errorC1EPKc_0(/* see target signature */)
{
    // Tail-call to _ZNSt13runtime_errorC1EPKc via GOT/IAT indirection
    return _ZNSt13runtime_errorC1EPKc(/* forwarded args */);
}

