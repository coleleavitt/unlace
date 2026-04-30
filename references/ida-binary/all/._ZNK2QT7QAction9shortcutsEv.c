// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113870
// Name:            ._ZNK2QT7QAction9shortcutsEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113870 jmp     cs:_ZNK2QT7QAction9shortcutsEv_ptr
//
// Resolved target: _ZNK2QT7QAction9shortcutsEv
// Target address:  0x8D4A90
// GOT/IAT slot:    0x8A08D8
// Slot symbol:     _ZNK2QT7QAction9shortcutsEv_ptr
// Target type:     _QWORD(QT::QAction *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QAction9shortcutsEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QAction9shortcutsEv via GOT/IAT indirection
    return _ZNK2QT7QAction9shortcutsEv(/* forwarded args */);
}

