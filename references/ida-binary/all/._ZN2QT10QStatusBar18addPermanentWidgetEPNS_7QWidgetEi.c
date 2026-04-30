// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A010
// Name:            ._ZN2QT10QStatusBar18addPermanentWidgetEPNS_7QWidgetEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A010 jmp     cs:_ZN2QT10QStatusBar18addPermanentWidgetEPNS_7QWidgetEi_ptr
//
// Resolved target: _ZN2QT10QStatusBar18addPermanentWidgetEPNS_7QWidgetEi
// Target address:  0x8D8C20
// GOT/IAT slot:    0x8A3CA8
// Slot symbol:     _ZN2QT10QStatusBar18addPermanentWidgetEPNS_7QWidgetEi_ptr
// Target type:     _QWORD(QT::QStatusBar *__hidden this, QT::QWidget *, int)
// ============================================================

/* see target sig */ ._ZN2QT10QStatusBar18addPermanentWidgetEPNS_7QWidgetEi(/* see target signature */)
{
    // Tail-call to _ZN2QT10QStatusBar18addPermanentWidgetEPNS_7QWidgetEi via GOT/IAT indirection
    return _ZN2QT10QStatusBar18addPermanentWidgetEPNS_7QWidgetEi(/* forwarded args */);
}

