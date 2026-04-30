// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1125A0
// Name:            ._ZN2QT10QTableViewC2EPNS_7QWidgetE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1125A0 jmp     cs:_ZN2QT10QTableViewC2EPNS_7QWidgetE_ptr
//
// Resolved target: _ZN2QT10QTableViewC2EPNS_7QWidgetE
// Target address:  0x8D3E70
// GOT/IAT slot:    0x89FF70
// Slot symbol:     _ZN2QT10QTableViewC2EPNS_7QWidgetE_ptr
// Target type:     _QWORD(QT::QTableView *__hidden this, QT::QWidget *)
// ============================================================

/* see target sig */ ._ZN2QT10QTableViewC2EPNS_7QWidgetE(/* see target signature */)
{
    // Tail-call to _ZN2QT10QTableViewC2EPNS_7QWidgetE via GOT/IAT indirection
    return _ZN2QT10QTableViewC2EPNS_7QWidgetE(/* forwarded args */);
}

