// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114F60
// Name:            ._ZN2QT10QBoxLayout16setStretchFactorEPNS_7QWidgetEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114F60 jmp     cs:_ZN2QT10QBoxLayout16setStretchFactorEPNS_7QWidgetEi_ptr
//
// Resolved target: _ZN2QT10QBoxLayout16setStretchFactorEPNS_7QWidgetEi
// Target address:  0x8D5970
// GOT/IAT slot:    0x8A1450
// Slot symbol:     _ZN2QT10QBoxLayout16setStretchFactorEPNS_7QWidgetEi_ptr
// Target type:     _QWORD(QT::QBoxLayout *__hidden this, QT::QWidget *, int)
// ============================================================

/* see target sig */ ._ZN2QT10QBoxLayout16setStretchFactorEPNS_7QWidgetEi(/* see target signature */)
{
    // Tail-call to _ZN2QT10QBoxLayout16setStretchFactorEPNS_7QWidgetEi via GOT/IAT indirection
    return _ZN2QT10QBoxLayout16setStretchFactorEPNS_7QWidgetEi(/* forwarded args */);
}

