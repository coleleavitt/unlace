// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113730
// Name:            ._ZNK2QT13QFontMetricsF6ascentEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113730 jmp     cs:_ZNK2QT13QFontMetricsF6ascentEv_ptr
//
// Resolved target: _ZNK2QT13QFontMetricsF6ascentEv
// Target address:  0x8D49C0
// GOT/IAT slot:    0x8A0838
// Slot symbol:     _ZNK2QT13QFontMetricsF6ascentEv_ptr
// Target type:     _QWORD(QT::QFontMetricsF *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT13QFontMetricsF6ascentEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT13QFontMetricsF6ascentEv via GOT/IAT indirection
    return _ZNK2QT13QFontMetricsF6ascentEv(/* forwarded args */);
}

