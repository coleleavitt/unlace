// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3610
// Name:            ._ZNSt9exceptionD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3610 jmp     cs:off_142F0
//
// Resolved target: _ZNSt9exceptionD2Ev
// Target address:  0x14900
// GOT/IAT slot:    0x142F0
// Slot symbol:     off_142F0
// Target type:     void(std::exception *__hidden this)
// ============================================================

/* see target sig */ ._ZNSt9exceptionD2Ev(/* see target signature */)
{
    // Tail-call to _ZNSt9exceptionD2Ev via GOT/IAT indirection
    return _ZNSt9exceptionD2Ev(/* forwarded args */);
}

