// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6700
// Name:            ._ZNSt9exceptionD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6700 jmp     cs:off_8D368
//
// Resolved target: _ZNSt9exceptionD2Ev
// Target address:  0x8D928
// GOT/IAT slot:    0x8D368
// Slot symbol:     off_8D368
// Target type:     void(std::exception *__hidden this)
// ============================================================

/* see target sig */ ._ZNSt9exceptionD2Ev(/* see target signature */)
{
    // Tail-call to _ZNSt9exceptionD2Ev via GOT/IAT indirection
    return _ZNSt9exceptionD2Ev(/* forwarded args */);
}

