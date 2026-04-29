// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21B0
// Name:            ._Znwm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21B0 jmp     cs:off_130C0
//
// Resolved target: _Znwm
// Target address:  0x13358
// GOT/IAT slot:    0x130C0
// Slot symbol:     off_130C0
// Target type:     _QWORD(unsigned __int64)
// ============================================================

/* see target sig */ ._Znwm(/* see target signature */)
{
    // Tail-call to _Znwm via GOT/IAT indirection
    return _Znwm(/* forwarded args */);
}

