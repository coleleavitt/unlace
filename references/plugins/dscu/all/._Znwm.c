// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4270
// Name:            ._Znwm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4270 jmp     cs:off_1F120
//
// Resolved target: _Znwm
// Target address:  0x1F3D0
// GOT/IAT slot:    0x1F120
// Slot symbol:     off_1F120
// Target type:     _QWORD(unsigned __int64)
// ============================================================

/* see target sig */ ._Znwm(/* see target signature */)
{
    // Tail-call to _Znwm via GOT/IAT indirection
    return _Znwm(/* forwarded args */);
}

