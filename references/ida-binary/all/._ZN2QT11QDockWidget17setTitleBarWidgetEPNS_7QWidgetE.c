// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B610
// Name:            ._ZN2QT11QDockWidget17setTitleBarWidgetEPNS_7QWidgetE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B610 jmp     cs:_ZN2QT11QDockWidget17setTitleBarWidgetEPNS_7QWidgetE_ptr
//
// Resolved target: _ZN2QT11QDockWidget17setTitleBarWidgetEPNS_7QWidgetE
// Target address:  0x8D9A08
// GOT/IAT slot:    0x8A47A8
// Slot symbol:     _ZN2QT11QDockWidget17setTitleBarWidgetEPNS_7QWidgetE_ptr
// Target type:     _QWORD(QT::QDockWidget *__hidden this, QT::QWidget *)
// ============================================================

/* see target sig */ ._ZN2QT11QDockWidget17setTitleBarWidgetEPNS_7QWidgetE(/* see target signature */)
{
    // Tail-call to _ZN2QT11QDockWidget17setTitleBarWidgetEPNS_7QWidgetE via GOT/IAT indirection
    return _ZN2QT11QDockWidget17setTitleBarWidgetEPNS_7QWidgetE(/* forwarded args */);
}

