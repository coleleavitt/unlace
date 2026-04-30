// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117200
// Name:            ._ZN2QT11QDockWidgetD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117200 jmp     cs:_ZN2QT11QDockWidgetD2Ev_ptr
//
// Resolved target: _ZN2QT11QDockWidgetD2Ev
// Target address:  0x8D6F20
// GOT/IAT slot:    0x8A25A0
// Slot symbol:     _ZN2QT11QDockWidgetD2Ev_ptr
// Target type:     void(QT::QDockWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT11QDockWidgetD2Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT11QDockWidgetD2Ev via GOT/IAT indirection
    return _ZN2QT11QDockWidgetD2Ev(/* forwarded args */);
}

