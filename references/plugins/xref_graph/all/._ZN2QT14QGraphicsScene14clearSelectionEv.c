// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x17240
// Name:            ._ZN2QT14QGraphicsScene14clearSelectionEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x17240 jmp     cs:off_4F908
//
// Resolved target: _ZN2QT14QGraphicsScene14clearSelectionEv
// Target address:  0x50DF8
// GOT/IAT slot:    0x4F908
// Slot symbol:     off_4F908
// Target type:     _QWORD(QT::QGraphicsScene *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT14QGraphicsScene14clearSelectionEv(/* see target signature */)
{
    // Tail-call to _ZN2QT14QGraphicsScene14clearSelectionEv via GOT/IAT indirection
    return _ZN2QT14QGraphicsScene14clearSelectionEv(/* forwarded args */);
}

