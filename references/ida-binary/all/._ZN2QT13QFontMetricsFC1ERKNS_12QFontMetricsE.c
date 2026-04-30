// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119F40
// Name:            ._ZN2QT13QFontMetricsFC1ERKNS_12QFontMetricsE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119F40 jmp     cs:_ZN2QT13QFontMetricsFC1ERKNS_12QFontMetricsE_ptr
//
// Resolved target: _ZN2QT13QFontMetricsFC1ERKNS_12QFontMetricsE
// Target address:  0x8D8B88
// GOT/IAT slot:    0x8A3C40
// Slot symbol:     _ZN2QT13QFontMetricsFC1ERKNS_12QFontMetricsE_ptr
// Target type:     _QWORD(QT::QFontMetricsF *__hidden this, const QT::QFontMetrics *)
// ============================================================

/* see target sig */ ._ZN2QT13QFontMetricsFC1ERKNS_12QFontMetricsE(/* see target signature */)
{
    // Tail-call to _ZN2QT13QFontMetricsFC1ERKNS_12QFontMetricsE via GOT/IAT indirection
    return _ZN2QT13QFontMetricsFC1ERKNS_12QFontMetricsE(/* forwarded args */);
}

