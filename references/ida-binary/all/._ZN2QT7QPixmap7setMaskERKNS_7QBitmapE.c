// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119620
// Name:            ._ZN2QT7QPixmap7setMaskERKNS_7QBitmapE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119620 jmp     cs:_ZN2QT7QPixmap7setMaskERKNS_7QBitmapE_ptr
//
// Resolved target: _ZN2QT7QPixmap7setMaskERKNS_7QBitmapE
// Target address:  0x8D85E0
// GOT/IAT slot:    0x8A37B0
// Slot symbol:     _ZN2QT7QPixmap7setMaskERKNS_7QBitmapE_ptr
// Target type:     _QWORD(QT::QPixmap *__hidden this, const QT::QBitmap *)
// ============================================================

/* see target sig */ ._ZN2QT7QPixmap7setMaskERKNS_7QBitmapE(/* see target signature */)
{
    // Tail-call to _ZN2QT7QPixmap7setMaskERKNS_7QBitmapE via GOT/IAT indirection
    return _ZN2QT7QPixmap7setMaskERKNS_7QBitmapE(/* forwarded args */);
}

