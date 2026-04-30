// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A740
// Name:            ._ZN2QT13QFontMetricsFC1ERKNS_5QFontE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A740 jmp     cs:_ZN2QT13QFontMetricsFC1ERKNS_5QFontE_ptr
//
// Resolved target: _ZN2QT13QFontMetricsFC1ERKNS_5QFontE
// Target address:  0x8D90C8
// GOT/IAT slot:    0x8A4040
// Slot symbol:     _ZN2QT13QFontMetricsFC1ERKNS_5QFontE_ptr
// Target type:     _QWORD(QT::QFontMetricsF *__hidden this, const QT::QFont *)
// ============================================================

/* see target sig */ ._ZN2QT13QFontMetricsFC1ERKNS_5QFontE(/* see target signature */)
{
    // Tail-call to _ZN2QT13QFontMetricsFC1ERKNS_5QFontE via GOT/IAT indirection
    return _ZN2QT13QFontMetricsFC1ERKNS_5QFontE(/* forwarded args */);
}

