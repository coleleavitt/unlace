// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A150
// Name:            ._Znwm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A150 jmp     cs:off_4B9890
//
// Resolved target: _Znwm
// Target address:  0x4BC290
// GOT/IAT slot:    0x4B9890
// Slot symbol:     off_4B9890
// Target type:     _QWORD(unsigned __int64)
// ============================================================

/* see target sig */ ._Znwm(/* see target signature */)
{
    // Tail-call to _Znwm via GOT/IAT indirection
    return _Znwm(/* forwarded args */);
}

