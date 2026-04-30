// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1164D0
// Name:            ._ZN2QT11QMainWindow16setCentralWidgetEPNS_7QWidgetE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1164D0 jmp     cs:_ZN2QT11QMainWindow16setCentralWidgetEPNS_7QWidgetE_ptr
//
// Resolved target: _ZN2QT11QMainWindow16setCentralWidgetEPNS_7QWidgetE
// Target address:  0x8D66C0
// GOT/IAT slot:    0x8A1F08
// Slot symbol:     _ZN2QT11QMainWindow16setCentralWidgetEPNS_7QWidgetE_ptr
// Target type:     _QWORD(QT::QMainWindow *__hidden this, QT::QWidget *)
// ============================================================

/* see target sig */ ._ZN2QT11QMainWindow16setCentralWidgetEPNS_7QWidgetE(/* see target signature */)
{
    // Tail-call to _ZN2QT11QMainWindow16setCentralWidgetEPNS_7QWidgetE via GOT/IAT indirection
    return _ZN2QT11QMainWindow16setCentralWidgetEPNS_7QWidgetE(/* forwarded args */);
}

