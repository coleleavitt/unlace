// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16750
// Name:            ._ZN2QT11QVBoxLayoutC1EPNS_7QWidgetE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16750 jmp     cs:off_4F390
//
// Resolved target: _ZN2QT11QVBoxLayoutC1EPNS_7QWidgetE
// Target address:  0x503E8
// GOT/IAT slot:    0x4F390
// Slot symbol:     off_4F390
// Target type:     _QWORD(QT::QVBoxLayout *__hidden this, QT::QWidget *)
// ============================================================

/* see target sig */ ._ZN2QT11QVBoxLayoutC1EPNS_7QWidgetE(/* see target signature */)
{
    // Tail-call to _ZN2QT11QVBoxLayoutC1EPNS_7QWidgetE via GOT/IAT indirection
    return _ZN2QT11QVBoxLayoutC1EPNS_7QWidgetE(/* forwarded args */);
}

