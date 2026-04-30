// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1122D0
// Name:            ._ZN2QT13QStandardItem9removeRowEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1122D0 jmp     cs:_ZN2QT13QStandardItem9removeRowEi_ptr
//
// Resolved target: _ZN2QT13QStandardItem9removeRowEi
// Target address:  0x8D3C80
// GOT/IAT slot:    0x89FE08
// Slot symbol:     _ZN2QT13QStandardItem9removeRowEi_ptr
// Target type:     _QWORD(QT::QStandardItem *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT13QStandardItem9removeRowEi(/* see target signature */)
{
    // Tail-call to _ZN2QT13QStandardItem9removeRowEi via GOT/IAT indirection
    return _ZN2QT13QStandardItem9removeRowEi(/* forwarded args */);
}

