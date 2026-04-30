// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119600
// Name:            ._ZNK2QT13QFontMetricsF17horizontalAdvanceERKNS_7QStringEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119600 jmp     cs:_ZNK2QT13QFontMetricsF17horizontalAdvanceERKNS_7QStringEi_ptr
//
// Resolved target: _ZNK2QT13QFontMetricsF17horizontalAdvanceERKNS_7QStringEi
// Target address:  0x8D85C8
// GOT/IAT slot:    0x8A37A0
// Slot symbol:     _ZNK2QT13QFontMetricsF17horizontalAdvanceERKNS_7QStringEi_ptr
// Target type:     _QWORD(QT::QFontMetricsF *__hidden this, const QT::QString *, int)
// ============================================================

/* see target sig */ ._ZNK2QT13QFontMetricsF17horizontalAdvanceERKNS_7QStringEi(/* see target signature */)
{
    // Tail-call to _ZNK2QT13QFontMetricsF17horizontalAdvanceERKNS_7QStringEi via GOT/IAT indirection
    return _ZNK2QT13QFontMetricsF17horizontalAdvanceERKNS_7QStringEi(/* forwarded args */);
}

