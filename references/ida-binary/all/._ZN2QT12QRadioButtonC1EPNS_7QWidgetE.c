// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11BCC0
// Name:            ._ZN2QT12QRadioButtonC1EPNS_7QWidgetE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11BCC0 jmp     cs:_ZN2QT12QRadioButtonC1EPNS_7QWidgetE_ptr
//
// Resolved target: _ZN2QT12QRadioButtonC1EPNS_7QWidgetE
// Target address:  0x8D9E30
// GOT/IAT slot:    0x8A4B00
// Slot symbol:     _ZN2QT12QRadioButtonC1EPNS_7QWidgetE_ptr
// Target type:     _QWORD(QT::QRadioButton *__hidden this, QT::QWidget *)
// ============================================================

/* see target sig */ ._ZN2QT12QRadioButtonC1EPNS_7QWidgetE(/* see target signature */)
{
    // Tail-call to _ZN2QT12QRadioButtonC1EPNS_7QWidgetE via GOT/IAT indirection
    return _ZN2QT12QRadioButtonC1EPNS_7QWidgetE(/* forwarded args */);
}

