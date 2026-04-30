// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114F90
// Name:            ._ZNK2QT7QWidget6windowEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114F90 jmp     cs:_ZNK2QT7QWidget6windowEv_ptr
//
// Resolved target: _ZNK2QT7QWidget6windowEv
// Target address:  0x8D5988
// GOT/IAT slot:    0x8A1468
// Slot symbol:     _ZNK2QT7QWidget6windowEv_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QWidget6windowEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QWidget6windowEv via GOT/IAT indirection
    return _ZNK2QT7QWidget6windowEv(/* forwarded args */);
}

