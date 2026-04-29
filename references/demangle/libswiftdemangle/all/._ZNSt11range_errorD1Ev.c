// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA1C0
// Name:            ._ZNSt11range_errorD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA1C0 jmp     cs:off_480E0
//
// Resolved target: _ZNSt11range_errorD1Ev
// Target address:  0x48438
// GOT/IAT slot:    0x480E0
// Slot symbol:     off_480E0
// Target type:     void(std::range_error *__hidden this)
// ============================================================

/* see target sig */ ._ZNSt11range_errorD1Ev(/* see target signature */)
{
    // Tail-call to _ZNSt11range_errorD1Ev via GOT/IAT indirection
    return _ZNSt11range_errorD1Ev(/* forwarded args */);
}

