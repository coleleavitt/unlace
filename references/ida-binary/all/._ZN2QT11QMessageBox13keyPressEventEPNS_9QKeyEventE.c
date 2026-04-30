// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1182F0
// Name:            ._ZN2QT11QMessageBox13keyPressEventEPNS_9QKeyEventE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1182F0 jmp     cs:_ZN2QT11QMessageBox13keyPressEventEPNS_9QKeyEventE_ptr
//
// Resolved target: _ZN2QT11QMessageBox13keyPressEventEPNS_9QKeyEventE
// Target address:  0x8D79E8
// GOT/IAT slot:    0x8A2E18
// Slot symbol:     _ZN2QT11QMessageBox13keyPressEventEPNS_9QKeyEventE_ptr
// Target type:     _QWORD(QT::QMessageBox *__hidden this, QT::QKeyEvent *)
// ============================================================

/* see target sig */ ._ZN2QT11QMessageBox13keyPressEventEPNS_9QKeyEventE(/* see target signature */)
{
    // Tail-call to _ZN2QT11QMessageBox13keyPressEventEPNS_9QKeyEventE via GOT/IAT indirection
    return _ZN2QT11QMessageBox13keyPressEventEPNS_9QKeyEventE(/* forwarded args */);
}

