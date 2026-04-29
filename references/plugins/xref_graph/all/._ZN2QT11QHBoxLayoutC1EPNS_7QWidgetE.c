// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16AF0
// Name:            ._ZN2QT11QHBoxLayoutC1EPNS_7QWidgetE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16AF0 jmp     cs:off_4F560
//
// Resolved target: _ZN2QT11QHBoxLayoutC1EPNS_7QWidgetE
// Target address:  0x507A0
// GOT/IAT slot:    0x4F560
// Slot symbol:     off_4F560
// Target type:     _QWORD(QT::QHBoxLayout *__hidden this, QT::QWidget *)
// ============================================================

/* see target sig */ ._ZN2QT11QHBoxLayoutC1EPNS_7QWidgetE(/* see target signature */)
{
    // Tail-call to _ZN2QT11QHBoxLayoutC1EPNS_7QWidgetE via GOT/IAT indirection
    return _ZN2QT11QHBoxLayoutC1EPNS_7QWidgetE(/* forwarded args */);
}

