// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2F020
// Name:            ._ZNSt9exceptionD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2F020 jmp     cs:off_4E9FF8
//
// Resolved target: _ZNSt9exceptionD2Ev
// Target address:  0x4ECA48
// GOT/IAT slot:    0x4E9FF8
// Slot symbol:     off_4E9FF8
// Target type:     void(std::exception *__hidden this)
// ============================================================

/* see target sig */ ._ZNSt9exceptionD2Ev(/* see target signature */)
{
    // Tail-call to _ZNSt9exceptionD2Ev via GOT/IAT indirection
    return _ZNSt9exceptionD2Ev(/* forwarded args */);
}

