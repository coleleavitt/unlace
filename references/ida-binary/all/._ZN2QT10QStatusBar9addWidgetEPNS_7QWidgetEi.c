// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1165E0
// Name:            ._ZN2QT10QStatusBar9addWidgetEPNS_7QWidgetEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1165E0 jmp     cs:_ZN2QT10QStatusBar9addWidgetEPNS_7QWidgetEi_ptr
//
// Resolved target: _ZN2QT10QStatusBar9addWidgetEPNS_7QWidgetEi
// Target address:  0x8D6780
// GOT/IAT slot:    0x8A1F90
// Slot symbol:     _ZN2QT10QStatusBar9addWidgetEPNS_7QWidgetEi_ptr
// Target type:     _QWORD(QT::QStatusBar *__hidden this, QT::QWidget *, int)
// ============================================================

/* see target sig */ ._ZN2QT10QStatusBar9addWidgetEPNS_7QWidgetEi(/* see target signature */)
{
    // Tail-call to _ZN2QT10QStatusBar9addWidgetEPNS_7QWidgetEi via GOT/IAT indirection
    return _ZN2QT10QStatusBar9addWidgetEPNS_7QWidgetEi(/* forwarded args */);
}

