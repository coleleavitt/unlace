// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1117D0
// Name:            ._ZN2QT12QPaintDeviceC2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1117D0 jmp     cs:_ZN2QT12QPaintDeviceC2Ev_ptr
//
// Resolved target: _ZN2QT12QPaintDeviceC2Ev
// Target address:  0x8D35B0
// GOT/IAT slot:    0x89F888
// Slot symbol:     _ZN2QT12QPaintDeviceC2Ev_ptr
// Target type:     _QWORD(QT::QPaintDevice *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT12QPaintDeviceC2Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT12QPaintDeviceC2Ev via GOT/IAT indirection
    return _ZN2QT12QPaintDeviceC2Ev(/* forwarded args */);
}

