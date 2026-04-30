// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112810
// Name:            ._ZNK2QT11QMessageBox13clickedButtonEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112810 jmp     cs:_ZNK2QT11QMessageBox13clickedButtonEv_ptr
//
// Resolved target: _ZNK2QT11QMessageBox13clickedButtonEv
// Target address:  0x8D4008
// GOT/IAT slot:    0x8A00A8
// Slot symbol:     _ZNK2QT11QMessageBox13clickedButtonEv_ptr
// Target type:     _QWORD(QT::QMessageBox *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT11QMessageBox13clickedButtonEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QMessageBox13clickedButtonEv via GOT/IAT indirection
    return _ZNK2QT11QMessageBox13clickedButtonEv(/* forwarded args */);
}

