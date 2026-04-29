// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C210
// Name:            ._Znwm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C210 jmp     cs:off_4ED8F0
//
// Resolved target: _Znwm
// Target address:  0x4F1C10
// GOT/IAT slot:    0x4ED8F0
// Slot symbol:     off_4ED8F0
// Target type:     _QWORD(unsigned __int64)
// ============================================================

/* see target sig */ ._Znwm(/* see target signature */)
{
    // Tail-call to _Znwm via GOT/IAT indirection
    return _Znwm(/* forwarded args */);
}

