// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x165D0
// Name:            ._ZN2QT8QPainter7restoreEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x165D0 jmp     cs:off_4F2D0
//
// Resolved target: _ZN2QT8QPainter7restoreEv
// Target address:  0x502C0
// GOT/IAT slot:    0x4F2D0
// Slot symbol:     off_4F2D0
// Target type:     _QWORD(QT::QPainter *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT8QPainter7restoreEv(/* see target signature */)
{
    // Tail-call to _ZN2QT8QPainter7restoreEv via GOT/IAT indirection
    return _ZN2QT8QPainter7restoreEv(/* forwarded args */);
}

