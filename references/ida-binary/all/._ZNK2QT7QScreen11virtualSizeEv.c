// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AA60
// Name:            ._ZNK2QT7QScreen11virtualSizeEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AA60 jmp     cs:_ZNK2QT7QScreen11virtualSizeEv_ptr
//
// Resolved target: _ZNK2QT7QScreen11virtualSizeEv
// Target address:  0x8D92D0
// GOT/IAT slot:    0x8A41D0
// Slot symbol:     _ZNK2QT7QScreen11virtualSizeEv_ptr
// Target type:     _QWORD(QT::QScreen *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QScreen11virtualSizeEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QScreen11virtualSizeEv via GOT/IAT indirection
    return _ZNK2QT7QScreen11virtualSizeEv(/* forwarded args */);
}

