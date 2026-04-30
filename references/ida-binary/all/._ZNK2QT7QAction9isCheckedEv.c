// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111A60
// Name:            ._ZNK2QT7QAction9isCheckedEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111A60 jmp     cs:_ZNK2QT7QAction9isCheckedEv_ptr
//
// Resolved target: _ZNK2QT7QAction9isCheckedEv
// Target address:  0x8D3748
// GOT/IAT slot:    0x89F9D0
// Slot symbol:     _ZNK2QT7QAction9isCheckedEv_ptr
// Target type:     _QWORD(QT::QAction *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QAction9isCheckedEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QAction9isCheckedEv via GOT/IAT indirection
    return _ZNK2QT7QAction9isCheckedEv(/* forwarded args */);
}

