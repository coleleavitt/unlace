// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119340
// Name:            ._ZN2QT11QMainWindow13removeToolBarEPNS_8QToolBarE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119340 jmp     cs:_ZN2QT11QMainWindow13removeToolBarEPNS_8QToolBarE_ptr
//
// Resolved target: _ZN2QT11QMainWindow13removeToolBarEPNS_8QToolBarE
// Target address:  0x8D83E8
// GOT/IAT slot:    0x8A3640
// Slot symbol:     _ZN2QT11QMainWindow13removeToolBarEPNS_8QToolBarE_ptr
// Target type:     _QWORD(QT::QMainWindow *__hidden this, QT::QToolBar *)
// ============================================================

/* see target sig */ ._ZN2QT11QMainWindow13removeToolBarEPNS_8QToolBarE(/* see target signature */)
{
    // Tail-call to _ZN2QT11QMainWindow13removeToolBarEPNS_8QToolBarE via GOT/IAT indirection
    return _ZN2QT11QMainWindow13removeToolBarEPNS_8QToolBarE(/* forwarded args */);
}

