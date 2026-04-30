// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A450
// Name:            ._ZN2QT7QPixmap4fillERKNS_6QColorE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A450 jmp     cs:_ZN2QT7QPixmap4fillERKNS_6QColorE_ptr
//
// Resolved target: _ZN2QT7QPixmap4fillERKNS_6QColorE
// Target address:  0x8D8ED0
// GOT/IAT slot:    0x8A3EC8
// Slot symbol:     _ZN2QT7QPixmap4fillERKNS_6QColorE_ptr
// Target type:     _QWORD(QT::QPixmap *__hidden this, const QT::QColor *)
// ============================================================

/* see target sig */ ._ZN2QT7QPixmap4fillERKNS_6QColorE(/* see target signature */)
{
    // Tail-call to _ZN2QT7QPixmap4fillERKNS_6QColorE via GOT/IAT indirection
    return _ZN2QT7QPixmap4fillERKNS_6QColorE(/* forwarded args */);
}

