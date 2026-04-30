// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119550
// Name:            ._ZN2QT13QFontMetricsFC1ERKS0_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119550 jmp     cs:_ZN2QT13QFontMetricsFC1ERKS0__ptr
//
// Resolved target: _ZN2QT13QFontMetricsFC1ERKS0_
// Target address:  0x8D8528
// GOT/IAT slot:    0x8A3748
// Slot symbol:     _ZN2QT13QFontMetricsFC1ERKS0__ptr
// Target type:     _QWORD(QT::QFontMetricsF *__hidden this, const QT::QFontMetricsF *)
// ============================================================

/* see target sig */ ._ZN2QT13QFontMetricsFC1ERKS0_(/* see target signature */)
{
    // Tail-call to _ZN2QT13QFontMetricsFC1ERKS0_ via GOT/IAT indirection
    return _ZN2QT13QFontMetricsFC1ERKS0_(/* forwarded args */);
}

