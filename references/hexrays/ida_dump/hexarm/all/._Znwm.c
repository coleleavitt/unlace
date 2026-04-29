// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E180
// Name:            ._Znwm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E180 jmp     cs:off_4E98A8
//
// Resolved target: _Znwm
// Target address:  0x4EC2C8
// GOT/IAT slot:    0x4E98A8
// Slot symbol:     off_4E98A8
// Target type:     _QWORD(unsigned __int64)
// ============================================================

/* see target sig */ ._Znwm(/* see target signature */)
{
    // Tail-call to _Znwm via GOT/IAT indirection
    return _Znwm(/* forwarded args */);
}

