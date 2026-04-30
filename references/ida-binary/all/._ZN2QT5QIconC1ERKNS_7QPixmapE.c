// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119980
// Name:            ._ZN2QT5QIconC1ERKNS_7QPixmapE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119980 jmp     cs:_ZN2QT5QIconC1ERKNS_7QPixmapE_ptr
//
// Resolved target: _ZN2QT5QIconC1ERKNS_7QPixmapE
// Target address:  0x8D8800
// GOT/IAT slot:    0x8A3960
// Slot symbol:     _ZN2QT5QIconC1ERKNS_7QPixmapE_ptr
// Target type:     _QWORD(QT::QIcon *__hidden this, const QT::QPixmap *)
// ============================================================

/* see target sig */ ._ZN2QT5QIconC1ERKNS_7QPixmapE(/* see target signature */)
{
    // Tail-call to _ZN2QT5QIconC1ERKNS_7QPixmapE via GOT/IAT indirection
    return _ZN2QT5QIconC1ERKNS_7QPixmapE(/* forwarded args */);
}

