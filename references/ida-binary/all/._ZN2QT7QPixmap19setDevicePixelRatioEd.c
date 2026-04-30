// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112A00
// Name:            ._ZN2QT7QPixmap19setDevicePixelRatioEd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112A00 jmp     cs:_ZN2QT7QPixmap19setDevicePixelRatioEd_ptr
//
// Resolved target: _ZN2QT7QPixmap19setDevicePixelRatioEd
// Target address:  0x8D4128
// GOT/IAT slot:    0x8A01A0
// Slot symbol:     _ZN2QT7QPixmap19setDevicePixelRatioEd_ptr
// Target type:     _QWORD(QT::QPixmap *__hidden this, double)
// ============================================================

/* see target sig */ ._ZN2QT7QPixmap19setDevicePixelRatioEd(/* see target signature */)
{
    // Tail-call to _ZN2QT7QPixmap19setDevicePixelRatioEd via GOT/IAT indirection
    return _ZN2QT7QPixmap19setDevicePixelRatioEd(/* forwarded args */);
}

