// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114D70
// Name:            ._ZN2QT16QTableWidgetItemC1ERKNS_7QStringEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114D70 jmp     cs:_ZN2QT16QTableWidgetItemC1ERKNS_7QStringEi_ptr
//
// Resolved target: _ZN2QT16QTableWidgetItemC1ERKNS_7QStringEi
// Target address:  0x8D5850
// GOT/IAT slot:    0x8A1358
// Slot symbol:     _ZN2QT16QTableWidgetItemC1ERKNS_7QStringEi_ptr
// Target type:     _QWORD(QT::QTableWidgetItem *__hidden this, const QT::QString *, int)
// ============================================================

/* see target sig */ ._ZN2QT16QTableWidgetItemC1ERKNS_7QStringEi(/* see target signature */)
{
    // Tail-call to _ZN2QT16QTableWidgetItemC1ERKNS_7QStringEi via GOT/IAT indirection
    return _ZN2QT16QTableWidgetItemC1ERKNS_7QStringEi(/* forwarded args */);
}

