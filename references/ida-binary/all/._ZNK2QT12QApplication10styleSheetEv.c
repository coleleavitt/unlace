// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119880
// Name:            ._ZNK2QT12QApplication10styleSheetEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119880 jmp     cs:_ZNK2QT12QApplication10styleSheetEv_ptr
//
// Resolved target: _ZNK2QT12QApplication10styleSheetEv
// Target address:  0x8D8760
// GOT/IAT slot:    0x8A38E0
// Slot symbol:     _ZNK2QT12QApplication10styleSheetEv_ptr
// Target type:     _QWORD(QT::QApplication *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT12QApplication10styleSheetEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT12QApplication10styleSheetEv via GOT/IAT indirection
    return _ZNK2QT12QApplication10styleSheetEv(/* forwarded args */);
}

