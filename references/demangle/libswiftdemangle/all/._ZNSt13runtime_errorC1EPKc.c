// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA460
// Name:            ._ZNSt13runtime_errorC1EPKc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA460 jmp     cs:off_48230
//
// Resolved target: _ZNSt13runtime_errorC1EPKc
// Target address:  0x332E0
// GOT/IAT slot:    0x48230
// Slot symbol:     off_48230
// Target type:     _QWORD(std::runtime_error *__hidden this, const char *)
// ============================================================

/* see target sig */ ._ZNSt13runtime_errorC1EPKc(/* see target signature */)
{
    // Tail-call to _ZNSt13runtime_errorC1EPKc via GOT/IAT indirection
    return _ZNSt13runtime_errorC1EPKc(/* forwarded args */);
}

