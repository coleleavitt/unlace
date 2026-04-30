// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B8B0
// Name:            ._ZNK2QT13QFontMetricsF6heightEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B8B0 jmp     cs:_ZNK2QT13QFontMetricsF6heightEv_ptr
//
// Resolved target: _ZNK2QT13QFontMetricsF6heightEv
// Target address:  0x8D9BB0
// GOT/IAT slot:    0x8A48F8
// Slot symbol:     _ZNK2QT13QFontMetricsF6heightEv_ptr
// Target type:     _QWORD(QT::QFontMetricsF *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT13QFontMetricsF6heightEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT13QFontMetricsF6heightEv via GOT/IAT indirection
    return _ZNK2QT13QFontMetricsF6heightEv(/* forwarded args */);
}

