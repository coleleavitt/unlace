// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1122B0
// Name:            ._ZNK2QT7QWidget11windowTitleEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1122B0 jmp     cs:_ZNK2QT7QWidget11windowTitleEv_ptr
//
// Resolved target: _ZNK2QT7QWidget11windowTitleEv
// Target address:  0x8D3C68
// GOT/IAT slot:    0x89FDF8
// Slot symbol:     _ZNK2QT7QWidget11windowTitleEv_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QWidget11windowTitleEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QWidget11windowTitleEv via GOT/IAT indirection
    return _ZNK2QT7QWidget11windowTitleEv(/* forwarded args */);
}

