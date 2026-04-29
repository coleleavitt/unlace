// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19720
// Name:            ._Znwm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19720 jmp     cs:off_75378
//
// Resolved target: _Znwm
// Target address:  0x75BC8
// GOT/IAT slot:    0x75378
// Slot symbol:     off_75378
// Target type:     _QWORD(unsigned __int64)
// ============================================================

/* see target sig */ ._Znwm(/* see target signature */)
{
    // Tail-call to _Znwm via GOT/IAT indirection
    return _Znwm(/* forwarded args */);
}

