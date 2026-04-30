// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A160
// Name:            ._ZN2QT7QPixmapC1Eii
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A160 jmp     cs:_ZN2QT7QPixmapC1Eii_ptr
//
// Resolved target: _ZN2QT7QPixmapC1Eii
// Target address:  0x8D8CF8
// GOT/IAT slot:    0x8A3D50
// Slot symbol:     _ZN2QT7QPixmapC1Eii_ptr
// Target type:     _QWORD(QT::QPixmap *__hidden this, int, int)
// ============================================================

/* see target sig */ ._ZN2QT7QPixmapC1Eii(/* see target signature */)
{
    // Tail-call to _ZN2QT7QPixmapC1Eii via GOT/IAT indirection
    return _ZN2QT7QPixmapC1Eii(/* forwarded args */);
}

