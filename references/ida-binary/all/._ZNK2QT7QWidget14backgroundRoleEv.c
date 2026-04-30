// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114310
// Name:            ._ZNK2QT7QWidget14backgroundRoleEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114310 jmp     cs:_ZNK2QT7QWidget14backgroundRoleEv_ptr
//
// Resolved target: _ZNK2QT7QWidget14backgroundRoleEv
// Target address:  0x8D5158
// GOT/IAT slot:    0x8A0E28
// Slot symbol:     _ZNK2QT7QWidget14backgroundRoleEv_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QWidget14backgroundRoleEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QWidget14backgroundRoleEv via GOT/IAT indirection
    return _ZNK2QT7QWidget14backgroundRoleEv(/* forwarded args */);
}

