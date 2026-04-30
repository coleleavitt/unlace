// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119820
// Name:            ._ZN2QT10QTabWidgetC1EPNS_7QWidgetE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119820 jmp     cs:_ZN2QT10QTabWidgetC1EPNS_7QWidgetE_ptr
//
// Resolved target: _ZN2QT10QTabWidgetC1EPNS_7QWidgetE
// Target address:  0x8D8728
// GOT/IAT slot:    0x8A38B0
// Slot symbol:     _ZN2QT10QTabWidgetC1EPNS_7QWidgetE_ptr
// Target type:     _QWORD(QT::QTabWidget *__hidden this, QT::QWidget *)
// ============================================================

/* see target sig */ ._ZN2QT10QTabWidgetC1EPNS_7QWidgetE(/* see target signature */)
{
    // Tail-call to _ZN2QT10QTabWidgetC1EPNS_7QWidgetE via GOT/IAT indirection
    return _ZN2QT10QTabWidgetC1EPNS_7QWidgetE(/* forwarded args */);
}

