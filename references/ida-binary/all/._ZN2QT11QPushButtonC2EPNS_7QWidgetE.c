// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B960
// Name:            ._ZN2QT11QPushButtonC2EPNS_7QWidgetE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B960 jmp     cs:_ZN2QT11QPushButtonC2EPNS_7QWidgetE_ptr
//
// Resolved target: _ZN2QT11QPushButtonC2EPNS_7QWidgetE
// Target address:  0x8D9C10
// GOT/IAT slot:    0x8A4950
// Slot symbol:     _ZN2QT11QPushButtonC2EPNS_7QWidgetE_ptr
// Target type:     _QWORD(QT::QPushButton *__hidden this, QT::QWidget *)
// ============================================================

/* see target sig */ ._ZN2QT11QPushButtonC2EPNS_7QWidgetE(/* see target signature */)
{
    // Tail-call to _ZN2QT11QPushButtonC2EPNS_7QWidgetE via GOT/IAT indirection
    return _ZN2QT11QPushButtonC2EPNS_7QWidgetE(/* forwarded args */);
}

