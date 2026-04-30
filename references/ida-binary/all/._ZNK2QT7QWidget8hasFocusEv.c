// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11BD80
// Name:            ._ZNK2QT7QWidget8hasFocusEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11BD80 jmp     cs:_ZNK2QT7QWidget8hasFocusEv_ptr
//
// Resolved target: _ZNK2QT7QWidget8hasFocusEv
// Target address:  0x8D9EA0
// GOT/IAT slot:    0x8A4B60
// Slot symbol:     _ZNK2QT7QWidget8hasFocusEv_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QWidget8hasFocusEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QWidget8hasFocusEv via GOT/IAT indirection
    return _ZNK2QT7QWidget8hasFocusEv(/* forwarded args */);
}

