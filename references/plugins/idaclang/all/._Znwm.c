// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x32E0
// Name:            ._Znwm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x32E0 jmp     cs:off_29158
//
// Resolved target: _Znwm
// Target address:  0x29508
// GOT/IAT slot:    0x29158
// Slot symbol:     off_29158
// Target type:     _QWORD(unsigned __int64)
// ============================================================

/* see target sig */ ._Znwm(/* see target signature */)
{
    // Tail-call to _Znwm via GOT/IAT indirection
    return _Znwm(/* forwarded args */);
}

