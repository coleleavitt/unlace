// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3370
// Name:            ._Znwm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3370 jmp     cs:off_141A0
//
// Resolved target: _Znwm
// Target address:  0x14790
// GOT/IAT slot:    0x141A0
// Slot symbol:     off_141A0
// Target type:     _QWORD(unsigned __int64)
// ============================================================

/* see target sig */ ._Znwm(/* see target signature */)
{
    // Tail-call to _Znwm via GOT/IAT indirection
    return _Znwm(/* forwarded args */);
}

