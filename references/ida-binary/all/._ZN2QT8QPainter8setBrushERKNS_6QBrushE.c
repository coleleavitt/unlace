// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115830
// Name:            ._ZN2QT8QPainter8setBrushERKNS_6QBrushE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115830 jmp     cs:_ZN2QT8QPainter8setBrushERKNS_6QBrushE_ptr
//
// Resolved target: _ZN2QT8QPainter8setBrushERKNS_6QBrushE
// Target address:  0x8D5ED0
// GOT/IAT slot:    0x8A18B8
// Slot symbol:     _ZN2QT8QPainter8setBrushERKNS_6QBrushE_ptr
// Target type:     _QWORD(QT::QPainter *__hidden this, const QT::QBrush *)
// ============================================================

/* see target sig */ ._ZN2QT8QPainter8setBrushERKNS_6QBrushE(/* see target signature */)
{
    // Tail-call to _ZN2QT8QPainter8setBrushERKNS_6QBrushE via GOT/IAT indirection
    return _ZN2QT8QPainter8setBrushERKNS_6QBrushE(/* forwarded args */);
}

