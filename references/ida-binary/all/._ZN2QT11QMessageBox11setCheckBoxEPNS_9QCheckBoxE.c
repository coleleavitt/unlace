// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115CE0
// Name:            ._ZN2QT11QMessageBox11setCheckBoxEPNS_9QCheckBoxE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115CE0 jmp     cs:_ZN2QT11QMessageBox11setCheckBoxEPNS_9QCheckBoxE_ptr
//
// Resolved target: _ZN2QT11QMessageBox11setCheckBoxEPNS_9QCheckBoxE
// Target address:  0x8D61D0
// GOT/IAT slot:    0x8A1B10
// Slot symbol:     _ZN2QT11QMessageBox11setCheckBoxEPNS_9QCheckBoxE_ptr
// Target type:     _QWORD(QT::QMessageBox *__hidden this, QT::QCheckBox *)
// ============================================================

/* see target sig */ ._ZN2QT11QMessageBox11setCheckBoxEPNS_9QCheckBoxE(/* see target signature */)
{
    // Tail-call to _ZN2QT11QMessageBox11setCheckBoxEPNS_9QCheckBoxE via GOT/IAT indirection
    return _ZN2QT11QMessageBox11setCheckBoxEPNS_9QCheckBoxE(/* forwarded args */);
}

