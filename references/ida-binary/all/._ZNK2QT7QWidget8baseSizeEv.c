// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119660
// Name:            ._ZNK2QT7QWidget8baseSizeEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119660 jmp     cs:_ZNK2QT7QWidget8baseSizeEv_ptr
//
// Resolved target: _ZNK2QT7QWidget8baseSizeEv
// Target address:  0x8D8620
// GOT/IAT slot:    0x8A37D0
// Slot symbol:     _ZNK2QT7QWidget8baseSizeEv_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QWidget8baseSizeEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QWidget8baseSizeEv via GOT/IAT indirection
    return _ZNK2QT7QWidget8baseSizeEv(/* forwarded args */);
}

