// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1193F0
// Name:            ._ZNK2QT7QWidget12windowHandleEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1193F0 jmp     cs:_ZNK2QT7QWidget12windowHandleEv_ptr
//
// Resolved target: _ZNK2QT7QWidget12windowHandleEv
// Target address:  0x8D8448
// GOT/IAT slot:    0x8A3698
// Slot symbol:     _ZNK2QT7QWidget12windowHandleEv_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QWidget12windowHandleEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QWidget12windowHandleEv via GOT/IAT indirection
    return _ZNK2QT7QWidget12windowHandleEv(/* forwarded args */);
}

