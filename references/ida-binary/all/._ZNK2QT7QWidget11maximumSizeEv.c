// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112ED0
// Name:            ._ZNK2QT7QWidget11maximumSizeEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112ED0 jmp     cs:_ZNK2QT7QWidget11maximumSizeEv_ptr
//
// Resolved target: _ZNK2QT7QWidget11maximumSizeEv
// Target address:  0x8D4458
// GOT/IAT slot:    0x8A0408
// Slot symbol:     _ZNK2QT7QWidget11maximumSizeEv_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QWidget11maximumSizeEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QWidget11maximumSizeEv via GOT/IAT indirection
    return _ZNK2QT7QWidget11maximumSizeEv(/* forwarded args */);
}

