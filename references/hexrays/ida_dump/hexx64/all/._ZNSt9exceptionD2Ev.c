// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D130
// Name:            ._ZNSt9exceptionD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D130 jmp     cs:off_4EE080
//
// Resolved target: _ZNSt9exceptionD2Ev
// Target address:  0x4F23D0
// GOT/IAT slot:    0x4EE080
// Slot symbol:     off_4EE080
// Target type:     void(std::exception *__hidden this)
// ============================================================

/* see target sig */ ._ZNSt9exceptionD2Ev(/* see target signature */)
{
    // Tail-call to _ZNSt9exceptionD2Ev via GOT/IAT indirection
    return _ZNSt9exceptionD2Ev(/* forwarded args */);
}

