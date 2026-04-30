// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1199F0
// Name:            ._ZN2QT19QAbstractScrollArea13keyPressEventEPNS_9QKeyEventE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1199F0 jmp     cs:_ZN2QT19QAbstractScrollArea13keyPressEventEPNS_9QKeyEventE_ptr
//
// Resolved target: _ZN2QT19QAbstractScrollArea13keyPressEventEPNS_9QKeyEventE
// Target address:  0x8D8850
// GOT/IAT slot:    0x8A3998
// Slot symbol:     _ZN2QT19QAbstractScrollArea13keyPressEventEPNS_9QKeyEventE_ptr
// Target type:     _QWORD(QT::QAbstractScrollArea *__hidden this, QT::QKeyEvent *)
// ============================================================

/* see target sig */ ._ZN2QT19QAbstractScrollArea13keyPressEventEPNS_9QKeyEventE(/* see target signature */)
{
    // Tail-call to _ZN2QT19QAbstractScrollArea13keyPressEventEPNS_9QKeyEventE via GOT/IAT indirection
    return _ZN2QT19QAbstractScrollArea13keyPressEventEPNS_9QKeyEventE(/* forwarded args */);
}

