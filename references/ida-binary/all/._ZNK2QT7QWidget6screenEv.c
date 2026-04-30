// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A3E0
// Name:            ._ZNK2QT7QWidget6screenEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A3E0 jmp     cs:_ZNK2QT7QWidget6screenEv_ptr
//
// Resolved target: _ZNK2QT7QWidget6screenEv
// Target address:  0x8D8E88
// GOT/IAT slot:    0x8A3E90
// Slot symbol:     _ZNK2QT7QWidget6screenEv_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QWidget6screenEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QWidget6screenEv via GOT/IAT indirection
    return _ZNK2QT7QWidget6screenEv(/* forwarded args */);
}

