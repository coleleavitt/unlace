// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114DE0
// Name:            ._ZNK2QT7QWidget11minimumSizeEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114DE0 jmp     cs:_ZNK2QT7QWidget11minimumSizeEv_ptr
//
// Resolved target: _ZNK2QT7QWidget11minimumSizeEv
// Target address:  0x8D5890
// GOT/IAT slot:    0x8A1390
// Slot symbol:     _ZNK2QT7QWidget11minimumSizeEv_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QWidget11minimumSizeEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QWidget11minimumSizeEv via GOT/IAT indirection
    return _ZNK2QT7QWidget11minimumSizeEv(/* forwarded args */);
}

