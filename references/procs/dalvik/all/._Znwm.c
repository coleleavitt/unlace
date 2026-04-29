// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x52F0
// Name:            ._Znwm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x52F0 jmp     cs:off_1A160
//
// Resolved target: _Znwm
// Target address:  0x1A4E8
// GOT/IAT slot:    0x1A160
// Slot symbol:     off_1A160
// Target type:     _QWORD(unsigned __int64)
// ============================================================

/* see target sig */ ._Znwm(/* see target signature */)
{
    // Tail-call to _Znwm via GOT/IAT indirection
    return _Znwm(/* forwarded args */);
}

