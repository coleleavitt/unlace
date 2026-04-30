// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A4F0
// Name:            ._ZN2QT19QAbstractScrollArea17mouseReleaseEventEPNS_11QMouseEventE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A4F0 jmp     cs:_ZN2QT19QAbstractScrollArea17mouseReleaseEventEPNS_11QMouseEventE_ptr
//
// Resolved target: _ZN2QT19QAbstractScrollArea17mouseReleaseEventEPNS_11QMouseEventE
// Target address:  0x8D8F30
// GOT/IAT slot:    0x8A3F18
// Slot symbol:     _ZN2QT19QAbstractScrollArea17mouseReleaseEventEPNS_11QMouseEventE_ptr
// Target type:     _QWORD(QT::QAbstractScrollArea *__hidden this, QT::QMouseEvent *)
// ============================================================

/* see target sig */ ._ZN2QT19QAbstractScrollArea17mouseReleaseEventEPNS_11QMouseEventE(/* see target signature */)
{
    // Tail-call to _ZN2QT19QAbstractScrollArea17mouseReleaseEventEPNS_11QMouseEventE via GOT/IAT indirection
    return _ZN2QT19QAbstractScrollArea17mouseReleaseEventEPNS_11QMouseEventE(/* forwarded args */);
}

