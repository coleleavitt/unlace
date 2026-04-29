// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x17190
// Name:            ._ZNK2QT7QWidget10sizePolicyEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x17190 jmp     cs:off_4F8B0
//
// Resolved target: _ZNK2QT7QWidget10sizePolicyEv
// Target address:  0x50D68
// GOT/IAT slot:    0x4F8B0
// Slot symbol:     off_4F8B0
// Target type:     _QWORD(QT::QWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QWidget10sizePolicyEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QWidget10sizePolicyEv via GOT/IAT indirection
    return _ZNK2QT7QWidget10sizePolicyEv(/* forwarded args */);
}

