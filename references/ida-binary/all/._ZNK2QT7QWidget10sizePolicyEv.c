// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1198C0
// Name:            ._ZNK2QT7QWidget10sizePolicyEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1198C0 jmp     cs:_ZNK2QT7QWidget10sizePolicyEv_ptr
//
// Resolved target: _ZNK2QT7QWidget10sizePolicyEv
// Target address:  0x8D8788
// GOT/IAT slot:    0x8A3900
// Slot symbol:     _ZNK2QT7QWidget10sizePolicyEv_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QWidget10sizePolicyEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QWidget10sizePolicyEv via GOT/IAT indirection
    return _ZNK2QT7QWidget10sizePolicyEv(/* forwarded args */);
}

