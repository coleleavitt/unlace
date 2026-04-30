// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1197F0
// Name:            ._ZNK2QT13QFontMetricsF17horizontalAdvanceENS_5QCharE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1197F0 jmp     cs:_ZNK2QT13QFontMetricsF17horizontalAdvanceENS_5QCharE_ptr
//
// Resolved target: _ZNK2QT13QFontMetricsF17horizontalAdvanceENS_5QCharE
// Target address:  0x8D8710
// GOT/IAT slot:    0x8A3898
// Slot symbol:     _ZNK2QT13QFontMetricsF17horizontalAdvanceENS_5QCharE_ptr
// Target type:     _QWORD __high(QT::QChar)
// ============================================================

/* see target sig */ ._ZNK2QT13QFontMetricsF17horizontalAdvanceENS_5QCharE(/* see target signature */)
{
    // Tail-call to _ZNK2QT13QFontMetricsF17horizontalAdvanceENS_5QCharE via GOT/IAT indirection
    return _ZNK2QT13QFontMetricsF17horizontalAdvanceENS_5QCharE(/* forwarded args */);
}

