// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115810
// Name:            ._ZN2QT8QPainterC1EPNS_12QPaintDeviceE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115810 jmp     cs:_ZN2QT8QPainterC1EPNS_12QPaintDeviceE_ptr
//
// Resolved target: _ZN2QT8QPainterC1EPNS_12QPaintDeviceE
// Target address:  0x8D5EB8
// GOT/IAT slot:    0x8A18A8
// Slot symbol:     _ZN2QT8QPainterC1EPNS_12QPaintDeviceE_ptr
// Target type:     _QWORD(QT::QPainter *__hidden this, QT::QPaintDevice *)
// ============================================================

/* see target sig */ ._ZN2QT8QPainterC1EPNS_12QPaintDeviceE(/* see target signature */)
{
    // Tail-call to _ZN2QT8QPainterC1EPNS_12QPaintDeviceE via GOT/IAT indirection
    return _ZN2QT8QPainterC1EPNS_12QPaintDeviceE(/* forwarded args */);
}

