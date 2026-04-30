// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113810
// Name:            ._ZN2QT14QStackedWidget12insertWidgetEiPNS_7QWidgetE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113810 jmp     cs:_ZN2QT14QStackedWidget12insertWidgetEiPNS_7QWidgetE_ptr
//
// Resolved target: _ZN2QT14QStackedWidget12insertWidgetEiPNS_7QWidgetE
// Target address:  0x8D4A48
// GOT/IAT slot:    0x8A08A8
// Slot symbol:     _ZN2QT14QStackedWidget12insertWidgetEiPNS_7QWidgetE_ptr
// Target type:     _QWORD(QT::QStackedWidget *__hidden this, int, QT::QWidget *)
// ============================================================

/* see target sig */ ._ZN2QT14QStackedWidget12insertWidgetEiPNS_7QWidgetE(/* see target signature */)
{
    // Tail-call to _ZN2QT14QStackedWidget12insertWidgetEiPNS_7QWidgetE via GOT/IAT indirection
    return _ZN2QT14QStackedWidget12insertWidgetEiPNS_7QWidgetE(/* forwarded args */);
}

