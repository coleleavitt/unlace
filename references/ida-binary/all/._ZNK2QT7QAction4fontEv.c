// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1113C0
// Name:            ._ZNK2QT7QAction4fontEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1113C0 jmp     cs:_ZNK2QT7QAction4fontEv_ptr
//
// Resolved target: _ZNK2QT7QAction4fontEv
// Target address:  0x8D32D0
// GOT/IAT slot:    0x89F680
// Slot symbol:     _ZNK2QT7QAction4fontEv_ptr
// Target type:     _QWORD(QT::QAction *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QAction4fontEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QAction4fontEv via GOT/IAT indirection
    return _ZNK2QT7QAction4fontEv(/* forwarded args */);
}

