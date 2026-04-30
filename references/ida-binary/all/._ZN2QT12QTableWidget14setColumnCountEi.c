// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1138C0
// Name:            ._ZN2QT12QTableWidget14setColumnCountEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1138C0 jmp     cs:_ZN2QT12QTableWidget14setColumnCountEi_ptr
//
// Resolved target: _ZN2QT12QTableWidget14setColumnCountEi
// Target address:  0x8D4AC0
// GOT/IAT slot:    0x8A0900
// Slot symbol:     _ZN2QT12QTableWidget14setColumnCountEi_ptr
// Target type:     _QWORD(QT::QTableWidget *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT12QTableWidget14setColumnCountEi(/* see target signature */)
{
    // Tail-call to _ZN2QT12QTableWidget14setColumnCountEi via GOT/IAT indirection
    return _ZN2QT12QTableWidget14setColumnCountEi(/* forwarded args */);
}

