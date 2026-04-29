// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x95A0
// Name:            ._Znwm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x95A0 jmp     cs:off_892B8
//
// Resolved target: _Znwm
// Target address:  0x8C5C0
// GOT/IAT slot:    0x892B8
// Slot symbol:     off_892B8
// Target type:     _QWORD(unsigned __int64)
// ============================================================

/* see target sig */ ._Znwm(/* see target signature */)
{
    // Tail-call to _Znwm via GOT/IAT indirection
    return _Znwm(/* forwarded args */);
}

