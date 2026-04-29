// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA430
// Name:            ._ZNSt12domain_errorD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA430 jmp     cs:off_48218
//
// Resolved target: _ZNSt12domain_errorD1Ev
// Target address:  0x48500
// GOT/IAT slot:    0x48218
// Slot symbol:     off_48218
// Target type:     void(std::domain_error *__hidden this)
// ============================================================

/* see target sig */ ._ZNSt12domain_errorD1Ev(/* see target signature */)
{
    // Tail-call to _ZNSt12domain_errorD1Ev via GOT/IAT indirection
    return _ZNSt12domain_errorD1Ev(/* forwarded args */);
}

