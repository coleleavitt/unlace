// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA0B0
// Name:            ._ZNSt11logic_errorC1EPKc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA0B0 jmp     cs:off_48058
//
// Resolved target: _ZNSt11logic_errorC1EPKc
// Target address:  0x33160
// GOT/IAT slot:    0x48058
// Slot symbol:     off_48058
// Target type:     _QWORD(std::logic_error *__hidden this, const char *)
// ============================================================

/* see target sig */ ._ZNSt11logic_errorC1EPKc(/* see target signature */)
{
    // Tail-call to _ZNSt11logic_errorC1EPKc via GOT/IAT indirection
    return _ZNSt11logic_errorC1EPKc(/* forwarded args */);
}

