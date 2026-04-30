// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117040
// Name:            ._ZNK2QT12QFontMetrics17horizontalAdvanceERKNS_7QStringEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117040 jmp     cs:_ZNK2QT12QFontMetrics17horizontalAdvanceERKNS_7QStringEi_ptr
//
// Resolved target: _ZNK2QT12QFontMetrics17horizontalAdvanceERKNS_7QStringEi
// Target address:  0x8D6DE8
// GOT/IAT slot:    0x8A24C0
// Slot symbol:     _ZNK2QT12QFontMetrics17horizontalAdvanceERKNS_7QStringEi_ptr
// Target type:     _QWORD(QT::QFontMetrics *__hidden this, const QT::QString *, int)
// ============================================================

/* see target sig */ ._ZNK2QT12QFontMetrics17horizontalAdvanceERKNS_7QStringEi(/* see target signature */)
{
    // Tail-call to _ZNK2QT12QFontMetrics17horizontalAdvanceERKNS_7QStringEi via GOT/IAT indirection
    return _ZNK2QT12QFontMetrics17horizontalAdvanceERKNS_7QStringEi(/* forwarded args */);
}

