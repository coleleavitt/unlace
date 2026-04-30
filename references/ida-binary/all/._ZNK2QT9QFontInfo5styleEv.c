// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1136A0
// Name:            ._ZNK2QT9QFontInfo5styleEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1136A0 jmp     cs:_ZNK2QT9QFontInfo5styleEv_ptr
//
// Resolved target: _ZNK2QT9QFontInfo5styleEv
// Target address:  0x8D4960
// GOT/IAT slot:    0x8A07F0
// Slot symbol:     _ZNK2QT9QFontInfo5styleEv_ptr
// Target type:     _QWORD(QT::QFontInfo *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT9QFontInfo5styleEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT9QFontInfo5styleEv via GOT/IAT indirection
    return _ZNK2QT9QFontInfo5styleEv(/* forwarded args */);
}

