// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117900
// Name:            ._ZN2QT11QMessageBox16setDefaultButtonEPNS_11QPushButtonE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117900 jmp     cs:_ZN2QT11QMessageBox16setDefaultButtonEPNS_11QPushButtonE_ptr
//
// Resolved target: _ZN2QT11QMessageBox16setDefaultButtonEPNS_11QPushButtonE
// Target address:  0x8D73A0
// GOT/IAT slot:    0x8A2920
// Slot symbol:     _ZN2QT11QMessageBox16setDefaultButtonEPNS_11QPushButtonE_ptr
// Target type:     _QWORD(QT::QMessageBox *__hidden this, QT::QPushButton *)
// ============================================================

/* see target sig */ ._ZN2QT11QMessageBox16setDefaultButtonEPNS_11QPushButtonE(/* see target signature */)
{
    // Tail-call to _ZN2QT11QMessageBox16setDefaultButtonEPNS_11QPushButtonE via GOT/IAT indirection
    return _ZN2QT11QMessageBox16setDefaultButtonEPNS_11QPushButtonE(/* forwarded args */);
}

