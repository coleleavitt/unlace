// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111E70
// Name:            ._ZNK2QT7QAction11isSeparatorEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111E70 jmp     cs:_ZNK2QT7QAction11isSeparatorEv_ptr
//
// Resolved target: _ZNK2QT7QAction11isSeparatorEv
// Target address:  0x8D39D8
// GOT/IAT slot:    0x89FBD8
// Slot symbol:     _ZNK2QT7QAction11isSeparatorEv_ptr
// Target type:     _QWORD(QT::QAction *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QAction11isSeparatorEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QAction11isSeparatorEv via GOT/IAT indirection
    return _ZNK2QT7QAction11isSeparatorEv(/* forwarded args */);
}

