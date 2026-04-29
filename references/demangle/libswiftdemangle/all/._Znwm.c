// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA670
// Name:            ._Znwm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA670 jmp     cs:off_48338
//
// Resolved target: _Znwm
// Target address:  0x485E8
// GOT/IAT slot:    0x48338
// Slot symbol:     off_48338
// Target type:     _QWORD(unsigned __int64)
// ============================================================

/* see target sig */ ._Znwm(/* see target signature */)
{
    // Tail-call to _Znwm via GOT/IAT indirection
    return _Znwm(/* forwarded args */);
}

