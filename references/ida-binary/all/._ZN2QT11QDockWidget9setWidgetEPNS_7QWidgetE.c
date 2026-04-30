// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112B80
// Name:            ._ZN2QT11QDockWidget9setWidgetEPNS_7QWidgetE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112B80 jmp     cs:_ZN2QT11QDockWidget9setWidgetEPNS_7QWidgetE_ptr
//
// Resolved target: _ZN2QT11QDockWidget9setWidgetEPNS_7QWidgetE
// Target address:  0x8D4218
// GOT/IAT slot:    0x8A0260
// Slot symbol:     _ZN2QT11QDockWidget9setWidgetEPNS_7QWidgetE_ptr
// Target type:     _QWORD(QT::QDockWidget *__hidden this, QT::QWidget *)
// ============================================================

/* see target sig */ ._ZN2QT11QDockWidget9setWidgetEPNS_7QWidgetE(/* see target signature */)
{
    // Tail-call to _ZN2QT11QDockWidget9setWidgetEPNS_7QWidgetE via GOT/IAT indirection
    return _ZN2QT11QDockWidget9setWidgetEPNS_7QWidgetE(/* forwarded args */);
}

