// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3410
// Name:            ._Znwm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3410 jmp     cs:off_281F0
//
// Resolved target: _Znwm
// Target address:  0x286A0
// GOT/IAT slot:    0x281F0
// Slot symbol:     off_281F0
// Target type:     _QWORD(unsigned __int64)
// ============================================================

/* see target sig */ ._Znwm(/* see target signature */)
{
    // Tail-call to _Znwm via GOT/IAT indirection
    return _Znwm(/* forwarded args */);
}

