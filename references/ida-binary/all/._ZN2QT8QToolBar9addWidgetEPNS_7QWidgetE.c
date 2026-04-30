// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117850
// Name:            ._ZN2QT8QToolBar9addWidgetEPNS_7QWidgetE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117850 jmp     cs:_ZN2QT8QToolBar9addWidgetEPNS_7QWidgetE_ptr
//
// Resolved target: _ZN2QT8QToolBar9addWidgetEPNS_7QWidgetE
// Target address:  0x8D7330
// GOT/IAT slot:    0x8A28C8
// Slot symbol:     _ZN2QT8QToolBar9addWidgetEPNS_7QWidgetE_ptr
// Target type:     _QWORD(QT::QToolBar *__hidden this, QT::QWidget *)
// ============================================================

/* see target sig */ ._ZN2QT8QToolBar9addWidgetEPNS_7QWidgetE(/* see target signature */)
{
    // Tail-call to _ZN2QT8QToolBar9addWidgetEPNS_7QWidgetE via GOT/IAT indirection
    return _ZN2QT8QToolBar9addWidgetEPNS_7QWidgetE(/* forwarded args */);
}

