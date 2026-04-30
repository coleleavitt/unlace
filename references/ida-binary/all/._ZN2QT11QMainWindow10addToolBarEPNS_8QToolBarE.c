// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11BC10
// Name:            ._ZN2QT11QMainWindow10addToolBarEPNS_8QToolBarE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11BC10 jmp     cs:_ZN2QT11QMainWindow10addToolBarEPNS_8QToolBarE_ptr
//
// Resolved target: _ZN2QT11QMainWindow10addToolBarEPNS_8QToolBarE
// Target address:  0x8D9DB8
// GOT/IAT slot:    0x8A4AA8
// Slot symbol:     _ZN2QT11QMainWindow10addToolBarEPNS_8QToolBarE_ptr
// Target type:     _QWORD(QT::QMainWindow *__hidden this, QT::QToolBar *)
// ============================================================

/* see target sig */ ._ZN2QT11QMainWindow10addToolBarEPNS_8QToolBarE(/* see target signature */)
{
    // Tail-call to _ZN2QT11QMainWindow10addToolBarEPNS_8QToolBarE via GOT/IAT indirection
    return _ZN2QT11QMainWindow10addToolBarEPNS_8QToolBarE(/* forwarded args */);
}

