// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA5A0
// Name:            ._Znwm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA5A0 jmp     cs:off_352B8
//
// Resolved target: _Znwm
// Target address:  0x35908
// GOT/IAT slot:    0x352B8
// Slot symbol:     off_352B8
// Target type:     _QWORD(unsigned __int64)
// ============================================================

/* see target sig */ ._Znwm(/* see target signature */)
{
    // Tail-call to _Znwm via GOT/IAT indirection
    return _Znwm(/* forwarded args */);
}

