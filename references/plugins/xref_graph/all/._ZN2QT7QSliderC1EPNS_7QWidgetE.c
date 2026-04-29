// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16E00
// Name:            ._ZN2QT7QSliderC1EPNS_7QWidgetE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16E00 jmp     cs:off_4F6E8
//
// Resolved target: _ZN2QT7QSliderC1EPNS_7QWidgetE
// Target address:  0x50A20
// GOT/IAT slot:    0x4F6E8
// Slot symbol:     off_4F6E8
// Target type:     _QWORD(QT::QSlider *__hidden this, QT::QWidget *)
// ============================================================

/* see target sig */ ._ZN2QT7QSliderC1EPNS_7QWidgetE(/* see target signature */)
{
    // Tail-call to _ZN2QT7QSliderC1EPNS_7QWidgetE via GOT/IAT indirection
    return _ZN2QT7QSliderC1EPNS_7QWidgetE(/* forwarded args */);
}

