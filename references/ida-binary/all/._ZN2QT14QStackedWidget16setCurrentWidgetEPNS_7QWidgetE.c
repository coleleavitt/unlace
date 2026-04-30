// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116B90
// Name:            ._ZN2QT14QStackedWidget16setCurrentWidgetEPNS_7QWidgetE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116B90 jmp     cs:_ZN2QT14QStackedWidget16setCurrentWidgetEPNS_7QWidgetE_ptr
//
// Resolved target: _ZN2QT14QStackedWidget16setCurrentWidgetEPNS_7QWidgetE
// Target address:  0x8D6B20
// GOT/IAT slot:    0x8A2268
// Slot symbol:     _ZN2QT14QStackedWidget16setCurrentWidgetEPNS_7QWidgetE_ptr
// Target type:     _QWORD(QT::QStackedWidget *__hidden this, QT::QWidget *)
// ============================================================

/* see target sig */ ._ZN2QT14QStackedWidget16setCurrentWidgetEPNS_7QWidgetE(/* see target signature */)
{
    // Tail-call to _ZN2QT14QStackedWidget16setCurrentWidgetEPNS_7QWidgetE via GOT/IAT indirection
    return _ZN2QT14QStackedWidget16setCurrentWidgetEPNS_7QWidgetE(/* forwarded args */);
}

