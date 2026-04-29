// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16F30
// Name:            ._ZN2QT8QVariantC1ENS_6QRectFE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16F30 jmp     cs:off_4F780
//
// Resolved target: _ZN2QT8QVariantC1ENS_6QRectFE
// Target address:  0x50B58
// GOT/IAT slot:    0x4F780
// Slot symbol:     off_4F780
// Target type:     _QWORD __high(QT::QRectF)
// ============================================================

/* see target sig */ ._ZN2QT8QVariantC1ENS_6QRectFE(/* see target signature */)
{
    // Tail-call to _ZN2QT8QVariantC1ENS_6QRectFE via GOT/IAT indirection
    return _ZN2QT8QVariantC1ENS_6QRectFE(/* forwarded args */);
}

