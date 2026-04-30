// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B180
// Name:            ._ZN2QT11QFormLayout6addRowEPNS_7QWidgetES2_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B180 jmp     cs:_ZN2QT11QFormLayout6addRowEPNS_7QWidgetES2__ptr
//
// Resolved target: _ZN2QT11QFormLayout6addRowEPNS_7QWidgetES2_
// Target address:  0x8D9700
// GOT/IAT slot:    0x8A4560
// Slot symbol:     _ZN2QT11QFormLayout6addRowEPNS_7QWidgetES2__ptr
// Target type:     _QWORD(QT::QFormLayout *__hidden this, QT::QWidget *, QT::QWidget *)
// ============================================================

/* see target sig */ ._ZN2QT11QFormLayout6addRowEPNS_7QWidgetES2_(/* see target signature */)
{
    // Tail-call to _ZN2QT11QFormLayout6addRowEPNS_7QWidgetES2_ via GOT/IAT indirection
    return _ZN2QT11QFormLayout6addRowEPNS_7QWidgetES2_(/* forwarded args */);
}

