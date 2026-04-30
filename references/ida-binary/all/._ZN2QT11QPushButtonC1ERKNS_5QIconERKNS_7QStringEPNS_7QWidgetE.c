// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118990
// Name:            ._ZN2QT11QPushButtonC1ERKNS_5QIconERKNS_7QStringEPNS_7QWidgetE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118990 jmp     cs:_ZN2QT11QPushButtonC1ERKNS_5QIconERKNS_7QStringEPNS_7QWidgetE_ptr
//
// Resolved target: _ZN2QT11QPushButtonC1ERKNS_5QIconERKNS_7QStringEPNS_7QWidgetE
// Target address:  0x8D7DE0
// GOT/IAT slot:    0x8A3168
// Slot symbol:     _ZN2QT11QPushButtonC1ERKNS_5QIconERKNS_7QStringEPNS_7QWidgetE_ptr
// Target type:     _QWORD(QT::QPushButton *__hidden this, const QT::QIcon *, const QT::QString *, QT::QWidget *)
// ============================================================

/* see target sig */ ._ZN2QT11QPushButtonC1ERKNS_5QIconERKNS_7QStringEPNS_7QWidgetE(/* see target signature */)
{
    // Tail-call to _ZN2QT11QPushButtonC1ERKNS_5QIconERKNS_7QStringEPNS_7QWidgetE via GOT/IAT indirection
    return _ZN2QT11QPushButtonC1ERKNS_5QIconERKNS_7QStringEPNS_7QWidgetE(/* forwarded args */);
}

