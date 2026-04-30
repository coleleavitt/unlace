// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117F90
// Name:            ._ZNK2QT7QWidget12isFullScreenEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117F90 jmp     cs:_ZNK2QT7QWidget12isFullScreenEv_ptr
//
// Resolved target: _ZNK2QT7QWidget12isFullScreenEv
// Target address:  0x8D77D0
// GOT/IAT slot:    0x8A2C68
// Slot symbol:     _ZNK2QT7QWidget12isFullScreenEv_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QWidget12isFullScreenEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QWidget12isFullScreenEv via GOT/IAT indirection
    return _ZNK2QT7QWidget12isFullScreenEv(/* forwarded args */);
}

