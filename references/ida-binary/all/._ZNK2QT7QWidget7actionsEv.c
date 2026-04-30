// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112D80
// Name:            ._ZNK2QT7QWidget7actionsEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112D80 jmp     cs:_ZNK2QT7QWidget7actionsEv_ptr
//
// Resolved target: _ZNK2QT7QWidget7actionsEv
// Target address:  0x8D4378
// GOT/IAT slot:    0x8A0360
// Slot symbol:     _ZNK2QT7QWidget7actionsEv_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QWidget7actionsEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QWidget7actionsEv via GOT/IAT indirection
    return _ZNK2QT7QWidget7actionsEv(/* forwarded args */);
}

