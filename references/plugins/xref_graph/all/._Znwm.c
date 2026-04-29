// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16CF0
// Name:            ._Znwm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16CF0 jmp     cs:off_4F660
//
// Resolved target: _Znwm
// Target address:  0x50920
// GOT/IAT slot:    0x4F660
// Slot symbol:     off_4F660
// Target type:     _QWORD(unsigned __int64)
// ============================================================

/* see target sig */ ._Znwm(/* see target signature */)
{
    // Tail-call to _Znwm via GOT/IAT indirection
    return _Znwm(/* forwarded args */);
}

