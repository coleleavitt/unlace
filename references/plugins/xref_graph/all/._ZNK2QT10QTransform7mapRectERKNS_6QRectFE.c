// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16B30
// Name:            ._ZNK2QT10QTransform7mapRectERKNS_6QRectFE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16B30 jmp     cs:off_4F580
//
// Resolved target: _ZNK2QT10QTransform7mapRectERKNS_6QRectFE
// Target address:  0x507C8
// GOT/IAT slot:    0x4F580
// Slot symbol:     off_4F580
// Target type:     _QWORD(QT::QTransform *__hidden this, const QT::QRectF *)
// ============================================================

/* see target sig */ ._ZNK2QT10QTransform7mapRectERKNS_6QRectFE(/* see target signature */)
{
    // Tail-call to _ZNK2QT10QTransform7mapRectERKNS_6QRectFE via GOT/IAT indirection
    return _ZNK2QT10QTransform7mapRectERKNS_6QRectFE(/* forwarded args */);
}

