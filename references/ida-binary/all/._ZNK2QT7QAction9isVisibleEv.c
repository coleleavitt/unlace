// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116350
// Name:            ._ZNK2QT7QAction9isVisibleEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116350 jmp     cs:_ZNK2QT7QAction9isVisibleEv_ptr
//
// Resolved target: _ZNK2QT7QAction9isVisibleEv
// Target address:  0x8D65D8
// GOT/IAT slot:    0x8A1E48
// Slot symbol:     _ZNK2QT7QAction9isVisibleEv_ptr
// Target type:     _QWORD(QT::QAction *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QAction9isVisibleEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QAction9isVisibleEv via GOT/IAT indirection
    return _ZNK2QT7QAction9isVisibleEv(/* forwarded args */);
}

