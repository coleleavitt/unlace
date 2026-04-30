// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113620
// Name:            ._ZN2QT8QPainter7restoreEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113620 jmp     cs:_ZN2QT8QPainter7restoreEv_ptr
//
// Resolved target: _ZN2QT8QPainter7restoreEv
// Target address:  0x8D4910
// GOT/IAT slot:    0x8A07B0
// Slot symbol:     _ZN2QT8QPainter7restoreEv_ptr
// Target type:     _QWORD(QT::QPainter *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT8QPainter7restoreEv(/* see target signature */)
{
    // Tail-call to _ZN2QT8QPainter7restoreEv via GOT/IAT indirection
    return _ZN2QT8QPainter7restoreEv(/* forwarded args */);
}

