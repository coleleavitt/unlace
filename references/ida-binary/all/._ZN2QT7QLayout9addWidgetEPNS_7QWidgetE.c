// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1196F0
// Name:            ._ZN2QT7QLayout9addWidgetEPNS_7QWidgetE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1196F0 jmp     cs:_ZN2QT7QLayout9addWidgetEPNS_7QWidgetE_ptr
//
// Resolved target: _ZN2QT7QLayout9addWidgetEPNS_7QWidgetE
// Target address:  0x8D8680
// GOT/IAT slot:    0x8A3818
// Slot symbol:     _ZN2QT7QLayout9addWidgetEPNS_7QWidgetE_ptr
// Target type:     _QWORD(QT::QLayout *__hidden this, QT::QWidget *)
// ============================================================

/* see target sig */ ._ZN2QT7QLayout9addWidgetEPNS_7QWidgetE(/* see target signature */)
{
    // Tail-call to _ZN2QT7QLayout9addWidgetEPNS_7QWidgetE via GOT/IAT indirection
    return _ZN2QT7QLayout9addWidgetEPNS_7QWidgetE(/* forwarded args */);
}

