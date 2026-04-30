// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119A70
// Name:            ._ZNK2QT11QMessageBox8checkBoxEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119A70 jmp     cs:_ZNK2QT11QMessageBox8checkBoxEv_ptr
//
// Resolved target: _ZNK2QT11QMessageBox8checkBoxEv
// Target address:  0x8D8898
// GOT/IAT slot:    0x8A39D8
// Slot symbol:     _ZNK2QT11QMessageBox8checkBoxEv_ptr
// Target type:     _QWORD(QT::QMessageBox *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT11QMessageBox8checkBoxEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QMessageBox8checkBoxEv via GOT/IAT indirection
    return _ZNK2QT11QMessageBox8checkBoxEv(/* forwarded args */);
}

