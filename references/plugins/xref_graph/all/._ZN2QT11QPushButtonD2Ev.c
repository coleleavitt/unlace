// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16780
// Name:            ._ZN2QT11QPushButtonD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16780 jmp     cs:off_4F3A8
//
// Resolved target: _ZN2QT11QPushButtonD2Ev
// Target address:  0x50400
// GOT/IAT slot:    0x4F3A8
// Slot symbol:     off_4F3A8
// Target type:     void(QT::QPushButton *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT11QPushButtonD2Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT11QPushButtonD2Ev via GOT/IAT indirection
    return _ZN2QT11QPushButtonD2Ev(/* forwarded args */);
}

