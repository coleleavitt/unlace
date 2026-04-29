// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3350
// Name:            ._Znwm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3350 jmp     cs:off_20190
//
// Resolved target: _Znwm
// Target address:  0x21AB0
// GOT/IAT slot:    0x20190
// Slot symbol:     off_20190
// Target type:     _QWORD(unsigned __int64)
// ============================================================

/* see target sig */ ._Znwm(/* see target signature */)
{
    // Tail-call to _Znwm via GOT/IAT indirection
    return _Znwm(/* forwarded args */);
}

