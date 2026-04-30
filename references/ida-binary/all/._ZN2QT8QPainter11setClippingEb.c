// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114E80
// Name:            ._ZN2QT8QPainter11setClippingEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114E80 jmp     cs:_ZN2QT8QPainter11setClippingEb_ptr
//
// Resolved target: _ZN2QT8QPainter11setClippingEb
// Target address:  0x8D58F0
// GOT/IAT slot:    0x8A13E0
// Slot symbol:     _ZN2QT8QPainter11setClippingEb_ptr
// Target type:     _QWORD(QT::QPainter *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT8QPainter11setClippingEb(/* see target signature */)
{
    // Tail-call to _ZN2QT8QPainter11setClippingEb via GOT/IAT indirection
    return _ZN2QT8QPainter11setClippingEb(/* forwarded args */);
}

