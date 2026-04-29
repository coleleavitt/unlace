// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2150
// Name:            ._Znwm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2150 jmp     cs:off_15090
//
// Resolved target: _Znwm
// Target address:  0x15280
// GOT/IAT slot:    0x15090
// Slot symbol:     off_15090
// Target type:     _QWORD(unsigned __int64)
// ============================================================

/* see target sig */ ._Znwm(/* see target signature */)
{
    // Tail-call to _Znwm via GOT/IAT indirection
    return _Znwm(/* forwarded args */);
}

