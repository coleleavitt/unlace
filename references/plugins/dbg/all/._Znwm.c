// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3380
// Name:            ._Znwm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3380 jmp     cs:off_131A8
//
// Resolved target: _Znwm
// Target address:  0x13528
// GOT/IAT slot:    0x131A8
// Slot symbol:     off_131A8
// Target type:     _QWORD(unsigned __int64)
// ============================================================

/* see target sig */ ._Znwm(/* see target signature */)
{
    // Tail-call to _Znwm via GOT/IAT indirection
    return _Znwm(/* forwarded args */);
}

