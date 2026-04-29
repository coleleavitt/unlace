// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16090
// Name:            ._ZN2QT13QGraphicsItem10setVisibleEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16090 jmp     cs:off_4F030
//
// Resolved target: _ZN2QT13QGraphicsItem10setVisibleEb
// Target address:  0x4FE58
// GOT/IAT slot:    0x4F030
// Slot symbol:     off_4F030
// Target type:     _QWORD(QT::QGraphicsItem *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT13QGraphicsItem10setVisibleEb(/* see target signature */)
{
    // Tail-call to _ZN2QT13QGraphicsItem10setVisibleEb via GOT/IAT indirection
    return _ZN2QT13QGraphicsItem10setVisibleEb(/* forwarded args */);
}

