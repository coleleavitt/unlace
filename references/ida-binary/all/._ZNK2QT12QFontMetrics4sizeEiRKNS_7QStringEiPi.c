// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118D70
// Name:            ._ZNK2QT12QFontMetrics4sizeEiRKNS_7QStringEiPi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118D70 jmp     cs:_ZNK2QT12QFontMetrics4sizeEiRKNS_7QStringEiPi_ptr
//
// Resolved target: _ZNK2QT12QFontMetrics4sizeEiRKNS_7QStringEiPi
// Target address:  0x8D8020
// GOT/IAT slot:    0x8A3358
// Slot symbol:     _ZNK2QT12QFontMetrics4sizeEiRKNS_7QStringEiPi_ptr
// Target type:     _QWORD(QT::QFontMetrics *__hidden this, int, const QT::QString *, int, int *)
// ============================================================

/* see target sig */ ._ZNK2QT12QFontMetrics4sizeEiRKNS_7QStringEiPi(/* see target signature */)
{
    // Tail-call to _ZNK2QT12QFontMetrics4sizeEiRKNS_7QStringEiPi via GOT/IAT indirection
    return _ZNK2QT12QFontMetrics4sizeEiRKNS_7QStringEiPi(/* forwarded args */);
}

