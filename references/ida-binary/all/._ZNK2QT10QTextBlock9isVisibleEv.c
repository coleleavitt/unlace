// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1196C0
// Name:            ._ZNK2QT10QTextBlock9isVisibleEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1196C0 jmp     cs:_ZNK2QT10QTextBlock9isVisibleEv_ptr
//
// Resolved target: _ZNK2QT10QTextBlock9isVisibleEv
// Target address:  0x8D8660
// GOT/IAT slot:    0x8A3800
// Slot symbol:     _ZNK2QT10QTextBlock9isVisibleEv_ptr
// Target type:     _QWORD(QT::QTextBlock *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT10QTextBlock9isVisibleEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT10QTextBlock9isVisibleEv via GOT/IAT indirection
    return _ZNK2QT10QTextBlock9isVisibleEv(/* forwarded args */);
}

