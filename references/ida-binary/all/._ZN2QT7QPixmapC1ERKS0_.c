// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118E30
// Name:            ._ZN2QT7QPixmapC1ERKS0_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118E30 jmp     cs:_ZN2QT7QPixmapC1ERKS0__ptr
//
// Resolved target: _ZN2QT7QPixmapC1ERKS0_
// Target address:  0x8D8090
// GOT/IAT slot:    0x8A33B8
// Slot symbol:     _ZN2QT7QPixmapC1ERKS0__ptr
// Target type:     _QWORD(QT::QPixmap *__hidden this, const QT::QPixmap *)
// ============================================================

/* see target sig */ ._ZN2QT7QPixmapC1ERKS0_(/* see target signature */)
{
    // Tail-call to _ZN2QT7QPixmapC1ERKS0_ via GOT/IAT indirection
    return _ZN2QT7QPixmapC1ERKS0_(/* forwarded args */);
}

