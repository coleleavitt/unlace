// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1188A0
// Name:            ._ZNK2QT7QWidget6layoutEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1188A0 jmp     cs:_ZNK2QT7QWidget6layoutEv_ptr
//
// Resolved target: _ZNK2QT7QWidget6layoutEv
// Target address:  0x8D7D48
// GOT/IAT slot:    0x8A30F0
// Slot symbol:     _ZNK2QT7QWidget6layoutEv_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QWidget6layoutEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QWidget6layoutEv via GOT/IAT indirection
    return _ZNK2QT7QWidget6layoutEv(/* forwarded args */);
}

