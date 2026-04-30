// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118FD0
// Name:            ._ZNK2QT12QTableWidget20horizontalHeaderItemEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118FD0 jmp     cs:_ZNK2QT12QTableWidget20horizontalHeaderItemEi_ptr
//
// Resolved target: _ZNK2QT12QTableWidget20horizontalHeaderItemEi
// Target address:  0x8D81B0
// GOT/IAT slot:    0x8A3488
// Slot symbol:     _ZNK2QT12QTableWidget20horizontalHeaderItemEi_ptr
// Target type:     _QWORD(QT::QTableWidget *__hidden this, int)
// ============================================================

/* see target sig */ ._ZNK2QT12QTableWidget20horizontalHeaderItemEi(/* see target signature */)
{
    // Tail-call to _ZNK2QT12QTableWidget20horizontalHeaderItemEi via GOT/IAT indirection
    return _ZNK2QT12QTableWidget20horizontalHeaderItemEi(/* forwarded args */);
}

