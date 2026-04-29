// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16FC0
// Name:            ._ZN2QT11QGridLayoutC1EPNS_7QWidgetE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16FC0 jmp     cs:off_4F7C8
//
// Resolved target: _ZN2QT11QGridLayoutC1EPNS_7QWidgetE
// Target address:  0x50BF0
// GOT/IAT slot:    0x4F7C8
// Slot symbol:     off_4F7C8
// Target type:     _QWORD(QT::QGridLayout *__hidden this, QT::QWidget *)
// ============================================================

/* see target sig */ ._ZN2QT11QGridLayoutC1EPNS_7QWidgetE(/* see target signature */)
{
    // Tail-call to _ZN2QT11QGridLayoutC1EPNS_7QWidgetE via GOT/IAT indirection
    return _ZN2QT11QGridLayoutC1EPNS_7QWidgetE(/* forwarded args */);
}

