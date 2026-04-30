// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117DA0
// Name:            ._ZNK2QT7QPixmap4rectEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117DA0 jmp     cs:_ZNK2QT7QPixmap4rectEv_ptr
//
// Resolved target: _ZNK2QT7QPixmap4rectEv
// Target address:  0x8D7680
// GOT/IAT slot:    0x8A2B70
// Slot symbol:     _ZNK2QT7QPixmap4rectEv_ptr
// Target type:     _QWORD(QT::QPixmap *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QPixmap4rectEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QPixmap4rectEv via GOT/IAT indirection
    return _ZNK2QT7QPixmap4rectEv(/* forwarded args */);
}

