// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1195A0
// Name:            ._ZN2QT12QFontMetricsC1ERKNS_5QFontE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1195A0 jmp     cs:_ZN2QT12QFontMetricsC1ERKNS_5QFontE_ptr
//
// Resolved target: _ZN2QT12QFontMetricsC1ERKNS_5QFontE
// Target address:  0x8D8568
// GOT/IAT slot:    0x8A3770
// Slot symbol:     _ZN2QT12QFontMetricsC1ERKNS_5QFontE_ptr
// Target type:     _QWORD(QT::QFontMetrics *__hidden this, const QT::QFont *)
// ============================================================

/* see target sig */ ._ZN2QT12QFontMetricsC1ERKNS_5QFontE(/* see target signature */)
{
    // Tail-call to _ZN2QT12QFontMetricsC1ERKNS_5QFontE via GOT/IAT indirection
    return _ZN2QT12QFontMetricsC1ERKNS_5QFontE(/* forwarded args */);
}

