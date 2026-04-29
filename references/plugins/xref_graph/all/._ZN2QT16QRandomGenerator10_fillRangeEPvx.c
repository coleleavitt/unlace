// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16B50
// Name:            ._ZN2QT16QRandomGenerator10_fillRangeEPvx
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16B50 jmp     cs:off_4F590
//
// Resolved target: _ZN2QT16QRandomGenerator10_fillRangeEPvx
// Target address:  0x507D8
// GOT/IAT slot:    0x4F590
// Slot symbol:     off_4F590
// Target type:     _QWORD(QT::QRandomGenerator *__hidden this, void *, __int64)
// ============================================================

/* see target sig */ ._ZN2QT16QRandomGenerator10_fillRangeEPvx(/* see target signature */)
{
    // Tail-call to _ZN2QT16QRandomGenerator10_fillRangeEPvx via GOT/IAT indirection
    return _ZN2QT16QRandomGenerator10_fillRangeEPvx(/* forwarded args */);
}

