// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116590
// Name:            ._ZN2QT8QPainter5beginEPNS_12QPaintDeviceE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116590 jmp     cs:_ZN2QT8QPainter5beginEPNS_12QPaintDeviceE_ptr
//
// Resolved target: _ZN2QT8QPainter5beginEPNS_12QPaintDeviceE
// Target address:  0x8D6750
// GOT/IAT slot:    0x8A1F68
// Slot symbol:     _ZN2QT8QPainter5beginEPNS_12QPaintDeviceE_ptr
// Target type:     _QWORD(QT::QPainter *__hidden this, QT::QPaintDevice *)
// ============================================================

/* see target sig */ ._ZN2QT8QPainter5beginEPNS_12QPaintDeviceE(/* see target signature */)
{
    // Tail-call to _ZN2QT8QPainter5beginEPNS_12QPaintDeviceE via GOT/IAT indirection
    return _ZN2QT8QPainter5beginEPNS_12QPaintDeviceE(/* forwarded args */);
}

