// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119640
// Name:            ._ZNK2QT7QWidget14isActiveWindowEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119640 jmp     cs:_ZNK2QT7QWidget14isActiveWindowEv_ptr
//
// Resolved target: _ZNK2QT7QWidget14isActiveWindowEv
// Target address:  0x8D85F0
// GOT/IAT slot:    0x8A37C0
// Slot symbol:     _ZNK2QT7QWidget14isActiveWindowEv_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QWidget14isActiveWindowEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QWidget14isActiveWindowEv via GOT/IAT indirection
    return _ZNK2QT7QWidget14isActiveWindowEv(/* forwarded args */);
}

