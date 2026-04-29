// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x32D0
// Name:            ._Znwm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x32D0 jmp     cs:off_13150
//
// Resolved target: _Znwm
// Target address:  0x13840
// GOT/IAT slot:    0x13150
// Slot symbol:     off_13150
// Target type:     _QWORD(unsigned __int64)
// ============================================================

/* see target sig */ ._Znwm(/* see target signature */)
{
    // Tail-call to _Znwm via GOT/IAT indirection
    return _Znwm(/* forwarded args */);
}

