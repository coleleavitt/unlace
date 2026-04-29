// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA6E0
// Name:            ._Znwm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA6E0 jmp     cs:off_CA358
//
// Resolved target: _Znwm
// Target address:  0xD0C90
// GOT/IAT slot:    0xCA358
// Slot symbol:     off_CA358
// Target type:     _QWORD(unsigned __int64)
// ============================================================

/* see target sig */ ._Znwm(/* see target signature */)
{
    // Tail-call to _Znwm via GOT/IAT indirection
    return _Znwm(/* forwarded args */);
}

