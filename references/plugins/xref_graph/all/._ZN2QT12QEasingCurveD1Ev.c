// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x169C0
// Name:            ._ZN2QT12QEasingCurveD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x169C0 jmp     cs:off_4F4C8
//
// Resolved target: _ZN2QT12QEasingCurveD1Ev
// Target address:  0x50698
// GOT/IAT slot:    0x4F4C8
// Slot symbol:     off_4F4C8
// Target type:     void(QT::QEasingCurve *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT12QEasingCurveD1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT12QEasingCurveD1Ev via GOT/IAT indirection
    return _ZN2QT12QEasingCurveD1Ev(/* forwarded args */);
}

