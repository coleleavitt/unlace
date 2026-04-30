// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118FA0
// Name:            ._ZNK2QT7QAction9isEnabledEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118FA0 jmp     cs:_ZNK2QT7QAction9isEnabledEv_ptr
//
// Resolved target: _ZNK2QT7QAction9isEnabledEv
// Target address:  0x8D8190
// GOT/IAT slot:    0x8A3470
// Slot symbol:     _ZNK2QT7QAction9isEnabledEv_ptr
// Target type:     _QWORD(QT::QAction *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QAction9isEnabledEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QAction9isEnabledEv via GOT/IAT indirection
    return _ZNK2QT7QAction9isEnabledEv(/* forwarded args */);
}

