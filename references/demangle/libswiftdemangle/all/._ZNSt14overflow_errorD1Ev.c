// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA3F0
// Name:            ._ZNSt14overflow_errorD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA3F0 jmp     cs:off_481F8
//
// Resolved target: _ZNSt14overflow_errorD1Ev
// Target address:  0x484F0
// GOT/IAT slot:    0x481F8
// Slot symbol:     off_481F8
// Target type:     void(std::overflow_error *__hidden this)
// ============================================================

/* see target sig */ ._ZNSt14overflow_errorD1Ev(/* see target signature */)
{
    // Tail-call to _ZNSt14overflow_errorD1Ev via GOT/IAT indirection
    return _ZNSt14overflow_errorD1Ev(/* forwarded args */);
}

