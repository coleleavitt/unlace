// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119770
// Name:            ._ZN2QT12QTableWidgetC1EPNS_7QWidgetE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119770 jmp     cs:_ZN2QT12QTableWidgetC1EPNS_7QWidgetE_ptr
//
// Resolved target: _ZN2QT12QTableWidgetC1EPNS_7QWidgetE
// Target address:  0x8D86D0
// GOT/IAT slot:    0x8A3858
// Slot symbol:     _ZN2QT12QTableWidgetC1EPNS_7QWidgetE_ptr
// Target type:     _QWORD(QT::QTableWidget *__hidden this, QT::QWidget *)
// ============================================================

/* see target sig */ ._ZN2QT12QTableWidgetC1EPNS_7QWidgetE(/* see target signature */)
{
    // Tail-call to _ZN2QT12QTableWidgetC1EPNS_7QWidgetE via GOT/IAT indirection
    return _ZN2QT12QTableWidgetC1EPNS_7QWidgetE(/* forwarded args */);
}

