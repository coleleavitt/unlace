// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1162D0
// Name:            ._ZNK2QT12QFontMetrics17horizontalAdvanceENS_5QCharE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1162D0 jmp     cs:_ZNK2QT12QFontMetrics17horizontalAdvanceENS_5QCharE_ptr
//
// Resolved target: _ZNK2QT12QFontMetrics17horizontalAdvanceENS_5QCharE
// Target address:  0x8D6580
// GOT/IAT slot:    0x8A1E08
// Slot symbol:     _ZNK2QT12QFontMetrics17horizontalAdvanceENS_5QCharE_ptr
// Target type:     _QWORD __high(QT::QChar)
// ============================================================

/* see target sig */ ._ZNK2QT12QFontMetrics17horizontalAdvanceENS_5QCharE(/* see target signature */)
{
    // Tail-call to _ZNK2QT12QFontMetrics17horizontalAdvanceENS_5QCharE via GOT/IAT indirection
    return _ZNK2QT12QFontMetrics17horizontalAdvanceENS_5QCharE(/* forwarded args */);
}

