// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA210
// Name:            ._ZNSt12length_errorD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA210 jmp     cs:off_48108
//
// Resolved target: _ZNSt12length_errorD1Ev
// Target address:  0x48460
// GOT/IAT slot:    0x48108
// Slot symbol:     off_48108
// Target type:     void(std::length_error *__hidden this)
// ============================================================

/* see target sig */ ._ZNSt12length_errorD1Ev(/* see target signature */)
{
    // Tail-call to _ZNSt12length_errorD1Ev via GOT/IAT indirection
    return _ZNSt12length_errorD1Ev(/* forwarded args */);
}

