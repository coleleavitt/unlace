// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AE50
// Name:            ._ZN2QT13QFontMetricsFD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AE50 jmp     cs:_ZN2QT13QFontMetricsFD1Ev_ptr
//
// Resolved target: _ZN2QT13QFontMetricsFD1Ev
// Target address:  0x8D9538
// GOT/IAT slot:    0x8A43C8
// Slot symbol:     _ZN2QT13QFontMetricsFD1Ev_ptr
// Target type:     void(QT::QFontMetricsF *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT13QFontMetricsFD1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT13QFontMetricsFD1Ev via GOT/IAT indirection
    return _ZN2QT13QFontMetricsFD1Ev(/* forwarded args */);
}

