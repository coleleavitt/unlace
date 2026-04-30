// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A9E0
// Name:            ._ZN2QT12QFontMetricsD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A9E0 jmp     cs:_ZN2QT12QFontMetricsD1Ev_ptr
//
// Resolved target: _ZN2QT12QFontMetricsD1Ev
// Target address:  0x8D9280
// GOT/IAT slot:    0x8A4190
// Slot symbol:     _ZN2QT12QFontMetricsD1Ev_ptr
// Target type:     void(QT::QFontMetrics *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT12QFontMetricsD1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT12QFontMetricsD1Ev via GOT/IAT indirection
    return _ZN2QT12QFontMetricsD1Ev(/* forwarded args */);
}

