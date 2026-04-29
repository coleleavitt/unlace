// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA4E0
// Name:            ._ZNSt9exceptionD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA4E0 jmp     cs:off_48270
//
// Resolved target: _ZNSt9exceptionD2Ev
// Target address:  0x48540
// GOT/IAT slot:    0x48270
// Slot symbol:     off_48270
// Target type:     void(std::exception *__hidden this)
// ============================================================

/* see target sig */ ._ZNSt9exceptionD2Ev(/* see target signature */)
{
    // Tail-call to _ZNSt9exceptionD2Ev via GOT/IAT indirection
    return _ZNSt9exceptionD2Ev(/* forwarded args */);
}

