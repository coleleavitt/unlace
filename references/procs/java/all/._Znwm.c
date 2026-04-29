// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6420
// Name:            ._Znwm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6420 jmp     cs:off_2D1F8
//
// Resolved target: _Znwm
// Target address:  0x2D6F8
// GOT/IAT slot:    0x2D1F8
// Slot symbol:     off_2D1F8
// Target type:     _QWORD(unsigned __int64)
// ============================================================

/* see target sig */ ._Znwm(/* see target signature */)
{
    // Tail-call to _Znwm via GOT/IAT indirection
    return _Znwm(/* forwarded args */);
}

