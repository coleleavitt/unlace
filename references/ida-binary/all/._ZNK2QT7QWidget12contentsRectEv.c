// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1176F0
// Name:            ._ZNK2QT7QWidget12contentsRectEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1176F0 jmp     cs:_ZNK2QT7QWidget12contentsRectEv_ptr
//
// Resolved target: _ZNK2QT7QWidget12contentsRectEv
// Target address:  0x8D7258
// GOT/IAT slot:    0x8A2818
// Slot symbol:     _ZNK2QT7QWidget12contentsRectEv_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QWidget12contentsRectEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QWidget12contentsRectEv via GOT/IAT indirection
    return _ZNK2QT7QWidget12contentsRectEv(/* forwarded args */);
}

