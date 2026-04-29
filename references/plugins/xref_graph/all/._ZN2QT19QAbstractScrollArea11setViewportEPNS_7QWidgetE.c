// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16DA0
// Name:            ._ZN2QT19QAbstractScrollArea11setViewportEPNS_7QWidgetE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16DA0 jmp     cs:off_4F6B8
//
// Resolved target: _ZN2QT19QAbstractScrollArea11setViewportEPNS_7QWidgetE
// Target address:  0x509C0
// GOT/IAT slot:    0x4F6B8
// Slot symbol:     off_4F6B8
// Target type:     _QWORD(QT::QAbstractScrollArea *__hidden this, QT::QWidget *)
// ============================================================

/* see target sig */ ._ZN2QT19QAbstractScrollArea11setViewportEPNS_7QWidgetE(/* see target signature */)
{
    // Tail-call to _ZN2QT19QAbstractScrollArea11setViewportEPNS_7QWidgetE via GOT/IAT indirection
    return _ZN2QT19QAbstractScrollArea11setViewportEPNS_7QWidgetE(/* forwarded args */);
}

