// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116600
// Name:            ._ZN2QT13QStandardItem14setColumnCountEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116600 jmp     cs:_ZN2QT13QStandardItem14setColumnCountEi_ptr
//
// Resolved target: _ZN2QT13QStandardItem14setColumnCountEi
// Target address:  0x8D6790
// GOT/IAT slot:    0x8A1FA0
// Slot symbol:     _ZN2QT13QStandardItem14setColumnCountEi_ptr
// Target type:     _QWORD(QT::QStandardItem *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT13QStandardItem14setColumnCountEi(/* see target signature */)
{
    // Tail-call to _ZN2QT13QStandardItem14setColumnCountEi via GOT/IAT indirection
    return _ZN2QT13QStandardItem14setColumnCountEi(/* forwarded args */);
}

