// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9250
// Name:            ._Znwm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9250 jmp     cs:off_26110
//
// Resolved target: _Znwm
// Target address:  0x26420
// GOT/IAT slot:    0x26110
// Slot symbol:     off_26110
// Target type:     _QWORD(unsigned __int64)
// ============================================================

/* see target sig */ ._Znwm(/* see target signature */)
{
    // Tail-call to _Znwm via GOT/IAT indirection
    return _Znwm(/* forwarded args */);
}

