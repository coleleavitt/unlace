// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118530
// Name:            ._ZN2QT16QTableWidgetItemC1Ei
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118530 jmp     cs:_ZN2QT16QTableWidgetItemC1Ei_ptr
//
// Resolved target: _ZN2QT16QTableWidgetItemC1Ei
// Target address:  0x8D7B50
// GOT/IAT slot:    0x8A2F38
// Slot symbol:     _ZN2QT16QTableWidgetItemC1Ei_ptr
// Target type:     _QWORD(QT::QTableWidgetItem *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT16QTableWidgetItemC1Ei(/* see target signature */)
{
    // Tail-call to _ZN2QT16QTableWidgetItemC1Ei via GOT/IAT indirection
    return _ZN2QT16QTableWidgetItemC1Ei(/* forwarded args */);
}

