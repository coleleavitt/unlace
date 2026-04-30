// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B720
// Name:            ._ZN2QT12QTableWidget9removeRowEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B720 jmp     cs:_ZN2QT12QTableWidget9removeRowEi_ptr
//
// Resolved target: _ZN2QT12QTableWidget9removeRowEi
// Target address:  0x8D9AB0
// GOT/IAT slot:    0x8A4830
// Slot symbol:     _ZN2QT12QTableWidget9removeRowEi_ptr
// Target type:     _QWORD(QT::QTableWidget *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT12QTableWidget9removeRowEi(/* see target signature */)
{
    // Tail-call to _ZN2QT12QTableWidget9removeRowEi via GOT/IAT indirection
    return _ZN2QT12QTableWidget9removeRowEi(/* forwarded args */);
}

