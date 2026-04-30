// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1128C0
// Name:            ._ZN2QT7QPixmapC1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1128C0 jmp     cs:_ZN2QT7QPixmapC1Ev_ptr
//
// Resolved target: _ZN2QT7QPixmapC1Ev
// Target address:  0x8D4070
// GOT/IAT slot:    0x8A0100
// Slot symbol:     _ZN2QT7QPixmapC1Ev_ptr
// Target type:     _QWORD(QT::QPixmap *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT7QPixmapC1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT7QPixmapC1Ev via GOT/IAT indirection
    return _ZN2QT7QPixmapC1Ev(/* forwarded args */);
}

