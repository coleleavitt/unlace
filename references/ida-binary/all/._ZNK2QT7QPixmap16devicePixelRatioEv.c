// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1126A0
// Name:            ._ZNK2QT7QPixmap16devicePixelRatioEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1126A0 jmp     cs:_ZNK2QT7QPixmap16devicePixelRatioEv_ptr
//
// Resolved target: _ZNK2QT7QPixmap16devicePixelRatioEv
// Target address:  0x8D3F28
// GOT/IAT slot:    0x89FFF0
// Slot symbol:     _ZNK2QT7QPixmap16devicePixelRatioEv_ptr
// Target type:     _QWORD(QT::QPixmap *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QPixmap16devicePixelRatioEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QPixmap16devicePixelRatioEv via GOT/IAT indirection
    return _ZNK2QT7QPixmap16devicePixelRatioEv(/* forwarded args */);
}

