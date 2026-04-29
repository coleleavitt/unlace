// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20870
// Name:            ._Znwm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20870 jmp     cs:off_95420
//
// Resolved target: _Znwm
// Target address:  0x95E58
// GOT/IAT slot:    0x95420
// Slot symbol:     off_95420
// Target type:     _QWORD(unsigned __int64)
// ============================================================

/* see target sig */ ._Znwm(/* see target signature */)
{
    // Tail-call to _Znwm via GOT/IAT indirection
    return _Znwm(/* forwarded args */);
}

