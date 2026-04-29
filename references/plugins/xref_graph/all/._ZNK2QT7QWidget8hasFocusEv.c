// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x175A0
// Name:            ._ZNK2QT7QWidget8hasFocusEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x175A0 jmp     cs:off_4FAB8
//
// Resolved target: _ZNK2QT7QWidget8hasFocusEv
// Target address:  0x51150
// GOT/IAT slot:    0x4FAB8
// Slot symbol:     off_4FAB8
// Target type:     _QWORD(QT::QWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QWidget8hasFocusEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QWidget8hasFocusEv via GOT/IAT indirection
    return _ZNK2QT7QWidget8hasFocusEv(/* forwarded args */);
}

