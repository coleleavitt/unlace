// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117D90
// Name:            ._ZN2QT12QTableWidget23setHorizontalHeaderItemEiPNS_16QTableWidgetItemE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117D90 jmp     cs:_ZN2QT12QTableWidget23setHorizontalHeaderItemEiPNS_16QTableWidgetItemE_ptr
//
// Resolved target: _ZN2QT12QTableWidget23setHorizontalHeaderItemEiPNS_16QTableWidgetItemE
// Target address:  0x8D7678
// GOT/IAT slot:    0x8A2B68
// Slot symbol:     _ZN2QT12QTableWidget23setHorizontalHeaderItemEiPNS_16QTableWidgetItemE_ptr
// Target type:     _QWORD(QT::QTableWidget *__hidden this, int, QT::QTableWidgetItem *)
// ============================================================

/* see target sig */ ._ZN2QT12QTableWidget23setHorizontalHeaderItemEiPNS_16QTableWidgetItemE(/* see target signature */)
{
    // Tail-call to _ZN2QT12QTableWidget23setHorizontalHeaderItemEiPNS_16QTableWidgetItemE via GOT/IAT indirection
    return _ZN2QT12QTableWidget23setHorizontalHeaderItemEiPNS_16QTableWidgetItemE(/* forwarded args */);
}

