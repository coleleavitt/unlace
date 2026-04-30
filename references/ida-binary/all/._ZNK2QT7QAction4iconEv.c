// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116740
// Name:            ._ZNK2QT7QAction4iconEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116740 jmp     cs:_ZNK2QT7QAction4iconEv_ptr
//
// Resolved target: _ZNK2QT7QAction4iconEv
// Target address:  0x8D6858
// GOT/IAT slot:    0x8A2040
// Slot symbol:     _ZNK2QT7QAction4iconEv_ptr
// Target type:     _QWORD(QT::QAction *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QAction4iconEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QAction4iconEv via GOT/IAT indirection
    return _ZNK2QT7QAction4iconEv(/* forwarded args */);
}

