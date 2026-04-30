// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115E60
// Name:            ._ZN2QT7QPixmapD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115E60 jmp     cs:_ZN2QT7QPixmapD1Ev_ptr
//
// Resolved target: _ZN2QT7QPixmapD1Ev
// Target address:  0x8D62A8
// GOT/IAT slot:    0x8A1BD0
// Slot symbol:     _ZN2QT7QPixmapD1Ev_ptr
// Target type:     void(QT::QPixmap *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT7QPixmapD1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT7QPixmapD1Ev via GOT/IAT indirection
    return _ZN2QT7QPixmapD1Ev(/* forwarded args */);
}

