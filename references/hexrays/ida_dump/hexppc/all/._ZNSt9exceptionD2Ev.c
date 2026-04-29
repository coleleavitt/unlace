// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BFE0
// Name:            ._ZNSt9exceptionD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BFE0 jmp     cs:off_4DAFD8
//
// Resolved target: _ZNSt9exceptionD2Ev
// Target address:  0x4DDA08
// GOT/IAT slot:    0x4DAFD8
// Slot symbol:     off_4DAFD8
// Target type:     void(std::exception *__hidden this)
// ============================================================

/* see target sig */ ._ZNSt9exceptionD2Ev(/* see target signature */)
{
    // Tail-call to _ZNSt9exceptionD2Ev via GOT/IAT indirection
    return _ZNSt9exceptionD2Ev(/* forwarded args */);
}

