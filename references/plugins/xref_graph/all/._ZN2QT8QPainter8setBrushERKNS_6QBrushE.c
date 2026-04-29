// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16980
// Name:            ._ZN2QT8QPainter8setBrushERKNS_6QBrushE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16980 jmp     cs:off_4F4A8
//
// Resolved target: _ZN2QT8QPainter8setBrushERKNS_6QBrushE
// Target address:  0x50660
// GOT/IAT slot:    0x4F4A8
// Slot symbol:     off_4F4A8
// Target type:     _QWORD(QT::QPainter *__hidden this, const QT::QBrush *)
// ============================================================

/* see target sig */ ._ZN2QT8QPainter8setBrushERKNS_6QBrushE(/* see target signature */)
{
    // Tail-call to _ZN2QT8QPainter8setBrushERKNS_6QBrushE via GOT/IAT indirection
    return _ZN2QT8QPainter8setBrushERKNS_6QBrushE(/* forwarded args */);
}

