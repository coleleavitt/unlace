// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118100
// Name:            ._ZNK2QT13QFontMetricsF7descentEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118100 jmp     cs:_ZNK2QT13QFontMetricsF7descentEv_ptr
//
// Resolved target: _ZNK2QT13QFontMetricsF7descentEv
// Target address:  0x8D78C8
// GOT/IAT slot:    0x8A2D20
// Slot symbol:     _ZNK2QT13QFontMetricsF7descentEv_ptr
// Target type:     _QWORD(QT::QFontMetricsF *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT13QFontMetricsF7descentEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT13QFontMetricsF7descentEv via GOT/IAT indirection
    return _ZNK2QT13QFontMetricsF7descentEv(/* forwarded args */);
}

