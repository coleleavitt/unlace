// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6480
// Name:            ._Znwm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6480 jmp     cs:off_24228
//
// Resolved target: _Znwm
// Target address:  0x25FF8
// GOT/IAT slot:    0x24228
// Slot symbol:     off_24228
// Target type:     _QWORD(unsigned __int64)
// ============================================================

/* see target sig */ ._Znwm(/* see target signature */)
{
    // Tail-call to _Znwm via GOT/IAT indirection
    return _Znwm(/* forwarded args */);
}

